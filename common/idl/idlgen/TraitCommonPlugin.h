/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TraitCommon.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef TraitCommonPlugin_851419176_h
#define TraitCommonPlugin_851419176_h

#include "TraitCommon.h"

#if (defined(RTI_WIN32) || defined(RTI_WIN64) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace NewRT {

    namespace TraitCommon {

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TreatmentControlProblem_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TreatmentControlProblem_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TreatmentControlProblem_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TreatmentControlProblem_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TreatmentControlProblem_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TreatmentControlProblem_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TreatmentControlProblem_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        RelativeSeconds_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        RelativeSeconds_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        RelativeSeconds_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        RelativeSeconds_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        RelativeSeconds_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        RelativeSeconds_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        RelativeSeconds_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        RelativeMsecs_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        RelativeMsecs_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        RelativeMsecs_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        RelativeMsecs_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        RelativeMsecs_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        RelativeMsecs_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        RelativeMsecs_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TimeSeconds_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TimeSeconds_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TimeSeconds_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TimeSeconds_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TimeSeconds_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TimeSeconds_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TimeSeconds_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        NLSIndex_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        NLSIndex_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        NLSIndex_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        NLSIndex_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        NLSIndex_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        NLSIndex_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        NLSIndex_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        NLSKey_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        NLSKey_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        NLSKey_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        NLSKey_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        NLSKey_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        NLSKey_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        NLSKey_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        NLSText_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        NLSText_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        NLSText_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        NLSText_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        NLSText_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        NLSText_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        NLSText_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        NDDSUSERDllExport extern struct NDDS_Type_Plugin*
        LocaleTextTypePlugin_get(void);
        NDDSUSERDllExport extern const char*
        LocaleTextTypePlugin_get_default_type_name(void);
        NDDSUSERDllExport extern NDDS_TypePluginKeyKind 
        LocaleText_get_key_kind(
            struct NDDS_Type_Plugin *plugin,
            void *param);
        /* --------------------------------------------------------------------------
        Untyped interfaces to the typed sample management functions
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL
        LocaleTextPlugin_create_sample(
            struct NDDS_Type_Plugin *plugin, void **sample,void *param);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL 
        LocaleTextPlugin_delete_sample(
            struct NDDS_Type_Plugin *plugin, void *sample,void *param);
        #endif

        NDDSUSERDllExport extern RTI_BOOL 
        LocaleTextPlugin_copy_sample(
            struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param);
        /* --------------------------------------------------------------------------
        Typed-endpoint support for C++:
        * -------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void* 
        LocaleTextPlugin_create_typed_datawriter(
            void *writer);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern void 
        LocaleTextPlugin_delete_typed_datawriter(
            void *wrapper);
        #endif

        NDDSUSERDllExport extern void* 
        LocaleTextPlugin_create_typed_datareader(
            void *reader);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern void 
        LocaleTextPlugin_delete_typed_datareader(
            void *wrapper);
        #endif

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        LocaleText_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        LocaleText_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        LocaleText_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        LocaleText_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        LocaleText_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        LocaleText_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        LocaleText_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        LocaleTextList_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        LocaleTextList_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        LocaleTextList_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        LocaleTextList_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        LocaleTextList_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        LocaleTextList_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        LocaleTextList_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        UserTextSeverity_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        UserTextSeverity_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        UserTextSeverity_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        UserTextSeverity_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        UserTextSeverity_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        UserTextSeverity_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        UserTextSeverity_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitID_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitID_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitID_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitID_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitID_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitID_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitID_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TCKind_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TCKind_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TCKind_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TCKind_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TCKind_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TCKind_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TCKind_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        NDDSUSERDllExport extern struct NDDS_Type_Plugin*
        TraitDataTypePlugin_get(void);
        NDDSUSERDllExport extern const char*
        TraitDataTypePlugin_get_default_type_name(void);
        NDDSUSERDllExport extern NDDS_TypePluginKeyKind 
        TraitData_get_key_kind(
            struct NDDS_Type_Plugin *plugin,
            void *param);
        /* --------------------------------------------------------------------------
        Untyped interfaces to the typed sample management functions
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL
        TraitDataPlugin_create_sample(
            struct NDDS_Type_Plugin *plugin, void **sample,void *param);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL 
        TraitDataPlugin_delete_sample(
            struct NDDS_Type_Plugin *plugin, void *sample,void *param);
        #endif

        NDDSUSERDllExport extern RTI_BOOL 
        TraitDataPlugin_copy_sample(
            struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param);
        /* --------------------------------------------------------------------------
        Typed-endpoint support for C++:
        * -------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void* 
        TraitDataPlugin_create_typed_datawriter(
            void *writer);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern void 
        TraitDataPlugin_delete_typed_datawriter(
            void *wrapper);
        #endif

        NDDSUSERDllExport extern void* 
        TraitDataPlugin_create_typed_datareader(
            void *reader);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern void 
        TraitDataPlugin_delete_typed_datareader(
            void *wrapper);
        #endif

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitData_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitData_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitData_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitData_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitData_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitData_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitData_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        RegExp_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        RegExp_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        RegExp_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        RegExp_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        RegExp_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        RegExp_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        RegExp_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitType_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitType_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitType_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitType_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitType_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitType_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitType_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        NDDSUSERDllExport extern struct NDDS_Type_Plugin*
        TraitValueTypePlugin_get(void);
        NDDSUSERDllExport extern const char*
        TraitValueTypePlugin_get_default_type_name(void);
        NDDSUSERDllExport extern NDDS_TypePluginKeyKind 
        TraitValue_get_key_kind(
            struct NDDS_Type_Plugin *plugin,
            void *param);
        /* --------------------------------------------------------------------------
        Untyped interfaces to the typed sample management functions
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL
        TraitValuePlugin_create_sample(
            struct NDDS_Type_Plugin *plugin, void **sample,void *param);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL 
        TraitValuePlugin_delete_sample(
            struct NDDS_Type_Plugin *plugin, void *sample,void *param);
        #endif

        NDDSUSERDllExport extern RTI_BOOL 
        TraitValuePlugin_copy_sample(
            struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param);
        /* --------------------------------------------------------------------------
        Typed-endpoint support for C++:
        * -------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void* 
        TraitValuePlugin_create_typed_datawriter(
            void *writer);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern void 
        TraitValuePlugin_delete_typed_datawriter(
            void *wrapper);
        #endif

        NDDSUSERDllExport extern void* 
        TraitValuePlugin_create_typed_datareader(
            void *reader);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern void 
        TraitValuePlugin_delete_typed_datareader(
            void *wrapper);
        #endif

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitValue_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitValue_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitValue_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitValue_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitValue_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitValue_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitValue_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitValueList_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitValueList_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitValueList_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitValueList_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitValueList_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitValueList_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitValueList_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitCategory_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitCategory_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitCategory_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitCategory_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitCategory_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitCategory_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitCategory_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitPurpose_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitPurpose_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitPurpose_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitPurpose_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitPurpose_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitPurpose_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitPurpose_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        NDDSUSERDllExport extern struct NDDS_Type_Plugin*
        MatchNumericTypePlugin_get(void);
        NDDSUSERDllExport extern const char*
        MatchNumericTypePlugin_get_default_type_name(void);
        NDDSUSERDllExport extern NDDS_TypePluginKeyKind 
        MatchNumeric_get_key_kind(
            struct NDDS_Type_Plugin *plugin,
            void *param);
        /* --------------------------------------------------------------------------
        Untyped interfaces to the typed sample management functions
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL
        MatchNumericPlugin_create_sample(
            struct NDDS_Type_Plugin *plugin, void **sample,void *param);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL 
        MatchNumericPlugin_delete_sample(
            struct NDDS_Type_Plugin *plugin, void *sample,void *param);
        #endif

        NDDSUSERDllExport extern RTI_BOOL 
        MatchNumericPlugin_copy_sample(
            struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param);
        /* --------------------------------------------------------------------------
        Typed-endpoint support for C++:
        * -------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void* 
        MatchNumericPlugin_create_typed_datawriter(
            void *writer);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern void 
        MatchNumericPlugin_delete_typed_datawriter(
            void *wrapper);
        #endif

        NDDSUSERDllExport extern void* 
        MatchNumericPlugin_create_typed_datareader(
            void *reader);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern void 
        MatchNumericPlugin_delete_typed_datareader(
            void *wrapper);
        #endif

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MatchNumeric_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MatchNumeric_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MatchNumeric_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MatchNumeric_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MatchNumeric_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MatchNumeric_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MatchNumeric_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        NDDSUSERDllExport extern struct NDDS_Type_Plugin*
        MatchDateTypePlugin_get(void);
        NDDSUSERDllExport extern const char*
        MatchDateTypePlugin_get_default_type_name(void);
        NDDSUSERDllExport extern NDDS_TypePluginKeyKind 
        MatchDate_get_key_kind(
            struct NDDS_Type_Plugin *plugin,
            void *param);
        /* --------------------------------------------------------------------------
        Untyped interfaces to the typed sample management functions
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL
        MatchDatePlugin_create_sample(
            struct NDDS_Type_Plugin *plugin, void **sample,void *param);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL 
        MatchDatePlugin_delete_sample(
            struct NDDS_Type_Plugin *plugin, void *sample,void *param);
        #endif

        NDDSUSERDllExport extern RTI_BOOL 
        MatchDatePlugin_copy_sample(
            struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param);
        /* --------------------------------------------------------------------------
        Typed-endpoint support for C++:
        * -------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void* 
        MatchDatePlugin_create_typed_datawriter(
            void *writer);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern void 
        MatchDatePlugin_delete_typed_datawriter(
            void *wrapper);
        #endif

        NDDSUSERDllExport extern void* 
        MatchDatePlugin_create_typed_datareader(
            void *reader);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern void 
        MatchDatePlugin_delete_typed_datareader(
            void *wrapper);
        #endif

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MatchDate_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MatchDate_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MatchDate_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MatchDate_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MatchDate_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MatchDate_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MatchDate_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        NDDSUSERDllExport extern struct NDDS_Type_Plugin*
        TraitMatchTypePlugin_get(void);
        NDDSUSERDllExport extern const char*
        TraitMatchTypePlugin_get_default_type_name(void);
        NDDSUSERDllExport extern NDDS_TypePluginKeyKind 
        TraitMatch_get_key_kind(
            struct NDDS_Type_Plugin *plugin,
            void *param);
        /* --------------------------------------------------------------------------
        Untyped interfaces to the typed sample management functions
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL
        TraitMatchPlugin_create_sample(
            struct NDDS_Type_Plugin *plugin, void **sample,void *param);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL 
        TraitMatchPlugin_delete_sample(
            struct NDDS_Type_Plugin *plugin, void *sample,void *param);
        #endif

        NDDSUSERDllExport extern RTI_BOOL 
        TraitMatchPlugin_copy_sample(
            struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param);
        /* --------------------------------------------------------------------------
        Typed-endpoint support for C++:
        * -------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void* 
        TraitMatchPlugin_create_typed_datawriter(
            void *writer);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern void 
        TraitMatchPlugin_delete_typed_datawriter(
            void *wrapper);
        #endif

        NDDSUSERDllExport extern void* 
        TraitMatchPlugin_create_typed_datareader(
            void *reader);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern void 
        TraitMatchPlugin_delete_typed_datareader(
            void *wrapper);
        #endif

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitMatch_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitMatch_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitMatch_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitMatch_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitMatch_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitMatch_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitMatch_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        NDDSUSERDllExport extern struct NDDS_Type_Plugin*
        LookupMatchTypePlugin_get(void);
        NDDSUSERDllExport extern const char*
        LookupMatchTypePlugin_get_default_type_name(void);
        NDDSUSERDllExport extern NDDS_TypePluginKeyKind 
        LookupMatch_get_key_kind(
            struct NDDS_Type_Plugin *plugin,
            void *param);
        /* --------------------------------------------------------------------------
        Untyped interfaces to the typed sample management functions
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL
        LookupMatchPlugin_create_sample(
            struct NDDS_Type_Plugin *plugin, void **sample,void *param);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL 
        LookupMatchPlugin_delete_sample(
            struct NDDS_Type_Plugin *plugin, void *sample,void *param);
        #endif

        NDDSUSERDllExport extern RTI_BOOL 
        LookupMatchPlugin_copy_sample(
            struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param);
        /* --------------------------------------------------------------------------
        Typed-endpoint support for C++:
        * -------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void* 
        LookupMatchPlugin_create_typed_datawriter(
            void *writer);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern void 
        LookupMatchPlugin_delete_typed_datawriter(
            void *wrapper);
        #endif

        NDDSUSERDllExport extern void* 
        LookupMatchPlugin_create_typed_datareader(
            void *reader);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern void 
        LookupMatchPlugin_delete_typed_datareader(
            void *wrapper);
        #endif

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        LookupMatch_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        LookupMatch_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        LookupMatch_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        LookupMatch_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        LookupMatch_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        LookupMatch_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        LookupMatch_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        LookupMatchList_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        LookupMatchList_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        LookupMatchList_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        LookupMatchList_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        LookupMatchList_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        LookupMatchList_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        LookupMatchList_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        NDDSUSERDllExport extern struct NDDS_Type_Plugin*
        TraitAttrTypePlugin_get(void);
        NDDSUSERDllExport extern const char*
        TraitAttrTypePlugin_get_default_type_name(void);
        NDDSUSERDllExport extern NDDS_TypePluginKeyKind 
        TraitAttr_get_key_kind(
            struct NDDS_Type_Plugin *plugin,
            void *param);
        /* --------------------------------------------------------------------------
        Untyped interfaces to the typed sample management functions
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL
        TraitAttrPlugin_create_sample(
            struct NDDS_Type_Plugin *plugin, void **sample,void *param);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL 
        TraitAttrPlugin_delete_sample(
            struct NDDS_Type_Plugin *plugin, void *sample,void *param);
        #endif

        NDDSUSERDllExport extern RTI_BOOL 
        TraitAttrPlugin_copy_sample(
            struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param);
        /* --------------------------------------------------------------------------
        Typed-endpoint support for C++:
        * -------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void* 
        TraitAttrPlugin_create_typed_datawriter(
            void *writer);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern void 
        TraitAttrPlugin_delete_typed_datawriter(
            void *wrapper);
        #endif

        NDDSUSERDllExport extern void* 
        TraitAttrPlugin_create_typed_datareader(
            void *reader);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern void 
        TraitAttrPlugin_delete_typed_datareader(
            void *wrapper);
        #endif

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitAttr_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitAttr_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitAttr_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitAttr_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitAttr_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitAttr_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitAttr_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitAttrList_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitAttrList_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitAttrList_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitAttrList_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitAttrList_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitAttrList_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitAttrList_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MsgID_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MsgID_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MsgID_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MsgID_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MsgID_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MsgID_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MsgID_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MsgText_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MsgText_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MsgText_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MsgText_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MsgText_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MsgText_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MsgText_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MsgSeverity_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MsgSeverity_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MsgSeverity_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MsgSeverity_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MsgSeverity_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MsgSeverity_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MsgSeverity_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MsgCategory_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MsgCategory_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MsgCategory_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MsgCategory_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MsgCategory_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MsgCategory_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MsgCategory_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        NDDSUSERDllExport extern struct NDDS_Type_Plugin*
        MessageTypePlugin_get(void);
        NDDSUSERDllExport extern const char*
        MessageTypePlugin_get_default_type_name(void);
        NDDSUSERDllExport extern NDDS_TypePluginKeyKind 
        Message_get_key_kind(
            struct NDDS_Type_Plugin *plugin,
            void *param);
        /* --------------------------------------------------------------------------
        Untyped interfaces to the typed sample management functions
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL
        MessagePlugin_create_sample(
            struct NDDS_Type_Plugin *plugin, void **sample,void *param);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL 
        MessagePlugin_delete_sample(
            struct NDDS_Type_Plugin *plugin, void *sample,void *param);
        #endif

        NDDSUSERDllExport extern RTI_BOOL 
        MessagePlugin_copy_sample(
            struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param);
        /* --------------------------------------------------------------------------
        Typed-endpoint support for C++:
        * -------------------------------------------------------------------------- */

        NDDSUSERDllExport extern void* 
        MessagePlugin_create_typed_datawriter(
            void *writer);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern void 
        MessagePlugin_delete_typed_datawriter(
            void *wrapper);
        #endif

        NDDSUSERDllExport extern void* 
        MessagePlugin_create_typed_datareader(
            void *reader);

        #ifndef RTI_CERT
        NDDSUSERDllExport extern void 
        MessagePlugin_delete_typed_datareader(
            void *wrapper);
        #endif

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        Message_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        Message_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        Message_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        Message_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        Message_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        Message_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        Message_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MessageList_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageList_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MessageList_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MessageList_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageList_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MessageList_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageList_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdList_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdList_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MessageIdList_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdList_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdList_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MessageIdList_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdList_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        SoftwareComponent_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        SoftwareComponent_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        SoftwareComponent_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        SoftwareComponent_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        SoftwareComponent_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        SoftwareComponent_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        SoftwareComponent_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

    } /* namespace TraitCommon  */

} /* namespace NewRT  */

#if (defined(RTI_WIN32) || defined(RTI_WIN64) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TraitCommonPlugin_851419176_h */

