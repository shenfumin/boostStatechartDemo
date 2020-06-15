/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from keypad.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef keypad_2097681970_h
#define keypad_2097681970_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#if (defined(RTI_WIN32) || defined(RTI_WIN64) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#include "TraitCommon.h"

namespace NewRT {

    namespace TraitKeypad {

        typedef enum FunctionId
        {
            BEAM_ON ,      
            PAUSE ,      
            MOTION_ENABLE_BYPASS ,      
            XRAY_ON ,      
            STOP ,      
            PANEL_RETRACT ,      
            GANTRY_MOTION ,      
            SNOUT_MOTION ,      
            PSDM      
        } FunctionId;

        #define REDA_SEQUENCE_USER_API
        #define T FunctionId
        #define TSeq FunctionIdSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T FunctionId
        #define TSeq FunctionIdSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        FunctionId_initialize(FunctionId* sample);

        NDDSUSERDllExport extern FunctionId*
        FunctionId_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        FunctionId_finalize(FunctionId* sample);

        NDDSUSERDllExport extern void
        FunctionId_delete(FunctionId* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        FunctionId_copy(FunctionId* dst, const FunctionId* src);

        typedef enum FunctionActiveState
        {
            INACTIVATED  = 0,      
            ACTIVATED      
        } FunctionActiveState;

        #define REDA_SEQUENCE_USER_API
        #define T FunctionActiveState
        #define TSeq FunctionActiveStateSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T FunctionActiveState
        #define TSeq FunctionActiveStateSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        FunctionActiveState_initialize(FunctionActiveState* sample);

        NDDSUSERDllExport extern FunctionActiveState*
        FunctionActiveState_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        FunctionActiveState_finalize(FunctionActiveState* sample);

        NDDSUSERDllExport extern void
        FunctionActiveState_delete(FunctionActiveState* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        FunctionActiveState_copy(FunctionActiveState* dst, const FunctionActiveState* src);

        typedef enum FunctionEnableState
        {
            DISABLE  = 0,      
            ENABLE      
        } FunctionEnableState;

        #define REDA_SEQUENCE_USER_API
        #define T FunctionEnableState
        #define TSeq FunctionEnableStateSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T FunctionEnableState
        #define TSeq FunctionEnableStateSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        FunctionEnableState_initialize(FunctionEnableState* sample);

        NDDSUSERDllExport extern FunctionEnableState*
        FunctionEnableState_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        FunctionEnableState_finalize(FunctionEnableState* sample);

        NDDSUSERDllExport extern void
        FunctionEnableState_delete(FunctionEnableState* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        FunctionEnableState_copy(FunctionEnableState* dst, const FunctionEnableState* src);

        typedef enum KeySwitchState
        {
            OFF ,      
            PREP ,      
            TREAT      
        } KeySwitchState;

        #define REDA_SEQUENCE_USER_API
        #define T KeySwitchState
        #define TSeq KeySwitchStateSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T KeySwitchState
        #define TSeq KeySwitchStateSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        KeySwitchState_initialize(KeySwitchState* sample);

        NDDSUSERDllExport extern KeySwitchState*
        KeySwitchState_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        KeySwitchState_finalize(KeySwitchState* sample);

        NDDSUSERDllExport extern void
        KeySwitchState_delete(KeySwitchState* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        KeySwitchState_copy(KeySwitchState* dst, const KeySwitchState* src);

        typedef struct NewRT::TraitCommon::TraitValueSeq FunctionEnableItem;

        #define REDA_SEQUENCE_USER_API
        #define T FunctionEnableItem
        #define TSeq FunctionEnableItemSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T FunctionEnableItem
        #define TSeq FunctionEnableItemSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        FunctionEnableItem_initialize(FunctionEnableItem* sample);

        NDDSUSERDllExport extern FunctionEnableItem*
        FunctionEnableItem_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        FunctionEnableItem_finalize(FunctionEnableItem* sample);

        NDDSUSERDllExport extern void
        FunctionEnableItem_delete(FunctionEnableItem* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        FunctionEnableItem_copy(FunctionEnableItem* dst, const FunctionEnableItem* src);

        struct FunctionEnableRequestSeq;
        class FunctionEnableRequestTypeSupport;
        class FunctionEnableRequestDataWriter;
        class FunctionEnableRequestDataReader;

        class FunctionEnableRequest  
        {
          public:
            typedef struct FunctionEnableRequestSeq Seq;
            typedef FunctionEnableRequestTypeSupport TypeSupport;
            typedef FunctionEnableRequestDataWriter DataWriter;
            typedef FunctionEnableRequestDataReader DataReader;

            struct NewRT::TraitKeypad::FunctionEnableItemSeq functions;

        };

        NDDSUSERDllExport extern const char *FunctionEnableRequestTYPENAME;

        #define REDA_SEQUENCE_USER_API
        #define T FunctionEnableRequest
        #define TSeq FunctionEnableRequestSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T FunctionEnableRequest
        #define TSeq FunctionEnableRequestSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        FunctionEnableRequest_initialize(FunctionEnableRequest* sample);

        NDDSUSERDllExport extern FunctionEnableRequest*
        FunctionEnableRequest_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        FunctionEnableRequest_finalize(FunctionEnableRequest* sample);

        NDDSUSERDllExport extern void
        FunctionEnableRequest_delete(FunctionEnableRequest* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        FunctionEnableRequest_copy(FunctionEnableRequest* dst, const FunctionEnableRequest* src);

        static const CDR_String TOPIC_KEYPAD_FUNCTION_ENABLE_REQ = "TOPIC_KEYPAD_FUNCTION_ENABLE_REQ";

        typedef struct NewRT::TraitCommon::TraitValueSeq FunctionActiveStateItem;

        #define REDA_SEQUENCE_USER_API
        #define T FunctionActiveStateItem
        #define TSeq FunctionActiveStateItemSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T FunctionActiveStateItem
        #define TSeq FunctionActiveStateItemSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        FunctionActiveStateItem_initialize(FunctionActiveStateItem* sample);

        NDDSUSERDllExport extern FunctionActiveStateItem*
        FunctionActiveStateItem_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        FunctionActiveStateItem_finalize(FunctionActiveStateItem* sample);

        NDDSUSERDllExport extern void
        FunctionActiveStateItem_delete(FunctionActiveStateItem* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        FunctionActiveStateItem_copy(FunctionActiveStateItem* dst, const FunctionActiveStateItem* src);

        struct FunctionActiveStateReportSeq;
        class FunctionActiveStateReportTypeSupport;
        class FunctionActiveStateReportDataWriter;
        class FunctionActiveStateReportDataReader;

        class FunctionActiveStateReport  
        {
          public:
            typedef struct FunctionActiveStateReportSeq Seq;
            typedef FunctionActiveStateReportTypeSupport TypeSupport;
            typedef FunctionActiveStateReportDataWriter DataWriter;
            typedef FunctionActiveStateReportDataReader DataReader;

            struct NewRT::TraitKeypad::FunctionActiveStateItemSeq activeStates;

        };

        NDDSUSERDllExport extern const char *FunctionActiveStateReportTYPENAME;

        #define REDA_SEQUENCE_USER_API
        #define T FunctionActiveStateReport
        #define TSeq FunctionActiveStateReportSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T FunctionActiveStateReport
        #define TSeq FunctionActiveStateReportSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        FunctionActiveStateReport_initialize(FunctionActiveStateReport* sample);

        NDDSUSERDllExport extern FunctionActiveStateReport*
        FunctionActiveStateReport_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        FunctionActiveStateReport_finalize(FunctionActiveStateReport* sample);

        NDDSUSERDllExport extern void
        FunctionActiveStateReport_delete(FunctionActiveStateReport* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        FunctionActiveStateReport_copy(FunctionActiveStateReport* dst, const FunctionActiveStateReport* src);

        static const CDR_String TOPIC_KEYPAD_FUNCTION_ACTIVE_STATE_REPORT = "TOPIC_KEYPAD_FUNCTION_ACTIVE_STATE_REPORT";

        struct KeySwitchStateReportSeq;
        class KeySwitchStateReportTypeSupport;
        class KeySwitchStateReportDataWriter;
        class KeySwitchStateReportDataReader;

        class KeySwitchStateReport  
        {
          public:
            typedef struct KeySwitchStateReportSeq Seq;
            typedef KeySwitchStateReportTypeSupport TypeSupport;
            typedef KeySwitchStateReportDataWriter DataWriter;
            typedef KeySwitchStateReportDataReader DataReader;

            NewRT::TraitCommon::TraitValue state;

        };

        NDDSUSERDllExport extern const char *KeySwitchStateReportTYPENAME;

        #define REDA_SEQUENCE_USER_API
        #define T KeySwitchStateReport
        #define TSeq KeySwitchStateReportSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T KeySwitchStateReport
        #define TSeq KeySwitchStateReportSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        KeySwitchStateReport_initialize(KeySwitchStateReport* sample);

        NDDSUSERDllExport extern KeySwitchStateReport*
        KeySwitchStateReport_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        KeySwitchStateReport_finalize(KeySwitchStateReport* sample);

        NDDSUSERDllExport extern void
        KeySwitchStateReport_delete(KeySwitchStateReport* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        KeySwitchStateReport_copy(KeySwitchStateReport* dst, const KeySwitchStateReport* src);

        static const CDR_String TOPIC_KEYPAD_KEY_SWITCH_STATE_REPORT = "TOPIC_KEYPAD_KEY_SWITCH_STATE_REPORT";

        typedef enum PvsMode
        {
            Orthogonal ,      
            CBCT      
        } PvsMode;

        #define REDA_SEQUENCE_USER_API
        #define T PvsMode
        #define TSeq PvsModeSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T PvsMode
        #define TSeq PvsModeSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        PvsMode_initialize(PvsMode* sample);

        NDDSUSERDllExport extern PvsMode*
        PvsMode_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        PvsMode_finalize(PvsMode* sample);

        NDDSUSERDllExport extern void
        PvsMode_delete(PvsMode* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        PvsMode_copy(PvsMode* dst, const PvsMode* src);

        typedef enum ExposureState
        {
            InExposure ,      
            NotInExposure      
        } ExposureState;

        #define REDA_SEQUENCE_USER_API
        #define T ExposureState
        #define TSeq ExposureStateSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T ExposureState
        #define TSeq ExposureStateSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        ExposureState_initialize(ExposureState* sample);

        NDDSUSERDllExport extern ExposureState*
        ExposureState_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        ExposureState_finalize(ExposureState* sample);

        NDDSUSERDllExport extern void
        ExposureState_delete(ExposureState* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        ExposureState_copy(ExposureState* dst, const ExposureState* src);

        struct PvsInformationReportSeq;
        class PvsInformationReportTypeSupport;
        class PvsInformationReportDataWriter;
        class PvsInformationReportDataReader;

        class PvsInformationReport  
        {
          public:
            typedef struct PvsInformationReportSeq Seq;
            typedef PvsInformationReportTypeSupport TypeSupport;
            typedef PvsInformationReportDataWriter DataWriter;
            typedef PvsInformationReportDataReader DataReader;

            NewRT::TraitCommon::TraitValueList infos;

        };

        NDDSUSERDllExport extern const char *PvsInformationReportTYPENAME;

        #define REDA_SEQUENCE_USER_API
        #define T PvsInformationReport
        #define TSeq PvsInformationReportSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T PvsInformationReport
        #define TSeq PvsInformationReportSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        PvsInformationReport_initialize(PvsInformationReport* sample);

        NDDSUSERDllExport extern PvsInformationReport*
        PvsInformationReport_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        PvsInformationReport_finalize(PvsInformationReport* sample);

        NDDSUSERDllExport extern void
        PvsInformationReport_delete(PvsInformationReport* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        PvsInformationReport_copy(PvsInformationReport* dst, const PvsInformationReport* src);

        static const CDR_String TOPIC_KEYPAD_PVS_INFO_REPORT = "TOPIC_KEYPAD_PVS_INFO_REPORT";

        typedef enum MotionStatus
        {
            Unknown ,      
            Stopped ,      
            Moving ,      
            Reached      
        } MotionStatus;

        #define REDA_SEQUENCE_USER_API
        #define T MotionStatus
        #define TSeq MotionStatusSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T MotionStatus
        #define TSeq MotionStatusSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        MotionStatus_initialize(MotionStatus* sample);

        NDDSUSERDllExport extern MotionStatus*
        MotionStatus_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        MotionStatus_finalize(MotionStatus* sample);

        NDDSUSERDllExport extern void
        MotionStatus_delete(MotionStatus* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        MotionStatus_copy(MotionStatus* dst, const MotionStatus* src);

        typedef NewRT::TraitCommon::TraitValueList MotionStatusItem;

        #define REDA_SEQUENCE_USER_API
        #define T MotionStatusItem
        #define TSeq MotionStatusItemSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T MotionStatusItem
        #define TSeq MotionStatusItemSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        MotionStatusItem_initialize(MotionStatusItem* sample);

        NDDSUSERDllExport extern MotionStatusItem*
        MotionStatusItem_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        MotionStatusItem_finalize(MotionStatusItem* sample);

        NDDSUSERDllExport extern void
        MotionStatusItem_delete(MotionStatusItem* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        MotionStatusItem_copy(MotionStatusItem* dst, const MotionStatusItem* src);

        struct MotionStatusReportSeq;
        class MotionStatusReportTypeSupport;
        class MotionStatusReportDataWriter;
        class MotionStatusReportDataReader;

        class MotionStatusReport  
        {
          public:
            typedef struct MotionStatusReportSeq Seq;
            typedef MotionStatusReportTypeSupport TypeSupport;
            typedef MotionStatusReportDataWriter DataWriter;
            typedef MotionStatusReportDataReader DataReader;

            struct NewRT::TraitKeypad::MotionStatusItemSeq status;

        };

        NDDSUSERDllExport extern const char *MotionStatusReportTYPENAME;

        #define REDA_SEQUENCE_USER_API
        #define T MotionStatusReport
        #define TSeq MotionStatusReportSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T MotionStatusReport
        #define TSeq MotionStatusReportSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        MotionStatusReport_initialize(MotionStatusReport* sample);

        NDDSUSERDllExport extern MotionStatusReport*
        MotionStatusReport_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        MotionStatusReport_finalize(MotionStatusReport* sample);

        NDDSUSERDllExport extern void
        MotionStatusReport_delete(MotionStatusReport* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        MotionStatusReport_copy(MotionStatusReport* dst, const MotionStatusReport* src);

        static const CDR_String TOPIC_KEYPAD_MOTION_STATUS_REPORT = "TOPIC_KEYPAD_MOTION_STATUS_REPORT";

        struct MessageReportSeq;
        class MessageReportTypeSupport;
        class MessageReportDataWriter;
        class MessageReportDataReader;

        class MessageReport  
        {
          public:
            typedef struct MessageReportSeq Seq;
            typedef MessageReportTypeSupport TypeSupport;
            typedef MessageReportDataWriter DataWriter;
            typedef MessageReportDataReader DataReader;

            NewRT::TraitCommon::MessageIdList messages;

        };

        NDDSUSERDllExport extern const char *MessageReportTYPENAME;

        #define REDA_SEQUENCE_USER_API
        #define T MessageReport
        #define TSeq MessageReportSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T MessageReport
        #define TSeq MessageReportSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        MessageReport_initialize(MessageReport* sample);

        NDDSUSERDllExport extern MessageReport*
        MessageReport_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        MessageReport_finalize(MessageReport* sample);

        NDDSUSERDllExport extern void
        MessageReport_delete(MessageReport* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        MessageReport_copy(MessageReport* dst, const MessageReport* src);

        static const CDR_String TOPIC_KEYPAD_MESSAGE_REPORT = "TOPIC_KEYPAD_MESSAGE_REPORT";

    } /* namespace TraitKeypad  */

} /* namespace NewRT  */

#if (defined(RTI_WIN32) || defined(RTI_WIN64) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* keypad */

