/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MsgId.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#include "MsgId.h"
#include "MsgIdPlugin.h"
#include "MsgIdSupport.h"

/*** SOURCE_BEGIN ***/
#ifndef UNUSED_ARG
#define UNUSED_ARG(x) (void)(x)
#endif

namespace NewRT {

    namespace MsgIdTable {

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        MessageIdCMS_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            MessageIdCMS *sample = (MessageIdCMS *)void_sample;

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
        MessageIdCMS_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            MessageIdCMS *sample = (MessageIdCMS *)void_sample;

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
        MessageIdCMS_get_serialized_sample_max_size(
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
        MessageIdCMS_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return MessageIdCMS_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        MessageIdCMS_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return MessageIdCMS_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        MessageIdCMS_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return MessageIdCMS_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        MessageIdCHAIR_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            MessageIdCHAIR *sample = (MessageIdCHAIR *)void_sample;

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
        MessageIdCHAIR_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            MessageIdCHAIR *sample = (MessageIdCHAIR *)void_sample;

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
        MessageIdCHAIR_get_serialized_sample_max_size(
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
        MessageIdCHAIR_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return MessageIdCHAIR_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        MessageIdCHAIR_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return MessageIdCHAIR_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        MessageIdCHAIR_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return MessageIdCHAIR_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        MessageIdCOUCH_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            MessageIdCOUCH *sample = (MessageIdCOUCH *)void_sample;

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
        MessageIdCOUCH_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            MessageIdCOUCH *sample = (MessageIdCOUCH *)void_sample;

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
        MessageIdCOUCH_get_serialized_sample_max_size(
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
        MessageIdCOUCH_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return MessageIdCOUCH_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        MessageIdCOUCH_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return MessageIdCOUCH_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        MessageIdCOUCH_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return MessageIdCOUCH_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        MessageIdGANTRY_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            MessageIdGANTRY *sample = (MessageIdGANTRY *)void_sample;

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
        MessageIdGANTRY_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            MessageIdGANTRY *sample = (MessageIdGANTRY *)void_sample;

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
        MessageIdGANTRY_get_serialized_sample_max_size(
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
        MessageIdGANTRY_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return MessageIdGANTRY_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        MessageIdGANTRY_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return MessageIdGANTRY_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        MessageIdGANTRY_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return MessageIdGANTRY_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        MessageIdSNS_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            MessageIdSNS *sample = (MessageIdSNS *)void_sample;

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
        MessageIdSNS_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            MessageIdSNS *sample = (MessageIdSNS *)void_sample;

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
        MessageIdSNS_get_serialized_sample_max_size(
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
        MessageIdSNS_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return MessageIdSNS_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        MessageIdSNS_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return MessageIdSNS_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        MessageIdSNS_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return MessageIdSNS_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        MessageIdTCS_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            MessageIdTCS *sample = (MessageIdTCS *)void_sample;

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
        MessageIdTCS_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            MessageIdTCS *sample = (MessageIdTCS *)void_sample;

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
        MessageIdTCS_get_serialized_sample_max_size(
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
        MessageIdTCS_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return MessageIdTCS_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        MessageIdTCS_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return MessageIdTCS_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        MessageIdTCS_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return MessageIdTCS_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        MessageIdBSS_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            MessageIdBSS *sample = (MessageIdBSS *)void_sample;

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
        MessageIdBSS_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            MessageIdBSS *sample = (MessageIdBSS *)void_sample;

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
        MessageIdBSS_get_serialized_sample_max_size(
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
        MessageIdBSS_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return MessageIdBSS_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        MessageIdBSS_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return MessageIdBSS_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        MessageIdBSS_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return MessageIdBSS_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        MessageIdSAF_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            MessageIdSAF *sample = (MessageIdSAF *)void_sample;

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
        MessageIdSAF_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            MessageIdSAF *sample = (MessageIdSAF *)void_sample;

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
        MessageIdSAF_get_serialized_sample_max_size(
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
        MessageIdSAF_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return MessageIdSAF_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        MessageIdSAF_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return MessageIdSAF_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        MessageIdSAF_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return MessageIdSAF_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        MessageIdAIN_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            MessageIdAIN *sample = (MessageIdAIN *)void_sample;

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
        MessageIdAIN_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            MessageIdAIN *sample = (MessageIdAIN *)void_sample;

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
        MessageIdAIN_get_serialized_sample_max_size(
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
        MessageIdAIN_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return MessageIdAIN_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        MessageIdAIN_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return MessageIdAIN_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        MessageIdAIN_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return MessageIdAIN_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        MessageIdSITE_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            MessageIdSITE *sample = (MessageIdSITE *)void_sample;

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
        MessageIdSITE_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            MessageIdSITE *sample = (MessageIdSITE *)void_sample;

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
        MessageIdSITE_get_serialized_sample_max_size(
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
        MessageIdSITE_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return MessageIdSITE_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        MessageIdSITE_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return MessageIdSITE_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        MessageIdSITE_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return MessageIdSITE_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

    } /* namespace MsgIdTable  */

} /* namespace NewRT  */

