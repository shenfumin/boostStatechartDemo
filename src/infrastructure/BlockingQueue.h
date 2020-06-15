
#include <assert.h>
#include <condition_variable>
#include <deque>
#include <mutex>

namespace NewRT
{
namespace TKP
{
template <typename T>
class BlockingQueue
{
public:
    using MutexLockGuard = std::lock_guard<std::mutex>;
    BlockingQueue() : m_mutex(), m_cv(), m_queue()
    {
    }
    BlockingQueue(const BlockingQueue &) = delete;
    BlockingQueue &operator=(const BlockingQueue &) = delete;

    void put(const T &x)
    {
        {
            MutexLockGuard lock(m_mutex);
            m_queue.push_back(x);
        }
        m_cv.notify_one();
    }

    void put(T &&x)
    {
        {
            MutexLockGuard lock(m_mutex);
            m_queue.push_back(std::move(x));
        }
        m_cv.notify_one();
    }

    T take()
    {
        std::unique_lock<std::mutex> lock(m_mutex);
        m_cv.wait(lock, [this] { return !this->m_queue.empty(); });
        assert(!m_queue.empty());

        T front(std::move(m_queue.front()));
        m_queue.pop_front();

        return front;
    }

    size_t size() const
    {
        MutexLockGuard lock(m_mutex);
        return m_queue.size();
    }

private:
    mutable std::mutex m_mutex;
    std::condition_variable m_cv;
    std::deque<T> m_queue;
};
} // namespace TKP
} // namespace NewRT
