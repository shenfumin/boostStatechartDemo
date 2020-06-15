#pragma once

#include <stdexcept>
#include <algorithm>
#include <list>

#include "TraitCommon.h"
namespace NewRT
{
namespace TraitCommon
{
namespace TraitHelper
{

template <typename T>
void toTraitData(TraitData  &d, const T &data);

template <typename T>
TraitValue toTrait(const TraitID &tid, T data)
{
    TraitValue v;
    v.tid = tid;  
    toTraitData<T>(v.tval, data);
    return std::move(v);
}

template <typename T>
const T &fromTraitData(const TraitData  &d);

template <typename T>
const T &fromTrait(const TraitValue &val)
{
    return fromTraitData<T>(val.tval());
}

template <typename ListType>
void addRepeatableValue(ListType &list,
                        const TraitValue &val)
{
    list.push_back(val);
}

template <typename T, typename ListType>
void addRepeatableValue(ListType &list,
                        const TraitID &id,
                        const TraitData  &data)
{
    list.push_back(TraitValue(id, data));
}

template <typename T, typename ListType>
void addRepeatableValue(ListType &list,
                        const TraitID &id,
                        const T &data)
{
    list.push_back(toTrait<T>(id, data));
}

template <typename T, typename ListType>
void addRepeatableValue(const TraitID &id,
                        ListType &list,
                        const T &data)
{
    list.push_back(toTrait<T>(id, data));
}

class UnExpectedRepeatedError : public std::runtime_error
{
  public:
    UnExpectedRepeatedError(const TraitID &id)
        : std::runtime_error("UnExpectedRepeatedError " + std::to_string(id)), m_id(id)
    {
    }

    const TraitID &tid() const
    {
        return m_id;
    }

  private:
    TraitID m_id;
};

template <typename ListType>
void addValue(ListType &list,
              const TraitValue &val)
{
    auto &id = val.tid();
    auto it = std::find_if(list.begin(), list.end(),
                           [&list, &id](const TraitValue &val) {
                               return val.tid() == id;
                           });
    if (it == list.end())
    {
        list.push_back(val);
    }
    else
    {
        throw UnExpectedRepeatedError(id);
    }
}

template <typename ListType>
void addValue(ListType &list,
              const TraitID &id,
              const TraitData  &data)
{
    addValue(list, TraitValue(id, data));
}

template <typename T, typename ListType>
void addValue(ListType &list,
              const TraitID &id,
              const T &data)
{
    addValue<ListType>(list, toTrait<T>(id, data));
}

template <typename T, typename ListType>
void addValue(const TraitID &id,
              ListType &list,
              const T &data)
{
    addValue<ListType>(list, toTrait<T>(id, data));
}

class NotFoundException : public std::runtime_error
{
  public:
    NotFoundException()
        : std::runtime_error("Not Found")
    {
    }
};

template <typename ListType>
const TraitValue &valueOf(const ListType& list,
                          const TraitID &id)
{
    auto it = std::find_if(list.begin(), list.end(),
                           [&list, &id](const TraitValue &val) {
                               return val.tid() == id;
                           });
    if (it != list.end())
    {
        return *it;
    }
    else
    {
        throw NotFoundException();
    }
}

template <typename ListType>
const TraitValue &valueOf(const TraitID &id,
                          const ListType &list)
{
    return valueOf(list, id);
}

template <typename T, typename ListType>
const T &valueOf(const TraitID &id,
                 const ListType& list)
{
    return fromTrait<T>(valueOf(id, list));
}

template <typename T, typename ListType>
const T &valueOf(const ListType& list,
                 const TraitID &id)
{
    return valueOf<T>(id, list);
}

template <typename T, typename ListType>
std::list<T> valuesOf(const ListType& list,
                      const TraitID &id)
{
    std::list<T> vals;
    for (auto &&val : list)
    {
        if (val.tid() == id)
        {
            vals.push_back(fromTrait<T>(val));
        }
    }
    return vals;
}

template <typename T, typename ListType>
std::list<T> valuesOf(const TraitID &id,
                      const ListType& list)
{
    return valuesOf<T>(list, id);
}

// Has exact TraitID and Type T
template<typename T, typename ListType>
bool hasValue(const ListType& list,
              const TraitID &id) noexcept
{
    try {
        valueOf<T, ListType>(list, id);
    }
    catch(...)
    {
        return false;
    }
    return true;
}

// Only check TraitID
template<typename ListType>
bool hasTrait(const ListType& list,
             const TraitID &id) noexcept
{
    auto it = std::find_if(list.begin(), list.end(),
                           [&list, &id](const TraitValue &val) {
                               return val.tid() == id;
                           });
    return it != list.end();
}

// Only Check TraitID
template<typename ListType>
bool hasTraits(const ListType& list,
               const std::list<TraitID>& ids) noexcept
{
    for (auto id : ids)
    {
        if (!hasTrait<ListType>(list, id))
        {
            return false;
        }
    }
    return true;
}

class TypeNotMatchException : public std::runtime_error
{
  public:
    TypeNotMatchException()
        : std::runtime_error("Type not match")
    {
    }
};

template<typename ListType>
void setValue(ListType& list,
    const TraitValue& value)
{
    auto id = value.tid();
    auto it = std::find_if(list.begin(), list.end(),
                           [&list, &id](const TraitValue &val) {
                               return val.tid() == id;
                           });
    if (it != list.end())
    {
        if ((*it).tval()._d() == value.tval()._d())
        {
            (*it).tval() = value.tval();
        }
        else
        {
            throw TypeNotMatchException();
        }
    }
    else
    {
        throw NotFoundException();
    }
}

template<typename ListType>
void setValue(ListType& list,
    const TraitID& id,
    const TraitData& data)
{
    return setValue<ListType>(list, TraitValue(id, data));
}

template<typename T, typename ListType>
void setValue(ListType& list,
    const TraitID& id,
    const T& data)
{
    setValue<ListType>(list, toTrait<T>(id, data));
}

template<typename T, typename ListType>
void setValue(const TraitID& id,
    ListType& list,
    const T& data)
{
    setValue<ListType>(list, toTrait<T>(id, data));
}

template<typename T, typename ListType>
bool setValueNoExcept(ListType& list,
    const TraitID& id,
    const T& data) noexcept
{
    try
    {
        setValue<T, ListType>(list, id, data);
    }
    catch(...)
    {
        return false;
    }
    return true;
}

template<typename T, typename ListType>
bool setValueNoExcept(const TraitID& id,
    ListType& list,
    const T& data) noexcept
{
    return setValueNoExcept<T, ListType>(list, id, data);
}

} // namespace TraitHelper
} // namespace TraitCommon
} // namespace NewRT
