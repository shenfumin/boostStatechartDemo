/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TraitId.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef TraitId_410744635_h
#define TraitId_410744635_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#if (defined(RTI_WIN32) || defined(RTI_WIN64) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace NewRT {

    namespace TraitIdTable {

        static const CDR_Short VER_MAJOR = 0;

        static const CDR_Short VER_MINOR = 0;

        static const CDR_Short VER_PATCH = 0;

        static const CDR_String VER_TEXT = "0.0.0";

        typedef enum TraitIdUser
        {
            TRAIT_ID_USER_INFO_USER_NAME  = 6500,      
            TRAIT_ID_USER_INFO_FIRST_NAME  = 6501,      
            TRAIT_ID_USER_INFO_FAMILY_NAME  = 6502,      
            TRAIT_ID_USER_INFO_GENDER  = 6503,      
            TRAIT_ID_USER_INFO_BIRTHDATE  = 6504,      
            TRAIT_ID_USER_INFO_EMAIL  = 6505,      
            TRAIT_ID_USER_INFO_PHONE_NUMBER  = 6506,      
            TRAIT_ID_USER_INFO_ADDRESS  = 6507,      
            TRAIT_ID_USER_INFO_PASSWORD  = 6508,      
            TRAIT_ID_USER_INFO_STATE  = 6509,      
            TRAIT_ID_USER_ROLE_ID  = 6510,      
            TRAIT_ID_USER_ROLE_NAME  = 6511,      
            TRAIT_ID_USER_ROLE_DESCRIPTION  = 6512,      
            TRAIT_ID_USER_RIGHT_ID  = 6513,      
            TRAIT_ID_USER_RIGHT_NAME  = 6514,      
            TRAIT_ID_USER_RIGHT_DESCRIPTION  = 6515,      
            TRAIT_ID_USER_LOGIN_STATE  = 6516,      
            TRAIT_ID_USER_CURRENT_ROLE  = 6517,      
            TRAIT_ID_CMS_OPERATION_RESULT  = 6518     
        } TraitIdUser;

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdUser
        #define TSeq TraitIdUserSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdUser
        #define TSeq TraitIdUserSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        TraitIdUser_initialize(TraitIdUser* sample);

        NDDSUSERDllExport extern TraitIdUser*
        TraitIdUser_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        TraitIdUser_finalize(TraitIdUser* sample);

        NDDSUSERDllExport extern void
        TraitIdUser_delete(TraitIdUser* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        TraitIdUser_copy(TraitIdUser* dst, const TraitIdUser* src);

        typedef enum TraitIdRoom
        {
            TRAIT_ID_ROOM_ID  = 7500,      
            TRAIT_ID_ROOM_NAME  = 7501,      
            TRAIT_ID_ROOM_DESCRIPTION  = 7502,      
            TRAIT_ID_ROOM_TYPE  = 7503     
        } TraitIdRoom;

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdRoom
        #define TSeq TraitIdRoomSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdRoom
        #define TSeq TraitIdRoomSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        TraitIdRoom_initialize(TraitIdRoom* sample);

        NDDSUSERDllExport extern TraitIdRoom*
        TraitIdRoom_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        TraitIdRoom_finalize(TraitIdRoom* sample);

        NDDSUSERDllExport extern void
        TraitIdRoom_delete(TraitIdRoom* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        TraitIdRoom_copy(TraitIdRoom* dst, const TraitIdRoom* src);

        typedef enum TraitIdTCS
        {
            TRAIT_ID_TCS_OPERATION_REQ_ID  = 5000,      
            TRAIT_ID_TCS_OPERATION_STATE  = 5001,      
            TRAIT_ID_TCS_OPERATION_ERROR_ID  = 5002,      
            TRAIT_ID_TCS_LOGIN_STATE_ID  = 5003,      
            TRAIT_ID_TCS_ERROR_CODE  = 5004,      
            TRAIT_ID_TCS_COMPONENT_ID  = 5005,      
            TRAIT_ID_TCS_COMPONENT_WORKING_STATE  = 5006,      
            TRAIT_ID_TCS_WORKING_MODE  = 5007,      
            TRAIT_ID_TCS_BEAM_WORK_STATE_ID  = 5008,      
            TRAIT_ID_TCS_BEAM_WORK_STATE_NAME  = 5009,      
            TRAIT_ID_TCS_BEAM_DELIVERY_TYPE  = 5010     
        } TraitIdTCS;

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdTCS
        #define TSeq TraitIdTCSSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdTCS
        #define TSeq TraitIdTCSSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        TraitIdTCS_initialize(TraitIdTCS* sample);

        NDDSUSERDllExport extern TraitIdTCS*
        TraitIdTCS_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        TraitIdTCS_finalize(TraitIdTCS* sample);

        NDDSUSERDllExport extern void
        TraitIdTCS_delete(TraitIdTCS* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        TraitIdTCS_copy(TraitIdTCS* dst, const TraitIdTCS* src);

        typedef enum TraitIdGantry
        {
            TRAIT_ID_TARGET_GANTRY_ISO_ROTATE_ANGLE  = 1500,      
            TRAIT_ID_TARGET_GANTRY_ISO_ROTATE_ACCELERATED_SPEED  = 1501,      
            TRAIT_ID_TARGET_GANTRY_ISO_ROTATE_SPEED  = 1502,      
            TRAIT_ID_GANTRY_RUNTIME_FOR_MOTOR  = 1503,      
            TRAIT_ID_GANTRY_RUNTIME_FOR_GANTRY  = 1504,      
            TRAIT_ID_GANTRY_MOTION_VERTICAL_TOLERANCE  = 1505,      
            TRAIT_ID_GANTRY_MOTION_LATERAL_TOLERANCE  = 1506,      
            TRAIT_ID_GANTRY_MOTION_LONGITUDINAL_TOLERANCE  = 1507,      
            TRAIT_ID_GANTRY_ERROR_CODE  = 1508,      
            TRAIT_ID_GANTRY_ERROR_TIMES  = 1509,      
            TRAIT_ID_GANTRY_VERSION_TEXT  = 1510,      
            TRAIT_ID_GANTRY_VERSION_MAJOR  = 1511,      
            TRAIT_ID_GANTRY_VERSION_MINOR  = 1512,      
            TRAIT_ID_GANTRY_VERSION_PATCH  = 1513,      
            TRAIT_ID_GANTRY_STATUS  = 1514,      
            TRAIT_ID_GANTRY_ERROR_TEXT  = 1515,      
            TRAIT_ID_GANTRY_ERROR_LEVEL  = 1516,      
            TRAIT_ID_ACTUAL_GANTRY_ANGLE  = 1517,      
            TRAIT_ID_GANTRY_MOTION_TYPE  = 1518,      
            TRAIT_ID_GANTRY_ROTATE_MAX_LIMIT  = 1519,      
            TRAIT_ID_GANTRY_ROTATE_MIN_LIMIT  = 1520,      
            TRAIT_ID_GANTRY_MOTION_REACHED_STATUS_TYPE  = 1521,      
            TRAIT_ID_TARGET_GANTRY_EXPOSURE_RANGE  = 1522,      
            TRAIT_ID_TARGET_GANTRY_ISO_ROTATE_DECELERATED_SPEED  = 1523     
        } TraitIdGantry;

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdGantry
        #define TSeq TraitIdGantrySeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdGantry
        #define TSeq TraitIdGantrySeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        TraitIdGantry_initialize(TraitIdGantry* sample);

        NDDSUSERDllExport extern TraitIdGantry*
        TraitIdGantry_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        TraitIdGantry_finalize(TraitIdGantry* sample);

        NDDSUSERDllExport extern void
        TraitIdGantry_delete(TraitIdGantry* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        TraitIdGantry_copy(TraitIdGantry* dst, const TraitIdGantry* src);

        typedef enum TraitIdCouch
        {
            TRAIT_ID_COUCH_RUNTIME_FOR_MOTOR  = 1000,      
            TRAIT_ID_COUCH_RUNTIME_FOR_COUCH  = 1001,      
            TRAIT_ID_COUCH_MOTION_VERTICAL_TOLERANCE  = 1002,      
            TRAIT_ID_COUCH_MOTION_LATERAL_TOLERANCE  = 1003,      
            TRAIT_ID_COUCH_MOTION_LONGITUDINAL_TOLERANCE  = 1004,      
            TRAIT_ID_COUCH_ERROR_CODE  = 1005,      
            TRAIT_ID_COUCH_ERROR_TIMES  = 1006,      
            TRAIT_ID_COUCH_VERSION_TEXT  = 1007,      
            TRAIT_ID_COUCH_VERSION_MAJOR  = 1008,      
            TRAIT_ID_COUCH_VERSION_MINOR  = 1009,      
            TRAIT_ID_COUCH_VERSION_PATCH  = 1010,      
            TRAIT_ID_COUCH_STATUS  = 1011,      
            TRAIT_ID_COUCH_ERROR_TEXT  = 1012,      
            TRAIT_ID_COUCH_ERROR_LEVEL  = 1013,      
            TRAIT_ID_COUCH_MOTION_VERTICAL_ANGLE_TOLERANCE  = 1014,      
            TRAIT_ID_COUCH_MOTION_LATERAL_ANGLE_TOLERANCE  = 1015,      
            TRAIT_ID_COUCH_MOTION_LONGITUDINAL_ANGLE_TOLERANCE  = 1016,      
            TRAIT_ID_ACTUAL_COUCH_VERTICAL_POS  = 1017,      
            TRAIT_ID_ACTUAL_COUCH_LATERAL_POS  = 1018,      
            TRAIT_ID_ACTUAL_COUCH_LONGITUDINAL_POS  = 1019,      
            TRAIT_ID_ACTUAL_COUCH_PITCH_ANGLE  = 1020,      
            TRAIT_ID_ACTUAL_COUCH_YAW_ANGLE  = 1021,      
            TRAIT_ID_ACTUAL_COUCH_ROLL_ANGLE  = 1022,      
            TRAIT_ID_TARGET_COUCH_VERTICAL_POS  = 1023,      
            TRAIT_ID_TARGET_COUCH_LATERAL_POS  = 1024,      
            TRAIT_ID_TARGET_COUCH_LONGITUDINAL_POS  = 1025,      
            TRAIT_ID_TARGET_COUCH_PITCH_ANGLE  = 1026,      
            TRAIT_ID_TARGET_COUCH_YAW_ANGLE  = 1027,      
            TRAIT_ID_TARGET_COUCH_ROLL_ANGLE  = 1028,      
            TRAIT_ID_COUCH_AUTO_MOTION_VERTICAL_MODE  = 1029,      
            TRAIT_ID_COUCH_AUTO_MOTION_YAW_MODE  = 1030,      
            TRAIT_ID_COUCH_AUTO_MOTION_LATERNAL_MODE  = 1031,      
            TRAIT_ID_COUCH_AUTO_MOTION_PITCH_MODE  = 1032,      
            TRAIT_ID_COUCH_AUTO_MOTION_LONGITUDINAL_MODE  = 1033,      
            TRAIT_ID_COUCH_AUTO_MOTION_ROLL_MODE  = 1034,      
            TRAIT_ID_COUCH_VERTICAL_MAX_LIMIT  = 1035,      
            TRAIT_ID_COUCH_VERTICAL_MIN_LIMIT  = 1036,      
            TRAIT_ID_COUCH_YAW_MAX_LIMIT  = 1037,      
            TRAIT_ID_COUCH_YAW_MIN_LIMIT  = 1038,      
            TRAIT_ID_COUCH_LATERNAL_MAX_LIMIT  = 1039,      
            TRAIT_ID_COUCH_LATERNAL_MIN_LIMIT  = 1040,      
            TRAIT_ID_COUCH_PITCH_MAX_LIMIT  = 1041,      
            TRAIT_ID_COUCH_PITCH_MIN_LIMIT  = 1042,      
            TRAIT_ID_COUCH_LONGITUDINAL_MAX_LIMIT  = 1043,      
            TRAIT_ID_COUCH_LONGITUDINAL_MIN_LIMIT  = 1044,      
            TRAIT_ID_COUCH_ROLL_MAX_LIMIT  = 1045,      
            TRAIT_ID_COUCH_ROLL_MIN_LIMIT  = 1046,      
            TRAIT_ID_COUCH_MOTION_TYPE  = 1047,      
            TRAIT_ID_TARGET_COUCH_6DOF_SPEED  = 1048,      
            TRAIT_ID_TARGET_COUCH_6DOF_ACCELERATED_SPEED  = 1049,      
            TRAIT_ID_COUCH_CORRECTION_VERTICAL  = 1050,      
            TRAIT_ID_COUCH_CORRECTION_LATERAL  = 1051,      
            TRAIT_ID_COUCH_CORRECTION_LONGITUDINAL  = 1052,      
            TRAIT_ID_COUCH_CORRECTION_PITCH  = 1053,      
            TRAIT_ID_COUCH_CORRECTION_YAW  = 1054,      
            TRAIT_ID_COUCH_CORRECTION_ROLL  = 1055,      
            TRAIT_ID_COUCH_MOTION_REACHED_STATUS_TYPE  = 1056,      
            TRAIT_ID_COUCH_VERIFY_TARGET_VALUE_RESULT  = 1057,      
            TRAIT_ID_COUCH_SW_VERSION  = 1058,      
            TRAIT_ID_COUCH_HW_VERSION  = 1059,      
            TRAIT_ID_COUCH_FIRMWARE_VERSION  = 1060,      
            TRAIT_ID_TARGET_COUCH_6DOF_DECELERATED_SPEED  = 1061     
        } TraitIdCouch;

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdCouch
        #define TSeq TraitIdCouchSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdCouch
        #define TSeq TraitIdCouchSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        TraitIdCouch_initialize(TraitIdCouch* sample);

        NDDSUSERDllExport extern TraitIdCouch*
        TraitIdCouch_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        TraitIdCouch_finalize(TraitIdCouch* sample);

        NDDSUSERDllExport extern void
        TraitIdCouch_delete(TraitIdCouch* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        TraitIdCouch_copy(TraitIdCouch* dst, const TraitIdCouch* src);

        typedef enum TraitIdClinical
        {
            TRAIT_ID_PLAN_SPOT_X  = 10000,      
            TRAIT_ID_PLAN_SPOT_Y  = 10001,      
            TRAIT_ID_PLAN_SPOT_X_SIZE  = 10002,      
            TRAIT_ID_PLAN_SPOT_Y_SIZE  = 10003,      
            TRAIT_ID_PLAN_SPOT_MU  = 10004,      
            TRAIT_ID_PLAN_LAYER_INDEX  = 10005,      
            TRAIT_ID_PLAN_LAYER_ENERGY  = 10006,      
            TRAIT_ID_PLAN_LAYER_DOSE_RATE  = 10007,      
            TRAIT_ID_PLAN_LAYER_METERSET_WEIGHT  = 10008,      
            TRAIT_ID_PLAN_LAYER_NUMBER_OF_PAITINGS  = 10009,      
            TRAIT_ID_PLAN_LAYER_NOMINAL_BEAM_ENERGY  = 10010,      
            TRAIT_ID_PLAN_LAYER_NUMBER_OF_SCAN_SPOTS  = 10011,      
            TRAIT_ID_PLAN_ACCESSORY_ID  = 10012,      
            TRAIT_ID_PLAN_ACCESSORY_NAME  = 10013,      
            TRAIT_ID_PLAN_ACCESSORY_INDEX  = 10014,      
            TRAIT_ID_PLAN_FIELD_ID  = 10015,      
            TRAIT_ID_PLAN_FIELD_NAME  = 10016,      
            TRAIT_ID_PLAN_FIELD_DELIVERY_TYPE  = 10017,      
            TRAIT_ID_PLAN_FIELD_SCAN_MODE  = 10018,      
            TRAIT_ID_PLAN_FIELD_METERSET_WEIGHT  = 10019,      
            TRAIT_ID_PLAN_FIELD_TOTAL_DOSE_SPECIFIED  = 10020,      
            TRAIT_ID_PLAN_FIELD_REFERENCE_POINT  = 10021,      
            TRAIT_ID_PLAN_FIELD_VERTICAL_POSITION  = 10022,      
            TRAIT_ID_PLAN_FIELD_LATERAL_POSITION  = 10023,      
            TRAIT_ID_PLAN_FIELD_LONGITUDINAL_POSITION  = 10024,      
            TRAIT_ID_PLAN_FIELD_GANTRY_ANGLE  = 10025,      
            TRAIT_ID_PLAN_FIELD_ROTATE_DIRECTION  = 10026,      
            TRAIT_ID_PLAN_FIELD_PATIENT_VERTICAL_POSITION  = 10027,      
            TRAIT_ID_PLAN_FIELD_PATIENT_LONGITUDINAL_POSITION  = 10028,      
            TRAIT_ID_PLAN_FIELD_PATIENT_LATERAL_POSITION  = 10029,      
            TRAIT_ID_PLAN_FIELD_PATIENT_YAW_ANGLE  = 10030,      
            TRAIT_ID_PLAN_FIELD_PATIENT_PITCH_ANGLE  = 10031,      
            TRAIT_ID_PLAN_FIELD_PATIENT_ROLL_ANGLE  = 10032,      
            TRAIT_ID_PLAN_FIELD_SNOUT_ID  = 10033,      
            TRAIT_ID_PLAN_FIELD_SNOUT_EXT_POSITION  = 10034,      
            TRAIT_ID_PLAN_FIELD_NUMBER_OF_LAYERS  = 10035,      
            TRAIT_ID_PLAN_FIELD_TOTAL_NUMBER_OF_SCAN_SPOTS  = 10036,      
            TRAIT_ID_PLAN_FIELD_TOTAL_DELIVERED_SCAN_SPOTS  = 10037,      
            TRAIT_ID_PLAN_FIELD_TOTAL_REMAINING_SCAN_SPOTS  = 10038,      
            TRAIT_ID_PLAN_FIELD_TOTAL_NUMBER_OF_FRACTIONS  = 10039,      
            TRAIT_ID_PLAN_FIELD_CURR_FRACTION_NUMBER  = 10040,      
            TRAIT_ID_PLAN_ID  = 10041,      
            TRAIT_ID_PLAN_REVERSION  = 10042,      
            TRAIT_ID_PLAN_NAME  = 10043,      
            TRAIT_ID_PLAN_DESCRIPTION  = 10044,      
            TRAIT_ID_PLAN_ACCEPTED  = 10045,      
            TRAIT_ID_PLAN_TOTAL_DOSE_SPECIFIED  = 10046,      
            TRAIT_ID_PLAN_TARGET_VOLUME  = 10047,      
            TRAIT_ID_PLAN_TOTAL_DOSE_DELIVERED  = 10048,      
            TRAIT_ID_PLAN_COURSE_ID  = 10049,      
            TRAIT_ID_PLAN_COURSE_NAME  = 10050,      
            TRAIT_ID_PLAN_COURSE_DESCRIPTION  = 10051,      
            TRAIT_ID_LOAD_PLAN_TYPE  = 10052,      
            TRAIT_ID_PLAN_DICOM_FILE  = 10053,      
            TRAIT_ID_PATIENT_ID  = 10054,      
            TRAIT_ID_PATIENT_NAME  = 10055,      
            TRAIT_ID_PATIENT_FAMILY_NAME  = 10056,      
            TRAIT_ID_PATIENT_FIRST_NAME  = 10057,      
            TRAIT_ID_PATIENT_GENDER  = 10058,      
            TRAIT_ID_PATIENT_BIRTHDAY  = 10059,      
            TRAIT_ID_PATIENT_AGE  = 10060,      
            TRAIT_ID_PATIENT_PHOTO  = 10061,      
            TRAIT_ID_PATIENT_DIAGNOSIS  = 10062,      
            TRAIT_ID_PATIENT_POSITION  = 10063,      
            TRAIT_ID_SCHEDULE_DATE  = 10064,      
            TRAIT_ID_SCHEDULE_TIME  = 10065,      
            TRAIT_ID_SCHEDULE_CHECKING_DATE  = 10066,      
            TRAIT_ID_SCHEDULE_CHECKING_TIME  = 10067,      
            TRAIT_ID_SCHEDULE_ACTIVITY_TYPE  = 10068,      
            TRAIT_ID_SCHEDULE_ACTIVITY_STATE  = 10069,      
            TRAIT_ID_SCHEDULE_APPOINTMENT_NOTE  = 10070,      
            TRAIT_ID_SCHEDULE_LIST_TOTAL_NUMBER  = 10071,      
            TRAIT_ID_SCHEDULE_LIST_COMPLETED_NUMBER  = 10072,      
            TRAIT_ID_SCHEDULE_LIST_REMAINING_NUMBER  = 10073,      
            TRAIT_ID_PLAN_STUDY_INSTANCE_UID  = 10074,      
            TRAIT_ID_CURRENT_BEAM_DOSE_RATIO  = 10075,      
            TRAIT_ID_FIELD_IS_PARTIAL  = 10076,      
            TRAIT_ID_FIELD_CURRENT_SELECTED_NUMBER  = 10077,      
            TRAIT_ID_FIELD_TOTAL_DOSE_DELIVERED  = 10078,      
            TRAIT_ID_FIELD_TOTAL_DOSE_DELIVERED_PRIMARY  = 10079,      
            TRAIT_ID_FIELD_TOTAL_DOSE_DELIVERED_SECONDARY  = 10080,      
            TRAIT_ID_FIELD_TOTAL_DOSE_REMAINING  = 10081,      
            TRAIT_ID_FIELD_ESTIMATE_TIME_SEC  = 10082,      
            TRAIT_ID_FIELD_CURRENT_DELIVERING_LAYER_NUMBER  = 10083,      
            TRAIT_ID_FIELD_LAST_DELIVERED_LAYER_NUMBER  = 10084,      
            TRAIT_ID_SPOT_CURRENT_NUMBER  = 10085,      
            TRAIT_ID_SPOT_LAST_DELIVERED_NUMBER  = 10086,      
            TRAIT_ID_SPOT_ACTUAL_POS_X  = 10087,      
            TRAIT_ID_SPOT_ACTUAL_POS_Y  = 10088,      
            TRAIT_ID_SPOT_ACTUAL_SIZE_X  = 10089,      
            TRAIT_ID_SPOT_ACTUAL_SIZE_Y  = 10090,      
            TRAIT_ID_SPOT_ACTUAL_DOSE_DELIVERED  = 10091,      
            TRAIT_ID_PLAN_CHAIR_VERTICAL_POS  = 10092,      
            TRAIT_ID_PLAN_CHAIR_LATERAL_POS  = 10093,      
            TRAIT_ID_PLAN_CHAIR_LONGITUDINAL_POS  = 10094,      
            TRAIT_ID_PLAN_CHAIR_PITCH_ANGLE  = 10095,      
            TRAIT_ID_PLAN_CHAIR_YAW_ANGLE  = 10096,      
            TRAIT_ID_PLAN_CHAIR_ROLL_ANGLE  = 10097,      
            TRAIT_ID_PLAN_CHAIR_LIFTUP_POS  = 10098,      
            TRAIT_ID_PLAN_CHAIR_ROTATE_ANGLE  = 10099,      
            TRAIT_ID_PLAN_REFERRING_PHYSICIANS_NAME  = 10100,      
            TRAIT_ID_PLAN_REFERRING_PHYSICIANS_NAME_FIRST_NAME  = 10101,      
            TRAIT_ID_PLAN_REFERRING_PHYSICIANS_NAME_LAST_NAME  = 10102,      
            TRAIT_ID_PLAN_PHYSICIANS_OF_RECORD  = 10103,      
            TRAIT_ID_PLAN_PHYSICIANS_OF_RECORD_FIRST_NAME  = 10104,      
            TRAIT_ID_PLAN_PHYSICIANS_OF_RECORD_LAST_NAME  = 10105     
        } TraitIdClinical;

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdClinical
        #define TSeq TraitIdClinicalSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdClinical
        #define TSeq TraitIdClinicalSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        TraitIdClinical_initialize(TraitIdClinical* sample);

        NDDSUSERDllExport extern TraitIdClinical*
        TraitIdClinical_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        TraitIdClinical_finalize(TraitIdClinical* sample);

        NDDSUSERDllExport extern void
        TraitIdClinical_delete(TraitIdClinical* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        TraitIdClinical_copy(TraitIdClinical* dst, const TraitIdClinical* src);

        typedef enum TraitIdSystem
        {
            TRAIT_ID_SYS_MESSAGE_ID  = 9000,      
            TRAIT_ID_SYS_SW_COMPONENT  = 9001,      
            TRAIT_ID_SYS_INTERLOCK_IS_CLEARED  = 9002,      
            TRAIT_ID_SYS_INTERLOCK_OVERRIDE_PRESENT  = 9003,      
            TRAIT_ID_SYS_INTERLOCK_IS_ACKED  = 9004,      
            TRAIT_ID_SYS_INTERLOCK_CATEGORY_ID  = 9005,      
            TRAIT_ID_SYS_INTERLOCK_CATEGORY_NAME  = 9006,      
            TRAIT_ID_SYS_INTERLOCK_TABLE_NEED_ACK  = 9007,      
            TRAIT_ID_SYS_INTERLOCK_ALLOW_OVERRIDE  = 9008,      
            TRAIT_ID_SW_MAJOR_VERSION  = 9009,      
            TRAIT_ID_SW_MINOR_VERSION  = 9010,      
            TRAIT_ID_SW_REVISION_VERSION  = 9011,      
            TRAIT_ID_SW_BUILD_VERSION  = 9012,      
            TRAIT_ID_SW_VERSION  = 9013     
        } TraitIdSystem;

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdSystem
        #define TSeq TraitIdSystemSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdSystem
        #define TSeq TraitIdSystemSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        TraitIdSystem_initialize(TraitIdSystem* sample);

        NDDSUSERDllExport extern TraitIdSystem*
        TraitIdSystem_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        TraitIdSystem_finalize(TraitIdSystem* sample);

        NDDSUSERDllExport extern void
        TraitIdSystem_delete(TraitIdSystem* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        TraitIdSystem_copy(TraitIdSystem* dst, const TraitIdSystem* src);

        typedef enum TraitIdChair
        {
            TRAIT_ID_TARGET_CHAIR_ISO_ROTATE_ANGLE  = 500,      
            TRAIT_ID_TARGET_CHAIR_ISO_ROTATE_ACCELERATED_SPEED  = 501,      
            TRAIT_ID_TARGET_CHAIR_ISO_ROTATE_SPEED  = 502,      
            TRAIT_ID_CHAIR_RUNTIME_FOR_MOTOR  = 503,      
            TRAIT_ID_CHAIR_RUNTIME_FOR_CHAIR  = 504,      
            TRAIT_ID_CHAIR_MOTION_VERTICAL_TOLERANCE  = 505,      
            TRAIT_ID_CHAIR_MOTION_LATERAL_TOLERANCE  = 506,      
            TRAIT_ID_CHAIR_MOTION_LONGITUDINAL_TOLERANCE  = 507,      
            TRAIT_ID_CHAIR_ERROR_CODE  = 508,      
            TRAIT_ID_CHAIR_ERROR_TIMES  = 509,      
            TRAIT_ID_CHAIR_VERSION_TEXT  = 510,      
            TRAIT_ID_CHAIR_VERSION_MAJOR  = 511,      
            TRAIT_ID_CHAIR_VERSION_MINOR  = 512,      
            TRAIT_ID_CHAIR_VERSION_PATCH  = 513,      
            TRAIT_ID_CHAIR_STATUS  = 514,      
            TRAIT_ID_CHAIR_ERROR_TEXT  = 515,      
            TRAIT_ID_CHAIR_ERROR_LEVEL  = 516,      
            TRAIT_ID_CHAIR_MOTION_VERTICAL_ANGLE_TOLERANCE  = 517,      
            TRAIT_ID_CHAIR_MOTION_LATERAL_ANGLE_TOLERANCE  = 518,      
            TRAIT_ID_CHAIR_MOTION_LONGITUDINAL_ANGLE_TOLERANCE  = 519,      
            TRAIT_ID_ACTUAL_CHAIR_VERTICAL_POS  = 520,      
            TRAIT_ID_ACTUAL_CHAIR_LATERAL_POS  = 521,      
            TRAIT_ID_ACTUAL_CHAIR_LONGITUDINAL_POS  = 522,      
            TRAIT_ID_ACTUAL_CHAIR_PITCH_ANGLE  = 523,      
            TRAIT_ID_ACTUAL_CHAIR_YAW_ANGLE  = 524,      
            TRAIT_ID_ACTUAL_CHAIR_ROLL_ANGLE  = 525,      
            TRAIT_ID_ACTUAL_CHAIR_LIFTUP_POS  = 526,      
            TRAIT_ID_ACTUAL_CHAIR_ROTATE_ANGLE  = 527,      
            TRAIT_ID_TARGET_CHAIR_VERTICAL_POS  = 528,      
            TRAIT_ID_TARGET_CHAIR_LATERAL_POS  = 529,      
            TRAIT_ID_TARGET_CHAIR_LONGITUDINAL_POS  = 530,      
            TRAIT_ID_TARGET_CHAIR_PITCH_ANGLE  = 531,      
            TRAIT_ID_TARGET_CHAIR_YAW_ANGLE  = 532,      
            TRAIT_ID_TARGET_CHAIR_ROLL_ANGLE  = 533,      
            TRAIT_ID_TARGET_CHAIR_LIFTUP_POS  = 534,      
            TRAIT_ID_CHAIR_AUTO_MOTION_VERTICAL_MODE  = 535,      
            TRAIT_ID_CHAIR_AUTO_MOTION_YAW_MODE  = 536,      
            TRAIT_ID_CHAIR_AUTO_MOTION_LATERNAL_MODE  = 537,      
            TRAIT_ID_CHAIR_AUTO_MOTION_PITCH_MODE  = 538,      
            TRAIT_ID_CHAIR_AUTO_MOTION_LONGITUDINAL_MODE  = 539,      
            TRAIT_ID_CHAIR_AUTO_MOTION_ROLL_MODE  = 540,      
            TRAIT_ID_CHAIR_VERTICAL_MAX_LIMIT  = 541,      
            TRAIT_ID_CHAIR_VERTICAL_MIN_LIMIT  = 542,      
            TRAIT_ID_CHAIR_YAW_MAX_LIMIT  = 543,      
            TRAIT_ID_CHAIR_YAW_MIN_LIMIT  = 544,      
            TRAIT_ID_CHAIR_LATERNAL_MAX_LIMIT  = 545,      
            TRAIT_ID_CHAIR_LATERNAL_MIN_LIMIT  = 546,      
            TRAIT_ID_CHAIR_PITCH_MAX_LIMIT  = 547,      
            TRAIT_ID_CHAIR_PITCH_MIN_LIMIT  = 548,      
            TRAIT_ID_CHAIR_LONGITUDINAL_MAX_LIMIT  = 549,      
            TRAIT_ID_CHAIR_LONGITUDINAL_MIN_LIMIT  = 550,      
            TRAIT_ID_CHAIR_ROLL_MAX_LIMIT  = 551,      
            TRAIT_ID_CHAIR_ROLL_MIN_LIMIT  = 552,      
            TRAIT_ID_CHAIR_MOTION_TYPE  = 553,      
            TRAIT_ID_CHAIR_LIFTUP_MAX_LIMIT  = 554,      
            TRAIT_ID_CHAIR_LIFTUP_MIN_LIMIT  = 555,      
            TRAIT_ID_CHAIR_ROTATE_MAX_LIMIT  = 556,      
            TRAIT_ID_CHAIR_ROTATE_MIN_LIMIT  = 557,      
            TRAIT_ID_TARGET_CHAIR_LIFTUP_ACCELERATED_SPEED  = 558,      
            TRAIT_ID_TARGET_CHAIR_LIFTUP_SPEED  = 559,      
            TRAIT_ID_TARGET_CHAIR_6DOF_SPEED  = 560,      
            TRAIT_ID_TARGET_CHAIR_6DOF_ACCELERATED_SPEED  = 561,      
            TRAIT_ID_CHAIR_MOTION_REACHED_6DOF_STATUS_TYPE  = 562,      
            TRAIT_ID_CHAIR_MOTION_REACHED_ROTATE_STATUS_TYPE  = 563,      
            TRAIT_ID_CHAIR_MOTION_REACHED_LIFTUP_STATUS_TYPE  = 564     
        } TraitIdChair;

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdChair
        #define TSeq TraitIdChairSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdChair
        #define TSeq TraitIdChairSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        TraitIdChair_initialize(TraitIdChair* sample);

        NDDSUSERDllExport extern TraitIdChair*
        TraitIdChair_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        TraitIdChair_finalize(TraitIdChair* sample);

        NDDSUSERDllExport extern void
        TraitIdChair_delete(TraitIdChair* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        TraitIdChair_copy(TraitIdChair* dst, const TraitIdChair* src);

        typedef enum TraitIdBSS
        {
            TRAIT_ID_BSS_BEAM_REQ_ESTIMATE_TIME  = 3500,      
            TRAIT_ID_BSS_BEAM_REQ_BEAM_ANGLE  = 3501,      
            TRAIT_ID_BSS_BEAM_REQ_PRIORITY  = 3502,      
            TRAIT_ID_BSS_BEAM_REQUEST_ID  = 3503,      
            TRAIT_ID_BSS_BEAM_WAIT_TIME  = 3504,      
            TRAIT_ID_BSS_BEAM_OPERATION_STATE  = 3505,      
            TRAIT_ID_BSS_BEAM_SCHEDULE_STATE  = 3506     
        } TraitIdBSS;

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdBSS
        #define TSeq TraitIdBSSSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdBSS
        #define TSeq TraitIdBSSSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        TraitIdBSS_initialize(TraitIdBSS* sample);

        NDDSUSERDllExport extern TraitIdBSS*
        TraitIdBSS_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        TraitIdBSS_finalize(TraitIdBSS* sample);

        NDDSUSERDllExport extern void
        TraitIdBSS_delete(TraitIdBSS* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        TraitIdBSS_copy(TraitIdBSS* dst, const TraitIdBSS* src);

        typedef enum TraitIdKeypad
        {
            TRAIT_ID_KEYPAD_FUNCTION_ID  = 0,      
            TRAIT_ID_KEYPAD_FUNCTION_ACTIVE_STATE  = 1,      
            TRAIT_ID_KEYPAD_FUNCTION_ENABLE_STATE  = 2,      
            TRAIT_ID_KEYPAD_OPERATION_RESULT  = 3,      
            TRAIT_ID_KEYPAD_KEY_SWITCH_OPTION  = 4,      
            TRAIT_ID_KEYPAD_PVS_MODE_SELECTION  = 5,      
            TRAIT_ID_KEYPAD_PVS_EXPOSURE_STATE  = 6,      
            TRAIT_ID_KEYPAD_MOTION_STATUS  = 7     
        } TraitIdKeypad;

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdKeypad
        #define TSeq TraitIdKeypadSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdKeypad
        #define TSeq TraitIdKeypadSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        TraitIdKeypad_initialize(TraitIdKeypad* sample);

        NDDSUSERDllExport extern TraitIdKeypad*
        TraitIdKeypad_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        TraitIdKeypad_finalize(TraitIdKeypad* sample);

        NDDSUSERDllExport extern void
        TraitIdKeypad_delete(TraitIdKeypad* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        TraitIdKeypad_copy(TraitIdKeypad* dst, const TraitIdKeypad* src);

        typedef enum TraitIdSAF
        {
            TRAIT_ID_SAF_MSG_ID  = 8000     
        } TraitIdSAF;

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdSAF
        #define TSeq TraitIdSAFSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdSAF
        #define TSeq TraitIdSAFSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        TraitIdSAF_initialize(TraitIdSAF* sample);

        NDDSUSERDllExport extern TraitIdSAF*
        TraitIdSAF_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        TraitIdSAF_finalize(TraitIdSAF* sample);

        NDDSUSERDllExport extern void
        TraitIdSAF_delete(TraitIdSAF* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        TraitIdSAF_copy(TraitIdSAF* dst, const TraitIdSAF* src);

        typedef enum TraitIdLog
        {
            TRAIT_ID_LOG_SOURCE  = 11000,      
            TRAIT_ID_LOG_SOURCE_ID  = 11001,      
            TRAIT_ID_LOG_ID  = 11002,      
            TRAIT_ID_LOG_TYPE  = 11003,      
            TRAIT_ID_LOG_HR_TIME  = 11004,      
            TRAIT_ID_LOG_DATE  = 11005,      
            TRAIT_ID_LOG_TIME  = 11006,      
            TRAIT_ID_LOG_PROCESS_ID  = 11007,      
            TRAIT_ID_LOG_THREAD_ID  = 11008,      
            TRAIT_ID_LOG_SEVERITY  = 11009,      
            TRAIT_ID_LOG_FILE  = 11010,      
            TRAIT_ID_LOG_LINE  = 11011,      
            TRAIT_ID_LOG_FUNCTION  = 11012,      
            TRAIT_ID_LOG_MESSAGE_TYPE  = 11013,      
            TRAIT_ID_LOG_MESSAGE  = 11014,      
            TRAIT_ID_LOG_BEGIN_DATE  = 11015,      
            TRAIT_ID_LOG_END_DATE  = 11016,      
            TRAIT_ID_LOG_BEGIN_TIME  = 11017,      
            TRAIT_ID_LOG_END_TIME  = 11018,      
            TRAIT_ID_LOG_DETAIL_LEVEL  = 11019     
        } TraitIdLog;

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdLog
        #define TSeq TraitIdLogSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdLog
        #define TSeq TraitIdLogSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        TraitIdLog_initialize(TraitIdLog* sample);

        NDDSUSERDllExport extern TraitIdLog*
        TraitIdLog_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        TraitIdLog_finalize(TraitIdLog* sample);

        NDDSUSERDllExport extern void
        TraitIdLog_delete(TraitIdLog* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        TraitIdLog_copy(TraitIdLog* dst, const TraitIdLog* src);

        typedef enum TraitIdConfigure
        {
            TRAIT_ID_CFG_LANUAGE  = 8500,      
            TRAIT_ID_CFG_LANUAGE_ENABLE  = 8501,      
            TRAIT_ID_CFG_OIS  = 8502,      
            TRAIT_ID_CFG_OIS_ENABLE  = 8503,      
            TRAIT_ID_CFG_ROOM  = 8504,      
            TRAIT_ID_CFG_ROOM_ENABLE  = 8505,      
            TRAIT_ID_CFG_SITEPOLICY  = 8506,      
            TRAIT_ID_CFG_SITEPOLICY_ENABLE  = 8507,      
            TRAIT_ID_CFG_ROOM_TYPE  = 8508,      
            TRAIT_ID_CFG_MACHINE_NAME  = 8509,      
            TRAIT_ID_CFG_LANGUAGE_KEY  = 8510,      
            TRAIT_ID_CFG_LANGUAGE_VALUE  = 8511,      
            TRAIT_ID_CFG_LOAD_COUCH_VERTICAL_POS  = 8512,      
            TRAIT_ID_CFG_LOAD_COUCH_LATERAL_POS  = 8513,      
            TRAIT_ID_CFG_LOAD_COUCH_LONGITUDINAL_POS  = 8514,      
            TRAIT_ID_CFG_LOAD_COUCH_PITCH_ANGLE  = 8515,      
            TRAIT_ID_CFG_LOAD_COUCH_YAW_ANGLE  = 8516,      
            TRAIT_ID_CFG_LOAD_COUCH_ROLL_ANGLE  = 8517,      
            TRAIT_ID_CFG_SITEPOLICY_MACHINE_QA_VALIDITY_PERIOD  = 8518     
        } TraitIdConfigure;

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdConfigure
        #define TSeq TraitIdConfigureSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdConfigure
        #define TSeq TraitIdConfigureSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        TraitIdConfigure_initialize(TraitIdConfigure* sample);

        NDDSUSERDllExport extern TraitIdConfigure*
        TraitIdConfigure_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        TraitIdConfigure_finalize(TraitIdConfigure* sample);

        NDDSUSERDllExport extern void
        TraitIdConfigure_delete(TraitIdConfigure* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        TraitIdConfigure_copy(TraitIdConfigure* dst, const TraitIdConfigure* src);

        typedef enum TraitIdPDT
        {
            TRAIT_ID_PDT_FUNCTION_ID  = 11500,      
            TRAIT_ID_PDT_FUNCTION_ACTIVE_STATE  = 11501,      
            TRAIT_ID_PDT_FUNCTION_ENABLE_STATE  = 11502     
        } TraitIdPDT;

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdPDT
        #define TSeq TraitIdPDTSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdPDT
        #define TSeq TraitIdPDTSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        TraitIdPDT_initialize(TraitIdPDT* sample);

        NDDSUSERDllExport extern TraitIdPDT*
        TraitIdPDT_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        TraitIdPDT_finalize(TraitIdPDT* sample);

        NDDSUSERDllExport extern void
        TraitIdPDT_delete(TraitIdPDT* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        TraitIdPDT_copy(TraitIdPDT* dst, const TraitIdPDT* src);

        typedef enum TraitIdPanel
        {
            TRAIT_ID_PANEL_MESSAGE_ID  = 12000,      
            TRAIT_ID_PANEL_COMMAND  = 12001,      
            TRAIT_ID_PANEL_MESSAGE_ID_RESPONSE_TO  = 12002,      
            TRAIT_ID_PANEL_COMMAND_ACCEPT_STATUS  = 12003,      
            TRAIT_ID_PANEL_POSITION  = 12004,      
            TRAIT_ID_PANEL_MOTION_STATE  = 12005     
        } TraitIdPanel;

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdPanel
        #define TSeq TraitIdPanelSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdPanel
        #define TSeq TraitIdPanelSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        TraitIdPanel_initialize(TraitIdPanel* sample);

        NDDSUSERDllExport extern TraitIdPanel*
        TraitIdPanel_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        TraitIdPanel_finalize(TraitIdPanel* sample);

        NDDSUSERDllExport extern void
        TraitIdPanel_delete(TraitIdPanel* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        TraitIdPanel_copy(TraitIdPanel* dst, const TraitIdPanel* src);

        typedef enum TraitIdSnout
        {
            TRAIT_ID_SNOUT_MESSAGE_ID  = 5500,      
            TRAIT_ID_SNOUT_COMMAND  = 5501,      
            TRAIT_ID_SNOUT_MESSAGE_ID_RESPONSE_TO  = 5502,      
            TRAIT_ID_SNOUT_COMMAND_ACCEPT_STATUS  = 5503,      
            TRAIT_ID_SNOUT_TARGET_POSITION  = 5504,      
            TRAIT_ID_SNOUT_MOTION_STATE  = 5505,      
            TRAIT_ID_SNOUT_TARGET_VALIDATE_RESULT  = 5506,      
            TRAIT_ID_SNOUT_POSITION_CHANGED  = 5507,      
            TRAIT_ID_SNOUT_REASON_OF_NOT_ACCEPT  = 5508     
        } TraitIdSnout;

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdSnout
        #define TSeq TraitIdSnoutSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdSnout
        #define TSeq TraitIdSnoutSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        TraitIdSnout_initialize(TraitIdSnout* sample);

        NDDSUSERDllExport extern TraitIdSnout*
        TraitIdSnout_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        TraitIdSnout_finalize(TraitIdSnout* sample);

        NDDSUSERDllExport extern void
        TraitIdSnout_delete(TraitIdSnout* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        TraitIdSnout_copy(TraitIdSnout* dst, const TraitIdSnout* src);

        typedef enum TraitIdLMS
        {
            TRAIT_ID_LMS_OPERATION_RESULT  = 12500,      
            TRAIT_ID_LMS_LOGIN_MODE  = 12501,      
            TRAIT_ID_LMS_LOGIN_SOURCE  = 12502,      
            TRAIT_ID_LMS_LOGIN_TOKEN  = 12503     
        } TraitIdLMS;

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdLMS
        #define TSeq TraitIdLMSSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdLMS
        #define TSeq TraitIdLMSSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        TraitIdLMS_initialize(TraitIdLMS* sample);

        NDDSUSERDllExport extern TraitIdLMS*
        TraitIdLMS_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        TraitIdLMS_finalize(TraitIdLMS* sample);

        NDDSUSERDllExport extern void
        TraitIdLMS_delete(TraitIdLMS* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        TraitIdLMS_copy(TraitIdLMS* dst, const TraitIdLMS* src);

    } /* namespace TraitIdTable  */

} /* namespace NewRT  */

#if (defined(RTI_WIN32) || defined(RTI_WIN64) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TraitId */

