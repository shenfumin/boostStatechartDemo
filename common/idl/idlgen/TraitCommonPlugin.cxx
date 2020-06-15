/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TraitCommon.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#include "TraitCommon.h"
#include "TraitCommonPlugin.h"
#include "TraitCommonSupport.h"

/*** SOURCE_BEGIN ***/
#ifndef UNUSED_ARG
#define UNUSED_ARG(x) (void)(x)
#endif

namespace NewRT {

    namespace TraitCommon {

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        TreatmentControlProblem_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            TreatmentControlProblem *sample = (TreatmentControlProblem *)void_sample;

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
        TreatmentControlProblem_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            TreatmentControlProblem *sample = (TreatmentControlProblem *)void_sample;

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
        TreatmentControlProblem_get_serialized_sample_max_size(
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
        TreatmentControlProblem_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return TreatmentControlProblem_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        TreatmentControlProblem_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return TreatmentControlProblem_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        TreatmentControlProblem_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return TreatmentControlProblem_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        RelativeSeconds_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            RelativeSeconds *sample = (RelativeSeconds *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_serialize_unsigned_short(
                stream, sample)) {
                return RTI_FALSE;
            }  

            return RTI_TRUE;
        }

        RTI_BOOL 
        RelativeSeconds_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            RelativeSeconds *sample = (RelativeSeconds *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_deserialize_unsigned_short(
                stream, sample)) {
                return RTI_FALSE;
            }  

            return RTI_TRUE;

        }

        RTI_UINT32
        RelativeSeconds_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += CDR_get_max_size_serialized_unsigned_short(
                current_alignment);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        RelativeSeconds_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return RelativeSeconds_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        RelativeSeconds_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return RelativeSeconds_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        RelativeSeconds_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return RelativeSeconds_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        RelativeMsecs_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            RelativeMsecs *sample = (RelativeMsecs *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_serialize_unsigned_short(
                stream, sample)) {
                return RTI_FALSE;
            }  

