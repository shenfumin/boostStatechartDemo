/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from keypad.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#include "keypad.h"
#include "keypadPlugin.h"
#include "keypadSupport.h"

/*** SOURCE_BEGIN ***/
#ifndef UNUSED_ARG
#define UNUSED_ARG(x) (void)(x)
#endif

namespace NewRT {

    namespace TraitKeypad {

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        FunctionId_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            FunctionId *sample = (FunctionId *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);
            if (!CDR_Stream_serialize_enum(stream, sample))
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTI_BOOL 
        FunctionId_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            FunctionId *sample = (FunctionId *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);
            if (!CDR_Stream_deserialize_enum(stream, sample))
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;

        }

        RTI_UINT32
        FunctionId_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += CDR_get_max_size_serialized_enum(current_alignment);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        FunctionId_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return FunctionId_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        FunctionId_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return FunctionId_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        FunctionId_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return FunctionId_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        FunctionActiveState_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            FunctionActiveState *sample = (FunctionActiveState *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);
            if (!CDR_Stream_serialize_enum(stream, sample))
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTI_BOOL 
        FunctionActiveState_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            FunctionActiveState *sample = (FunctionActiveState *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);
            if (!CDR_Stream_deserialize_enum(stream, sample))
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;

        }

        RTI_UINT32
        FunctionActiveState_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += CDR_get_max_size_serialized_enum(current_alignment);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        FunctionActiveState_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return FunctionActiveState_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        FunctionActiveState_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return FunctionActiveState_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        FunctionActiveState_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return FunctionActiveState_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        FunctionEnableState_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            FunctionEnableState *sample = (FunctionEnableState *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);
            if (!CDR_Stream_serialize_enum(stream, sample))
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTI_BOOL 
        FunctionEnableState_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            FunctionEnableState *sample = (FunctionEnableState *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);
            if (!CDR_Stream_deserialize_enum(stream, sample))
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;

        }

        RTI_UINT32
        FunctionEnableState_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += CDR_get_max_size_serialized_enum(current_alignment);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        FunctionEnableState_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return FunctionEnableState_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        FunctionEnableState_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return FunctionEnableState_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        FunctionEnableState_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return FunctionEnableState_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        KeySwitchState_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            KeySwitchState *sample = (KeySwitchState *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);
            if (!CDR_Stream_serialize_enum(stream, sample))
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTI_BOOL 
        KeySwitchState_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            KeySwitchState *sample = (KeySwitchState *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);
            if (!CDR_Stream_deserialize_enum(stream, sample))
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;

        }

        RTI_UINT32
        KeySwitchState_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += CDR_get_max_size_serialized_enum(current_alignment);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        KeySwitchState_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return KeySwitchState_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        KeySwitchState_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return KeySwitchState_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        KeySwitchState_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return KeySwitchState_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        FunctionEnableItem_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            FunctionEnableItem *sample = (FunctionEnableItem *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_serialize_non_primitive_sequence(
                stream,
                (const struct REDA_Sequence* ) sample,
                (CDR_Stream_SerializeFunction) NewRT::TraitCommon::TraitValue_cdr_serialize,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTI_BOOL 
        FunctionEnableItem_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            FunctionEnableItem *sample = (FunctionEnableItem *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_deserialize_non_primitive_sequence(
                stream,
                (struct REDA_Sequence*) sample,
                (CDR_Stream_DeserializeFunction) NewRT::TraitCommon::TraitValue_cdr_deserialize,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;

        }

        RTI_UINT32
        FunctionEnableItem_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += CDR_get_max_size_serialized_non_primitive_sequence(
                current_alignment, (15),
                NewRT::TraitCommon::TraitValue_get_serialized_sample_max_size,
                param);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        FunctionEnableItem_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return FunctionEnableItem_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        FunctionEnableItem_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return FunctionEnableItem_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        FunctionEnableItem_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return FunctionEnableItem_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        FunctionEnableRequest_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            FunctionEnableRequest *sample = (FunctionEnableRequest *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_serialize_non_primitive_sequence(
                stream,
                (const struct REDA_Sequence* ) &sample->functions,
                (CDR_Stream_SerializeFunction) NewRT::TraitKeypad::FunctionEnableItem_cdr_serialize,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTI_BOOL 
        FunctionEnableRequest_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            FunctionEnableRequest *sample = (FunctionEnableRequest *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_deserialize_non_primitive_sequence(
                stream,
                (struct REDA_Sequence*) &sample->functions,
                (CDR_Stream_DeserializeFunction) NewRT::TraitKeypad::FunctionEnableItem_cdr_deserialize,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;

        }

        RTI_UINT32
        FunctionEnableRequest_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += CDR_get_max_size_serialized_non_primitive_sequence(
                current_alignment, (15),
                NewRT::TraitKeypad::FunctionEnableItem_get_serialized_sample_max_size,
                param);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        FunctionEnableRequest_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return FunctionEnableRequest_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        FunctionEnableRequest_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return FunctionEnableRequest_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        FunctionEnableRequest_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return FunctionEnableRequest_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        Typed-endpoint support for C++:
        * -------------------------------------------------------------------------- */

        void* 
        FunctionEnableRequestPlugin_create_typed_datawriter(
            void *writer)
        {
            /* This function is only called from DDS_Publisher_create_datawriter
            so writer is guaranteed to have a valid (i.e. non-NULL) value */
            DDSDataWriter *cpp_writer = 
            new FunctionEnableRequestDataWriter((DDS_DataWriter*)writer);
            return cpp_writer;   
        }

        #ifndef RTI_CERT
        void 
        FunctionEnableRequestPlugin_delete_typed_datawriter(
            void *wrapper)
        {
            /* This function is only called from DDS_Publisher_create_datawriter
            and DDS_Publisher_delete_datawriter so wrapper is guaranteed to have
            a valid (i.e. non-NULL) value */
            DDSDataWriter_impl *cpp_writer = (DDSDataWriter_impl *) wrapper;
            FunctionEnableRequestDataWriter *t_writer  = 
            static_cast<FunctionEnableRequestDataWriter *>(cpp_writer);
            delete t_writer;
        }
        #endif

        void* 
        FunctionEnableRequestPlugin_create_typed_datareader(
            void *reader)
        {
            /* This function is only called from DDS_Subscriber_create_datareader
            so reader is guaranteed to have a valid (i.e. non-NULL) value */
            DDSDataReader *cpp_reader = 
            new FunctionEnableRequestDataReader((DDS_DataReader*)reader);
            return cpp_reader;      
        }

        #ifndef RTI_CERT
        void
        FunctionEnableRequestPlugin_delete_typed_datareader(
            void *wrapper)
        {
            /* This function is only called from DDS_Subscriber_create_datareader
            and DDS_Subscriber_delete_datareader so wrapper is guaranteed to have
            a valid (i.e. non-NULL) value */
            DDSDataReader_impl *cpp_reader = (DDSDataReader_impl *) wrapper;
            FunctionEnableRequestDataReader *t_reader = 
            static_cast<FunctionEnableRequestDataReader *>(cpp_reader);
            delete t_reader;
        }
        #endif

        /* --------------------------------------------------------------------------
        *  Sample Support functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        FunctionEnableRequestPlugin_create_sample(
            struct NDDS_Type_Plugin *plugin, void **sample, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            *sample = (void *) FunctionEnableRequest_create();
            return (sample != NULL);
        }

        #ifndef RTI_CERT
        RTI_BOOL
        FunctionEnableRequestPlugin_delete_sample(
            struct NDDS_Type_Plugin *plugin, void *sample, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            /* FunctionEnableRequest_delete() is a void function
            which expects (sample != NULL). Since FunctionEnableRequestPlugin_delete_sample
            is an internal function, sample is assumed to be a valid pointer */ 
            FunctionEnableRequest_delete((FunctionEnableRequest *) sample);
            return RTI_TRUE;
        }
        #endif

        RTI_BOOL 
        FunctionEnableRequestPlugin_copy_sample(
            struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            return FunctionEnableRequest_copy(
                (FunctionEnableRequest *)dst,
                (const FunctionEnableRequest *)src);
        }
        /* --------------------------------------------------------------------------
        *  Type FunctionEnableRequest Plugin Instantiation
        * -------------------------------------------------------------------------- */

        NDDSCDREncapsulation FunctionEnableRequestEncapsulationKind[] =
        { {0,0} };

        struct NDDS_Type_Plugin FunctionEnableRequestTypePlugin =
        {
            {0, 0},                     /* NDDS_Type_PluginVersion */
            NULL,                       /* DDS_TypeCode_t* */
            FunctionEnableRequestEncapsulationKind,
            NDDS_TYPEPLUGIN_NO_KEY,     /* NDDS_TypePluginKeyKind */
            NewRT::TraitKeypad::FunctionEnableRequest_cdr_serialize,
            NewRT::TraitKeypad::FunctionEnableRequest_cdr_deserialize,
            NewRT::TraitKeypad::FunctionEnableRequest_get_serialized_sample_max_size,
            NULL, NULL, NULL,           /* key support functions*/
            NewRT::TraitKeypad::FunctionEnableRequestPlugin_create_sample,
            #ifndef RTI_CERT
            NewRT::TraitKeypad::FunctionEnableRequestPlugin_delete_sample,
            #else
            NULL,
            #endif
            NewRT::TraitKeypad::FunctionEnableRequestPlugin_copy_sample,
            PluginHelper_get_key_kind,
            PluginHelper_instance_to_keyhash,
            NewRT::TraitKeypad::FunctionEnableRequestPlugin_create_typed_datawriter,
            #ifndef RTI_CERT
            NewRT::TraitKeypad::FunctionEnableRequestPlugin_delete_typed_datawriter,
            #else
            NULL,
            #endif
            NewRT::TraitKeypad::FunctionEnableRequestPlugin_create_typed_datareader,
            #ifndef RTI_CERT
            NewRT::TraitKeypad::FunctionEnableRequestPlugin_delete_typed_datareader
            #else
            NULL,
            #endif
        };

        /* --------------------------------------------------------------------------
        *  Type FunctionEnableRequest Plugin Methods
        * -------------------------------------------------------------------------- */

        struct NDDS_Type_Plugin *
        FunctionEnableRequestTypePlugin_get(void) 
        { 
            return &FunctionEnableRequestTypePlugin;
        } 

        const char*
        FunctionEnableRequestTypePlugin_get_default_type_name(void) 
        { 
            return FunctionEnableRequestTYPENAME;
        } 

        NDDS_TypePluginKeyKind 
        FunctionEnableRequest_get_key_kind(
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
        FunctionActiveStateItem_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            FunctionActiveStateItem *sample = (FunctionActiveStateItem *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_serialize_non_primitive_sequence(
                stream,
                (const struct REDA_Sequence* ) sample,
                (CDR_Stream_SerializeFunction) NewRT::TraitCommon::TraitValue_cdr_serialize,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTI_BOOL 
        FunctionActiveStateItem_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            FunctionActiveStateItem *sample = (FunctionActiveStateItem *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_deserialize_non_primitive_sequence(
                stream,
                (struct REDA_Sequence*) sample,
                (CDR_Stream_DeserializeFunction) NewRT::TraitCommon::TraitValue_cdr_deserialize,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;

        }

        RTI_UINT32
        FunctionActiveStateItem_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += CDR_get_max_size_serialized_non_primitive_sequence(
                current_alignment, (15),
                NewRT::TraitCommon::TraitValue_get_serialized_sample_max_size,
                param);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        FunctionActiveStateItem_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return FunctionActiveStateItem_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        FunctionActiveStateItem_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return FunctionActiveStateItem_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        FunctionActiveStateItem_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return FunctionActiveStateItem_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        FunctionActiveStateReport_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            FunctionActiveStateReport *sample = (FunctionActiveStateReport *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_serialize_non_primitive_sequence(
                stream,
                (const struct REDA_Sequence* ) &sample->activeStates,
                (CDR_Stream_SerializeFunction) NewRT::TraitKeypad::FunctionActiveStateItem_cdr_serialize,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTI_BOOL 
        FunctionActiveStateReport_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            FunctionActiveStateReport *sample = (FunctionActiveStateReport *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_deserialize_non_primitive_sequence(
                stream,
                (struct REDA_Sequence*) &sample->activeStates,
                (CDR_Stream_DeserializeFunction) NewRT::TraitKeypad::FunctionActiveStateItem_cdr_deserialize,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;

        }

        RTI_UINT32
        FunctionActiveStateReport_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += CDR_get_max_size_serialized_non_primitive_sequence(
                current_alignment, (15),
                NewRT::TraitKeypad::FunctionActiveStateItem_get_serialized_sample_max_size,
                param);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        FunctionActiveStateReport_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return FunctionActiveStateReport_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        FunctionActiveStateReport_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return FunctionActiveStateReport_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        FunctionActiveStateReport_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return FunctionActiveStateReport_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        Typed-endpoint support for C++:
        * -------------------------------------------------------------------------- */

        void* 
        FunctionActiveStateReportPlugin_create_typed_datawriter(
            void *writer)
        {
            /* This function is only called from DDS_Publisher_create_datawriter
            so writer is guaranteed to have a valid (i.e. non-NULL) value */
            DDSDataWriter *cpp_writer = 
            new FunctionActiveStateReportDataWriter((DDS_DataWriter*)writer);
            return cpp_writer;   
        }

        #ifndef RTI_CERT
        void 
        FunctionActiveStateReportPlugin_delete_typed_datawriter(
            void *wrapper)
        {
            /* This function is only called from DDS_Publisher_create_datawriter
            and DDS_Publisher_delete_datawriter so wrapper is guaranteed to have
            a valid (i.e. non-NULL) value */
            DDSDataWriter_impl *cpp_writer = (DDSDataWriter_impl *) wrapper;
            FunctionActiveStateReportDataWriter *t_writer  = 
            static_cast<FunctionActiveStateReportDataWriter *>(cpp_writer);
            delete t_writer;
        }
        #endif

        void* 
        FunctionActiveStateReportPlugin_create_typed_datareader(
            void *reader)
        {
            /* This function is only called from DDS_Subscriber_create_datareader
            so reader is guaranteed to have a valid (i.e. non-NULL) value */
            DDSDataReader *cpp_reader = 
            new FunctionActiveStateReportDataReader((DDS_DataReader*)reader);
            return cpp_reader;      
        }

        #ifndef RTI_CERT
        void
        FunctionActiveStateReportPlugin_delete_typed_datareader(
            void *wrapper)
        {
            /* This function is only called from DDS_Subscriber_create_datareader
            and DDS_Subscriber_delete_datareader so wrapper is guaranteed to have
            a valid (i.e. non-NULL) value */
            DDSDataReader_impl *cpp_reader = (DDSDataReader_impl *) wrapper;
            FunctionActiveStateReportDataReader *t_reader = 
            static_cast<FunctionActiveStateReportDataReader *>(cpp_reader);
            delete t_reader;
        }
        #endif

        /* --------------------------------------------------------------------------
        *  Sample Support functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        FunctionActiveStateReportPlugin_create_sample(
            struct NDDS_Type_Plugin *plugin, void **sample, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            *sample = (void *) FunctionActiveStateReport_create();
            return (sample != NULL);
        }

        #ifndef RTI_CERT
        RTI_BOOL
        FunctionActiveStateReportPlugin_delete_sample(
            struct NDDS_Type_Plugin *plugin, void *sample, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            /* FunctionActiveStateReport_delete() is a void function
            which expects (sample != NULL). Since FunctionActiveStateReportPlugin_delete_sample
            is an internal function, sample is assumed to be a valid pointer */ 
            FunctionActiveStateReport_delete((FunctionActiveStateReport *) sample);
            return RTI_TRUE;
        }
        #endif

        RTI_BOOL 
        FunctionActiveStateReportPlugin_copy_sample(
            struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            return FunctionActiveStateReport_copy(
                (FunctionActiveStateReport *)dst,
                (const FunctionActiveStateReport *)src);
        }
        /* --------------------------------------------------------------------------
        *  Type FunctionActiveStateReport Plugin Instantiation
        * -------------------------------------------------------------------------- */

        NDDSCDREncapsulation FunctionActiveStateReportEncapsulationKind[] =
        { {0,0} };

        struct NDDS_Type_Plugin FunctionActiveStateReportTypePlugin =
        {
            {0, 0},                     /* NDDS_Type_PluginVersion */
            NULL,                       /* DDS_TypeCode_t* */
            FunctionActiveStateReportEncapsulationKind,
            NDDS_TYPEPLUGIN_NO_KEY,     /* NDDS_TypePluginKeyKind */
            NewRT::TraitKeypad::FunctionActiveStateReport_cdr_serialize,
            NewRT::TraitKeypad::FunctionActiveStateReport_cdr_deserialize,
            NewRT::TraitKeypad::FunctionActiveStateReport_get_serialized_sample_max_size,
            NULL, NULL, NULL,           /* key support functions*/
            NewRT::TraitKeypad::FunctionActiveStateReportPlugin_create_sample,
            #ifndef RTI_CERT
            NewRT::TraitKeypad::FunctionActiveStateReportPlugin_delete_sample,
            #else
            NULL,
            #endif
            NewRT::TraitKeypad::FunctionActiveStateReportPlugin_copy_sample,
            PluginHelper_get_key_kind,
            PluginHelper_instance_to_keyhash,
            NewRT::TraitKeypad::FunctionActiveStateReportPlugin_create_typed_datawriter,
            #ifndef RTI_CERT
            NewRT::TraitKeypad::FunctionActiveStateReportPlugin_delete_typed_datawriter,
            #else
            NULL,
            #endif
            NewRT::TraitKeypad::FunctionActiveStateReportPlugin_create_typed_datareader,
            #ifndef RTI_CERT
            NewRT::TraitKeypad::FunctionActiveStateReportPlugin_delete_typed_datareader
            #else
            NULL,
            #endif
        };

        /* --------------------------------------------------------------------------
        *  Type FunctionActiveStateReport Plugin Methods
        * -------------------------------------------------------------------------- */

        struct NDDS_Type_Plugin *
        FunctionActiveStateReportTypePlugin_get(void) 
        { 
            return &FunctionActiveStateReportTypePlugin;
        } 

        const char*
        FunctionActiveStateReportTypePlugin_get_default_type_name(void) 
        { 
            return FunctionActiveStateReportTYPENAME;
        } 

        NDDS_TypePluginKeyKind 
        FunctionActiveStateReport_get_key_kind(
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
        KeySwitchStateReport_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            KeySwitchStateReport *sample = (KeySwitchStateReport *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if(!NewRT::TraitCommon::TraitValue_cdr_serialize(
                stream,
                &sample->state,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTI_BOOL 
        KeySwitchStateReport_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            KeySwitchStateReport *sample = (KeySwitchStateReport *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if(!NewRT::TraitCommon::TraitValue_cdr_deserialize(
                stream,
                &sample->state,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;

        }

        RTI_UINT32
        KeySwitchStateReport_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += NewRT::TraitCommon::TraitValue_get_serialized_sample_max_size(
                plugin, current_alignment, param);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        KeySwitchStateReport_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return KeySwitchStateReport_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        KeySwitchStateReport_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return KeySwitchStateReport_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        KeySwitchStateReport_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return KeySwitchStateReport_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        Typed-endpoint support for C++:
        * -------------------------------------------------------------------------- */

        void* 
        KeySwitchStateReportPlugin_create_typed_datawriter(
            void *writer)
        {
            /* This function is only called from DDS_Publisher_create_datawriter
            so writer is guaranteed to have a valid (i.e. non-NULL) value */
            DDSDataWriter *cpp_writer = 
            new KeySwitchStateReportDataWriter((DDS_DataWriter*)writer);
            return cpp_writer;   
        }

        #ifndef RTI_CERT
        void 
        KeySwitchStateReportPlugin_delete_typed_datawriter(
            void *wrapper)
        {
            /* This function is only called from DDS_Publisher_create_datawriter
            and DDS_Publisher_delete_datawriter so wrapper is guaranteed to have
            a valid (i.e. non-NULL) value */
            DDSDataWriter_impl *cpp_writer = (DDSDataWriter_impl *) wrapper;
            KeySwitchStateReportDataWriter *t_writer  = 
            static_cast<KeySwitchStateReportDataWriter *>(cpp_writer);
            delete t_writer;
        }
        #endif

        void* 
        KeySwitchStateReportPlugin_create_typed_datareader(
            void *reader)
        {
            /* This function is only called from DDS_Subscriber_create_datareader
            so reader is guaranteed to have a valid (i.e. non-NULL) value */
            DDSDataReader *cpp_reader = 
            new KeySwitchStateReportDataReader((DDS_DataReader*)reader);
            return cpp_reader;      
        }

        #ifndef RTI_CERT
        void
        KeySwitchStateReportPlugin_delete_typed_datareader(
            void *wrapper)
        {
            /* This function is only called from DDS_Subscriber_create_datareader
            and DDS_Subscriber_delete_datareader so wrapper is guaranteed to have
            a valid (i.e. non-NULL) value */
            DDSDataReader_impl *cpp_reader = (DDSDataReader_impl *) wrapper;
            KeySwitchStateReportDataReader *t_reader = 
            static_cast<KeySwitchStateReportDataReader *>(cpp_reader);
            delete t_reader;
        }
        #endif

        /* --------------------------------------------------------------------------
        *  Sample Support functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        KeySwitchStateReportPlugin_create_sample(
            struct NDDS_Type_Plugin *plugin, void **sample, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            *sample = (void *) KeySwitchStateReport_create();
            return (sample != NULL);
        }

        #ifndef RTI_CERT
        RTI_BOOL
        KeySwitchStateReportPlugin_delete_sample(
            struct NDDS_Type_Plugin *plugin, void *sample, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            /* KeySwitchStateReport_delete() is a void function
            which expects (sample != NULL). Since KeySwitchStateReportPlugin_delete_sample
            is an internal function, sample is assumed to be a valid pointer */ 
            KeySwitchStateReport_delete((KeySwitchStateReport *) sample);
            return RTI_TRUE;
        }
        #endif

        RTI_BOOL 
        KeySwitchStateReportPlugin_copy_sample(
            struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            return KeySwitchStateReport_copy(
                (KeySwitchStateReport *)dst,
                (const KeySwitchStateReport *)src);
        }
        /* --------------------------------------------------------------------------
        *  Type KeySwitchStateReport Plugin Instantiation
        * -------------------------------------------------------------------------- */

        NDDSCDREncapsulation KeySwitchStateReportEncapsulationKind[] =
        { {0,0} };

        struct NDDS_Type_Plugin KeySwitchStateReportTypePlugin =
        {
            {0, 0},                     /* NDDS_Type_PluginVersion */
            NULL,                       /* DDS_TypeCode_t* */
            KeySwitchStateReportEncapsulationKind,
            NDDS_TYPEPLUGIN_NO_KEY,     /* NDDS_TypePluginKeyKind */
            NewRT::TraitKeypad::KeySwitchStateReport_cdr_serialize,
            NewRT::TraitKeypad::KeySwitchStateReport_cdr_deserialize,
            NewRT::TraitKeypad::KeySwitchStateReport_get_serialized_sample_max_size,
            NULL, NULL, NULL,           /* key support functions*/
            NewRT::TraitKeypad::KeySwitchStateReportPlugin_create_sample,
            #ifndef RTI_CERT
            NewRT::TraitKeypad::KeySwitchStateReportPlugin_delete_sample,
            #else
            NULL,
            #endif
            NewRT::TraitKeypad::KeySwitchStateReportPlugin_copy_sample,
            PluginHelper_get_key_kind,
            PluginHelper_instance_to_keyhash,
            NewRT::TraitKeypad::KeySwitchStateReportPlugin_create_typed_datawriter,
            #ifndef RTI_CERT
            NewRT::TraitKeypad::KeySwitchStateReportPlugin_delete_typed_datawriter,
            #else
            NULL,
            #endif
            NewRT::TraitKeypad::KeySwitchStateReportPlugin_create_typed_datareader,
            #ifndef RTI_CERT
            NewRT::TraitKeypad::KeySwitchStateReportPlugin_delete_typed_datareader
            #else
            NULL,
            #endif
        };

        /* --------------------------------------------------------------------------
        *  Type KeySwitchStateReport Plugin Methods
        * -------------------------------------------------------------------------- */

        struct NDDS_Type_Plugin *
        KeySwitchStateReportTypePlugin_get(void) 
        { 
            return &KeySwitchStateReportTypePlugin;
        } 

        const char*
        KeySwitchStateReportTypePlugin_get_default_type_name(void) 
        { 
            return KeySwitchStateReportTYPENAME;
        } 

        NDDS_TypePluginKeyKind 
        KeySwitchStateReport_get_key_kind(
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
        PvsMode_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            PvsMode *sample = (PvsMode *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);
            if (!CDR_Stream_serialize_enum(stream, sample))
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTI_BOOL 
        PvsMode_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            PvsMode *sample = (PvsMode *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);
            if (!CDR_Stream_deserialize_enum(stream, sample))
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;

        }

        RTI_UINT32
        PvsMode_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += CDR_get_max_size_serialized_enum(current_alignment);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        PvsMode_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return PvsMode_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        PvsMode_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return PvsMode_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        PvsMode_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return PvsMode_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        ExposureState_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            ExposureState *sample = (ExposureState *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);
            if (!CDR_Stream_serialize_enum(stream, sample))
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTI_BOOL 
        ExposureState_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            ExposureState *sample = (ExposureState *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);
            if (!CDR_Stream_deserialize_enum(stream, sample))
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;

        }

        RTI_UINT32
        ExposureState_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += CDR_get_max_size_serialized_enum(current_alignment);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        ExposureState_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return ExposureState_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        ExposureState_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return ExposureState_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        ExposureState_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return ExposureState_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        PvsInformationReport_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            PvsInformationReport *sample = (PvsInformationReport *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if(!NewRT::TraitCommon::TraitValueList_cdr_serialize(
                stream,
                &sample->infos,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTI_BOOL 
        PvsInformationReport_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            PvsInformationReport *sample = (PvsInformationReport *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if(!NewRT::TraitCommon::TraitValueList_cdr_deserialize(
                stream,
                &sample->infos,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;

        }

        RTI_UINT32
        PvsInformationReport_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += NewRT::TraitCommon::TraitValueList_get_serialized_sample_max_size(
                plugin, current_alignment, param);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        PvsInformationReport_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return PvsInformationReport_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        PvsInformationReport_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return PvsInformationReport_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        PvsInformationReport_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return PvsInformationReport_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        Typed-endpoint support for C++:
        * -------------------------------------------------------------------------- */

        void* 
        PvsInformationReportPlugin_create_typed_datawriter(
            void *writer)
        {
            /* This function is only called from DDS_Publisher_create_datawriter
            so writer is guaranteed to have a valid (i.e. non-NULL) value */
            DDSDataWriter *cpp_writer = 
            new PvsInformationReportDataWriter((DDS_DataWriter*)writer);
            return cpp_writer;   
        }

        #ifndef RTI_CERT
        void 
        PvsInformationReportPlugin_delete_typed_datawriter(
            void *wrapper)
        {
            /* This function is only called from DDS_Publisher_create_datawriter
            and DDS_Publisher_delete_datawriter so wrapper is guaranteed to have
            a valid (i.e. non-NULL) value */
            DDSDataWriter_impl *cpp_writer = (DDSDataWriter_impl *) wrapper;
            PvsInformationReportDataWriter *t_writer  = 
            static_cast<PvsInformationReportDataWriter *>(cpp_writer);
            delete t_writer;
        }
        #endif

        void* 
        PvsInformationReportPlugin_create_typed_datareader(
            void *reader)
        {
            /* This function is only called from DDS_Subscriber_create_datareader
            so reader is guaranteed to have a valid (i.e. non-NULL) value */
            DDSDataReader *cpp_reader = 
            new PvsInformationReportDataReader((DDS_DataReader*)reader);
            return cpp_reader;      
        }

        #ifndef RTI_CERT
        void
        PvsInformationReportPlugin_delete_typed_datareader(
            void *wrapper)
        {
            /* This function is only called from DDS_Subscriber_create_datareader
            and DDS_Subscriber_delete_datareader so wrapper is guaranteed to have
            a valid (i.e. non-NULL) value */
            DDSDataReader_impl *cpp_reader = (DDSDataReader_impl *) wrapper;
            PvsInformationReportDataReader *t_reader = 
            static_cast<PvsInformationReportDataReader *>(cpp_reader);
            delete t_reader;
        }
        #endif

        /* --------------------------------------------------------------------------
        *  Sample Support functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        PvsInformationReportPlugin_create_sample(
            struct NDDS_Type_Plugin *plugin, void **sample, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            *sample = (void *) PvsInformationReport_create();
            return (sample != NULL);
        }

        #ifndef RTI_CERT
        RTI_BOOL
        PvsInformationReportPlugin_delete_sample(
            struct NDDS_Type_Plugin *plugin, void *sample, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            /* PvsInformationReport_delete() is a void function
            which expects (sample != NULL). Since PvsInformationReportPlugin_delete_sample
            is an internal function, sample is assumed to be a valid pointer */ 
            PvsInformationReport_delete((PvsInformationReport *) sample);
            return RTI_TRUE;
        }
        #endif

        RTI_BOOL 
        PvsInformationReportPlugin_copy_sample(
            struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            return PvsInformationReport_copy(
                (PvsInformationReport *)dst,
                (const PvsInformationReport *)src);
        }
        /* --------------------------------------------------------------------------
        *  Type PvsInformationReport Plugin Instantiation
        * -------------------------------------------------------------------------- */

        NDDSCDREncapsulation PvsInformationReportEncapsulationKind[] =
        { {0,0} };

        struct NDDS_Type_Plugin PvsInformationReportTypePlugin =
        {
            {0, 0},                     /* NDDS_Type_PluginVersion */
            NULL,                       /* DDS_TypeCode_t* */
            PvsInformationReportEncapsulationKind,
            NDDS_TYPEPLUGIN_NO_KEY,     /* NDDS_TypePluginKeyKind */
            NewRT::TraitKeypad::PvsInformationReport_cdr_serialize,
            NewRT::TraitKeypad::PvsInformationReport_cdr_deserialize,
            NewRT::TraitKeypad::PvsInformationReport_get_serialized_sample_max_size,
            NULL, NULL, NULL,           /* key support functions*/
            NewRT::TraitKeypad::PvsInformationReportPlugin_create_sample,
            #ifndef RTI_CERT
            NewRT::TraitKeypad::PvsInformationReportPlugin_delete_sample,
            #else
            NULL,
            #endif
            NewRT::TraitKeypad::PvsInformationReportPlugin_copy_sample,
            PluginHelper_get_key_kind,
            PluginHelper_instance_to_keyhash,
            NewRT::TraitKeypad::PvsInformationReportPlugin_create_typed_datawriter,
            #ifndef RTI_CERT
            NewRT::TraitKeypad::PvsInformationReportPlugin_delete_typed_datawriter,
            #else
            NULL,
            #endif
            NewRT::TraitKeypad::PvsInformationReportPlugin_create_typed_datareader,
            #ifndef RTI_CERT
            NewRT::TraitKeypad::PvsInformationReportPlugin_delete_typed_datareader
            #else
            NULL,
            #endif
        };

        /* --------------------------------------------------------------------------
        *  Type PvsInformationReport Plugin Methods
        * -------------------------------------------------------------------------- */

        struct NDDS_Type_Plugin *
        PvsInformationReportTypePlugin_get(void) 
        { 
            return &PvsInformationReportTypePlugin;
        } 

        const char*
        PvsInformationReportTypePlugin_get_default_type_name(void) 
        { 
            return PvsInformationReportTYPENAME;
        } 

        NDDS_TypePluginKeyKind 
        PvsInformationReport_get_key_kind(
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
        MotionStatus_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            MotionStatus *sample = (MotionStatus *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);
            if (!CDR_Stream_serialize_enum(stream, sample))
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTI_BOOL 
        MotionStatus_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            MotionStatus *sample = (MotionStatus *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);
            if (!CDR_Stream_deserialize_enum(stream, sample))
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;

        }

        RTI_UINT32
        MotionStatus_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += CDR_get_max_size_serialized_enum(current_alignment);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        MotionStatus_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return MotionStatus_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        MotionStatus_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return MotionStatus_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        MotionStatus_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return MotionStatus_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        MotionStatusItem_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            MotionStatusItem *sample = (MotionStatusItem *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if(!NewRT::TraitCommon::TraitValueList_cdr_serialize(
                stream,
                sample,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTI_BOOL 
        MotionStatusItem_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            MotionStatusItem *sample = (MotionStatusItem *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if(!NewRT::TraitCommon::TraitValueList_cdr_deserialize(
                stream,
                sample,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;

        }

        RTI_UINT32
        MotionStatusItem_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += NewRT::TraitCommon::TraitValueList_get_serialized_sample_max_size(
                plugin, current_alignment, param);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        MotionStatusItem_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return MotionStatusItem_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        MotionStatusItem_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return MotionStatusItem_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        MotionStatusItem_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return MotionStatusItem_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        MotionStatusReport_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            MotionStatusReport *sample = (MotionStatusReport *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_serialize_non_primitive_sequence(
                stream,
                (const struct REDA_Sequence* ) &sample->status,
                (CDR_Stream_SerializeFunction) NewRT::TraitKeypad::MotionStatusItem_cdr_serialize,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTI_BOOL 
        MotionStatusReport_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            MotionStatusReport *sample = (MotionStatusReport *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_deserialize_non_primitive_sequence(
                stream,
                (struct REDA_Sequence*) &sample->status,
                (CDR_Stream_DeserializeFunction) NewRT::TraitKeypad::MotionStatusItem_cdr_deserialize,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;

        }

        RTI_UINT32
        MotionStatusReport_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += CDR_get_max_size_serialized_non_primitive_sequence(
                current_alignment, (15),
                NewRT::TraitKeypad::MotionStatusItem_get_serialized_sample_max_size,
                param);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        MotionStatusReport_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return MotionStatusReport_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        MotionStatusReport_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return MotionStatusReport_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        MotionStatusReport_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return MotionStatusReport_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        Typed-endpoint support for C++:
        * -------------------------------------------------------------------------- */

        void* 
        MotionStatusReportPlugin_create_typed_datawriter(
            void *writer)
        {
            /* This function is only called from DDS_Publisher_create_datawriter
            so writer is guaranteed to have a valid (i.e. non-NULL) value */
            DDSDataWriter *cpp_writer = 
            new MotionStatusReportDataWriter((DDS_DataWriter*)writer);
            return cpp_writer;   
        }

        #ifndef RTI_CERT
        void 
        MotionStatusReportPlugin_delete_typed_datawriter(
            void *wrapper)
        {
            /* This function is only called from DDS_Publisher_create_datawriter
            and DDS_Publisher_delete_datawriter so wrapper is guaranteed to have
            a valid (i.e. non-NULL) value */
            DDSDataWriter_impl *cpp_writer = (DDSDataWriter_impl *) wrapper;
            MotionStatusReportDataWriter *t_writer  = 
            static_cast<MotionStatusReportDataWriter *>(cpp_writer);
            delete t_writer;
        }
        #endif

        void* 
        MotionStatusReportPlugin_create_typed_datareader(
            void *reader)
        {
            /* This function is only called from DDS_Subscriber_create_datareader
            so reader is guaranteed to have a valid (i.e. non-NULL) value */
            DDSDataReader *cpp_reader = 
            new MotionStatusReportDataReader((DDS_DataReader*)reader);
            return cpp_reader;      
        }

        #ifndef RTI_CERT
        void
        MotionStatusReportPlugin_delete_typed_datareader(
            void *wrapper)
        {
            /* This function is only called from DDS_Subscriber_create_datareader
            and DDS_Subscriber_delete_datareader so wrapper is guaranteed to have
            a valid (i.e. non-NULL) value */
            DDSDataReader_impl *cpp_reader = (DDSDataReader_impl *) wrapper;
            MotionStatusReportDataReader *t_reader = 
            static_cast<MotionStatusReportDataReader *>(cpp_reader);
            delete t_reader;
        }
        #endif

        /* --------------------------------------------------------------------------
        *  Sample Support functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        MotionStatusReportPlugin_create_sample(
            struct NDDS_Type_Plugin *plugin, void **sample, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            *sample = (void *) MotionStatusReport_create();
            return (sample != NULL);
        }

        #ifndef RTI_CERT
        RTI_BOOL
        MotionStatusReportPlugin_delete_sample(
            struct NDDS_Type_Plugin *plugin, void *sample, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            /* MotionStatusReport_delete() is a void function
            which expects (sample != NULL). Since MotionStatusReportPlugin_delete_sample
            is an internal function, sample is assumed to be a valid pointer */ 
            MotionStatusReport_delete((MotionStatusReport *) sample);
            return RTI_TRUE;
        }
        #endif

        RTI_BOOL 
        MotionStatusReportPlugin_copy_sample(
            struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            return MotionStatusReport_copy(
                (MotionStatusReport *)dst,
                (const MotionStatusReport *)src);
        }
        /* --------------------------------------------------------------------------
        *  Type MotionStatusReport Plugin Instantiation
        * -------------------------------------------------------------------------- */

        NDDSCDREncapsulation MotionStatusReportEncapsulationKind[] =
        { {0,0} };

        struct NDDS_Type_Plugin MotionStatusReportTypePlugin =
        {
            {0, 0},                     /* NDDS_Type_PluginVersion */
            NULL,                       /* DDS_TypeCode_t* */
            MotionStatusReportEncapsulationKind,
            NDDS_TYPEPLUGIN_NO_KEY,     /* NDDS_TypePluginKeyKind */
            NewRT::TraitKeypad::MotionStatusReport_cdr_serialize,
            NewRT::TraitKeypad::MotionStatusReport_cdr_deserialize,
            NewRT::TraitKeypad::MotionStatusReport_get_serialized_sample_max_size,
            NULL, NULL, NULL,           /* key support functions*/
            NewRT::TraitKeypad::MotionStatusReportPlugin_create_sample,
            #ifndef RTI_CERT
            NewRT::TraitKeypad::MotionStatusReportPlugin_delete_sample,
            #else
            NULL,
            #endif
            NewRT::TraitKeypad::MotionStatusReportPlugin_copy_sample,
            PluginHelper_get_key_kind,
            PluginHelper_instance_to_keyhash,
            NewRT::TraitKeypad::MotionStatusReportPlugin_create_typed_datawriter,
            #ifndef RTI_CERT
            NewRT::TraitKeypad::MotionStatusReportPlugin_delete_typed_datawriter,
            #else
            NULL,
            #endif
            NewRT::TraitKeypad::MotionStatusReportPlugin_create_typed_datareader,
            #ifndef RTI_CERT
            NewRT::TraitKeypad::MotionStatusReportPlugin_delete_typed_datareader
            #else
            NULL,
            #endif
        };

        /* --------------------------------------------------------------------------
        *  Type MotionStatusReport Plugin Methods
        * -------------------------------------------------------------------------- */

        struct NDDS_Type_Plugin *
        MotionStatusReportTypePlugin_get(void) 
        { 
            return &MotionStatusReportTypePlugin;
        } 

        const char*
        MotionStatusReportTypePlugin_get_default_type_name(void) 
        { 
            return MotionStatusReportTYPENAME;
        } 

        NDDS_TypePluginKeyKind 
        MotionStatusReport_get_key_kind(
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
        MessageReport_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            MessageReport *sample = (MessageReport *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if(!NewRT::TraitCommon::MessageIdList_cdr_serialize(
                stream,
                &sample->messages,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTI_BOOL 
        MessageReport_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            MessageReport *sample = (MessageReport *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if(!NewRT::TraitCommon::MessageIdList_cdr_deserialize(
                stream,
                &sample->messages,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;

        }

        RTI_UINT32
        MessageReport_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += NewRT::TraitCommon::MessageIdList_get_serialized_sample_max_size(
                plugin, current_alignment, param);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        MessageReport_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return MessageReport_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        MessageReport_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return MessageReport_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        MessageReport_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return MessageReport_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        Typed-endpoint support for C++:
        * -------------------------------------------------------------------------- */

        void* 
        MessageReportPlugin_create_typed_datawriter(
            void *writer)
        {
            /* This function is only called from DDS_Publisher_create_datawriter
            so writer is guaranteed to have a valid (i.e. non-NULL) value */
            DDSDataWriter *cpp_writer = 
            new MessageReportDataWriter((DDS_DataWriter*)writer);
            return cpp_writer;   
        }

        #ifndef RTI_CERT
        void 
        MessageReportPlugin_delete_typed_datawriter(
            void *wrapper)
        {
            /* This function is only called from DDS_Publisher_create_datawriter
            and DDS_Publisher_delete_datawriter so wrapper is guaranteed to have
            a valid (i.e. non-NULL) value */
            DDSDataWriter_impl *cpp_writer = (DDSDataWriter_impl *) wrapper;
            MessageReportDataWriter *t_writer  = 
            static_cast<MessageReportDataWriter *>(cpp_writer);
            delete t_writer;
        }
        #endif

        void* 
        MessageReportPlugin_create_typed_datareader(
            void *reader)
        {
            /* This function is only called from DDS_Subscriber_create_datareader
            so reader is guaranteed to have a valid (i.e. non-NULL) value */
            DDSDataReader *cpp_reader = 
            new MessageReportDataReader((DDS_DataReader*)reader);
            return cpp_reader;      
        }

        #ifndef RTI_CERT
        void
        MessageReportPlugin_delete_typed_datareader(
            void *wrapper)
        {
            /* This function is only called from DDS_Subscriber_create_datareader
            and DDS_Subscriber_delete_datareader so wrapper is guaranteed to have
            a valid (i.e. non-NULL) value */
            DDSDataReader_impl *cpp_reader = (DDSDataReader_impl *) wrapper;
            MessageReportDataReader *t_reader = 
            static_cast<MessageReportDataReader *>(cpp_reader);
            delete t_reader;
        }
        #endif

        /* --------------------------------------------------------------------------
        *  Sample Support functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        MessageReportPlugin_create_sample(
            struct NDDS_Type_Plugin *plugin, void **sample, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            *sample = (void *) MessageReport_create();
            return (sample != NULL);
        }

        #ifndef RTI_CERT
        RTI_BOOL
        MessageReportPlugin_delete_sample(
            struct NDDS_Type_Plugin *plugin, void *sample, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            /* MessageReport_delete() is a void function
            which expects (sample != NULL). Since MessageReportPlugin_delete_sample
            is an internal function, sample is assumed to be a valid pointer */ 
            MessageReport_delete((MessageReport *) sample);
            return RTI_TRUE;
        }
        #endif

        RTI_BOOL 
        MessageReportPlugin_copy_sample(
            struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            return MessageReport_copy(
                (MessageReport *)dst,
                (const MessageReport *)src);
        }
        /* --------------------------------------------------------------------------
        *  Type MessageReport Plugin Instantiation
        * -------------------------------------------------------------------------- */

        NDDSCDREncapsulation MessageReportEncapsulationKind[] =
        { {0,0} };

        struct NDDS_Type_Plugin MessageReportTypePlugin =
        {
            {0, 0},                     /* NDDS_Type_PluginVersion */
            NULL,                       /* DDS_TypeCode_t* */
            MessageReportEncapsulationKind,
            NDDS_TYPEPLUGIN_NO_KEY,     /* NDDS_TypePluginKeyKind */
            NewRT::TraitKeypad::MessageReport_cdr_serialize,
            NewRT::TraitKeypad::MessageReport_cdr_deserialize,
            NewRT::TraitKeypad::MessageReport_get_serialized_sample_max_size,
            NULL, NULL, NULL,           /* key support functions*/
            NewRT::TraitKeypad::MessageReportPlugin_create_sample,
            #ifndef RTI_CERT
            NewRT::TraitKeypad::MessageReportPlugin_delete_sample,
            #else
            NULL,
            #endif
            NewRT::TraitKeypad::MessageReportPlugin_copy_sample,
            PluginHelper_get_key_kind,
            PluginHelper_instance_to_keyhash,
            NewRT::TraitKeypad::MessageReportPlugin_create_typed_datawriter,
            #ifndef RTI_CERT
            NewRT::TraitKeypad::MessageReportPlugin_delete_typed_datawriter,
            #else
            NULL,
            #endif
            NewRT::TraitKeypad::MessageReportPlugin_create_typed_datareader,
            #ifndef RTI_CERT
            NewRT::TraitKeypad::MessageReportPlugin_delete_typed_datareader
            #else
            NULL,
            #endif
        };

        /* --------------------------------------------------------------------------
        *  Type MessageReport Plugin Methods
        * -------------------------------------------------------------------------- */

        struct NDDS_Type_Plugin *
        MessageReportTypePlugin_get(void) 
        { 
            return &MessageReportTypePlugin;
        } 

        const char*
        MessageReportTypePlugin_get_default_type_name(void) 
        { 
            return MessageReportTYPENAME;
        } 

        NDDS_TypePluginKeyKind 
        MessageReport_get_key_kind(
            struct NDDS_Type_Plugin *plugin,
            void *param)
        {
            UNUSED_ARG(param);
            UNUSED_ARG(plugin);
            return NDDS_TYPEPLUGIN_NO_KEY;
        }

    } /* namespace TraitKeypad  */

} /* namespace NewRT  */

