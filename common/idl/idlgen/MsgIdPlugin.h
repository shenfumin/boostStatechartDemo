/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MsgId.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef MsgIdPlugin_227011400_h
#define MsgIdPlugin_227011400_h

#include "MsgId.h"

#if (defined(RTI_WIN32) || defined(RTI_WIN64) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace NewRT {

    namespace MsgIdTable {

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdCMS_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdCMS_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MessageIdCMS_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdCMS_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdCMS_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MessageIdCMS_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdCMS_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdCHAIR_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdCHAIR_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MessageIdCHAIR_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdCHAIR_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdCHAIR_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MessageIdCHAIR_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdCHAIR_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdCOUCH_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdCOUCH_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MessageIdCOUCH_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdCOUCH_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdCOUCH_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MessageIdCOUCH_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdCOUCH_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdGANTRY_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdGANTRY_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MessageIdGANTRY_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdGANTRY_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdGANTRY_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MessageIdGANTRY_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdGANTRY_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdSNS_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdSNS_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MessageIdSNS_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdSNS_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdSNS_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MessageIdSNS_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdSNS_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdTCS_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdTCS_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MessageIdTCS_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdTCS_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdTCS_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MessageIdTCS_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdTCS_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdBSS_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdBSS_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MessageIdBSS_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdBSS_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdBSS_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MessageIdBSS_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdBSS_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdSAF_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdSAF_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MessageIdSAF_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdSAF_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdSAF_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MessageIdSAF_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdSAF_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdAIN_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdAIN_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MessageIdAIN_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdAIN_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdAIN_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MessageIdAIN_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdAIN_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdSITE_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdSITE_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MessageIdSITE_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdSITE_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdSITE_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        MessageIdSITE_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        MessageIdSITE_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

    } /* namespace MsgIdTable  */

} /* namespace NewRT  */

#if (defined(RTI_WIN32) || defined(RTI_WIN64) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MsgIdPlugin_227011400_h */

