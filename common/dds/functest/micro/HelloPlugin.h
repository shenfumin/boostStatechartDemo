/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Hello.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef HelloPlugin_1095434426_h
#define HelloPlugin_1095434426_h

#include "Hello.h"

#if (defined(RTI_WIN32) || defined(RTI_WIN64) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport extern struct NDDS_Type_Plugin*
HelloWorldTypePlugin_get(void);
NDDSUSERDllExport extern const char*
HelloWorldTypePlugin_get_default_type_name(void);
NDDSUSERDllExport extern NDDS_TypePluginKeyKind 
HelloWorld_get_key_kind(
    struct NDDS_Type_Plugin *plugin,
    void *param);
/* --------------------------------------------------------------------------
Untyped interfaces to the typed sample management functions
* -------------------------------------------------------------------------- */
NDDSUSERDllExport extern RTI_BOOL
HelloWorldPlugin_create_sample(
    struct NDDS_Type_Plugin *plugin, void **sample,void *param);

#ifndef RTI_CERT
NDDSUSERDllExport extern RTI_BOOL 
HelloWorldPlugin_delete_sample(
    struct NDDS_Type_Plugin *plugin, void *sample,void *param);
#endif

NDDSUSERDllExport extern RTI_BOOL 
HelloWorldPlugin_copy_sample(
    struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param);
/* --------------------------------------------------------------------------
Typed-endpoint support for C++:
* -------------------------------------------------------------------------- */

NDDSUSERDllExport extern void* 
HelloWorldPlugin_create_typed_datawriter(
    void *writer);

#ifndef RTI_CERT
NDDSUSERDllExport extern void 
HelloWorldPlugin_delete_typed_datawriter(
    void *wrapper);
#endif

NDDSUSERDllExport extern void* 
HelloWorldPlugin_create_typed_datareader(
    void *reader);

#ifndef RTI_CERT
NDDSUSERDllExport extern void 
HelloWorldPlugin_delete_typed_datareader(
    void *wrapper);
#endif

/* --------------------------------------------------------------------------
(De)Serialize functions:
* -------------------------------------------------------------------------- */
NDDSUSERDllExport extern RTI_BOOL 
HelloWorld_cdr_serialize(
    struct CDR_Stream_t *stream, const void *void_sample, void *param);

NDDSUSERDllExport extern RTI_BOOL 
HelloWorld_cdr_deserialize(
    struct CDR_Stream_t *stream, void *void_sample, void *param);

NDDSUSERDllExport extern RTI_UINT32
HelloWorld_get_serialized_sample_max_size(
    struct NDDS_Type_Plugin *plugin,
    RTI_UINT32 current_alignment,
    void *param);
/* --------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------- */
NDDSUSERDllExport extern RTI_BOOL 
HelloWorld_cdr_serialize_key(
    struct CDR_Stream_t *keystream, const void *sample,
    void *param);

NDDSUSERDllExport extern RTI_BOOL 
HelloWorld_cdr_deserialize_key(
    struct CDR_Stream_t *keystream, void *sample,
    void *param);

NDDSUSERDllExport extern RTI_UINT32
HelloWorld_get_serialized_key_max_size(
    struct NDDS_Type_Plugin *plugin,
    RTI_UINT32 current_alignment,
    void *param);

NDDSUSERDllExport extern RTI_BOOL 
HelloWorld_instance_to_keyhash(
    struct NDDS_Type_Plugin *plugin,
    struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
    void *param);

#if (defined(RTI_WIN32) || defined(RTI_WIN64) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* HelloPlugin_1095434426_h */

