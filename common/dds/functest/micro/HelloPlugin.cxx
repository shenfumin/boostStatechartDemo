/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Hello.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#include "Hello.h"
#include "HelloPlugin.h"
#include "HelloSupport.h"

/*** SOURCE_BEGIN ***/
#ifndef UNUSED_ARG
#define UNUSED_ARG(x) (void)(x)
#endif

/* --------------------------------------------------------------------------
(De)Serialize functions:
* -------------------------------------------------------------------------- */
RTI_BOOL 
HelloWorld_cdr_serialize(
    struct CDR_Stream_t *stream, const void *void_sample, void *param)
{
    HelloWorld *sample = (HelloWorld *)void_sample;

    if ((stream == NULL) || (void_sample == NULL))
    {
        return RTI_FALSE;
    }

    UNUSED_ARG(param);

    if (!CDR_Stream_serialize_string(
        stream, sample->msg, (128))) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

RTI_BOOL 
HelloWorld_cdr_deserialize(
    struct CDR_Stream_t *stream, void *void_sample, void *param)
{
    HelloWorld *sample = (HelloWorld *)void_sample;

    if ((stream == NULL) || (void_sample == NULL))
    {
        return RTI_FALSE;
    }

    UNUSED_ARG(param);

    if (!CDR_Stream_deserialize_string(
        stream, sample->msg, (128))) {
        return RTI_FALSE;
    }

