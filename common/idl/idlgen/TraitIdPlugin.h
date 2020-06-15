/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TraitId.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef TraitIdPlugin_410744635_h
#define TraitIdPlugin_410744635_h

#include "TraitId.h"

#if (defined(RTI_WIN32) || defined(RTI_WIN64) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace NewRT {

    namespace TraitIdTable {

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdUser_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdUser_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitIdUser_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdUser_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdUser_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitIdUser_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdUser_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdRoom_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdRoom_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitIdRoom_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdRoom_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdRoom_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitIdRoom_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdRoom_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdTCS_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdTCS_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitIdTCS_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdTCS_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdTCS_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitIdTCS_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdTCS_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdGantry_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdGantry_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitIdGantry_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdGantry_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdGantry_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitIdGantry_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdGantry_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdCouch_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdCouch_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitIdCouch_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdCouch_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdCouch_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitIdCouch_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdCouch_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdClinical_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdClinical_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitIdClinical_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdClinical_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdClinical_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitIdClinical_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdClinical_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdSystem_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdSystem_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitIdSystem_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdSystem_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdSystem_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitIdSystem_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdSystem_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdChair_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdChair_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitIdChair_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdChair_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdChair_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitIdChair_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdChair_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdBSS_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdBSS_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitIdBSS_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdBSS_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdBSS_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitIdBSS_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdBSS_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdKeypad_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdKeypad_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitIdKeypad_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdKeypad_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdKeypad_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitIdKeypad_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdKeypad_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdSAF_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdSAF_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitIdSAF_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdSAF_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdSAF_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitIdSAF_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdSAF_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdLog_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdLog_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitIdLog_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdLog_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdLog_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitIdLog_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdLog_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdConfigure_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdConfigure_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitIdConfigure_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdConfigure_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdConfigure_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitIdConfigure_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdConfigure_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdPDT_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdPDT_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitIdPDT_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdPDT_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdPDT_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitIdPDT_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdPDT_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdPanel_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdPanel_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitIdPanel_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdPanel_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdPanel_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitIdPanel_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdPanel_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdSnout_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdSnout_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitIdSnout_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdSnout_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdSnout_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitIdSnout_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdSnout_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdLMS_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdLMS_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitIdLMS_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdLMS_cdr_serialize_key(
            struct CDR_Stream_t *keystream, const void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdLMS_cdr_deserialize_key(
            struct CDR_Stream_t *keystream, void *sample,
            void *param);

        NDDSUSERDllExport extern RTI_UINT32
        TraitIdLMS_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param);

        NDDSUSERDllExport extern RTI_BOOL 
        TraitIdLMS_instance_to_keyhash(
            struct NDDS_Type_Plugin *plugin,
            struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
            void *param);

    } /* namespace TraitIdTable  */

} /* namespace NewRT  */

#if (defined(RTI_WIN32) || defined(RTI_WIN64) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TraitIdPlugin_410744635_h */

