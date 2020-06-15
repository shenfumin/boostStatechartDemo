#ifndef Application_h
#define Application_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

/* Define USE_RELIABLE_QOS to use reliable
 * reliability; otherwise, best-effort is used
 */
#define USE_RELIABLE_QOS

class Application
{
public:
    DDSDomainParticipant *participant; 
    DDSTopic *topic; 
    char topic_name[255];
    char type_name[255];
    DDS_Long sleep_time;
    DDS_Long count;

    static void help(char *appname);

    DDS_ReturnCode_t initialize(const char *local_participant_name,
                                const char *remote_participant_name,
                                DDS_Long domain_id, 
                                char *udp_intf, 
                                char *peer, 
                                DDS_Long sleep_time, 
                                DDS_Long count);

    DDS_ReturnCode_t enable();

    Application();
    ~Application();
};

#endif