    return RTI_TRUE;

}

RTI_UINT32
HelloWorld_get_serialized_sample_max_size(
    struct NDDS_Type_Plugin *plugin,
    RTI_UINT32 current_alignment,
    void *param)
{
    RTI_UINT32 initial_alignment = current_alignment;

    UNUSED_ARG(plugin);
    UNUSED_ARG(param);
    current_alignment += CDR_get_max_size_serialized_string(
        current_alignment, (128)+1);

    return  current_alignment - initial_alignment;
}
/* --------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------- */
RTI_BOOL
HelloWorld_cdr_serialize_key(
    struct CDR_Stream_t *stream, const void *void_sample, void *param)
{
    return HelloWorld_cdr_serialize(stream, void_sample, param);
}

RTI_BOOL
HelloWorld_cdr_deserialize_key(
    struct CDR_Stream_t *stream, void *void_sample, void *param)
{
    return HelloWorld_cdr_deserialize(stream, void_sample, param);
}

RTI_UINT32
HelloWorld_get_serialized_key_max_size(
    struct NDDS_Type_Plugin *plugin,
    RTI_UINT32 current_alignment,
    void *param)
{
    return HelloWorld_get_serialized_sample_max_size(plugin, current_alignment, param);
}

/* --------------------------------------------------------------------------
Typed-endpoint support for C++:
* -------------------------------------------------------------------------- */

void* 
HelloWorldPlugin_create_typed_datawriter(
    void *writer)
{
    /* This function is only called from DDS_Publisher_create_datawriter
    so writer is guaranteed to have a valid (i.e. non-NULL) value */
    DDSDataWriter *cpp_writer = 
    new HelloWorldDataWriter((DDS_DataWriter*)writer);
    return cpp_writer;   
}

#ifndef RTI_CERT
void 
HelloWorldPlugin_delete_typed_datawriter(
    void *wrapper)
{
    /* This function is only called from DDS_Publisher_create_datawriter
    and DDS_Publisher_delete_datawriter so wrapper is guaranteed to have
    a valid (i.e. non-NULL) value */
    DDSDataWriter_impl *cpp_writer = (DDSDataWriter_impl *) wrapper;
    HelloWorldDataWriter *t_writer  = 
    static_cast<HelloWorldDataWriter *>(cpp_writer);
    delete t_writer;
}
#endif

void* 
HelloWorldPlugin_create_typed_datareader(
    void *reader)
{
    /* This function is only called from DDS_Subscriber_create_datareader
    so reader is guaranteed to have a valid (i.e. non-NULL) value */
    DDSDataReader *cpp_reader = 
    new HelloWorldDataReader((DDS_DataReader*)reader);
    return cpp_reader;      
}

#ifndef RTI_CERT
void
HelloWorldPlugin_delete_typed_datareader(
    void *wrapper)
{
    /* This function is only called from DDS_Subscriber_create_datareader
    and DDS_Subscriber_delete_datareader so wrapper is guaranteed to have
    a valid (i.e. non-NULL) value */
    DDSDataReader_impl *cpp_reader = (DDSDataReader_impl *) wrapper;
    HelloWorldDataReader *t_reader = 
    static_cast<HelloWorldDataReader *>(cpp_reader);
    delete t_reader;
}
#endif

/* --------------------------------------------------------------------------
*  Sample Support functions:
* -------------------------------------------------------------------------- */
RTI_BOOL
HelloWorldPlugin_create_sample(
    struct NDDS_Type_Plugin *plugin, void **sample, void *param)
{
    UNUSED_ARG(plugin);
    UNUSED_ARG(param);
    *sample = (void *) HelloWorld_create();
    return (sample != NULL);
}

#ifndef RTI_CERT
RTI_BOOL
HelloWorldPlugin_delete_sample(
    struct NDDS_Type_Plugin *plugin, void *sample, void *param)
{
    UNUSED_ARG(plugin);
    UNUSED_ARG(param);
    /* HelloWorld_delete() is a void function
    which expects (sample != NULL). Since HelloWorldPlugin_delete_sample
    is an internal function, sample is assumed to be a valid pointer */ 
    HelloWorld_delete((HelloWorld *) sample);
    return RTI_TRUE;
}
#endif

RTI_BOOL 
HelloWorldPlugin_copy_sample(
    struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param)
{
    UNUSED_ARG(plugin);
    UNUSED_ARG(param);
    return HelloWorld_copy(
        (HelloWorld *)dst,
        (const HelloWorld *)src);
}
/* --------------------------------------------------------------------------
*  Type HelloWorld Plugin Instantiation
* -------------------------------------------------------------------------- */

NDDSCDREncapsulation HelloWorldEncapsulationKind[] =
{ {0,0} };

struct NDDS_Type_Plugin HelloWorldTypePlugin =
{
    {0, 0},                     /* NDDS_Type_PluginVersion */
    NULL,                       /* DDS_TypeCode_t* */
    HelloWorldEncapsulationKind,
    NDDS_TYPEPLUGIN_NO_KEY,     /* NDDS_TypePluginKeyKind */
    HelloWorld_cdr_serialize,
    HelloWorld_cdr_deserialize,
    HelloWorld_get_serialized_sample_max_size,
    NULL, NULL, NULL,           /* key support functions*/
    HelloWorldPlugin_create_sample,
    #ifndef RTI_CERT
    HelloWorldPlugin_delete_sample,
    #else
    NULL,
    #endif
    HelloWorldPlugin_copy_sample,
    PluginHelper_get_key_kind,
    PluginHelper_instance_to_keyhash,
    HelloWorldPlugin_create_typed_datawriter,
    #ifndef RTI_CERT
    HelloWorldPlugin_delete_typed_datawriter,
    #else
    NULL,
    #endif
    HelloWorldPlugin_create_typed_datareader,
    #ifndef RTI_CERT
    HelloWorldPlugin_delete_typed_datareader
    #else
    NULL,
    #endif
};

/* --------------------------------------------------------------------------
*  Type HelloWorld Plugin Methods
* -------------------------------------------------------------------------- */

struct NDDS_Type_Plugin *
HelloWorldTypePlugin_get(void) 
{ 
    return &HelloWorldTypePlugin;
} 

const char*
HelloWorldTypePlugin_get_default_type_name(void) 
{ 
    return HelloWorldTYPENAME;
} 

NDDS_TypePluginKeyKind 
HelloWorld_get_key_kind(
    struct NDDS_Type_Plugin *plugin,
    void *param)
{
    UNUSED_ARG(param);
    UNUSED_ARG(plugin);
    return NDDS_TYPEPLUGIN_NO_KEY;
}

