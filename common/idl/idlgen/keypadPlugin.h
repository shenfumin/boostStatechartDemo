/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from keypad.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef keypadPlugin_2097681970_h
#define keypadPlugin_2097681970_h

#include "keypad.h"

#if (defined(RTI_WIN32) || defined(RTI_WIN64) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#include "TraitCommonPlugin.h"

namespace NewRT {

    namespace TraitKeypad {

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        FunctionId_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        FunctionId_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        FunctionId_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        FunctionId_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        FunctionId_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        FunctionId_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        FunctionId_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        FunctionActiveState_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        FunctionActiveState_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        FunctionActiveState_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        FunctionActiveState_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        FunctionActiveState_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        FunctionActiveState_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        FunctionActiveState_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        FunctionEnableState_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        FunctionEnableState_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        FunctionEnableState_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        FunctionEnableState_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        FunctionEnableState_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        FunctionEnableState_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        FunctionEnableState_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        KeySwitchState_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        KeySwitchState_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        KeySwitchState_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        KeySwitchState_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        KeySwitchState_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        KeySwitchState_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        KeySwitchState_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        FunctionEnableItem_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        FunctionEnableItem_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        FunctionEnableItem_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        FunctionEnableItem_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        FunctionEnableItem_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        FunctionEnableItem_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        FunctionEnableItem_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        NDDSUSERDllExport extern struct NDDS_Type_Plugin*
        FunctionEnableRequestTypePlugin_get(void);
        NDDSUSERDllExport extern const char*
        FunctionEnableRequestTypePlugin_get_default_type_name(void);
        NDDSUSERDllExport extern NDDS_TypePluginKeyKind 
        FunctionEnableRequest_get_key_kind(
            struct NDDS_Type_Plugin *plugin,
            void *param);
        /* --------------------------------------------------------------------------
        Untyped interfaces to the typed sample management functions
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL
        FunctionEnableRequestPlugin_create_sample(
            struct NDDS_Type_Plugin *plugin, void **sample,void *param);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL 
        FunctionEnableRequestPlugin_delete_sample(
            struct NDDS_Type_Plugin *plugin, void *sample,void *param);
        #endif

        NDDSUSERDllExport extern RTI_BOOL 
        FunctionEnableRequestPlugin_copy_sample(
            struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param);
        /* --------------------------------------------------------------------------
        Typed-endpoint support for C++:
        * -------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void* 
        FunctionEnableRequestPlugin_create_typed_datawriter(
            void *writer);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern void 
        FunctionEnableRequestPlugin_delete_typed_datawriter(
            void *wrapper);
        #endif

        NDDSUSERDllExport extern void* 
        FunctionEnableRequestPlugin_create_typed_datareader(
            void *reader);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern void 
        FunctionEnableRequestPlugin_delete_typed_datareader(
            void *wrapper);
        #endif

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        FunctionEnableRequest_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        FunctionEnableRequest_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        FunctionEnableRequest_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        FunctionEnableRequest_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        FunctionEnableRequest_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        FunctionEnableRequest_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        FunctionEnableRequest_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        FunctionActiveStateItem_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        FunctionActiveStateItem_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        FunctionActiveStateItem_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        FunctionActiveStateItem_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        FunctionActiveStateItem_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        FunctionActiveStateItem_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        FunctionActiveStateItem_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        NDDSUSERDllExport extern struct NDDS_Type_Plugin*
        FunctionActiveStateReportTypePlugin_get(void);
        NDDSUSERDllExport extern const char*
        FunctionActiveStateReportTypePlugin_get_default_type_name(void);
        NDDSUSERDllExport extern NDDS_TypePluginKeyKind 
        FunctionActiveStateReport_get_key_kind(
            struct NDDS_Type_Plugin *plugin,
            void *param);
        /* --------------------------------------------------------------------------
        Untyped interfaces to the typed sample management functions
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL
        FunctionActiveStateReportPlugin_create_sample(
            struct NDDS_Type_Plugin *plugin, void **sample,void *param);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL 
        FunctionActiveStateReportPlugin_delete_sample(
            struct NDDS_Type_Plugin *plugin, void *sample,void *param);
        #endif

        NDDSUSERDllExport extern RTI_BOOL 
        FunctionActiveStateReportPlugin_copy_sample(
            struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param);
        /* --------------------------------------------------------------------------
        Typed-endpoint support for C++:
        * -------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void* 
        FunctionActiveStateReportPlugin_create_typed_datawriter(
            void *writer);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern void 
        FunctionActiveStateReportPlugin_delete_typed_datawriter(
            void *wrapper);
        #endif

        NDDSUSERDllExport extern void* 
        FunctionActiveStateReportPlugin_create_typed_datareader(
            void *reader);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern void 
        FunctionActiveStateReportPlugin_delete_typed_datareader(
            void *wrapper);
        #endif

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        FunctionActiveStateReport_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        FunctionActiveStateReport_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        FunctionActiveStateReport_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        FunctionActiveStateReport_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        FunctionActiveStateReport_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        FunctionActiveStateReport_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        FunctionActiveStateReport_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        NDDSUSERDllExport extern struct NDDS_Type_Plugin*
        KeySwitchStateReportTypePlugin_get(void);
        NDDSUSERDllExport extern const char*
        KeySwitchStateReportTypePlugin_get_default_type_name(void);
        NDDSUSERDllExport extern NDDS_TypePluginKeyKind 
        KeySwitchStateReport_get_key_kind(
            struct NDDS_Type_Plugin *plugin,
            void *param);
        /* --------------------------------------------------------------------------
        Untyped interfaces to the typed sample management functions
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL
        KeySwitchStateReportPlugin_create_sample(
            struct NDDS_Type_Plugin *plugin, void **sample,void *param);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL 
        KeySwitchStateReportPlugin_delete_sample(
            struct NDDS_Type_Plugin *plugin, void *sample,void *param);
        #endif

        NDDSUSERDllExport extern RTI_BOOL 
        KeySwitchStateReportPlugin_copy_sample(
            struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param);
        /* --------------------------------------------------------------------------
        Typed-endpoint support for C++:
        * -------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void* 
        KeySwitchStateReportPlugin_create_typed_datawriter(
            void *writer);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern void 
        KeySwitchStateReportPlugin_delete_typed_datawriter(
            void *wrapper);
        #endif

        NDDSUSERDllExport extern void* 
        KeySwitchStateReportPlugin_create_typed_datareader(
            void *reader);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern void 
        KeySwitchStateReportPlugin_delete_typed_datareader(
            void *wrapper);
        #endif

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        KeySwitchStateReport_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        KeySwitchStateReport_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        KeySwitchStateReport_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        KeySwitchStateReport_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        KeySwitchStateReport_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        KeySwitchStateReport_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        KeySwitchStateReport_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        PvsMode_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        PvsMode_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        PvsMode_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        PvsMode_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        PvsMode_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        PvsMode_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        PvsMode_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        ExposureState_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        ExposureState_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        ExposureState_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        ExposureState_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        ExposureState_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        ExposureState_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        ExposureState_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        NDDSUSERDllExport extern struct NDDS_Type_Plugin*
        PvsInformationReportTypePlugin_get(void);
        NDDSUSERDllExport extern const char*
        PvsInformationReportTypePlugin_get_default_type_name(void);
        NDDSUSERDllExport extern NDDS_TypePluginKeyKind 
        PvsInformationReport_get_key_kind(
            struct NDDS_Type_Plugin *plugin,
            void *param);
        /* --------------------------------------------------------------------------
        Untyped interfaces to the typed sample management functions
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL
        PvsInformationReportPlugin_create_sample(
            struct NDDS_Type_Plugin *plugin, void **sample,void *param);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL 
        PvsInformationReportPlugin_delete_sample(
            struct NDDS_Type_Plugin *plugin, void *sample,void *param);
        #endif

        NDDSUSERDllExport extern RTI_BOOL 
        PvsInformationReportPlugin_copy_sample(
            struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param);
        /* --------------------------------------------------------------------------
        Typed-endpoint support for C++:
        * -------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void* 
        PvsInformationReportPlugin_create_typed_datawriter(
            void *writer);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern void 
        PvsInformationReportPlugin_delete_typed_datawriter(
            void *wrapper);
        #endif

        NDDSUSERDllExport extern void* 
        PvsInformationReportPlugin_create_typed_datareader(
            void *reader);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern void 
        PvsInformationReportPlugin_delete_typed_datareader(
            void *wrapper);
        #endif

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        PvsInformationReport_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        PvsInformationReport_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        PvsInformationReport_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        PvsInformationReport_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        PvsInformationReport_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        PvsInformationReport_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        PvsInformationReport_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MotionStatus_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MotionStatus_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MotionStatus_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MotionStatus_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MotionStatus_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MotionStatus_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MotionStatus_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MotionStatusItem_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MotionStatusItem_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MotionStatusItem_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MotionStatusItem_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MotionStatusItem_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MotionStatusItem_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MotionStatusItem_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        NDDSUSERDllExport extern struct NDDS_Type_Plugin*
        MotionStatusReportTypePlugin_get(void);
        NDDSUSERDllExport extern const char*
        MotionStatusReportTypePlugin_get_default_type_name(void);
        NDDSUSERDllExport extern NDDS_TypePluginKeyKind 
        MotionStatusReport_get_key_kind(
            struct NDDS_Type_Plugin *plugin,
            void *param);
        /* --------------------------------------------------------------------------
        Untyped interfaces to the typed sample management functions
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL
        MotionStatusReportPlugin_create_sample(
            struct NDDS_Type_Plugin *plugin, void **sample,void *param);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL 
        MotionStatusReportPlugin_delete_sample(
            struct NDDS_Type_Plugin *plugin, void *sample,void *param);
        #endif

        NDDSUSERDllExport extern RTI_BOOL 
        MotionStatusReportPlugin_copy_sample(
            struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param);
        /* --------------------------------------------------------------------------
        Typed-endpoint support for C++:
        * -------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void* 
        MotionStatusReportPlugin_create_typed_datawriter(
            void *writer);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern void 
        MotionStatusReportPlugin_delete_typed_datawriter(
            void *wrapper);
        #endif

        NDDSUSERDllExport extern void* 
        MotionStatusReportPlugin_create_typed_datareader(
            void *reader);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern void 
        MotionStatusReportPlugin_delete_typed_datareader(
            void *wrapper);
        #endif

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MotionStatusReport_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MotionStatusReport_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MotionStatusReport_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MotionStatusReport_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MotionStatusReport_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MotionStatusReport_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MotionStatusReport_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        NDDSUSERDllExport extern struct NDDS_Type_Plugin*
        MessageReportTypePlugin_get(void);
        NDDSUSERDllExport extern const char*
        MessageReportTypePlugin_get_default_type_name(void);
        NDDSUSERDllExport extern NDDS_TypePluginKeyKind 
        MessageReport_get_key_kind(
            struct NDDS_Type_Plugin *plugin,
            void *param);
        /* --------------------------------------------------------------------------
        Untyped interfaces to the typed sample management functions
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL
        MessageReportPlugin_create_sample(
            struct NDDS_Type_Plugin *plugin, void **sample,void *param);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL 
        MessageReportPlugin_delete_sample(
            struct NDDS_Type_Plugin *plugin, void *sample,void *param);
        #endif

        NDDSUSERDllExport extern RTI_BOOL 
        MessageReportPlugin_copy_sample(
            struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param);
        /* --------------------------------------------------------------------------
        Typed-endpoint support for C++:
        * -------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void* 
        MessageReportPlugin_create_typed_datawriter(
            void *writer);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern void 
        MessageReportPlugin_delete_typed_datawriter(
            void *wrapper);
        #endif

        NDDSUSERDllExport extern void* 
        MessageReportPlugin_create_typed_datareader(
            void *reader);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern void 
        MessageReportPlugin_delete_typed_datareader(
            void *wrapper);
        #endif

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MessageReport_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageReport_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MessageReport_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MessageReport_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageReport_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MessageReport_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageReport_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

    } /* namespace TraitKeypad  */

} /* namespace NewRT  */

#if (defined(RTI_WIN32) || defined(RTI_WIN64) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* keypadPlugin_2097681970_h */

