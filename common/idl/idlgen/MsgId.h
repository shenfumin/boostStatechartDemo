/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MsgId.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef MsgId_227011400_h
#define MsgId_227011400_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#if (defined(RTI_WIN32) || defined(RTI_WIN64) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace NewRT {

    namespace MsgIdTable {

        static const CDR_Short VER_MAJOR = 0;

        static const CDR_Short VER_MINOR = 0;

        static const CDR_Short VER_PATCH = 0;

        static const CDR_String VER_TEXT = "0.0";

        typedef enum MessageIdCMS
        {
            MSG_ID_CMS_NO_USER  = 5000,      
            MSG_ID_CMS_WRONG_PASSWORD  = 5001,      
            MSG_ID_CMS_WRONG_USER_NAME_FORMAT  = 5002,      
            MSG_ID_CMS_WRONG_USER_WRONG_FORMAT  = 5003,      
            MSG_ID_CMS_USER_ROLE_NOT_EXIST  = 5004,      
            MSG_ID_CMS_USER_RIGHT_NOT_EXIST  = 5005,      
            MSG_ID_CMS_SERVICE_PAUSE  = 5006,      
            MSG_ID_CMS_SERVICE_STOP  = 5007     
        } MessageIdCMS;

        #define REDA_SEQUENCE_USER_API
        #define T MessageIdCMS
        #define TSeq MessageIdCMSSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T MessageIdCMS
        #define TSeq MessageIdCMSSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        MessageIdCMS_initialize(MessageIdCMS* sample);

        NDDSUSERDllExport extern MessageIdCMS*
        MessageIdCMS_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        MessageIdCMS_finalize(MessageIdCMS* sample);

        NDDSUSERDllExport extern void
        MessageIdCMS_delete(MessageIdCMS* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        MessageIdCMS_copy(MessageIdCMS* dst, const MessageIdCMS* src);

        typedef enum MessageIdCHAIR
        {
            MSG_ID_CHAIR_CONNECTION_LOST  = 500     
        } MessageIdCHAIR;

        #define REDA_SEQUENCE_USER_API
        #define T MessageIdCHAIR
        #define TSeq MessageIdCHAIRSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T MessageIdCHAIR
        #define TSeq MessageIdCHAIRSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        MessageIdCHAIR_initialize(MessageIdCHAIR* sample);

        NDDSUSERDllExport extern MessageIdCHAIR*
        MessageIdCHAIR_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        MessageIdCHAIR_finalize(MessageIdCHAIR* sample);

        NDDSUSERDllExport extern void
        MessageIdCHAIR_delete(MessageIdCHAIR* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        MessageIdCHAIR_copy(MessageIdCHAIR* dst, const MessageIdCHAIR* src);

        typedef enum MessageIdCOUCH
        {
            MSG_ID_COUCH_CONNECTION_LOST  = 1000     
        } MessageIdCOUCH;

        #define REDA_SEQUENCE_USER_API
        #define T MessageIdCOUCH
        #define TSeq MessageIdCOUCHSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T MessageIdCOUCH
        #define TSeq MessageIdCOUCHSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        MessageIdCOUCH_initialize(MessageIdCOUCH* sample);

        NDDSUSERDllExport extern MessageIdCOUCH*
        MessageIdCOUCH_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        MessageIdCOUCH_finalize(MessageIdCOUCH* sample);

        NDDSUSERDllExport extern void
        MessageIdCOUCH_delete(MessageIdCOUCH* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        MessageIdCOUCH_copy(MessageIdCOUCH* dst, const MessageIdCOUCH* src);

        typedef enum MessageIdGANTRY
        {
            MSG_ID_GANTRY_CONNECTION_LOST  = 1500     
        } MessageIdGANTRY;

        #define REDA_SEQUENCE_USER_API
        #define T MessageIdGANTRY
        #define TSeq MessageIdGANTRYSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T MessageIdGANTRY
        #define TSeq MessageIdGANTRYSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        MessageIdGANTRY_initialize(MessageIdGANTRY* sample);

        NDDSUSERDllExport extern MessageIdGANTRY*
        MessageIdGANTRY_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        MessageIdGANTRY_finalize(MessageIdGANTRY* sample);

        NDDSUSERDllExport extern void
        MessageIdGANTRY_delete(MessageIdGANTRY* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        MessageIdGANTRY_copy(MessageIdGANTRY* dst, const MessageIdGANTRY* src);

        typedef enum MessageIdSNS
        {
            MSG_ID_SNS_LOST_OPERATIONAL_PERMIT  = 2500,      
            MSG_ID_SNS_CONNECTING_CONTROLLER_ERROR  = 2501,      
            MSG_ID_SNS_DEVICE_SETUP_ERROR  = 2502,      
            MSG_ID_SNS_DEVICE_COMMAND_ERROR  = 2503,      
            MSG_ID_SNS_LOADING_BG_OFFSET_ERROR  = 2504,      
            MSG_ID_SNS_BG_OFFSET_DATA_ERROR  = 2505,      
            MSG_ID_SNS_HW_CONF_ERROR  = 2506,      
            MSG_ID_SNS_DEVICE_CMD_ERROR  = 2507,      
            MSG_ID_SNS_DEVICE_COMMU_ERROR  = 2508,      
            MSG_ID_SNS_MAP_VALIDATION_ERROR  = 2509,      
            MSG_ID_SNS_INIT_OFFSET_CORRECTION_ERROR  = 2510,      
            MSG_ID_SNS_SAVING_MAP_FILE_ERROR  = 2511,      
            MSG_ID_SNS_CREATING_SESSION_FILE_ERROR  = 2512,      
            MSG_ID_SNS_MAP_VALIDATION_ERROR_2  = 2513,      
            MSG_ID_SNS_LOADING_MAP_ERROR  = 2514,      
            MSG_ID_SNS_LOADING_SESSION_ERROR  = 2515,      
            MSG_ID_SNS_APPLY_SCAN_CORRECTION_ERROR  = 2516,      
            MSG_ID_SNS_LOST_SCANNING_PERMIT  = 2517,      
            MSG_ID_SNS_LOST_BEAM_CONTINUE_PERMIT  = 2518,      
            MSG_ID_SNS_LAYER_SETUP_TMO  = 2519,      
            MSG_ID_SNS_MAP_PREPARING_TMO  = 2520,      
            MSG_ID_SNS_LOST_ARMED_PERMIT  = 2521,      
            MSG_ID_SNS_SAVING_TIME_SLICE_DATA_ERROR  = 2522,      
            MSG_ID_SNS_BEAMLINE_LAYER_PREPARE_FAILED  = 2523,      
            MSG_ID_SNS_ACCEL_LAYER_PREPARE_FAILED  = 2524,      
            MSG_ID_SNS_SAVING_SESSION_CALIB_FILE_ERROR  = 2525,      
            MSG_ID_SNS_COLLECTING_BG_OFFSET  = 2526,      
            MSG_ID_SNS_MALFORMED_DATA_RECEIVED  = 2527,      
            MSG_ID_SNS_DATA_RECOVER_COMPLETE  = 2528,      
            MSG_ID_SNS_DATA_RECOVER_ERROR  = 2529,      
            MSG_ID_SNS_UNEXPECTED_DATA_RECEIVED  = 2530,      
            MSG_ID_SNS_CORRUPT_NVRAM_DATA_FOUND_FROM_PRE_SESSION  = 2531,      
            MSG_ID_SNS_SAVING_TIME_SLICE_DATA_ERROR_2  = 2532,      
            MSG_ID_SNS_UPDATE_TIME_SLICE_DATA_ERROR  = 2533,      
            MSG_ID_SNS_UPDATE_SPOT_DATA_ERROR  = 2534,      
            MSG_ID_SNS_DEVICE_REPORT_ERROR  = 2535,      
            MSG_ID_SNS_OTHER_SCAN_ERROR  = 2536,      
            MSG_ID_SNS_UNEXPECTED_BEAM__ERROR  = 2537,      
            MSG_ID_SNS_DOSE_RATE_ERROR  = 2538,      
            MSG_ID_SNS_DOSE_ERROR  = 2539,      
            MSG_ID_SNS_DOSE_TIME_ERROR  = 2540,      
            MSG_ID_SNS_DOSE_MEASUREMENT_ERROR  = 2541,      
            MSG_ID_SNS_DOSE_CONTROL_ERROR  = 2542,      
            MSG_ID_SNS_BEAM_POSITION_ERROR  = 2543,      
            MSG_ID_SNS_BEAM_SIZE_ERROR  = 2544,      
            MSG_ID_SNS_BEAM_SHAP_ERROR  = 2545,      
            MSG_ID_SNS_SCAN_MOVE_ERROR  = 2546,      
            MSG_ID_SNS_INTERMITTENT_ERROR  = 2547,      
            MSG_ID_SNS_COMMU_ERROR_WITH_SYSTEM_HW  = 2548,      
            MSG_ID_SNS_CONTROL_SYSTEM_HW_ERROR  = 2549,      
            MSG_ID_SNS_COMMU_ERROR_WITH_SYSTEM_HW_2  = 2550,      
            MSG_ID_SNS_REAL_TIME_CONTROL_ERROR  = 2551,      
            MSG_ID_SNS_MAP_VALIDATION_ERROR_3  = 2552,      
            MSG_ID_SNS_HW_INTERLOCK_FAULT  = 2553,      
            MSG_ID_SNS_ONE_I128_CABLE_NOT_CHECKED  = 2554,      
            MSG_ID_SNS_NOT_ALL_I128_CHECKED  = 2555,      
            MSG_ID_SNS_PROCESS_CALIBRATION  = 2556,      
            MSG_ID_SNS_HV_CONTINUITY_TEST_ERROR  = 2557,      
            MSG_ID_SNS_NOTICE  = 2558     
        } MessageIdSNS;

        #define REDA_SEQUENCE_USER_API
        #define T MessageIdSNS
        #define TSeq MessageIdSNSSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T MessageIdSNS
        #define TSeq MessageIdSNSSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        MessageIdSNS_initialize(MessageIdSNS* sample);

        NDDSUSERDllExport extern MessageIdSNS*
        MessageIdSNS_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        MessageIdSNS_finalize(MessageIdSNS* sample);

        NDDSUSERDllExport extern void
        MessageIdSNS_delete(MessageIdSNS* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        MessageIdSNS_copy(MessageIdSNS* dst, const MessageIdSNS* src);

        typedef enum MessageIdTCS
        {
            MSG_ID_TCS_UNKNOWN_ERROR  = 3500,      
            MSG_ID_TCS_USER_ALREADY_LOGIN  = 3501,      
            MSG_ID_TCS_USER_NEED_LOGIN  = 3502,      
            MSG_ID_TCS_PLAN_FILE_NOT_EXISTS  = 3503,      
            MSG_ID_TCS_PLAN_FILE_NOT_ACCESSED  = 3504,      
            MSG_ID_TCS_PLAN_FILE_NOT_VALID  = 3505,      
            MSG_ID_TCS_NO_RIGHT_FOR_CLINICAL_PLAN  = 3506,      
            MSG_ID_TCS_NO_RIGHT_FOR_NON_CLINICAL_PLAN  = 3507,      
            MSG_ID_TCS_UNSUPPORTED_PLAN_INTENT  = 3508,      
            MSG_ID_TCS_NO_PLAN_LOADED  = 3509,      
            MSG_ID_TCS_UNSUPPORTED_LOAD_PLAN_TYPE  = 3510,      
            MSG_ID_TCS_USER_NOT_MATCH_CURRENT  = 3511,      
            MSG_ID_TCS_NOT_READY_TO_OPERATE  = 3512,      
            MSG_ID_TCS_INCOMPLETED_REQUEST_FIELDS  = 3513,      
            MSG_ID_TCS_TOO_MANY_PLANS  = 3514,      
            MSG_ID_TCS_READY_TO_MOTION  = 3515,      
            MSG_ID_TCS_READY_TO_BEAM_ON  = 3516     
        } MessageIdTCS;

        #define REDA_SEQUENCE_USER_API
        #define T MessageIdTCS
        #define TSeq MessageIdTCSSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T MessageIdTCS
        #define TSeq MessageIdTCSSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        MessageIdTCS_initialize(MessageIdTCS* sample);

        NDDSUSERDllExport extern MessageIdTCS*
        MessageIdTCS_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        MessageIdTCS_finalize(MessageIdTCS* sample);

        NDDSUSERDllExport extern void
        MessageIdTCS_delete(MessageIdTCS* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        MessageIdTCS_copy(MessageIdTCS* dst, const MessageIdTCS* src);

        typedef enum MessageIdBSS
        {
            MSG_ID_BSS_ERROR_EXISTS  = 3000     
        } MessageIdBSS;

        #define REDA_SEQUENCE_USER_API
        #define T MessageIdBSS
        #define TSeq MessageIdBSSSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T MessageIdBSS
        #define TSeq MessageIdBSSSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        MessageIdBSS_initialize(MessageIdBSS* sample);

        NDDSUSERDllExport extern MessageIdBSS*
        MessageIdBSS_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        MessageIdBSS_finalize(MessageIdBSS* sample);

        NDDSUSERDllExport extern void
        MessageIdBSS_delete(MessageIdBSS* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        MessageIdBSS_copy(MessageIdBSS* dst, const MessageIdBSS* src);

        typedef enum MessageIdSAF
        {
            MSG_ID_SAF_ACCR_DOOR_OPEN  = 6000,      
            MSG_ID_SAF_ACCR_UNSECURED  = 6001,      
            MSG_ID_SAF_ACS_FAULT  = 6002,      
            MSG_ID_SAF_ACCR_ESTOP1  = 6003,      
            MSG_ID_SAF_ACCR_ESTOP2  = 6004,      
            MSG_ID_SAF_ACCR_ESTOP3  = 6005,      
            MSG_ID_SAF_TMR_ESTOP1  = 6006,      
            MSG_ID_SAF_TMR_ESTOP2  = 6007,      
            MSG_ID_SAF_TMR_DOOR_OPEN  = 6008,      
            MSG_ID_SAF_TMR_UNSECURED  = 6009,      
            MSG_ID_SAF_TKP_ESTOP  = 6010,      
            MSG_ID_SAF_GANTRY_COLLISION_FAULT  = 6011,      
            MSG_ID_SAF_GANTRY_INTERLOCK_FAULT  = 6012,      
            MSG_ID_SAF_GANTRY_MOTION_DISABLE  = 6013,      
            MSG_ID_SAF_COUCH_COLLISION_FAULT  = 6014,      
            MSG_ID_SAF_COUCH_INTERLOCK_FAULT  = 6015,      
            MSG_ID_SAF_COUCH_MOTION_DISABLE  = 6016,      
            MSG_ID_SAF_CHAIR_COLLISION_FAULT  = 6017,      
            MSG_ID_SAF_CHAIR_INTERLOCK_FAULT  = 6018,      
            MSG_ID_SAF_CHAIR_MOTION_DISABLE  = 6019,      
            MSG_ID_SAF_SNS_INTERLOCK_FAULT  = 6020,      
            MSG_ID_SAF_SNS_BEAM_DISABLE  = 6021,      
            MSG_ID_SAF_PVS_INTERLOCK_FAULT  = 6022,      
            MSG_ID_SAF_PVS_XRAY_DISABLE  = 6023,      
            MSG_ID_SAF_SAF_FAULT  = 6024     
        } MessageIdSAF;

        #define REDA_SEQUENCE_USER_API
        #define T MessageIdSAF
        #define TSeq MessageIdSAFSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T MessageIdSAF
        #define TSeq MessageIdSAFSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        MessageIdSAF_initialize(MessageIdSAF* sample);

        NDDSUSERDllExport extern MessageIdSAF*
        MessageIdSAF_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        MessageIdSAF_finalize(MessageIdSAF* sample);

        NDDSUSERDllExport extern void
        MessageIdSAF_delete(MessageIdSAF* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        MessageIdSAF_copy(MessageIdSAF* dst, const MessageIdSAF* src);

        typedef enum MessageIdAIN
        {
            MSG_ID_ACS_BEAM_SIZE_FAULT  = 7000,      
            MSG_ID_ACS_BEAM_PATH_NOT_CLEAR  = 7001,      
            MSG_ID_ACS_CANNOT_DELIVER_BEAM  = 7002,      
            MSG_ID_ACS_NOZZLE_COMM_FAULT  = 7003     
        } MessageIdAIN;

        #define REDA_SEQUENCE_USER_API
        #define T MessageIdAIN
        #define TSeq MessageIdAINSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T MessageIdAIN
        #define TSeq MessageIdAINSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        MessageIdAIN_initialize(MessageIdAIN* sample);

        NDDSUSERDllExport extern MessageIdAIN*
        MessageIdAIN_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        MessageIdAIN_finalize(MessageIdAIN* sample);

        NDDSUSERDllExport extern void
        MessageIdAIN_delete(MessageIdAIN* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        MessageIdAIN_copy(MessageIdAIN* dst, const MessageIdAIN* src);

        typedef enum MessageIdSITE
        {
            MSG_ID_SITE_PLOLICY_MACHINE_QA_OVERDUE  = 7500     
        } MessageIdSITE;

        #define REDA_SEQUENCE_USER_API
        #define T MessageIdSITE
        #define TSeq MessageIdSITESeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T MessageIdSITE
        #define TSeq MessageIdSITESeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        MessageIdSITE_initialize(MessageIdSITE* sample);

        NDDSUSERDllExport extern MessageIdSITE*
        MessageIdSITE_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        MessageIdSITE_finalize(MessageIdSITE* sample);

        NDDSUSERDllExport extern void
        MessageIdSITE_delete(MessageIdSITE* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        MessageIdSITE_copy(MessageIdSITE* dst, const MessageIdSITE* src);

    } /* namespace MsgIdTable  */

} /* namespace NewRT  */

#if (defined(RTI_WIN32) || defined(RTI_WIN64) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MsgId */

