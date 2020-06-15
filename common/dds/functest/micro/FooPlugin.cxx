/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Foo.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#include "Foo.h"
#include "FooPlugin.h"
#include "FooSupport.h"

/*** SOURCE_BEGIN ***/
#ifndef UNUSED_ARG
#define UNUSED_ARG(x) (void)(x)
#endif

/* --------------------------------------------------------------------------
(De)Serialize functions:
* -------------------------------------------------------------------------- */
RTI_BOOL 
Foo_cdr_serialize(
    struct CDR_Stream_t *stream, const void *void_sample, void *param)
{
    Foo *sample = (Foo *)void_sample;

    if ((stream == NULL) || (void_sample == NULL))
    {
        return RTI_FALSE;
    }

    UNUSED_ARG(param);

    if (!CDR_Stream_serialize_long(
        stream, &sample->x)) {
        return RTI_FALSE;
    }  
    if (!CDR_Stream_serialize_long(
        stream, &sample->y)) {
        return RTI_FALSE;
    }  

    return RTI_TRUE;
}

RTI_BOOL 
Foo_cdr_deserialize(
    struct CDR_Stream_t *stream, void *void_sample, void *param)
{
    Foo *sample = (Foo *)void_sample;

    if ((stream == NULL) || (void_sample == NULL))
    {
        return RTI_FALSE;
    }

    UNUSED_ARG(param);

    if (!CDR_Stream_deserialize_long(
        stream, &sample->x)) {
        return RTI_FALSE;
    }  
    if (!CDR_Stream_deserialize_long(
        stream, &sample->y)) {
        return RTI_FALSE;
    }  

    return RTI_TRUE;

}

RTI_UINT32
Foo_get_serialized_sample_max_size(
    struct NDDS_Type_Plugin *plugin,
    RTI_UINT32 current_alignment,
    void *param)
{
    RTI_UINT32 initial_alignment = current_alignment;

    UNUSED_ARG(plugin);
    UNUSED_ARG(param);
    current_alignment += CDR_get_max_size_serialized_long(
        current_alignment);

    current_alignment += CDR_get_max_size_serialized_long(
        current_alignment);

    return  current_alignment - initial_alignment;
}
/* --------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------- */

RTI_BOOL
Foo_cdr_serialize_key(
    struct CDR_Stream_t *stream, const void *void_sample, void *param)
{
    const Foo *sample = (Foo *)void_sample;
    if ((stream == NULL) || (void_sample == NULL))
    {
        return RTI_FALSE;
    }

    UNUSED_ARG(param);
    if (!CDR_Stream_serialize_long(
        stream, &sample->x)) {
        return RTI_FALSE;
    }  

    return RTI_TRUE;
}

RTI_BOOL
Foo_cdr_deserialize_key(
    struct CDR_Stream_t *stream, void *void_sample, void *param)
{
    Foo *sample = (Foo *)void_sample;
    if ((stream == NULL) || (void_sample == NULL))
    {
        return RTI_FALSE;
    }

    UNUSED_ARG(param);
    if (!CDR_Stream_deserialize_long(
        stream, &sample->x)) {
        return RTI_FALSE;
    }  

    return RTI_TRUE;
}

