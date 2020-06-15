/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Foo.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef FooPlugin_982569605_h
#define FooPlugin_982569605_h

#include "Foo.h"

#if (defined(RTI_WIN32) || defined(RTI_WIN64) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport extern struct NDDS_Type_Plugin*
FooTypePlugin_get(void);
NDDSUSERDllExport extern const char*
FooTypePlugin_get_default_type_name(void);
NDDSUSERDllExport extern NDDS_TypePluginKeyKind 
Foo_get_key_kind(
    struct NDDS_Type_Plugin *plugin,
    void *param);
/* --------------------------------------------------------------------------
Untyped interfaces to the typed sample management functions
* -------------------------------------------------------------------------- */
NDDSUSERDllExport extern RTI_BOOL
FooPlugin_create_sample(
    struct NDDS_Type_Plugin *plugin, void **sample,void *param);

#ifndef RTI_CERT
NDDSUSERDllExport extern RTI_BOOL 
FooPlugin_delete_sample(
    struct NDDS_Type_Plugin *plugin, void *sample,void *param);
#endif

NDDSUSERDllExport extern RTI_BOOL 
FooPlugin_copy_sample(
    struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param);
/* --------------------------------------------------------------------------
Typed-endpoint support for C++:
* -------------------------------------------------------------------------- */

NDDSUSERDllExport extern void* 
FooPlugin_create_typed_datawriter(
    void *writer);

#ifndef RTI_CERT
NDDSUSERDllExport extern void 
FooPlugin_delete_typed_datawriter(
    void *wrapper);
#endif

NDDSUSERDllExport extern void* 
FooPlugin_create_typed_datareader(
    void *reader);

#ifndef RTI_CERT
NDDSUSERDllExport extern void 
FooPlugin_delete_typed_datareader(
    void *wrapper);
#endif

/* --------------------------------------------------------------------------
(De)Serialize functions:
* -------------------------------------------------------------------------- */
NDDSUSERDllExport extern RTI_BOOL 
Foo_cdr_serialize(
    struct CDR_Stream_t *stream, const void *void_sample, void *param);

NDDSUSERDllExport extern RTI_BOOL 
Foo_cdr_deserialize(
    struct CDR_Stream_t *stream, void *void_sample, void *param);

NDDSUSERDllExport extern RTI_UINT32
Foo_get_serialized_sample_max_size(
    struct NDDS_Type_Plugin *plugin,
    RTI_UINT32 current_alignment,
    void *param);
/* --------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------- */
NDDSUSERDllExport extern RTI_BOOL 
Foo_cdr_serialize_key(
    struct CDR_Stream_t *keystream, const void *sample,
    void *param);

NDDSUSERDllExport extern RTI_BOOL 
Foo_cdr_deserialize_key(
    struct CDR_Stream_t *keystream, void *sample,
    void *param);

NDDSUSERDllExport extern RTI_UINT32
Foo_get_serialized_key_max_size(
    struct NDDS_Type_Plugin *plugin,
    RTI_UINT32 current_alignment,
    void *param);

NDDSUSERDllExport extern RTI_BOOL 
Foo_instance_to_keyhash(
    struct NDDS_Type_Plugin *plugin,
    struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
    void *param);

NDDSUSERDllExport extern struct NDDS_Type_Plugin*
MyTypeTypePlugin_get(void);
NDDSUSERDllExport extern const char*
MyTypeTypePlugin_get_default_type_name(void);
NDDSUSERDllExport extern NDDS_TypePluginKeyKind 
MyType_get_key_kind(
    struct NDDS_Type_Plugin *plugin,
    void *param);
/* --------------------------------------------------------------------------
Untyped interfaces to the typed sample management functions
* -------------------------------------------------------------------------- */
NDDSUSERDllExport extern RTI_BOOL
MyTypePlugin_create_sample(
    struct NDDS_Type_Plugin *plugin, void **sample,void *param);

#ifndef RTI_CERT
NDDSUSERDllExport extern RTI_BOOL 
MyTypePlugin_delete_sample(
    struct NDDS_Type_Plugin *plugin, void *sample,void *param);
#endif

NDDSUSERDllExport extern RTI_BOOL 
MyTypePlugin_copy_sample(
    struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param);
/* --------------------------------------------------------------------------
Typed-endpoint support for C++:
* -------------------------------------------------------------------------- */

NDDSUSERDllExport extern void* 
MyTypePlugin_create_typed_datawriter(
    void *writer);

#ifndef RTI_CERT
NDDSUSERDllExport extern void 
MyTypePlugin_delete_typed_datawriter(
    void *wrapper);
#endif

NDDSUSERDllExport extern void* 
MyTypePlugin_create_typed_datareader(
    void *reader);

#ifndef RTI_CERT
NDDSUSERDllExport extern void 
MyTypePlugin_delete_typed_datareader(
    void *wrapper);