            return RTI_TRUE;
        }

        RTI_BOOL 
        RelativeMsecs_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            RelativeMsecs *sample = (RelativeMsecs *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_deserialize_unsigned_short(
                stream, sample)) {
                return RTI_FALSE;
            }  

            return RTI_TRUE;

        }

        RTI_UINT32
        RelativeMsecs_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += CDR_get_max_size_serialized_unsigned_short(
                current_alignment);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        RelativeMsecs_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return RelativeMsecs_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        RelativeMsecs_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return RelativeMsecs_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        RelativeMsecs_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return RelativeMsecs_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        TimeSeconds_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            TimeSeconds *sample = (TimeSeconds *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_serialize_unsigned_long(
                stream, sample)) {
                return RTI_FALSE;
            }  

            return RTI_TRUE;
        }

        RTI_BOOL 
        TimeSeconds_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            TimeSeconds *sample = (TimeSeconds *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_deserialize_unsigned_long(
                stream, sample)) {
                return RTI_FALSE;
            }  

            return RTI_TRUE;

        }

        RTI_UINT32
        TimeSeconds_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += CDR_get_max_size_serialized_unsigned_long(
                current_alignment);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        TimeSeconds_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return TimeSeconds_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        TimeSeconds_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return TimeSeconds_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        TimeSeconds_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return TimeSeconds_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        NLSIndex_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            NLSIndex *sample = (NLSIndex *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_serialize_long(
                stream, sample)) {
                return RTI_FALSE;
            }  

            return RTI_TRUE;
        }

        RTI_BOOL 
        NLSIndex_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            NLSIndex *sample = (NLSIndex *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_deserialize_long(
                stream, sample)) {
                return RTI_FALSE;
            }  

            return RTI_TRUE;

        }

        RTI_UINT32
        NLSIndex_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += CDR_get_max_size_serialized_long(
                current_alignment);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        NLSIndex_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return NLSIndex_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        NLSIndex_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return NLSIndex_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        NLSIndex_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return NLSIndex_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        NLSKey_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            NLSKey *sample = (NLSKey *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_serialize_string(
                stream, *sample, (255))) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTI_BOOL 
        NLSKey_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            NLSKey *sample = (NLSKey *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_deserialize_string(
                stream, *sample, (255))) {
                return RTI_FALSE;
            }

            return RTI_TRUE;

        }

        RTI_UINT32
        NLSKey_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += CDR_get_max_size_serialized_string(
                current_alignment, (255)+1);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        NLSKey_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return NLSKey_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        NLSKey_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return NLSKey_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        NLSKey_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return NLSKey_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        NLSText_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            NLSText *sample = (NLSText *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_serialize_string(
                stream, *sample, (255))) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTI_BOOL 
        NLSText_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            NLSText *sample = (NLSText *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_deserialize_string(
                stream, *sample, (255))) {
                return RTI_FALSE;
            }

            return RTI_TRUE;

        }

        RTI_UINT32
        NLSText_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += CDR_get_max_size_serialized_string(
                current_alignment, (255)+1);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        NLSText_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return NLSText_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        NLSText_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return NLSText_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        NLSText_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return NLSText_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        LocaleText_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            LocaleText *sample = (LocaleText *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if(!NewRT::TraitCommon::NLSKey_cdr_serialize(
                stream,
                &sample->ltKey,
                param)) {
                return RTI_FALSE;
            }
            if(!NewRT::TraitCommon::NLSText_cdr_serialize(
                stream,
                &sample->ltText,
                param)) {
                return RTI_FALSE;
            }
            if(!NewRT::TraitCommon::NLSIndex_cdr_serialize(
                stream,
                &sample->ltIndex,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTI_BOOL 
        LocaleText_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            LocaleText *sample = (LocaleText *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if(!NewRT::TraitCommon::NLSKey_cdr_deserialize(
                stream,
                &sample->ltKey,
                param)) {
                return RTI_FALSE;
            }
            if(!NewRT::TraitCommon::NLSText_cdr_deserialize(
                stream,
                &sample->ltText,
                param)) {
                return RTI_FALSE;
            }
            if(!NewRT::TraitCommon::NLSIndex_cdr_deserialize(
                stream,
                &sample->ltIndex,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;

        }

        RTI_UINT32
        LocaleText_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += NewRT::TraitCommon::NLSKey_get_serialized_sample_max_size(
                plugin, current_alignment, param);

            current_alignment += NewRT::TraitCommon::NLSText_get_serialized_sample_max_size(
                plugin, current_alignment, param);

            current_alignment += NewRT::TraitCommon::NLSIndex_get_serialized_sample_max_size(
                plugin, current_alignment, param);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        LocaleText_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return LocaleText_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        LocaleText_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return LocaleText_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        LocaleText_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return LocaleText_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        Typed-endpoint support for C++:
        * -------------------------------------------------------------------------- */

        void* 
        LocaleTextPlugin_create_typed_datawriter(
            void *writer)
        {
            /* This function is only called from DDS_Publisher_create_datawriter
            so writer is guaranteed to have a valid (i.e. non-NULL) value */
            DDSDataWriter *cpp_writer = 
            new LocaleTextDataWriter((DDS_DataWriter*)writer);
            return cpp_writer;   
        }

        #ifndef RTI_CERT
        void 
        LocaleTextPlugin_delete_typed_datawriter(
            void *wrapper)
        {
            /* This function is only called from DDS_Publisher_create_datawriter
            and DDS_Publisher_delete_datawriter so wrapper is guaranteed to have
            a valid (i.e. non-NULL) value */
            DDSDataWriter_impl *cpp_writer = (DDSDataWriter_impl *) wrapper;
            LocaleTextDataWriter *t_writer  = 
            static_cast<LocaleTextDataWriter *>(cpp_writer);
            delete t_writer;
        }
        #endif

        void* 
        LocaleTextPlugin_create_typed_datareader(
            void *reader)
        {
            /* This function is only called from DDS_Subscriber_create_datareader
            so reader is guaranteed to have a valid (i.e. non-NULL) value */
            DDSDataReader *cpp_reader = 
            new LocaleTextDataReader((DDS_DataReader*)reader);
            return cpp_reader;      
        }

        #ifndef RTI_CERT
        void
        LocaleTextPlugin_delete_typed_datareader(
            void *wrapper)
        {
            /* This function is only called from DDS_Subscriber_create_datareader
            and DDS_Subscriber_delete_datareader so wrapper is guaranteed to have
            a valid (i.e. non-NULL) value */
            DDSDataReader_impl *cpp_reader = (DDSDataReader_impl *) wrapper;
            LocaleTextDataReader *t_reader = 
            static_cast<LocaleTextDataReader *>(cpp_reader);
            delete t_reader;
        }
        #endif

        /* --------------------------------------------------------------------------
        *  Sample Support functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        LocaleTextPlugin_create_sample(
            struct NDDS_Type_Plugin *plugin, void **sample, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            *sample = (void *) LocaleText_create();
            return (sample != NULL);
        }

        #ifndef RTI_CERT
        RTI_BOOL
        LocaleTextPlugin_delete_sample(
            struct NDDS_Type_Plugin *plugin, void *sample, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            /* LocaleText_delete() is a void function
            which expects (sample != NULL). Since LocaleTextPlugin_delete_sample
            is an internal function, sample is assumed to be a valid pointer */ 
            LocaleText_delete((LocaleText *) sample);
            return RTI_TRUE;
        }
        #endif

        RTI_BOOL 
        LocaleTextPlugin_copy_sample(
            struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            return LocaleText_copy(
                (LocaleText *)dst,
                (const LocaleText *)src);
        }
        /* --------------------------------------------------------------------------
        *  Type LocaleText Plugin Instantiation
        * -------------------------------------------------------------------------- */

        NDDSCDREncapsulation LocaleTextEncapsulationKind[] =
        { {0,0} };

        struct NDDS_Type_Plugin LocaleTextTypePlugin =
        {
            {0, 0},                     /* NDDS_Type_PluginVersion */
            NULL,                       /* DDS_TypeCode_t* */
            LocaleTextEncapsulationKind,
            NDDS_TYPEPLUGIN_NO_KEY,     /* NDDS_TypePluginKeyKind */
            NewRT::TraitCommon::LocaleText_cdr_serialize,
            NewRT::TraitCommon::LocaleText_cdr_deserialize,
            NewRT::TraitCommon::LocaleText_get_serialized_sample_max_size,
            NULL, NULL, NULL,           /* key support functions*/
            NewRT::TraitCommon::LocaleTextPlugin_create_sample,
            #ifndef RTI_CERT
            NewRT::TraitCommon::LocaleTextPlugin_delete_sample,
            #else
            NULL,
            #endif
            NewRT::TraitCommon::LocaleTextPlugin_copy_sample,
            PluginHelper_get_key_kind,
            PluginHelper_instance_to_keyhash,
            NewRT::TraitCommon::LocaleTextPlugin_create_typed_datawriter,
            #ifndef RTI_CERT
            NewRT::TraitCommon::LocaleTextPlugin_delete_typed_datawriter,
            #else
            NULL,
            #endif
            NewRT::TraitCommon::LocaleTextPlugin_create_typed_datareader,
            #ifndef RTI_CERT
            NewRT::TraitCommon::LocaleTextPlugin_delete_typed_datareader
            #else
            NULL,
            #endif
        };

        /* --------------------------------------------------------------------------
        *  Type LocaleText Plugin Methods
        * -------------------------------------------------------------------------- */

        struct NDDS_Type_Plugin *
        LocaleTextTypePlugin_get(void) 
        { 
            return &LocaleTextTypePlugin;
        } 

        const char*
        LocaleTextTypePlugin_get_default_type_name(void) 
        { 
            return LocaleTextTYPENAME;
        } 

        NDDS_TypePluginKeyKind 
        LocaleText_get_key_kind(
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
        LocaleTextList_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            LocaleTextList *sample = (LocaleTextList *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_serialize_non_primitive_sequence(
                stream,
                (const struct REDA_Sequence* ) sample,
                (CDR_Stream_SerializeFunction) NewRT::TraitCommon::LocaleText_cdr_serialize,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTI_BOOL 
        LocaleTextList_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            LocaleTextList *sample = (LocaleTextList *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_deserialize_non_primitive_sequence(
                stream,
                (struct REDA_Sequence*) sample,
                (CDR_Stream_DeserializeFunction) NewRT::TraitCommon::LocaleText_cdr_deserialize,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;

        }

        RTI_UINT32
        LocaleTextList_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += CDR_get_max_size_serialized_non_primitive_sequence(
                current_alignment, (15),
                NewRT::TraitCommon::LocaleText_get_serialized_sample_max_size,
                param);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        LocaleTextList_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return LocaleTextList_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        LocaleTextList_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return LocaleTextList_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        LocaleTextList_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return LocaleTextList_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        UserTextSeverity_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            UserTextSeverity *sample = (UserTextSeverity *)void_sample;

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
        UserTextSeverity_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            UserTextSeverity *sample = (UserTextSeverity *)void_sample;

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
        UserTextSeverity_get_serialized_sample_max_size(
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
        UserTextSeverity_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return UserTextSeverity_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        UserTextSeverity_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return UserTextSeverity_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        UserTextSeverity_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return UserTextSeverity_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        TraitID_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            TraitID *sample = (TraitID *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_serialize_long(
                stream, sample)) {
                return RTI_FALSE;
            }  

            return RTI_TRUE;
        }

        RTI_BOOL 
        TraitID_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            TraitID *sample = (TraitID *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_deserialize_long(
                stream, sample)) {
                return RTI_FALSE;
            }  

            return RTI_TRUE;

        }

        RTI_UINT32
        TraitID_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += CDR_get_max_size_serialized_long(
                current_alignment);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        TraitID_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return TraitID_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        TraitID_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return TraitID_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        TraitID_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return TraitID_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        TCKind_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            TCKind *sample = (TCKind *)void_sample;

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
        TCKind_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            TCKind *sample = (TCKind *)void_sample;

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
        TCKind_get_serialized_sample_max_size(
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
        TCKind_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return TCKind_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        TCKind_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return TCKind_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        TCKind_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return TCKind_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        TraitData_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            TraitData *sample = (TraitData *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if(!NewRT::TraitCommon::TCKind_cdr_serialize(
                stream,
                &sample->_d,
                param)) {
                return RTI_FALSE;
            }
            switch(sample->_d) {
                case (NewRT::TraitCommon::TK_NULL):
                    {  
                        if (!CDR_Stream_serialize_char(
                            stream, &sample->_u.nullValue)) {
                            return RTI_FALSE;
                    }  
                } break ;
                case (NewRT::TraitCommon::TK_SHORT):
                    {  
                        if (!CDR_Stream_serialize_short(
                            stream, &sample->_u.svalue)) {
                            return RTI_FALSE;
                    }  
                } break ;
                case (NewRT::TraitCommon::TK_LONG):
                    {  
                        if (!CDR_Stream_serialize_long(
                            stream, &sample->_u.lvalue)) {
                            return RTI_FALSE;
                    }  
                } break ;
                case (NewRT::TraitCommon::TK_USHORT):
                    {  
                        if (!CDR_Stream_serialize_unsigned_short(
                            stream, &sample->_u.usvalue)) {
                            return RTI_FALSE;
                    }  
                } break ;
                case (NewRT::TraitCommon::TK_ULONG):
                    {  
                        if (!CDR_Stream_serialize_unsigned_long(
                            stream, &sample->_u.ulvalue)) {
                            return RTI_FALSE;
                    }  
                } break ;
                case (NewRT::TraitCommon::TK_FLOAT):
                    {  
                        if (!CDR_Stream_serialize_float(
                            stream, &sample->_u.fvalue)) {
                            return RTI_FALSE;
                    }  
                } break ;
                case (NewRT::TraitCommon::TK_DOUBLE):
                    {  
                        if (!CDR_Stream_serialize_double(
                            stream, &sample->_u.dvalue)) {
                            return RTI_FALSE;
                    }  
                } break ;
                case (NewRT::TraitCommon::TK_BOOLEAN):
                    {  
                        if (!CDR_Stream_serialize_boolean(
                            stream, &sample->_u.bvalue)) {
                            return RTI_FALSE;
                    }  
                } break ;
                case (NewRT::TraitCommon::TK_CHAR):
                    {  
                        if (!CDR_Stream_serialize_char(
                            stream, &sample->_u.cvalue)) {
                            return RTI_FALSE;
                    }  
                } break ;
                case (NewRT::TraitCommon::TK_OCTET):
                    {  
                        if (!CDR_Stream_serialize_octet(
                            stream, &sample->_u.ovalue)) {
                            return RTI_FALSE;
                    }  
                } break ;
                case (NewRT::TraitCommon::TK_STRING):
                    {  
                        if (!CDR_Stream_serialize_string(
                            stream, sample->_u.strvalue, (255))) {
                            return RTI_FALSE;
                    }
                } break ;
                case (NewRT::TraitCommon::TK_LONGLONG):
                    {  
                        if (!CDR_Stream_serialize_long_long(
                            stream, &sample->_u.llvalue)) {
                            return RTI_FALSE;
                    }  
                } break ;
                case (NewRT::TraitCommon::TK_ULONGLONG):
                    {  
                        if (!CDR_Stream_serialize_unsigned_long_long(
                            stream, &sample->_u.ullvalue)) {
                            return RTI_FALSE;
                    }  
                } break ;
            }

            return RTI_TRUE;
        }

        RTI_BOOL 
        TraitData_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            TraitData *sample = (TraitData *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if(!NewRT::TraitCommon::TCKind_cdr_deserialize(
                stream,
                &sample->_d,
                param)) {
                return RTI_FALSE;
            }
            switch(sample->_d) {
                case (NewRT::TraitCommon::TK_NULL):
                    {  
                        if (!CDR_Stream_deserialize_char(
                            stream, &sample->_u.nullValue)) {
                            return RTI_FALSE;
                    }  
                } break ;
                case (NewRT::TraitCommon::TK_SHORT):
                    {  
                        if (!CDR_Stream_deserialize_short(
                            stream, &sample->_u.svalue)) {
                            return RTI_FALSE;
                    }  
                } break ;
                case (NewRT::TraitCommon::TK_LONG):
                    {  
                        if (!CDR_Stream_deserialize_long(
                            stream, &sample->_u.lvalue)) {
                            return RTI_FALSE;
                    }  
                } break ;
                case (NewRT::TraitCommon::TK_USHORT):
                    {  
                        if (!CDR_Stream_deserialize_unsigned_short(
                            stream, &sample->_u.usvalue)) {
                            return RTI_FALSE;
                    }  
                } break ;
                case (NewRT::TraitCommon::TK_ULONG):
                    {  
                        if (!CDR_Stream_deserialize_unsigned_long(
                            stream, &sample->_u.ulvalue)) {
                            return RTI_FALSE;
                    }  
                } break ;
                case (NewRT::TraitCommon::TK_FLOAT):
                    {  
                        if (!CDR_Stream_deserialize_float(
                            stream, &sample->_u.fvalue)) {
                            return RTI_FALSE;
                    }  
                } break ;
                case (NewRT::TraitCommon::TK_DOUBLE):
                    {  
                        if (!CDR_Stream_deserialize_double(
                            stream, &sample->_u.dvalue)) {
                            return RTI_FALSE;
                    }  
                } break ;
                case (NewRT::TraitCommon::TK_BOOLEAN):
                    {  
                        if (!CDR_Stream_deserialize_boolean(
                            stream, &sample->_u.bvalue)) {
                            return RTI_FALSE;
                    }  
                } break ;
                case (NewRT::TraitCommon::TK_CHAR):
                    {  
                        if (!CDR_Stream_deserialize_char(
                            stream, &sample->_u.cvalue)) {
                            return RTI_FALSE;
                    }  
                } break ;
                case (NewRT::TraitCommon::TK_OCTET):
                    {  
                        if (!CDR_Stream_deserialize_octet(
                            stream, &sample->_u.ovalue)) {
                            return RTI_FALSE;
                    }  
                } break ;
                case (NewRT::TraitCommon::TK_STRING):
                    {  
                        if (!CDR_Stream_deserialize_string(
                            stream, sample->_u.strvalue, (255))) {
                            return RTI_FALSE;
                    }
                } break ;
                case (NewRT::TraitCommon::TK_LONGLONG):
                    {  
                        if (!CDR_Stream_deserialize_long_long(
                            stream, &sample->_u.llvalue)) {
                            return RTI_FALSE;
                    }  
                } break ;
                case (NewRT::TraitCommon::TK_ULONGLONG):
                    {  
                        if (!CDR_Stream_deserialize_unsigned_long_long(
                            stream, &sample->_u.ullvalue)) {
                            return RTI_FALSE;
                    }  
                } break ;
            }

            return RTI_TRUE;

        }

        RTI_UINT32
        TraitData_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 temp, union_max_size_serialized = 0;
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += NewRT::TraitCommon::TCKind_get_serialized_sample_max_size(
                plugin, current_alignment, param);

            temp = CDR_get_max_size_serialized_char(
                current_alignment);
            if (union_max_size_serialized < temp) {
                union_max_size_serialized = temp;
            }
            temp = CDR_get_max_size_serialized_short(
                current_alignment);
            if (union_max_size_serialized < temp) {
                union_max_size_serialized = temp;
            }
            temp = CDR_get_max_size_serialized_long(
                current_alignment);
            if (union_max_size_serialized < temp) {
                union_max_size_serialized = temp;
            }
            temp = CDR_get_max_size_serialized_unsigned_short(
                current_alignment);
            if (union_max_size_serialized < temp) {
                union_max_size_serialized = temp;
            }
            temp = CDR_get_max_size_serialized_unsigned_long(
                current_alignment);
            if (union_max_size_serialized < temp) {
                union_max_size_serialized = temp;
            }
            temp = CDR_get_max_size_serialized_float(
                current_alignment);
            if (union_max_size_serialized < temp) {
                union_max_size_serialized = temp;
            }
            temp = CDR_get_max_size_serialized_double(
                current_alignment);
            if (union_max_size_serialized < temp) {
                union_max_size_serialized = temp;
            }
            temp = CDR_get_max_size_serialized_boolean(
                current_alignment);
            if (union_max_size_serialized < temp) {
                union_max_size_serialized = temp;
            }
            temp = CDR_get_max_size_serialized_char(
                current_alignment);
            if (union_max_size_serialized < temp) {
                union_max_size_serialized = temp;
            }
            temp = CDR_get_max_size_serialized_octet(
                current_alignment);
            if (union_max_size_serialized < temp) {
                union_max_size_serialized = temp;
            }
            temp = CDR_get_max_size_serialized_string(
                current_alignment, (255)+1);
            if (union_max_size_serialized < temp) {
                union_max_size_serialized = temp;
            }
            temp = CDR_get_max_size_serialized_long_long(
                current_alignment);
            if (union_max_size_serialized < temp) {
                union_max_size_serialized = temp;
            }
            temp = CDR_get_max_size_serialized_unsigned_long_long(
                current_alignment);
            if (union_max_size_serialized < temp) {
                union_max_size_serialized = temp;
            }

            return union_max_size_serialized + current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        TraitData_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return TraitData_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        TraitData_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return TraitData_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        TraitData_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return TraitData_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        Typed-endpoint support for C++:
        * -------------------------------------------------------------------------- */

        void* 
        TraitDataPlugin_create_typed_datawriter(
            void *writer)
        {
            /* This function is only called from DDS_Publisher_create_datawriter
            so writer is guaranteed to have a valid (i.e. non-NULL) value */
            DDSDataWriter *cpp_writer = 
            new TraitDataDataWriter((DDS_DataWriter*)writer);
            return cpp_writer;   
        }

        #ifndef RTI_CERT
        void 
        TraitDataPlugin_delete_typed_datawriter(
            void *wrapper)
        {
            /* This function is only called from DDS_Publisher_create_datawriter
            and DDS_Publisher_delete_datawriter so wrapper is guaranteed to have
            a valid (i.e. non-NULL) value */
            DDSDataWriter_impl *cpp_writer = (DDSDataWriter_impl *) wrapper;
            TraitDataDataWriter *t_writer  = 
            static_cast<TraitDataDataWriter *>(cpp_writer);
            delete t_writer;
        }
        #endif

        void* 
        TraitDataPlugin_create_typed_datareader(
            void *reader)
        {
            /* This function is only called from DDS_Subscriber_create_datareader
            so reader is guaranteed to have a valid (i.e. non-NULL) value */
            DDSDataReader *cpp_reader = 
            new TraitDataDataReader((DDS_DataReader*)reader);
            return cpp_reader;      
        }

        #ifndef RTI_CERT
        void
        TraitDataPlugin_delete_typed_datareader(
            void *wrapper)
        {
            /* This function is only called from DDS_Subscriber_create_datareader
            and DDS_Subscriber_delete_datareader so wrapper is guaranteed to have
            a valid (i.e. non-NULL) value */
            DDSDataReader_impl *cpp_reader = (DDSDataReader_impl *) wrapper;
            TraitDataDataReader *t_reader = 
            static_cast<TraitDataDataReader *>(cpp_reader);
            delete t_reader;
        }
        #endif

        /* --------------------------------------------------------------------------
        *  Sample Support functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        TraitDataPlugin_create_sample(
            struct NDDS_Type_Plugin *plugin, void **sample, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            *sample = (void *) TraitData_create();
            return (sample != NULL);
        }

        #ifndef RTI_CERT
        RTI_BOOL
        TraitDataPlugin_delete_sample(
            struct NDDS_Type_Plugin *plugin, void *sample, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            /* TraitData_delete() is a void function
            which expects (sample != NULL). Since TraitDataPlugin_delete_sample
            is an internal function, sample is assumed to be a valid pointer */ 
            TraitData_delete((TraitData *) sample);
            return RTI_TRUE;
        }
        #endif

        RTI_BOOL 
        TraitDataPlugin_copy_sample(
            struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            return TraitData_copy(
                (TraitData *)dst,
                (const TraitData *)src);
        }
        /* --------------------------------------------------------------------------
        *  Type TraitData Plugin Instantiation
        * -------------------------------------------------------------------------- */

        NDDSCDREncapsulation TraitDataEncapsulationKind[] =
        { {0,0} };

        struct NDDS_Type_Plugin TraitDataTypePlugin =
        {
            {0, 0},                     /* NDDS_Type_PluginVersion */
            NULL,                       /* DDS_TypeCode_t* */
            TraitDataEncapsulationKind,
            NDDS_TYPEPLUGIN_NO_KEY,     /* NDDS_TypePluginKeyKind */
            NewRT::TraitCommon::TraitData_cdr_serialize,
            NewRT::TraitCommon::TraitData_cdr_deserialize,
            NewRT::TraitCommon::TraitData_get_serialized_sample_max_size,
            NULL, NULL, NULL,           /* key support functions*/
            NewRT::TraitCommon::TraitDataPlugin_create_sample,
            #ifndef RTI_CERT
            NewRT::TraitCommon::TraitDataPlugin_delete_sample,
            #else
            NULL,
            #endif
            NewRT::TraitCommon::TraitDataPlugin_copy_sample,
            PluginHelper_get_key_kind,
            PluginHelper_instance_to_keyhash,
            NewRT::TraitCommon::TraitDataPlugin_create_typed_datawriter,
            #ifndef RTI_CERT
            NewRT::TraitCommon::TraitDataPlugin_delete_typed_datawriter,
            #else
            NULL,
            #endif
            NewRT::TraitCommon::TraitDataPlugin_create_typed_datareader,
            #ifndef RTI_CERT
            NewRT::TraitCommon::TraitDataPlugin_delete_typed_datareader
            #else
            NULL,
            #endif
        };

        /* --------------------------------------------------------------------------
        *  Type TraitData Plugin Methods
        * -------------------------------------------------------------------------- */

        struct NDDS_Type_Plugin *
        TraitDataTypePlugin_get(void) 
        { 
            return &TraitDataTypePlugin;
        } 

        const char*
        TraitDataTypePlugin_get_default_type_name(void) 
        { 
            return TraitDataTYPENAME;
        } 

        NDDS_TypePluginKeyKind 
        TraitData_get_key_kind(
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
        RegExp_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            RegExp *sample = (RegExp *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_serialize_string(
                stream, *sample, (255))) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTI_BOOL 
        RegExp_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            RegExp *sample = (RegExp *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_deserialize_string(
                stream, *sample, (255))) {
                return RTI_FALSE;
            }

            return RTI_TRUE;

        }

        RTI_UINT32
        RegExp_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += CDR_get_max_size_serialized_string(
                current_alignment, (255)+1);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        RegExp_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return RegExp_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        RegExp_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return RegExp_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        RegExp_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return RegExp_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        TraitType_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            TraitType *sample = (TraitType *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if(!NewRT::TraitCommon::TCKind_cdr_serialize(
                stream,
                sample,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTI_BOOL 
        TraitType_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            TraitType *sample = (TraitType *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if(!NewRT::TraitCommon::TCKind_cdr_deserialize(
                stream,
                sample,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;

        }

        RTI_UINT32
        TraitType_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += NewRT::TraitCommon::TCKind_get_serialized_sample_max_size(
                plugin, current_alignment, param);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        TraitType_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return TraitType_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        TraitType_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return TraitType_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        TraitType_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return TraitType_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        TraitValue_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            TraitValue *sample = (TraitValue *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if(!NewRT::TraitCommon::TraitID_cdr_serialize(
                stream,
                &sample->tid,
                param)) {
                return RTI_FALSE;
            }
            if(!NewRT::TraitCommon::TraitData_cdr_serialize(
                stream,
                &sample->tval,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTI_BOOL 
        TraitValue_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            TraitValue *sample = (TraitValue *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if(!NewRT::TraitCommon::TraitID_cdr_deserialize(
                stream,
                &sample->tid,
                param)) {
                return RTI_FALSE;
            }
            if(!NewRT::TraitCommon::TraitData_cdr_deserialize(
                stream,
                &sample->tval,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;

        }

        RTI_UINT32
        TraitValue_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += NewRT::TraitCommon::TraitID_get_serialized_sample_max_size(
                plugin, current_alignment, param);

            current_alignment += NewRT::TraitCommon::TraitData_get_serialized_sample_max_size(
                plugin, current_alignment, param);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        TraitValue_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return TraitValue_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        TraitValue_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return TraitValue_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        TraitValue_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return TraitValue_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        Typed-endpoint support for C++:
        * -------------------------------------------------------------------------- */

        void* 
        TraitValuePlugin_create_typed_datawriter(
            void *writer)
        {
            /* This function is only called from DDS_Publisher_create_datawriter
            so writer is guaranteed to have a valid (i.e. non-NULL) value */
            DDSDataWriter *cpp_writer = 
            new TraitValueDataWriter((DDS_DataWriter*)writer);
            return cpp_writer;   
        }

        #ifndef RTI_CERT
        void 
        TraitValuePlugin_delete_typed_datawriter(
            void *wrapper)
        {
            /* This function is only called from DDS_Publisher_create_datawriter
            and DDS_Publisher_delete_datawriter so wrapper is guaranteed to have
            a valid (i.e. non-NULL) value */
            DDSDataWriter_impl *cpp_writer = (DDSDataWriter_impl *) wrapper;
            TraitValueDataWriter *t_writer  = 
            static_cast<TraitValueDataWriter *>(cpp_writer);
            delete t_writer;
        }
        #endif

        void* 
        TraitValuePlugin_create_typed_datareader(
            void *reader)
        {
            /* This function is only called from DDS_Subscriber_create_datareader
            so reader is guaranteed to have a valid (i.e. non-NULL) value */
            DDSDataReader *cpp_reader = 
            new TraitValueDataReader((DDS_DataReader*)reader);
            return cpp_reader;      
        }

        #ifndef RTI_CERT
        void
        TraitValuePlugin_delete_typed_datareader(
            void *wrapper)
        {
            /* This function is only called from DDS_Subscriber_create_datareader
            and DDS_Subscriber_delete_datareader so wrapper is guaranteed to have
            a valid (i.e. non-NULL) value */
            DDSDataReader_impl *cpp_reader = (DDSDataReader_impl *) wrapper;
            TraitValueDataReader *t_reader = 
            static_cast<TraitValueDataReader *>(cpp_reader);
            delete t_reader;
        }
        #endif

        /* --------------------------------------------------------------------------
        *  Sample Support functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        TraitValuePlugin_create_sample(
            struct NDDS_Type_Plugin *plugin, void **sample, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            *sample = (void *) TraitValue_create();
            return (sample != NULL);
        }

        #ifndef RTI_CERT
        RTI_BOOL
        TraitValuePlugin_delete_sample(
            struct NDDS_Type_Plugin *plugin, void *sample, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            /* TraitValue_delete() is a void function
            which expects (sample != NULL). Since TraitValuePlugin_delete_sample
            is an internal function, sample is assumed to be a valid pointer */ 
            TraitValue_delete((TraitValue *) sample);
            return RTI_TRUE;
        }
        #endif

        RTI_BOOL 
        TraitValuePlugin_copy_sample(
            struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            return TraitValue_copy(
                (TraitValue *)dst,
                (const TraitValue *)src);
        }
        /* --------------------------------------------------------------------------
        *  Type TraitValue Plugin Instantiation
        * -------------------------------------------------------------------------- */

        NDDSCDREncapsulation TraitValueEncapsulationKind[] =
        { {0,0} };

        struct NDDS_Type_Plugin TraitValueTypePlugin =
        {
            {0, 0},                     /* NDDS_Type_PluginVersion */
            NULL,                       /* DDS_TypeCode_t* */
            TraitValueEncapsulationKind,
            NDDS_TYPEPLUGIN_NO_KEY,     /* NDDS_TypePluginKeyKind */
            NewRT::TraitCommon::TraitValue_cdr_serialize,
            NewRT::TraitCommon::TraitValue_cdr_deserialize,
            NewRT::TraitCommon::TraitValue_get_serialized_sample_max_size,
            NULL, NULL, NULL,           /* key support functions*/
            NewRT::TraitCommon::TraitValuePlugin_create_sample,
            #ifndef RTI_CERT
            NewRT::TraitCommon::TraitValuePlugin_delete_sample,
            #else
            NULL,
            #endif
            NewRT::TraitCommon::TraitValuePlugin_copy_sample,
            PluginHelper_get_key_kind,
            PluginHelper_instance_to_keyhash,
            NewRT::TraitCommon::TraitValuePlugin_create_typed_datawriter,
            #ifndef RTI_CERT
            NewRT::TraitCommon::TraitValuePlugin_delete_typed_datawriter,
            #else
            NULL,
            #endif
            NewRT::TraitCommon::TraitValuePlugin_create_typed_datareader,
            #ifndef RTI_CERT
            NewRT::TraitCommon::TraitValuePlugin_delete_typed_datareader
            #else
            NULL,
            #endif
        };

        /* --------------------------------------------------------------------------
        *  Type TraitValue Plugin Methods
        * -------------------------------------------------------------------------- */

        struct NDDS_Type_Plugin *
        TraitValueTypePlugin_get(void) 
        { 
            return &TraitValueTypePlugin;
        } 

        const char*
        TraitValueTypePlugin_get_default_type_name(void) 
        { 
            return TraitValueTYPENAME;
        } 

        NDDS_TypePluginKeyKind 
        TraitValue_get_key_kind(
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
        TraitValueList_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            TraitValueList *sample = (TraitValueList *)void_sample;

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
        TraitValueList_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            TraitValueList *sample = (TraitValueList *)void_sample;

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
        TraitValueList_get_serialized_sample_max_size(
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
        TraitValueList_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return TraitValueList_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        TraitValueList_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return TraitValueList_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        TraitValueList_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return TraitValueList_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        TraitCategory_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            TraitCategory *sample = (TraitCategory *)void_sample;

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
        TraitCategory_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            TraitCategory *sample = (TraitCategory *)void_sample;

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
        TraitCategory_get_serialized_sample_max_size(
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
        TraitCategory_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return TraitCategory_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        TraitCategory_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return TraitCategory_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        TraitCategory_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return TraitCategory_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        TraitPurpose_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            TraitPurpose *sample = (TraitPurpose *)void_sample;

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
        TraitPurpose_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            TraitPurpose *sample = (TraitPurpose *)void_sample;

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
        TraitPurpose_get_serialized_sample_max_size(
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
        TraitPurpose_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return TraitPurpose_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        TraitPurpose_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return TraitPurpose_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        TraitPurpose_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return TraitPurpose_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        MatchNumeric_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            MatchNumeric *sample = (MatchNumeric *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_serialize_double(
                stream, &sample->loValue)) {
                return RTI_FALSE;
            }  
            if (!CDR_Stream_serialize_double(
                stream, &sample->hiValue)) {
                return RTI_FALSE;
            }  

            return RTI_TRUE;
        }

        RTI_BOOL 
        MatchNumeric_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            MatchNumeric *sample = (MatchNumeric *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_deserialize_double(
                stream, &sample->loValue)) {
                return RTI_FALSE;
            }  
            if (!CDR_Stream_deserialize_double(
                stream, &sample->hiValue)) {
                return RTI_FALSE;
            }  

            return RTI_TRUE;

        }

        RTI_UINT32
        MatchNumeric_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += CDR_get_max_size_serialized_double(
                current_alignment);

            current_alignment += CDR_get_max_size_serialized_double(
                current_alignment);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        MatchNumeric_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return MatchNumeric_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        MatchNumeric_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return MatchNumeric_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        MatchNumeric_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return MatchNumeric_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        Typed-endpoint support for C++:
        * -------------------------------------------------------------------------- */

        void* 
        MatchNumericPlugin_create_typed_datawriter(
            void *writer)
        {
            /* This function is only called from DDS_Publisher_create_datawriter
            so writer is guaranteed to have a valid (i.e. non-NULL) value */
            DDSDataWriter *cpp_writer = 
            new MatchNumericDataWriter((DDS_DataWriter*)writer);
            return cpp_writer;   
        }

        #ifndef RTI_CERT
        void 
        MatchNumericPlugin_delete_typed_datawriter(
            void *wrapper)
        {
            /* This function is only called from DDS_Publisher_create_datawriter
            and DDS_Publisher_delete_datawriter so wrapper is guaranteed to have
            a valid (i.e. non-NULL) value */
            DDSDataWriter_impl *cpp_writer = (DDSDataWriter_impl *) wrapper;
            MatchNumericDataWriter *t_writer  = 
            static_cast<MatchNumericDataWriter *>(cpp_writer);
            delete t_writer;
        }
        #endif

        void* 
        MatchNumericPlugin_create_typed_datareader(
            void *reader)
        {
            /* This function is only called from DDS_Subscriber_create_datareader
            so reader is guaranteed to have a valid (i.e. non-NULL) value */
            DDSDataReader *cpp_reader = 
            new MatchNumericDataReader((DDS_DataReader*)reader);
            return cpp_reader;      
        }

        #ifndef RTI_CERT
        void
        MatchNumericPlugin_delete_typed_datareader(
            void *wrapper)
        {
            /* This function is only called from DDS_Subscriber_create_datareader
            and DDS_Subscriber_delete_datareader so wrapper is guaranteed to have
            a valid (i.e. non-NULL) value */
            DDSDataReader_impl *cpp_reader = (DDSDataReader_impl *) wrapper;
            MatchNumericDataReader *t_reader = 
            static_cast<MatchNumericDataReader *>(cpp_reader);
            delete t_reader;
        }
        #endif

        /* --------------------------------------------------------------------------
        *  Sample Support functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        MatchNumericPlugin_create_sample(
            struct NDDS_Type_Plugin *plugin, void **sample, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            *sample = (void *) MatchNumeric_create();
            return (sample != NULL);
        }

        #ifndef RTI_CERT
        RTI_BOOL
        MatchNumericPlugin_delete_sample(
            struct NDDS_Type_Plugin *plugin, void *sample, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            /* MatchNumeric_delete() is a void function
            which expects (sample != NULL). Since MatchNumericPlugin_delete_sample
            is an internal function, sample is assumed to be a valid pointer */ 
            MatchNumeric_delete((MatchNumeric *) sample);
            return RTI_TRUE;
        }
        #endif

        RTI_BOOL 
        MatchNumericPlugin_copy_sample(
            struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            return MatchNumeric_copy(
                (MatchNumeric *)dst,
                (const MatchNumeric *)src);
        }
        /* --------------------------------------------------------------------------
        *  Type MatchNumeric Plugin Instantiation
        * -------------------------------------------------------------------------- */

        NDDSCDREncapsulation MatchNumericEncapsulationKind[] =
        { {0,0} };

        struct NDDS_Type_Plugin MatchNumericTypePlugin =
        {
            {0, 0},                     /* NDDS_Type_PluginVersion */
            NULL,                       /* DDS_TypeCode_t* */
            MatchNumericEncapsulationKind,
            NDDS_TYPEPLUGIN_NO_KEY,     /* NDDS_TypePluginKeyKind */
            NewRT::TraitCommon::MatchNumeric_cdr_serialize,
            NewRT::TraitCommon::MatchNumeric_cdr_deserialize,
            NewRT::TraitCommon::MatchNumeric_get_serialized_sample_max_size,
            NULL, NULL, NULL,           /* key support functions*/
            NewRT::TraitCommon::MatchNumericPlugin_create_sample,
            #ifndef RTI_CERT
            NewRT::TraitCommon::MatchNumericPlugin_delete_sample,
            #else
            NULL,
            #endif
            NewRT::TraitCommon::MatchNumericPlugin_copy_sample,
            PluginHelper_get_key_kind,
            PluginHelper_instance_to_keyhash,
            NewRT::TraitCommon::MatchNumericPlugin_create_typed_datawriter,
            #ifndef RTI_CERT
            NewRT::TraitCommon::MatchNumericPlugin_delete_typed_datawriter,
            #else
            NULL,
            #endif
            NewRT::TraitCommon::MatchNumericPlugin_create_typed_datareader,
            #ifndef RTI_CERT
            NewRT::TraitCommon::MatchNumericPlugin_delete_typed_datareader
            #else
            NULL,
            #endif
        };

        /* --------------------------------------------------------------------------
        *  Type MatchNumeric Plugin Methods
        * -------------------------------------------------------------------------- */

        struct NDDS_Type_Plugin *
        MatchNumericTypePlugin_get(void) 
        { 
            return &MatchNumericTypePlugin;
        } 

        const char*
        MatchNumericTypePlugin_get_default_type_name(void) 
        { 
            return MatchNumericTYPENAME;
        } 

        NDDS_TypePluginKeyKind 
        MatchNumeric_get_key_kind(
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
        MatchDate_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            MatchDate *sample = (MatchDate *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_serialize_string(
                stream, sample->startDate, (255))) {
                return RTI_FALSE;
            }
            if (!CDR_Stream_serialize_string(
                stream, sample->endDate, (255))) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTI_BOOL 
        MatchDate_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            MatchDate *sample = (MatchDate *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_deserialize_string(
                stream, sample->startDate, (255))) {
                return RTI_FALSE;
            }
            if (!CDR_Stream_deserialize_string(
                stream, sample->endDate, (255))) {
                return RTI_FALSE;
            }

            return RTI_TRUE;

        }

        RTI_UINT32
        MatchDate_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += CDR_get_max_size_serialized_string(
                current_alignment, (255)+1);

            current_alignment += CDR_get_max_size_serialized_string(
                current_alignment, (255)+1);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        MatchDate_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return MatchDate_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        MatchDate_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return MatchDate_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        MatchDate_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return MatchDate_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        Typed-endpoint support for C++:
        * -------------------------------------------------------------------------- */

        void* 
        MatchDatePlugin_create_typed_datawriter(
            void *writer)
        {
            /* This function is only called from DDS_Publisher_create_datawriter
            so writer is guaranteed to have a valid (i.e. non-NULL) value */
            DDSDataWriter *cpp_writer = 
            new MatchDateDataWriter((DDS_DataWriter*)writer);
            return cpp_writer;   
        }

        #ifndef RTI_CERT
        void 
        MatchDatePlugin_delete_typed_datawriter(
            void *wrapper)
        {
            /* This function is only called from DDS_Publisher_create_datawriter
            and DDS_Publisher_delete_datawriter so wrapper is guaranteed to have
            a valid (i.e. non-NULL) value */
            DDSDataWriter_impl *cpp_writer = (DDSDataWriter_impl *) wrapper;
            MatchDateDataWriter *t_writer  = 
            static_cast<MatchDateDataWriter *>(cpp_writer);
            delete t_writer;
        }
        #endif

        void* 
        MatchDatePlugin_create_typed_datareader(
            void *reader)
        {
            /* This function is only called from DDS_Subscriber_create_datareader
            so reader is guaranteed to have a valid (i.e. non-NULL) value */
            DDSDataReader *cpp_reader = 
            new MatchDateDataReader((DDS_DataReader*)reader);
            return cpp_reader;      
        }

        #ifndef RTI_CERT
        void
        MatchDatePlugin_delete_typed_datareader(
            void *wrapper)
        {
            /* This function is only called from DDS_Subscriber_create_datareader
            and DDS_Subscriber_delete_datareader so wrapper is guaranteed to have
            a valid (i.e. non-NULL) value */
            DDSDataReader_impl *cpp_reader = (DDSDataReader_impl *) wrapper;
            MatchDateDataReader *t_reader = 
            static_cast<MatchDateDataReader *>(cpp_reader);
            delete t_reader;
        }
        #endif

        /* --------------------------------------------------------------------------
        *  Sample Support functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        MatchDatePlugin_create_sample(
            struct NDDS_Type_Plugin *plugin, void **sample, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            *sample = (void *) MatchDate_create();
            return (sample != NULL);
        }

        #ifndef RTI_CERT
        RTI_BOOL
        MatchDatePlugin_delete_sample(
            struct NDDS_Type_Plugin *plugin, void *sample, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            /* MatchDate_delete() is a void function
            which expects (sample != NULL). Since MatchDatePlugin_delete_sample
            is an internal function, sample is assumed to be a valid pointer */ 
            MatchDate_delete((MatchDate *) sample);
            return RTI_TRUE;
        }
        #endif

        RTI_BOOL 
        MatchDatePlugin_copy_sample(
            struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            return MatchDate_copy(
                (MatchDate *)dst,
                (const MatchDate *)src);
        }
        /* --------------------------------------------------------------------------
        *  Type MatchDate Plugin Instantiation
        * -------------------------------------------------------------------------- */

        NDDSCDREncapsulation MatchDateEncapsulationKind[] =
        { {0,0} };

        struct NDDS_Type_Plugin MatchDateTypePlugin =
        {
            {0, 0},                     /* NDDS_Type_PluginVersion */
            NULL,                       /* DDS_TypeCode_t* */
            MatchDateEncapsulationKind,
            NDDS_TYPEPLUGIN_NO_KEY,     /* NDDS_TypePluginKeyKind */
            NewRT::TraitCommon::MatchDate_cdr_serialize,
            NewRT::TraitCommon::MatchDate_cdr_deserialize,
            NewRT::TraitCommon::MatchDate_get_serialized_sample_max_size,
            NULL, NULL, NULL,           /* key support functions*/
            NewRT::TraitCommon::MatchDatePlugin_create_sample,
            #ifndef RTI_CERT
            NewRT::TraitCommon::MatchDatePlugin_delete_sample,
            #else
            NULL,
            #endif
            NewRT::TraitCommon::MatchDatePlugin_copy_sample,
            PluginHelper_get_key_kind,
            PluginHelper_instance_to_keyhash,
            NewRT::TraitCommon::MatchDatePlugin_create_typed_datawriter,
            #ifndef RTI_CERT
            NewRT::TraitCommon::MatchDatePlugin_delete_typed_datawriter,
            #else
            NULL,
            #endif
            NewRT::TraitCommon::MatchDatePlugin_create_typed_datareader,
            #ifndef RTI_CERT
            NewRT::TraitCommon::MatchDatePlugin_delete_typed_datareader
            #else
            NULL,
            #endif
        };

        /* --------------------------------------------------------------------------
        *  Type MatchDate Plugin Methods
        * -------------------------------------------------------------------------- */

        struct NDDS_Type_Plugin *
        MatchDateTypePlugin_get(void) 
        { 
            return &MatchDateTypePlugin;
        } 

        const char*
        MatchDateTypePlugin_get_default_type_name(void) 
        { 
            return MatchDateTYPENAME;
        } 

        NDDS_TypePluginKeyKind 
        MatchDate_get_key_kind(
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
        TraitMatch_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            TraitMatch *sample = (TraitMatch *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if(!NewRT::TraitCommon::TraitCategory_cdr_serialize(
                stream,
                &sample->_d,
                param)) {
                return RTI_FALSE;
            }
            switch(sample->_d) {
                case (NewRT::TraitCommon::TRAIT_NUMERIC):
                    {  
                        if(!NewRT::TraitCommon::MatchNumeric_cdr_serialize(
                            stream,
                            &sample->_u.limits,
                            param)) {
                            return RTI_FALSE;
                    }
                } break ;
                case (NewRT::TraitCommon::TRAIT_NLSKEY):
                    {  
                        if (!CDR_Stream_serialize_string(
                            stream, sample->_u.key, (255))) {
                            return RTI_FALSE;
                    }
                } break ;
                case (NewRT::TraitCommon::TRAIT_STRING):
                    {  
                        if(!NewRT::TraitCommon::RegExp_cdr_serialize(
                            stream,
                            &sample->_u.pattern,
                            param)) {
                            return RTI_FALSE;
                    }
                } break ;
                case (NewRT::TraitCommon::TRAIT_CHOICE):
                    {  
                        if (!CDR_Stream_serialize_non_primitive_sequence(
                            stream,
                            (const struct REDA_Sequence* ) &sample->_u.choice,
                            (CDR_Stream_SerializeFunction) NewRT::TraitCommon::TraitData_cdr_serialize,
                            param)) {
                            return RTI_FALSE;
                    }
                } break ;
                case (NewRT::TraitCommon::TRAIT_DATE):
                    {  
                        if(!NewRT::TraitCommon::MatchDate_cdr_serialize(
                            stream,
                            &sample->_u.dates,
                            param)) {
                            return RTI_FALSE;
                    }
                } break ;
                case (NewRT::TraitCommon::TRAIT_BOOL):
                    {  
                        if (!CDR_Stream_serialize_boolean(
                            stream, &sample->_u.expected)) {
                            return RTI_FALSE;
                    }  
                } break ;
            }

            return RTI_TRUE;
        }

        RTI_BOOL 
        TraitMatch_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            TraitMatch *sample = (TraitMatch *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if(!NewRT::TraitCommon::TraitCategory_cdr_deserialize(
                stream,
                &sample->_d,
                param)) {
                return RTI_FALSE;
            }
            switch(sample->_d) {
                case (NewRT::TraitCommon::TRAIT_NUMERIC):
                    {  
                        if(!NewRT::TraitCommon::MatchNumeric_cdr_deserialize(
                            stream,
                            &sample->_u.limits,
                            param)) {
                            return RTI_FALSE;
                    }
                } break ;
                case (NewRT::TraitCommon::TRAIT_NLSKEY):
                    {  
                        if (!CDR_Stream_deserialize_string(
                            stream, sample->_u.key, (255))) {
                            return RTI_FALSE;
                    }
                } break ;
                case (NewRT::TraitCommon::TRAIT_STRING):
                    {  
                        if(!NewRT::TraitCommon::RegExp_cdr_deserialize(
                            stream,
                            &sample->_u.pattern,
                            param)) {
                            return RTI_FALSE;
                    }
                } break ;
                case (NewRT::TraitCommon::TRAIT_CHOICE):
                    {  
                        if (!CDR_Stream_deserialize_non_primitive_sequence(
                            stream,
                            (struct REDA_Sequence*) &sample->_u.choice,
                            (CDR_Stream_DeserializeFunction) NewRT::TraitCommon::TraitData_cdr_deserialize,
                            param)) {
                            return RTI_FALSE;
                    }

                } break ;
                case (NewRT::TraitCommon::TRAIT_DATE):
                    {  
                        if(!NewRT::TraitCommon::MatchDate_cdr_deserialize(
                            stream,
                            &sample->_u.dates,
                            param)) {
                            return RTI_FALSE;
                    }
                } break ;
                case (NewRT::TraitCommon::TRAIT_BOOL):
                    {  
                        if (!CDR_Stream_deserialize_boolean(
                            stream, &sample->_u.expected)) {
                            return RTI_FALSE;
                    }  
                } break ;
            }

            return RTI_TRUE;

        }

        RTI_UINT32
        TraitMatch_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 temp, union_max_size_serialized = 0;
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += NewRT::TraitCommon::TraitCategory_get_serialized_sample_max_size(
                plugin, current_alignment, param);

            temp = NewRT::TraitCommon::MatchNumeric_get_serialized_sample_max_size(
                plugin, current_alignment, param);
            if (union_max_size_serialized < temp) {
                union_max_size_serialized = temp;
            }
            temp = CDR_get_max_size_serialized_string(
                current_alignment, (255)+1);
            if (union_max_size_serialized < temp) {
                union_max_size_serialized = temp;
            }
            temp = NewRT::TraitCommon::RegExp_get_serialized_sample_max_size(
                plugin, current_alignment, param);
            if (union_max_size_serialized < temp) {
                union_max_size_serialized = temp;
            }
            temp = CDR_get_max_size_serialized_non_primitive_sequence(
                current_alignment, (10),
                NewRT::TraitCommon::TraitData_get_serialized_sample_max_size,
                param);
            if (union_max_size_serialized < temp) {
                union_max_size_serialized = temp;
            }
            temp = NewRT::TraitCommon::MatchDate_get_serialized_sample_max_size(
                plugin, current_alignment, param);
            if (union_max_size_serialized < temp) {
                union_max_size_serialized = temp;
            }
            temp = CDR_get_max_size_serialized_boolean(
                current_alignment);
            if (union_max_size_serialized < temp) {
                union_max_size_serialized = temp;
            }

            return union_max_size_serialized + current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        TraitMatch_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return TraitMatch_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        TraitMatch_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return TraitMatch_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        TraitMatch_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return TraitMatch_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        Typed-endpoint support for C++:
        * -------------------------------------------------------------------------- */

        void* 
        TraitMatchPlugin_create_typed_datawriter(
            void *writer)
        {
            /* This function is only called from DDS_Publisher_create_datawriter
            so writer is guaranteed to have a valid (i.e. non-NULL) value */
            DDSDataWriter *cpp_writer = 
            new TraitMatchDataWriter((DDS_DataWriter*)writer);
            return cpp_writer;   
        }

        #ifndef RTI_CERT
        void 
        TraitMatchPlugin_delete_typed_datawriter(
            void *wrapper)
        {
            /* This function is only called from DDS_Publisher_create_datawriter
            and DDS_Publisher_delete_datawriter so wrapper is guaranteed to have
            a valid (i.e. non-NULL) value */
            DDSDataWriter_impl *cpp_writer = (DDSDataWriter_impl *) wrapper;
            TraitMatchDataWriter *t_writer  = 
            static_cast<TraitMatchDataWriter *>(cpp_writer);
            delete t_writer;
        }
        #endif

        void* 
        TraitMatchPlugin_create_typed_datareader(
            void *reader)
        {
            /* This function is only called from DDS_Subscriber_create_datareader
            so reader is guaranteed to have a valid (i.e. non-NULL) value */
            DDSDataReader *cpp_reader = 
            new TraitMatchDataReader((DDS_DataReader*)reader);
            return cpp_reader;      
        }

        #ifndef RTI_CERT
        void
        TraitMatchPlugin_delete_typed_datareader(
            void *wrapper)
        {
            /* This function is only called from DDS_Subscriber_create_datareader
            and DDS_Subscriber_delete_datareader so wrapper is guaranteed to have
            a valid (i.e. non-NULL) value */
            DDSDataReader_impl *cpp_reader = (DDSDataReader_impl *) wrapper;
            TraitMatchDataReader *t_reader = 
            static_cast<TraitMatchDataReader *>(cpp_reader);
            delete t_reader;
        }
        #endif

        /* --------------------------------------------------------------------------
        *  Sample Support functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        TraitMatchPlugin_create_sample(
            struct NDDS_Type_Plugin *plugin, void **sample, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            *sample = (void *) TraitMatch_create();
            return (sample != NULL);
        }

        #ifndef RTI_CERT
        RTI_BOOL
        TraitMatchPlugin_delete_sample(
            struct NDDS_Type_Plugin *plugin, void *sample, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            /* TraitMatch_delete() is a void function
            which expects (sample != NULL). Since TraitMatchPlugin_delete_sample
            is an internal function, sample is assumed to be a valid pointer */ 
            TraitMatch_delete((TraitMatch *) sample);
            return RTI_TRUE;
        }
        #endif

        RTI_BOOL 
        TraitMatchPlugin_copy_sample(
            struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            return TraitMatch_copy(
                (TraitMatch *)dst,
                (const TraitMatch *)src);
        }
        /* --------------------------------------------------------------------------
        *  Type TraitMatch Plugin Instantiation
        * -------------------------------------------------------------------------- */

        NDDSCDREncapsulation TraitMatchEncapsulationKind[] =
        { {0,0} };

        struct NDDS_Type_Plugin TraitMatchTypePlugin =
        {
            {0, 0},                     /* NDDS_Type_PluginVersion */
            NULL,                       /* DDS_TypeCode_t* */
            TraitMatchEncapsulationKind,
            NDDS_TYPEPLUGIN_NO_KEY,     /* NDDS_TypePluginKeyKind */
            NewRT::TraitCommon::TraitMatch_cdr_serialize,
            NewRT::TraitCommon::TraitMatch_cdr_deserialize,
            NewRT::TraitCommon::TraitMatch_get_serialized_sample_max_size,
            NULL, NULL, NULL,           /* key support functions*/
            NewRT::TraitCommon::TraitMatchPlugin_create_sample,
            #ifndef RTI_CERT
            NewRT::TraitCommon::TraitMatchPlugin_delete_sample,
            #else
            NULL,
            #endif
            NewRT::TraitCommon::TraitMatchPlugin_copy_sample,
            PluginHelper_get_key_kind,
            PluginHelper_instance_to_keyhash,
            NewRT::TraitCommon::TraitMatchPlugin_create_typed_datawriter,
            #ifndef RTI_CERT
            NewRT::TraitCommon::TraitMatchPlugin_delete_typed_datawriter,
            #else
            NULL,
            #endif
            NewRT::TraitCommon::TraitMatchPlugin_create_typed_datareader,
            #ifndef RTI_CERT
            NewRT::TraitCommon::TraitMatchPlugin_delete_typed_datareader
            #else
            NULL,
            #endif
        };

        /* --------------------------------------------------------------------------
        *  Type TraitMatch Plugin Methods
        * -------------------------------------------------------------------------- */

        struct NDDS_Type_Plugin *
        TraitMatchTypePlugin_get(void) 
        { 
            return &TraitMatchTypePlugin;
        } 

        const char*
        TraitMatchTypePlugin_get_default_type_name(void) 
        { 
            return TraitMatchTYPENAME;
        } 

        NDDS_TypePluginKeyKind 
        TraitMatch_get_key_kind(
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
        LookupMatch_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            LookupMatch *sample = (LookupMatch *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if(!NewRT::TraitCommon::TraitID_cdr_serialize(
                stream,
                &sample->field,
                param)) {
                return RTI_FALSE;
            }
            if(!NewRT::TraitCommon::TraitMatch_cdr_serialize(
                stream,
                &sample->match,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTI_BOOL 
        LookupMatch_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            LookupMatch *sample = (LookupMatch *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if(!NewRT::TraitCommon::TraitID_cdr_deserialize(
                stream,
                &sample->field,
                param)) {
                return RTI_FALSE;
            }
            if(!NewRT::TraitCommon::TraitMatch_cdr_deserialize(
                stream,
                &sample->match,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;

        }

        RTI_UINT32
        LookupMatch_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += NewRT::TraitCommon::TraitID_get_serialized_sample_max_size(
                plugin, current_alignment, param);

            current_alignment += NewRT::TraitCommon::TraitMatch_get_serialized_sample_max_size(
                plugin, current_alignment, param);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        LookupMatch_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return LookupMatch_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        LookupMatch_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return LookupMatch_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        LookupMatch_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return LookupMatch_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        Typed-endpoint support for C++:
        * -------------------------------------------------------------------------- */

        void* 
        LookupMatchPlugin_create_typed_datawriter(
            void *writer)
        {
            /* This function is only called from DDS_Publisher_create_datawriter
            so writer is guaranteed to have a valid (i.e. non-NULL) value */
            DDSDataWriter *cpp_writer = 
            new LookupMatchDataWriter((DDS_DataWriter*)writer);
            return cpp_writer;   
        }

        #ifndef RTI_CERT
        void 
        LookupMatchPlugin_delete_typed_datawriter(
            void *wrapper)
        {
            /* This function is only called from DDS_Publisher_create_datawriter
            and DDS_Publisher_delete_datawriter so wrapper is guaranteed to have
            a valid (i.e. non-NULL) value */
            DDSDataWriter_impl *cpp_writer = (DDSDataWriter_impl *) wrapper;
            LookupMatchDataWriter *t_writer  = 
            static_cast<LookupMatchDataWriter *>(cpp_writer);
            delete t_writer;
        }
        #endif

        void* 
        LookupMatchPlugin_create_typed_datareader(
            void *reader)
        {
            /* This function is only called from DDS_Subscriber_create_datareader
            so reader is guaranteed to have a valid (i.e. non-NULL) value */
            DDSDataReader *cpp_reader = 
            new LookupMatchDataReader((DDS_DataReader*)reader);
            return cpp_reader;      
        }

        #ifndef RTI_CERT
        void
        LookupMatchPlugin_delete_typed_datareader(
            void *wrapper)
        {
            /* This function is only called from DDS_Subscriber_create_datareader
            and DDS_Subscriber_delete_datareader so wrapper is guaranteed to have
            a valid (i.e. non-NULL) value */
            DDSDataReader_impl *cpp_reader = (DDSDataReader_impl *) wrapper;
            LookupMatchDataReader *t_reader = 
            static_cast<LookupMatchDataReader *>(cpp_reader);
            delete t_reader;
        }
        #endif

        /* --------------------------------------------------------------------------
        *  Sample Support functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        LookupMatchPlugin_create_sample(
            struct NDDS_Type_Plugin *plugin, void **sample, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            *sample = (void *) LookupMatch_create();
            return (sample != NULL);
        }

        #ifndef RTI_CERT
        RTI_BOOL
        LookupMatchPlugin_delete_sample(
            struct NDDS_Type_Plugin *plugin, void *sample, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            /* LookupMatch_delete() is a void function
            which expects (sample != NULL). Since LookupMatchPlugin_delete_sample
            is an internal function, sample is assumed to be a valid pointer */ 
            LookupMatch_delete((LookupMatch *) sample);
            return RTI_TRUE;
        }
        #endif

        RTI_BOOL 
        LookupMatchPlugin_copy_sample(
            struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            return LookupMatch_copy(
                (LookupMatch *)dst,
                (const LookupMatch *)src);
        }
        /* --------------------------------------------------------------------------
        *  Type LookupMatch Plugin Instantiation
        * -------------------------------------------------------------------------- */

        NDDSCDREncapsulation LookupMatchEncapsulationKind[] =
        { {0,0} };

        struct NDDS_Type_Plugin LookupMatchTypePlugin =
        {
            {0, 0},                     /* NDDS_Type_PluginVersion */
            NULL,                       /* DDS_TypeCode_t* */
            LookupMatchEncapsulationKind,
            NDDS_TYPEPLUGIN_NO_KEY,     /* NDDS_TypePluginKeyKind */
            NewRT::TraitCommon::LookupMatch_cdr_serialize,
            NewRT::TraitCommon::LookupMatch_cdr_deserialize,
            NewRT::TraitCommon::LookupMatch_get_serialized_sample_max_size,
            NULL, NULL, NULL,           /* key support functions*/
            NewRT::TraitCommon::LookupMatchPlugin_create_sample,
            #ifndef RTI_CERT
            NewRT::TraitCommon::LookupMatchPlugin_delete_sample,
            #else
            NULL,
            #endif
            NewRT::TraitCommon::LookupMatchPlugin_copy_sample,
            PluginHelper_get_key_kind,
            PluginHelper_instance_to_keyhash,
            NewRT::TraitCommon::LookupMatchPlugin_create_typed_datawriter,
            #ifndef RTI_CERT
            NewRT::TraitCommon::LookupMatchPlugin_delete_typed_datawriter,
            #else
            NULL,
            #endif
            NewRT::TraitCommon::LookupMatchPlugin_create_typed_datareader,
            #ifndef RTI_CERT
            NewRT::TraitCommon::LookupMatchPlugin_delete_typed_datareader
            #else
            NULL,
            #endif
        };

        /* --------------------------------------------------------------------------
        *  Type LookupMatch Plugin Methods
        * -------------------------------------------------------------------------- */

        struct NDDS_Type_Plugin *
        LookupMatchTypePlugin_get(void) 
        { 
            return &LookupMatchTypePlugin;
        } 

        const char*
        LookupMatchTypePlugin_get_default_type_name(void) 
        { 
            return LookupMatchTYPENAME;
        } 

        NDDS_TypePluginKeyKind 
        LookupMatch_get_key_kind(
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
        LookupMatchList_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            LookupMatchList *sample = (LookupMatchList *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_serialize_non_primitive_sequence(
                stream,
                (const struct REDA_Sequence* ) sample,
                (CDR_Stream_SerializeFunction) NewRT::TraitCommon::LookupMatch_cdr_serialize,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTI_BOOL 
        LookupMatchList_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            LookupMatchList *sample = (LookupMatchList *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_deserialize_non_primitive_sequence(
                stream,
                (struct REDA_Sequence*) sample,
                (CDR_Stream_DeserializeFunction) NewRT::TraitCommon::LookupMatch_cdr_deserialize,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;

        }

        RTI_UINT32
        LookupMatchList_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += CDR_get_max_size_serialized_non_primitive_sequence(
                current_alignment, (15),
                NewRT::TraitCommon::LookupMatch_get_serialized_sample_max_size,
                param);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        LookupMatchList_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return LookupMatchList_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        LookupMatchList_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return LookupMatchList_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        LookupMatchList_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return LookupMatchList_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        TraitAttr_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            TraitAttr *sample = (TraitAttr *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if(!NewRT::TraitCommon::TraitID_cdr_serialize(
                stream,
                &sample->tid,
                param)) {
                return RTI_FALSE;
            }
            if(!NewRT::TraitCommon::TraitType_cdr_serialize(
                stream,
                &sample->type,
                param)) {
                return RTI_FALSE;
            }
            if(!NewRT::TraitCommon::NLSKey_cdr_serialize(
                stream,
                &sample->name,
                param)) {
                return RTI_FALSE;
            }
            if(!NewRT::TraitCommon::NLSKey_cdr_serialize(
                stream,
                &sample->description,
                param)) {
                return RTI_FALSE;
            }
            if(!NewRT::TraitCommon::TraitMatch_cdr_serialize(
                stream,
                &sample->range,
                param)) {
                return RTI_FALSE;
            }
            if(!NewRT::TraitCommon::TraitPurpose_cdr_serialize(
                stream,
                &sample->purpose,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTI_BOOL 
        TraitAttr_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            TraitAttr *sample = (TraitAttr *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if(!NewRT::TraitCommon::TraitID_cdr_deserialize(
                stream,
                &sample->tid,
                param)) {
                return RTI_FALSE;
            }
            if(!NewRT::TraitCommon::TraitType_cdr_deserialize(
                stream,
                &sample->type,
                param)) {
                return RTI_FALSE;
            }
            if(!NewRT::TraitCommon::NLSKey_cdr_deserialize(
                stream,
                &sample->name,
                param)) {
                return RTI_FALSE;
            }
            if(!NewRT::TraitCommon::NLSKey_cdr_deserialize(
                stream,
                &sample->description,
                param)) {
                return RTI_FALSE;
            }
            if(!NewRT::TraitCommon::TraitMatch_cdr_deserialize(
                stream,
                &sample->range,
                param)) {
                return RTI_FALSE;
            }
            if(!NewRT::TraitCommon::TraitPurpose_cdr_deserialize(
                stream,
                &sample->purpose,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;

        }

        RTI_UINT32
        TraitAttr_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += NewRT::TraitCommon::TraitID_get_serialized_sample_max_size(
                plugin, current_alignment, param);

            current_alignment += NewRT::TraitCommon::TraitType_get_serialized_sample_max_size(
                plugin, current_alignment, param);

            current_alignment += NewRT::TraitCommon::NLSKey_get_serialized_sample_max_size(
                plugin, current_alignment, param);

            current_alignment += NewRT::TraitCommon::NLSKey_get_serialized_sample_max_size(
                plugin, current_alignment, param);

            current_alignment += NewRT::TraitCommon::TraitMatch_get_serialized_sample_max_size(
                plugin, current_alignment, param);

            current_alignment += NewRT::TraitCommon::TraitPurpose_get_serialized_sample_max_size(
                plugin, current_alignment, param);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        TraitAttr_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return TraitAttr_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        TraitAttr_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return TraitAttr_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        TraitAttr_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return TraitAttr_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        Typed-endpoint support for C++:
        * -------------------------------------------------------------------------- */

        void* 
        TraitAttrPlugin_create_typed_datawriter(
            void *writer)
        {
            /* This function is only called from DDS_Publisher_create_datawriter
            so writer is guaranteed to have a valid (i.e. non-NULL) value */
            DDSDataWriter *cpp_writer = 
            new TraitAttrDataWriter((DDS_DataWriter*)writer);
            return cpp_writer;   
        }

        #ifndef RTI_CERT
        void 
        TraitAttrPlugin_delete_typed_datawriter(
            void *wrapper)
        {
            /* This function is only called from DDS_Publisher_create_datawriter
            and DDS_Publisher_delete_datawriter so wrapper is guaranteed to have
            a valid (i.e. non-NULL) value */
            DDSDataWriter_impl *cpp_writer = (DDSDataWriter_impl *) wrapper;
            TraitAttrDataWriter *t_writer  = 
            static_cast<TraitAttrDataWriter *>(cpp_writer);
            delete t_writer;
        }
        #endif

        void* 
        TraitAttrPlugin_create_typed_datareader(
            void *reader)
        {
            /* This function is only called from DDS_Subscriber_create_datareader
            so reader is guaranteed to have a valid (i.e. non-NULL) value */
            DDSDataReader *cpp_reader = 
            new TraitAttrDataReader((DDS_DataReader*)reader);
            return cpp_reader;      
        }

        #ifndef RTI_CERT
        void
        TraitAttrPlugin_delete_typed_datareader(
            void *wrapper)
        {
            /* This function is only called from DDS_Subscriber_create_datareader
            and DDS_Subscriber_delete_datareader so wrapper is guaranteed to have
            a valid (i.e. non-NULL) value */
            DDSDataReader_impl *cpp_reader = (DDSDataReader_impl *) wrapper;
            TraitAttrDataReader *t_reader = 
            static_cast<TraitAttrDataReader *>(cpp_reader);
            delete t_reader;
        }
        #endif

        /* --------------------------------------------------------------------------
        *  Sample Support functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        TraitAttrPlugin_create_sample(
            struct NDDS_Type_Plugin *plugin, void **sample, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            *sample = (void *) TraitAttr_create();
            return (sample != NULL);
        }

        #ifndef RTI_CERT
        RTI_BOOL
        TraitAttrPlugin_delete_sample(
            struct NDDS_Type_Plugin *plugin, void *sample, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            /* TraitAttr_delete() is a void function
            which expects (sample != NULL). Since TraitAttrPlugin_delete_sample
            is an internal function, sample is assumed to be a valid pointer */ 
            TraitAttr_delete((TraitAttr *) sample);
            return RTI_TRUE;
        }
        #endif

        RTI_BOOL 
        TraitAttrPlugin_copy_sample(
            struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            return TraitAttr_copy(
                (TraitAttr *)dst,
                (const TraitAttr *)src);
        }
        /* --------------------------------------------------------------------------
        *  Type TraitAttr Plugin Instantiation
        * -------------------------------------------------------------------------- */

        NDDSCDREncapsulation TraitAttrEncapsulationKind[] =
        { {0,0} };

        struct NDDS_Type_Plugin TraitAttrTypePlugin =
        {
            {0, 0},                     /* NDDS_Type_PluginVersion */
            NULL,                       /* DDS_TypeCode_t* */
            TraitAttrEncapsulationKind,
            NDDS_TYPEPLUGIN_NO_KEY,     /* NDDS_TypePluginKeyKind */
            NewRT::TraitCommon::TraitAttr_cdr_serialize,
            NewRT::TraitCommon::TraitAttr_cdr_deserialize,
            NewRT::TraitCommon::TraitAttr_get_serialized_sample_max_size,
            NULL, NULL, NULL,           /* key support functions*/
            NewRT::TraitCommon::TraitAttrPlugin_create_sample,
            #ifndef RTI_CERT
            NewRT::TraitCommon::TraitAttrPlugin_delete_sample,
            #else
            NULL,
            #endif
            NewRT::TraitCommon::TraitAttrPlugin_copy_sample,
            PluginHelper_get_key_kind,
            PluginHelper_instance_to_keyhash,
            NewRT::TraitCommon::TraitAttrPlugin_create_typed_datawriter,
            #ifndef RTI_CERT
            NewRT::TraitCommon::TraitAttrPlugin_delete_typed_datawriter,
            #else
            NULL,
            #endif
            NewRT::TraitCommon::TraitAttrPlugin_create_typed_datareader,
            #ifndef RTI_CERT
            NewRT::TraitCommon::TraitAttrPlugin_delete_typed_datareader
            #else
            NULL,
            #endif
        };

        /* --------------------------------------------------------------------------
        *  Type TraitAttr Plugin Methods
        * -------------------------------------------------------------------------- */

        struct NDDS_Type_Plugin *
        TraitAttrTypePlugin_get(void) 
        { 
            return &TraitAttrTypePlugin;
        } 

        const char*
        TraitAttrTypePlugin_get_default_type_name(void) 
        { 
            return TraitAttrTYPENAME;
        } 

        NDDS_TypePluginKeyKind 
        TraitAttr_get_key_kind(
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
        TraitAttrList_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            TraitAttrList *sample = (TraitAttrList *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_serialize_non_primitive_sequence(
                stream,
                (const struct REDA_Sequence* ) sample,
                (CDR_Stream_SerializeFunction) NewRT::TraitCommon::TraitAttr_cdr_serialize,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTI_BOOL 
        TraitAttrList_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            TraitAttrList *sample = (TraitAttrList *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_deserialize_non_primitive_sequence(
                stream,
                (struct REDA_Sequence*) sample,
                (CDR_Stream_DeserializeFunction) NewRT::TraitCommon::TraitAttr_cdr_deserialize,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;

        }

        RTI_UINT32
        TraitAttrList_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += CDR_get_max_size_serialized_non_primitive_sequence(
                current_alignment, (15),
                NewRT::TraitCommon::TraitAttr_get_serialized_sample_max_size,
                param);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        TraitAttrList_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return TraitAttrList_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        TraitAttrList_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return TraitAttrList_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        TraitAttrList_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return TraitAttrList_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        MsgID_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            MsgID *sample = (MsgID *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_serialize_long(
                stream, sample)) {
                return RTI_FALSE;
            }  

            return RTI_TRUE;
        }

        RTI_BOOL 
        MsgID_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            MsgID *sample = (MsgID *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_deserialize_long(
                stream, sample)) {
                return RTI_FALSE;
            }  

            return RTI_TRUE;

        }

        RTI_UINT32
        MsgID_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += CDR_get_max_size_serialized_long(
                current_alignment);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        MsgID_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return MsgID_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        MsgID_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return MsgID_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        MsgID_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return MsgID_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        MsgText_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            MsgText *sample = (MsgText *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_serialize_string(
                stream, *sample, (255))) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTI_BOOL 
        MsgText_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            MsgText *sample = (MsgText *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_deserialize_string(
                stream, *sample, (255))) {
                return RTI_FALSE;
            }

            return RTI_TRUE;

        }

        RTI_UINT32
        MsgText_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += CDR_get_max_size_serialized_string(
                current_alignment, (255)+1);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        MsgText_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return MsgText_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        MsgText_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return MsgText_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        MsgText_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return MsgText_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        MsgSeverity_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            MsgSeverity *sample = (MsgSeverity *)void_sample;

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
        MsgSeverity_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            MsgSeverity *sample = (MsgSeverity *)void_sample;

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
        MsgSeverity_get_serialized_sample_max_size(
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
        MsgSeverity_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return MsgSeverity_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        MsgSeverity_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return MsgSeverity_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        MsgSeverity_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return MsgSeverity_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        MsgCategory_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            MsgCategory *sample = (MsgCategory *)void_sample;

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
        MsgCategory_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            MsgCategory *sample = (MsgCategory *)void_sample;

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
        MsgCategory_get_serialized_sample_max_size(
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
        MsgCategory_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return MsgCategory_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        MsgCategory_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return MsgCategory_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        MsgCategory_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return MsgCategory_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        Message_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            Message *sample = (Message *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if(!NewRT::TraitCommon::MsgID_cdr_serialize(
                stream,
                &sample->mid,
                param)) {
                return RTI_FALSE;
            }
            if(!NewRT::TraitCommon::MsgSeverity_cdr_serialize(
                stream,
                &sample->severity,
                param)) {
                return RTI_FALSE;
            }
            if(!NewRT::TraitCommon::MsgText_cdr_serialize(
                stream,
                &sample->description,
                param)) {
                return RTI_FALSE;
            }
            if(!NewRT::TraitCommon::MsgText_cdr_serialize(
                stream,
                &sample->action,
                param)) {
                return RTI_FALSE;
            }
            if(!NewRT::TraitCommon::MsgCategory_cdr_serialize(
                stream,
                &sample->category,
                param)) {
                return RTI_FALSE;
            }
            if (!CDR_Stream_serialize_boolean(
                stream, &sample->needAck)) {
                return RTI_FALSE;
            }  

            return RTI_TRUE;
        }

        RTI_BOOL 
        Message_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            Message *sample = (Message *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if(!NewRT::TraitCommon::MsgID_cdr_deserialize(
                stream,
                &sample->mid,
                param)) {
                return RTI_FALSE;
            }
            if(!NewRT::TraitCommon::MsgSeverity_cdr_deserialize(
                stream,
                &sample->severity,
                param)) {
                return RTI_FALSE;
            }
            if(!NewRT::TraitCommon::MsgText_cdr_deserialize(
                stream,
                &sample->description,
                param)) {
                return RTI_FALSE;
            }
            if(!NewRT::TraitCommon::MsgText_cdr_deserialize(
                stream,
                &sample->action,
                param)) {
                return RTI_FALSE;
            }
            if(!NewRT::TraitCommon::MsgCategory_cdr_deserialize(
                stream,
                &sample->category,
                param)) {
                return RTI_FALSE;
            }
            if (!CDR_Stream_deserialize_boolean(
                stream, &sample->needAck)) {
                return RTI_FALSE;
            }  

            return RTI_TRUE;

        }

        RTI_UINT32
        Message_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += NewRT::TraitCommon::MsgID_get_serialized_sample_max_size(
                plugin, current_alignment, param);

            current_alignment += NewRT::TraitCommon::MsgSeverity_get_serialized_sample_max_size(
                plugin, current_alignment, param);

            current_alignment += NewRT::TraitCommon::MsgText_get_serialized_sample_max_size(
                plugin, current_alignment, param);

            current_alignment += NewRT::TraitCommon::MsgText_get_serialized_sample_max_size(
                plugin, current_alignment, param);

            current_alignment += NewRT::TraitCommon::MsgCategory_get_serialized_sample_max_size(
                plugin, current_alignment, param);

            current_alignment += CDR_get_max_size_serialized_boolean(
                current_alignment);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        Message_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return Message_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        Message_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return Message_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        Message_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return Message_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        Typed-endpoint support for C++:
        * -------------------------------------------------------------------------- */

        void* 
        MessagePlugin_create_typed_datawriter(
            void *writer)
        {
            /* This function is only called from DDS_Publisher_create_datawriter
            so writer is guaranteed to have a valid (i.e. non-NULL) value */
            DDSDataWriter *cpp_writer = 
            new MessageDataWriter((DDS_DataWriter*)writer);
            return cpp_writer;   
        }

        #ifndef RTI_CERT
        void 
        MessagePlugin_delete_typed_datawriter(
            void *wrapper)
        {
            /* This function is only called from DDS_Publisher_create_datawriter
            and DDS_Publisher_delete_datawriter so wrapper is guaranteed to have
            a valid (i.e. non-NULL) value */
            DDSDataWriter_impl *cpp_writer = (DDSDataWriter_impl *) wrapper;
            MessageDataWriter *t_writer  = 
            static_cast<MessageDataWriter *>(cpp_writer);
            delete t_writer;
        }
        #endif

        void* 
        MessagePlugin_create_typed_datareader(
            void *reader)
        {
            /* This function is only called from DDS_Subscriber_create_datareader
            so reader is guaranteed to have a valid (i.e. non-NULL) value */
            DDSDataReader *cpp_reader = 
            new MessageDataReader((DDS_DataReader*)reader);
            return cpp_reader;      
        }

        #ifndef RTI_CERT
        void
        MessagePlugin_delete_typed_datareader(
            void *wrapper)
        {
            /* This function is only called from DDS_Subscriber_create_datareader
            and DDS_Subscriber_delete_datareader so wrapper is guaranteed to have
            a valid (i.e. non-NULL) value */
            DDSDataReader_impl *cpp_reader = (DDSDataReader_impl *) wrapper;
            MessageDataReader *t_reader = 
            static_cast<MessageDataReader *>(cpp_reader);
            delete t_reader;
        }
        #endif

        /* --------------------------------------------------------------------------
        *  Sample Support functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        MessagePlugin_create_sample(
            struct NDDS_Type_Plugin *plugin, void **sample, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            *sample = (void *) Message_create();
            return (sample != NULL);
        }

        #ifndef RTI_CERT
        RTI_BOOL
        MessagePlugin_delete_sample(
            struct NDDS_Type_Plugin *plugin, void *sample, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            /* Message_delete() is a void function
            which expects (sample != NULL). Since MessagePlugin_delete_sample
            is an internal function, sample is assumed to be a valid pointer */ 
            Message_delete((Message *) sample);
            return RTI_TRUE;
        }
        #endif

        RTI_BOOL 
        MessagePlugin_copy_sample(
            struct NDDS_Type_Plugin *plugin, void *dst, const void *src, void *param)
        {
            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            return Message_copy(
                (Message *)dst,
                (const Message *)src);
        }
        /* --------------------------------------------------------------------------
        *  Type Message Plugin Instantiation
        * -------------------------------------------------------------------------- */

        NDDSCDREncapsulation MessageEncapsulationKind[] =
        { {0,0} };

        struct NDDS_Type_Plugin MessageTypePlugin =
        {
            {0, 0},                     /* NDDS_Type_PluginVersion */
            NULL,                       /* DDS_TypeCode_t* */
            MessageEncapsulationKind,
            NDDS_TYPEPLUGIN_NO_KEY,     /* NDDS_TypePluginKeyKind */
            NewRT::TraitCommon::Message_cdr_serialize,
            NewRT::TraitCommon::Message_cdr_deserialize,
            NewRT::TraitCommon::Message_get_serialized_sample_max_size,
            NULL, NULL, NULL,           /* key support functions*/
            NewRT::TraitCommon::MessagePlugin_create_sample,
            #ifndef RTI_CERT
            NewRT::TraitCommon::MessagePlugin_delete_sample,
            #else
            NULL,
            #endif
            NewRT::TraitCommon::MessagePlugin_copy_sample,
            PluginHelper_get_key_kind,
            PluginHelper_instance_to_keyhash,
            NewRT::TraitCommon::MessagePlugin_create_typed_datawriter,
            #ifndef RTI_CERT
            NewRT::TraitCommon::MessagePlugin_delete_typed_datawriter,
            #else
            NULL,
            #endif
            NewRT::TraitCommon::MessagePlugin_create_typed_datareader,
            #ifndef RTI_CERT
            NewRT::TraitCommon::MessagePlugin_delete_typed_datareader
            #else
            NULL,
            #endif
        };

        /* --------------------------------------------------------------------------
        *  Type Message Plugin Methods
        * -------------------------------------------------------------------------- */

        struct NDDS_Type_Plugin *
        MessageTypePlugin_get(void) 
        { 
            return &MessageTypePlugin;
        } 

        const char*
        MessageTypePlugin_get_default_type_name(void) 
        { 
            return MessageTYPENAME;
        } 

        NDDS_TypePluginKeyKind 
        Message_get_key_kind(
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
        MessageList_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            MessageList *sample = (MessageList *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_serialize_non_primitive_sequence(
                stream,
                (const struct REDA_Sequence* ) sample,
                (CDR_Stream_SerializeFunction) NewRT::TraitCommon::Message_cdr_serialize,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        RTI_BOOL 
        MessageList_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            MessageList *sample = (MessageList *)void_sample;

            if ((stream == NULL) || (void_sample == NULL))
            {
                return RTI_FALSE;
            }

            UNUSED_ARG(param);

            if (!CDR_Stream_deserialize_non_primitive_sequence(
                stream,
                (struct REDA_Sequence*) sample,
                (CDR_Stream_DeserializeFunction) NewRT::TraitCommon::Message_cdr_deserialize,
                param)) {
                return RTI_FALSE;
            }

            return RTI_TRUE;

        }

        RTI_UINT32
        MessageList_get_serialized_sample_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            RTI_UINT32 initial_alignment = current_alignment;

            UNUSED_ARG(plugin);
            UNUSED_ARG(param);
            current_alignment += CDR_get_max_size_serialized_non_primitive_sequence(
                current_alignment, (15),
                NewRT::TraitCommon::Message_get_serialized_sample_max_size,
                param);

            return  current_alignment - initial_alignment;
        }
        /* --------------------------------------------------------------------------
        Key Management functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL
        MessageList_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return MessageList_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        MessageList_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return MessageList_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        MessageList_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return MessageList_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        MessageIdList_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            MessageIdList *sample = (MessageIdList *)void_sample;

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
        MessageIdList_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            MessageIdList *sample = (MessageIdList *)void_sample;

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
        MessageIdList_get_serialized_sample_max_size(
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
        MessageIdList_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return MessageIdList_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        MessageIdList_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return MessageIdList_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        MessageIdList_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return MessageIdList_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        SoftwareComponent_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            SoftwareComponent *sample = (SoftwareComponent *)void_sample;

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
        SoftwareComponent_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            SoftwareComponent *sample = (SoftwareComponent *)void_sample;

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
        SoftwareComponent_get_serialized_sample_max_size(
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
        SoftwareComponent_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return SoftwareComponent_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        SoftwareComponent_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return SoftwareComponent_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        SoftwareComponent_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return SoftwareComponent_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

    } /* namespace TraitCommon  */

} /* namespace NewRT  */