RTI_UINT32 
Foo_get_serialized_key_max_size(
    struct NDDS_Type_Plugin *plugin,
    RTI_UINT32 current_alignment,
    void *param)
{
    RTI_UINT32 initial_alignment = current_alignment;

    UNUSED_ARG(plugin);
    UNUSED_ARG(param);
    current_alignment +=  CDR_get_max_size_serialized_long(
        current_alignment );

    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------
Typed-endpoint support for C++:
* -------------------------------------------------------------------------- */

void* 
FooPlugin_create_typed_datawriter(
    void *writer)
{
    /* This function is only called from DDS_Publisher_create_datawriter
    so writer is guaranteed to have a valid (i.e. non-NULL) value */
    DDSDataWriter *cpp_writer = 
    new FooDataWriter((DDS_DataWriter*)writer);
    return cpp_writer;   
}

#ifndef RTI_CERT
void 
FooPlugin_delete_typed_datawriter(
    void *wrapper)
{
    /* This function is only called from DDS_Publisher_create_datawriter
    and DDS_Publisher_delete_datawriter so wrapper is guaranteed to have
    a valid (i.e. non-NULL) value */
    DDSDataWriter_impl *cpp_writer = (DDSDataWriter_impl *) wrapper;
    FooDataWriter *t_writer  = 
    static_cast<FooDataWriter *>(cpp_writer);
    delete t_writer;
}
#endif

void* 
FooPlugin_create_typed_datareader(
    void *reader)
{
    /* This function is only called from DDS_Subscriber_create_datareader
    so reader is guaranteed to have a valid (i.e. non-NULL) value */
    DDSDataReader *cpp_reader = 
    new FooDataReader((DDS_DataReader*)reader);
    return cpp_reader;      
}

#ifndef RTI_CERT
void
FooPlugin_delete_typed_datareader(
    void *wrapper)
{
    /* This function is only called from DDS_Subscriber_create_datareader
    and DDS_Subscriber_delete_datareader so wrapper is guaranteed to have
    a valid (i.e. non-NULL) value */
    DDSDataReader_impl *cpp_reader = (DDSDataReader_impl *) wrapper;
    FooDataReader *t_reader = 
    static_cast<FooDataReader *>(cpp_reader);
    delete t_reader;
}
#endif

/* --------------------------------------------------------------------------
*  Sample Support functions:
* -------------------------------------------------------------------------- */
RTI_BOOL
FooPlugin_create_sample(
    struct NDDS_Type_Plugin *plugin, void **sample, void *param)
{
    UNUSED_ARG(plugin);
    UNUSED_ARG(param);
    *sample = (void *) Foo_create();
    return (sample != NULL);
}

#ifndef RTI_CERT
RTI_BOOL
FooPlugin_delete_sample(
    struct NDDS_Type_Plugin *plugin, void *sample, void *param)
{
    UNUSED_ARG(plugin);
    UNUSED_ARG(param);
    /* Foo_delete() is a void function
    which expects (sample != NULL). Since FooPlugin_delete_sample
    is an internal function, sample is assumed to be a valid pointer */ 
    Foo_delete((Foo *) sample);
    return RTI_TRUE;
}
#endif

RTI_BOOL 
FooPlugin_copy_sample(
    struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param)
{
    UNUSED_ARG(plugin);
    UNUSED_ARG(param);
    return Foo_copy(
        (Foo *)dst,
        (const Foo *)src);
}
/* --------------------------------------------------------------------------
*  Type Foo Plugin Instantiation
* -------------------------------------------------------------------------- */

NDDSCDREncapsulation FooEncapsulationKind[] =
{ {0,0} };

struct NDDS_Type_Plugin FooTypePlugin =
{
    {0, 0},                     /* NDDS_Type_PluginVersion */
    NULL,                       /* DDS_TypeCode_t* */
    FooEncapsulationKind,
    NDDS_TYPEPLUGIN_USER_KEY,   /* NDDS_TypePluginKeyKind */
    Foo_cdr_serialize,
    Foo_cdr_deserialize,
    Foo_get_serialized_sample_max_size,
    Foo_cdr_serialize_key,
    Foo_cdr_deserialize_key,
    Foo_get_serialized_key_max_size,
    FooPlugin_create_sample,
    #ifndef RTI_CERT
    FooPlugin_delete_sample,
    #else
    NULL,
    #endif
    FooPlugin_copy_sample,
    PluginHelper_get_key_kind,
    PluginHelper_instance_to_keyhash,
    FooPlugin_create_typed_datawriter,
    #ifndef RTI_CERT
    FooPlugin_delete_typed_datawriter,
    #else
    NULL,
    #endif
    FooPlugin_create_typed_datareader,
    #ifndef RTI_CERT
    FooPlugin_delete_typed_datareader
    #else
    NULL,
    #endif
};

/* --------------------------------------------------------------------------
*  Type Foo Plugin Methods
* -------------------------------------------------------------------------- */

struct NDDS_Type_Plugin *
FooTypePlugin_get(void) 
{ 
    return &FooTypePlugin;
} 

const char*
FooTypePlugin_get_default_type_name(void) 
{ 
    return FooTYPENAME;
} 

NDDS_TypePluginKeyKind 
Foo_get_key_kind(
    struct NDDS_Type_Plugin *plugin,
    void *param)
{
    UNUSED_ARG(param);
    UNUSED_ARG(plugin);
    return NDDS_TYPEPLUGIN_USER_KEY;
}

/* --------------------------------------------------------------------------
(De)Serialize functions:
* -------------------------------------------------------------------------- */
RTI_BOOL 
MyType_cdr_serialize(
    struct CDR_Stream_t *stream, const void *void_sample, void *param)
{
    MyType *sample = (MyType *)void_sample;

    if ((stream == NULL) || (void_sample == NULL))
    {
        return RTI_FALSE;
    }

    UNUSED_ARG(param);

    if (!CDR_Stream_serialize_long(
        stream, &sample->my_long)) {
        return RTI_FALSE;
    }  
    if (!CDR_Stream_serialize_string(
        stream, sample->my_string, (512))) {
        return RTI_FALSE;
    }
    if(!Foo_cdr_serialize(
        stream,
        &sample->my_foo,
        param)) {
        return RTI_FALSE;
    }
    if (!CDR_Stream_serialize_primitive_sequence(
        stream,
        (const struct REDA_Sequence*) &sample->my_sequence,
        CDR_LONG_TYPE)) {
        return RTI_FALSE;
    }
    if (!CDR_Stream_serialize_non_primitive_array(
        stream,
        (void*)sample->my_array,
        (5),
        sizeof(Foo),
        (CDR_Stream_SerializeFunction) Foo_cdr_serialize,
        param)) {
        return RTI_FALSE;
    }
    if(!Foo_cdr_serialize(
        stream,
        &sample->my_optional,
        param)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

RTI_BOOL 
MyType_cdr_deserialize(
    struct CDR_Stream_t *stream, void *void_sample, void *param)
{
    MyType *sample = (MyType *)void_sample;

    if ((stream == NULL) || (void_sample == NULL))
    {
        return RTI_FALSE;
    }

    UNUSED_ARG(param);

    if (!CDR_Stream_deserialize_long(
        stream, &sample->my_long)) {
        return RTI_FALSE;
    }  
    if (!CDR_Stream_deserialize_string(
        stream, sample->my_string, (512))) {
        return RTI_FALSE;
    }
    if(!Foo_cdr_deserialize(
        stream,
        &sample->my_foo,
        param)) {
        return RTI_FALSE;
    }
    if (!CDR_Stream_deserialize_primitive_sequence(
        stream,
        (struct REDA_Sequence*) &sample->my_sequence,
        CDR_LONG_TYPE)) {
        return RTI_FALSE;
    }

    if (!CDR_Stream_deserialize_non_primitive_array(
        stream,
        (void*)sample->my_array,
        (5),
        sizeof(Foo),
        (CDR_Stream_DeserializeFunction) Foo_cdr_deserialize,
        param)) {
        return RTI_FALSE;
    }
    if(!Foo_cdr_deserialize(
        stream,
        &sample->my_optional,
        param)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;

}

RTI_UINT32
MyType_get_serialized_sample_max_size(
    struct NDDS_Type_Plugin *plugin,
    RTI_UINT32 current_alignment,
    void *param)
{
    RTI_UINT32 initial_alignment = current_alignment;

    UNUSED_ARG(plugin);
    UNUSED_ARG(param);
    current_alignment += CDR_get_max_size_serialized_long(
        current_alignment);

    current_alignment += CDR_get_max_size_serialized_string(
        current_alignment, (512)+1);

    current_alignment += Foo_get_serialized_sample_max_size(
        plugin, current_alignment, param);

    current_alignment += CDR_get_max_size_serialized_primitive_sequence(
        current_alignment, (10), CDR_LONG_TYPE);

    current_alignment += CDR_get_max_size_serialized_non_primitive_array(
        current_alignment, (5),
        (CDR_Stream_GetSerializedSizeFunction) Foo_get_serialized_sample_max_size,
        param);

    current_alignment += Foo_get_serialized_sample_max_size(
        plugin, current_alignment, param);

    return  current_alignment - initial_alignment;
}
/* --------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------- */
RTI_BOOL
MyType_cdr_serialize_key(
    struct CDR_Stream_t *stream, const void *void_sample, void *param)
{
    return MyType_cdr_serialize(stream, void_sample, param);
}

RTI_BOOL
MyType_cdr_deserialize_key(
    struct CDR_Stream_t *stream, void *void_sample, void *param)
{
    return MyType_cdr_deserialize(stream, void_sample, param);
}

RTI_UINT32
MyType_get_serialized_key_max_size(
    struct NDDS_Type_Plugin *plugin,
    RTI_UINT32 current_alignment,
    void *param)
{
    return MyType_get_serialized_sample_max_size(plugin, current_alignment, param);
}

/* --------------------------------------------------------------------------
Typed-endpoint support for C++:
* -------------------------------------------------------------------------- */

void* 
MyTypePlugin_create_typed_datawriter(
    void *writer)
{
    /* This function is only called from DDS_Publisher_create_datawriter
    so writer is guaranteed to have a valid (i.e. non-NULL) value */
    DDSDataWriter *cpp_writer = 
    new MyTypeDataWriter((DDS_DataWriter*)writer);
    return cpp_writer;   
}

#ifndef RTI_CERT
void 
MyTypePlugin_delete_typed_datawriter(
    void *wrapper)
{
    /* This function is only called from DDS_Publisher_create_datawriter
    and DDS_Publisher_delete_datawriter so wrapper is guaranteed to have
    a valid (i.e. non-NULL) value */
    DDSDataWriter_impl *cpp_writer = (DDSDataWriter_impl *) wrapper;
    MyTypeDataWriter *t_writer  = 
    static_cast<MyTypeDataWriter *>(cpp_writer);
    delete t_writer;
}
#endif

void* 
MyTypePlugin_create_typed_datareader(
    void *reader)
{
    /* This function is only called from DDS_Subscriber_create_datareader
    so reader is guaranteed to have a valid (i.e. non-NULL) value */
    DDSDataReader *cpp_reader = 
    new MyTypeDataReader((DDS_DataReader*)reader);
    return cpp_reader;      
}

#ifndef RTI_CERT
void
MyTypePlugin_delete_typed_datareader(
    void *wrapper)
{
    /* This function is only called from DDS_Subscriber_create_datareader
    and DDS_Subscriber_delete_datareader so wrapper is guaranteed to have
    a valid (i.e. non-NULL) value */
    DDSDataReader_impl *cpp_reader = (DDSDataReader_impl *) wrapper;
    MyTypeDataReader *t_reader = 
    static_cast<MyTypeDataReader *>(cpp_reader);
    delete t_reader;
}
#endif

/* --------------------------------------------------------------------------
*  Sample Support functions:
* -------------------------------------------------------------------------- */
RTI_BOOL
MyTypePlugin_create_sample(
    struct NDDS_Type_Plugin *plugin, void **sample, void *param)
{
    UNUSED_ARG(plugin);
    UNUSED_ARG(param);
    *sample = (void *) MyType_create();
    return (sample != NULL);
}

#ifndef RTI_CERT
RTI_BOOL
MyTypePlugin_delete_sample(
    struct NDDS_Type_Plugin *plugin, void *sample, void *param)
{
    UNUSED_ARG(plugin);
    UNUSED_ARG(param);
    /* MyType_delete() is a void function
    which expects (sample != NULL). Since MyTypePlugin_delete_sample
    is an internal function, sample is assumed to be a valid pointer */ 
    MyType_delete((MyType *) sample);
    return RTI_TRUE;
}
#endif

RTI_BOOL 
MyTypePlugin_copy_sample(
    struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param)
{
    UNUSED_ARG(plugin);
    UNUSED_ARG(param);
    return MyType_copy(
        (MyType *)dst,
        (const MyType *)src);
}
/* --------------------------------------------------------------------------
*  Type MyType Plugin Instantiation
* -------------------------------------------------------------------------- */

NDDSCDREncapsulation MyTypeEncapsulationKind[] =
{ {0,0} };

struct NDDS_Type_Plugin MyTypeTypePlugin =
{
    {0, 0},                     /* NDDS_Type_PluginVersion */
    NULL,                       /* DDS_TypeCode_t* */
    MyTypeEncapsulationKind,
    NDDS_TYPEPLUGIN_NO_KEY,     /* NDDS_TypePluginKeyKind */
    MyType_cdr_serialize,
    MyType_cdr_deserialize,
    MyType_get_serialized_sample_max_size,
    NULL, NULL, NULL,           /* key support functions*/
    MyTypePlugin_create_sample,
    #ifndef RTI_CERT
    MyTypePlugin_delete_sample,
    #else
    NULL,
    #endif
    MyTypePlugin_copy_sample,
    PluginHelper_get_key_kind,
    PluginHelper_instance_to_keyhash,
    MyTypePlugin_create_typed_datawriter,
    #ifndef RTI_CERT
    MyTypePlugin_delete_typed_datawriter,
    #else
    NULL,
    #endif
    MyTypePlugin_create_typed_datareader,
    #ifndef RTI_CERT
    MyTypePlugin_delete_typed_datareader
    #else
    NULL,
    #endif
};

/* --------------------------------------------------------------------------
*  Type MyType Plugin Methods
* -------------------------------------------------------------------------- */

struct NDDS_Type_Plugin *
MyTypeTypePlugin_get(void) 
{ 
    return &MyTypeTypePlugin;
} 

const char*
MyTypeTypePlugin_get_default_type_name(void) 
{ 
    return MyTypeTYPENAME;
} 

NDDS_TypePluginKeyKind 
MyType_get_key_kind(
    struct NDDS_Type_Plugin *plugin,
    void *param)
{
    UNUSED_ARG(param);
    UNUSED_ARG(plugin);
    return NDDS_TYPEPLUGIN_NO_KEY;
}

/* --------------------------------------------------------------------------
(De)Serialize functions:
* -------------------------------------------------------------------------- */
RTI_BOOL 
MyOtherType_cdr_serialize(
    struct CDR_Stream_t *stream, const void *void_sample, void *param)
{
    MyOtherType *sample = (MyOtherType *)void_sample;

    if ((stream == NULL) || (void_sample == NULL))
    {
        return RTI_FALSE;
    }

    UNUSED_ARG(param);

    if (!CDR_Stream_serialize_long(
        stream, &sample->m1)) {
        return RTI_FALSE;
    }  
    if (!CDR_Stream_serialize_double(
        stream, &sample->m2)) {
        return RTI_FALSE;
    }  
    if (!CDR_Stream_serialize_string(
        stream, sample->m3, (255))) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

RTI_BOOL 
MyOtherType_cdr_deserialize(
    struct CDR_Stream_t *stream, void *void_sample, void *param)
{
    MyOtherType *sample = (MyOtherType *)void_sample;

    if ((stream == NULL) || (void_sample == NULL))
    {
        return RTI_FALSE;
    }

    UNUSED_ARG(param);

    if (!CDR_Stream_deserialize_long(
        stream, &sample->m1)) {
        return RTI_FALSE;
    }  
    if (!CDR_Stream_deserialize_double(
        stream, &sample->m2)) {
        return RTI_FALSE;
    }  
    if (!CDR_Stream_deserialize_string(
        stream, sample->m3, (255))) {
        return RTI_FALSE;
    }

    return RTI_TRUE;

}

RTI_UINT32
MyOtherType_get_serialized_sample_max_size(
    struct NDDS_Type_Plugin *plugin,
    RTI_UINT32 current_alignment,
    void *param)
{
    RTI_UINT32 initial_alignment = current_alignment;

    UNUSED_ARG(plugin);
    UNUSED_ARG(param);
    current_alignment += CDR_get_max_size_serialized_long(
        current_alignment);

    current_alignment += CDR_get_max_size_serialized_double(
        current_alignment);

    current_alignment += CDR_get_max_size_serialized_string(
        current_alignment, (255)+1);

    return  current_alignment - initial_alignment;
}
/* --------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------- */
RTI_BOOL
MyOtherType_cdr_serialize_key(
    struct CDR_Stream_t *stream, const void *void_sample, void *param)
{
    return MyOtherType_cdr_serialize(stream, void_sample, param);
}

RTI_BOOL
MyOtherType_cdr_deserialize_key(
    struct CDR_Stream_t *stream, void *void_sample, void *param)
{
    return MyOtherType_cdr_deserialize(stream, void_sample, param);
}

RTI_UINT32
MyOtherType_get_serialized_key_max_size(
    struct NDDS_Type_Plugin *plugin,
    RTI_UINT32 current_alignment,
    void *param)
{
    return MyOtherType_get_serialized_sample_max_size(plugin, current_alignment, param);
}

/* --------------------------------------------------------------------------
Typed-endpoint support for C++:
* -------------------------------------------------------------------------- */

void* 
MyOtherTypePlugin_create_typed_datawriter(
    void *writer)
{
    /* This function is only called from DDS_Publisher_create_datawriter
    so writer is guaranteed to have a valid (i.e. non-NULL) value */
    DDSDataWriter *cpp_writer = 
    new MyOtherTypeDataWriter((DDS_DataWriter*)writer);
    return cpp_writer;   
}

#ifndef RTI_CERT
void 
MyOtherTypePlugin_delete_typed_datawriter(
    void *wrapper)
{
    /* This function is only called from DDS_Publisher_create_datawriter
    and DDS_Publisher_delete_datawriter so wrapper is guaranteed to have
    a valid (i.e. non-NULL) value */
    DDSDataWriter_impl *cpp_writer = (DDSDataWriter_impl *) wrapper;
    MyOtherTypeDataWriter *t_writer  = 
    static_cast<MyOtherTypeDataWriter *>(cpp_writer);
    delete t_writer;
}
#endif

void* 
MyOtherTypePlugin_create_typed_datareader(
    void *reader)
{
    /* This function is only called from DDS_Subscriber_create_datareader
    so reader is guaranteed to have a valid (i.e. non-NULL) value */
    DDSDataReader *cpp_reader = 
    new MyOtherTypeDataReader((DDS_DataReader*)reader);
    return cpp_reader;      
}

#ifndef RTI_CERT
void
MyOtherTypePlugin_delete_typed_datareader(
    void *wrapper)
{
    /* This function is only called from DDS_Subscriber_create_datareader
    and DDS_Subscriber_delete_datareader so wrapper is guaranteed to have
    a valid (i.e. non-NULL) value */
    DDSDataReader_impl *cpp_reader = (DDSDataReader_impl *) wrapper;
    MyOtherTypeDataReader *t_reader = 
    static_cast<MyOtherTypeDataReader *>(cpp_reader);
    delete t_reader;
}
#endif

/* --------------------------------------------------------------------------
*  Sample Support functions:
* -------------------------------------------------------------------------- */
RTI_BOOL
MyOtherTypePlugin_create_sample(
    struct NDDS_Type_Plugin *plugin, void **sample, void *param)
{
    UNUSED_ARG(plugin);
    UNUSED_ARG(param);
    *sample = (void *) MyOtherType_create();
    return (sample != NULL);
}

#ifndef RTI_CERT
RTI_BOOL
MyOtherTypePlugin_delete_sample(
    struct NDDS_Type_Plugin *plugin, void *sample, void *param)
{
    UNUSED_ARG(plugin);
    UNUSED_ARG(param);
    /* MyOtherType_delete() is a void function
    which expects (sample != NULL). Since MyOtherTypePlugin_delete_sample
    is an internal function, sample is assumed to be a valid pointer */ 
    MyOtherType_delete((MyOtherType *) sample);
    return RTI_TRUE;
}
#endif

RTI_BOOL 
MyOtherTypePlugin_copy_sample(
    struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param)
{
    UNUSED_ARG(plugin);
    UNUSED_ARG(param);
    return MyOtherType_copy(
        (MyOtherType *)dst,
        (const MyOtherType *)src);
}
/* --------------------------------------------------------------------------
*  Type MyOtherType Plugin Instantiation
* -------------------------------------------------------------------------- */

NDDSCDREncapsulation MyOtherTypeEncapsulationKind[] =
{ {0,0} };

struct NDDS_Type_Plugin MyOtherTypeTypePlugin =
{
    {0, 0},                     /* NDDS_Type_PluginVersion */
    NULL,                       /* DDS_TypeCode_t* */
    MyOtherTypeEncapsulationKind,
    NDDS_TYPEPLUGIN_NO_KEY,     /* NDDS_TypePluginKeyKind */
    MyOtherType_cdr_serialize,
    MyOtherType_cdr_deserialize,
    MyOtherType_get_serialized_sample_max_size,
    NULL, NULL, NULL,           /* key support functions*/
    MyOtherTypePlugin_create_sample,
    #ifndef RTI_CERT
    MyOtherTypePlugin_delete_sample,
    #else
    NULL,
    #endif
    MyOtherTypePlugin_copy_sample,
    PluginHelper_get_key_kind,
    PluginHelper_instance_to_keyhash,
    MyOtherTypePlugin_create_typed_datawriter,
    #ifndef RTI_CERT
    MyOtherTypePlugin_delete_typed_datawriter,
    #else
    NULL,
    #endif
    MyOtherTypePlugin_create_typed_datareader,
    #ifndef RTI_CERT
    MyOtherTypePlugin_delete_typed_datareader
    #else
    NULL,
    #endif
};

/* --------------------------------------------------------------------------
*  Type MyOtherType Plugin Methods
* -------------------------------------------------------------------------- */

struct NDDS_Type_Plugin *
MyOtherTypeTypePlugin_get(void) 
{ 
    return &MyOtherTypeTypePlugin;
} 

const char*
MyOtherTypeTypePlugin_get_default_type_name(void) 
{ 
    return MyOtherTypeTYPENAME;
} 

NDDS_TypePluginKeyKind 
MyOtherType_get_key_kind(
    struct NDDS_Type_Plugin *plugin,
    void *param)
{
    UNUSED_ARG(param);
    UNUSED_ARG(plugin);
    return NDDS_TYPEPLUGIN_NO_KEY;
}