#endif

/* --------------------------------------------------------------------------
(De)Serialize functions:
* -------------------------------------------------------------------------- */
NDDSUSERDllExport extern RTI_BOOL 
MyType_cdr_serialize(
    struct CDR_Stream_t *stream, const void *void_sample, void *param);

NDDSUSERDllExport extern RTI_BOOL 
MyType_cdr_deserialize(
    struct CDR_Stream_t *stream, void *void_sample, void *param);

NDDSUSERDllExport extern RTI_UINT32
MyType_get_serialized_sample_max_size(
    struct NDDS_Type_Plugin *plugin,
    RTI_UINT32 current_alignment,
    void *param);
/* --------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------- */
NDDSUSERDllExport extern RTI_BOOL 
MyType_cdr_serialize_key(
    struct CDR_Stream_t *keystream, const void *sample,
    void *param);

NDDSUSERDllExport extern RTI_BOOL 
MyType_cdr_deserialize_key(
    struct CDR_Stream_t *keystream, void *sample,
    void *param);

NDDSUSERDllExport extern RTI_UINT32
MyType_get_serialized_key_max_size(
    struct NDDS_Type_Plugin *plugin,
    RTI_UINT32 current_alignment,
    void *param);

NDDSUSERDllExport extern RTI_BOOL 
MyType_instance_to_keyhash(
    struct NDDS_Type_Plugin *plugin,
    struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
    void *param);

NDDSUSERDllExport extern struct NDDS_Type_Plugin*
MyOtherTypeTypePlugin_get(void);
NDDSUSERDllExport extern const char*
MyOtherTypeTypePlugin_get_default_type_name(void);
NDDSUSERDllExport extern NDDS_TypePluginKeyKind 
MyOtherType_get_key_kind(
    struct NDDS_Type_Plugin *plugin,
    void *param);
/* --------------------------------------------------------------------------
Untyped interfaces to the typed sample management functions
* -------------------------------------------------------------------------- */
NDDSUSERDllExport extern RTI_BOOL
MyOtherTypePlugin_create_sample(
    struct NDDS_Type_Plugin *plugin, void **sample,void *param);

#ifndef RTI_CERT
NDDSUSERDllExport extern RTI_BOOL 
MyOtherTypePlugin_delete_sample(
    struct NDDS_Type_Plugin *plugin, void *sample,void *param);
#endif

NDDSUSERDllExport extern RTI_BOOL 
MyOtherTypePlugin_copy_sample(
    struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param);
/* --------------------------------------------------------------------------
Typed-endpoint support for C++:
* -------------------------------------------------------------------------- */

NDDSUSERDllExport extern void* 
MyOtherTypePlugin_create_typed_datawriter(
    void *writer);

#ifndef RTI_CERT
NDDSUSERDllExport extern void 
MyOtherTypePlugin_delete_typed_datawriter(
    void *wrapper);
#endif

NDDSUSERDllExport extern void* 
MyOtherTypePlugin_create_typed_datareader(
    void *reader);

#ifndef RTI_CERT
NDDSUSERDllExport extern void 
MyOtherTypePlugin_delete_typed_datareader(
    void *wrapper);
#endif

/* --------------------------------------------------------------------------
(De)Serialize functions:
* -------------------------------------------------------------------------- */
NDDSUSERDllExport extern RTI_BOOL 
MyOtherType_cdr_serialize(
    struct CDR_Stream_t *stream, const void *void_sample, void *param);

NDDSUSERDllExport extern RTI_BOOL 
MyOtherType_cdr_deserialize(
    struct CDR_Stream_t *stream, void *void_sample, void *param);

NDDSUSERDllExport extern RTI_UINT32
MyOtherType_get_serialized_sample_max_size(
    struct NDDS_Type_Plugin *plugin,
    RTI_UINT32 current_alignment,
    void *param);
/* --------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------- */
NDDSUSERDllExport extern RTI_BOOL 
MyOtherType_cdr_serialize_key(
    struct CDR_Stream_t *keystream, const void *sample,
    void *param);

NDDSUSERDllExport extern RTI_BOOL 
MyOtherType_cdr_deserialize_key(
    struct CDR_Stream_t *keystream, void *sample,
    void *param);

NDDSUSERDllExport extern RTI_UINT32
MyOtherType_get_serialized_key_max_size(
    struct NDDS_Type_Plugin *plugin,
    RTI_UINT32 current_alignment,
    void *param);

NDDSUSERDllExport extern RTI_BOOL 
MyOtherType_instance_to_keyhash(
    struct NDDS_Type_Plugin *plugin,
    struct CDR_Stream_t *stream, DDS_KeyHash_t *keyHash, const void *instance,
    void *param);

#if (defined(RTI_WIN32) || defined(RTI_WIN64) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* FooPlugin_982569605_h */

