/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TraitId.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#include "TraitId.h"
#include "TraitIdPlugin.h"
#include "TraitIdSupport.h"

/*** SOURCE_BEGIN ***/
#ifndef UNUSED_ARG
#define UNUSED_ARG(x) (void)(x)
#endif

namespace NewRT {

    namespace TraitIdTable {

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        TraitIdUser_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            TraitIdUser *sample = (TraitIdUser *)void_sample;

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
        TraitIdUser_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            TraitIdUser *sample = (TraitIdUser *)void_sample;

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
        TraitIdUser_get_serialized_sample_max_size(
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
        TraitIdUser_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return TraitIdUser_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        TraitIdUser_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return TraitIdUser_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        TraitIdUser_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return TraitIdUser_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        TraitIdRoom_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            TraitIdRoom *sample = (TraitIdRoom *)void_sample;

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
        TraitIdRoom_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            TraitIdRoom *sample = (TraitIdRoom *)void_sample;

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
        TraitIdRoom_get_serialized_sample_max_size(
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
        TraitIdRoom_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return TraitIdRoom_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        TraitIdRoom_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return TraitIdRoom_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        TraitIdRoom_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return TraitIdRoom_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        TraitIdTCS_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            TraitIdTCS *sample = (TraitIdTCS *)void_sample;

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
        TraitIdTCS_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            TraitIdTCS *sample = (TraitIdTCS *)void_sample;

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
        TraitIdTCS_get_serialized_sample_max_size(
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
        TraitIdTCS_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return TraitIdTCS_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        TraitIdTCS_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return TraitIdTCS_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        TraitIdTCS_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return TraitIdTCS_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        TraitIdGantry_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            TraitIdGantry *sample = (TraitIdGantry *)void_sample;

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
        TraitIdGantry_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            TraitIdGantry *sample = (TraitIdGantry *)void_sample;

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
        TraitIdGantry_get_serialized_sample_max_size(
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
        TraitIdGantry_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return TraitIdGantry_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        TraitIdGantry_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return TraitIdGantry_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        TraitIdGantry_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return TraitIdGantry_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        TraitIdCouch_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            TraitIdCouch *sample = (TraitIdCouch *)void_sample;

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
        TraitIdCouch_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            TraitIdCouch *sample = (TraitIdCouch *)void_sample;

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
        TraitIdCouch_get_serialized_sample_max_size(
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
        TraitIdCouch_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return TraitIdCouch_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        TraitIdCouch_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return TraitIdCouch_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        TraitIdCouch_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return TraitIdCouch_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        TraitIdClinical_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            TraitIdClinical *sample = (TraitIdClinical *)void_sample;

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
        TraitIdClinical_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            TraitIdClinical *sample = (TraitIdClinical *)void_sample;

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
        TraitIdClinical_get_serialized_sample_max_size(
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
        TraitIdClinical_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return TraitIdClinical_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        TraitIdClinical_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return TraitIdClinical_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        TraitIdClinical_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return TraitIdClinical_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        TraitIdSystem_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            TraitIdSystem *sample = (TraitIdSystem *)void_sample;

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
        TraitIdSystem_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            TraitIdSystem *sample = (TraitIdSystem *)void_sample;

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
        TraitIdSystem_get_serialized_sample_max_size(
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
        TraitIdSystem_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return TraitIdSystem_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        TraitIdSystem_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return TraitIdSystem_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        TraitIdSystem_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return TraitIdSystem_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        TraitIdChair_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            TraitIdChair *sample = (TraitIdChair *)void_sample;

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
        TraitIdChair_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            TraitIdChair *sample = (TraitIdChair *)void_sample;

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
        TraitIdChair_get_serialized_sample_max_size(
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
        TraitIdChair_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return TraitIdChair_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        TraitIdChair_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return TraitIdChair_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        TraitIdChair_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return TraitIdChair_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        TraitIdBSS_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            TraitIdBSS *sample = (TraitIdBSS *)void_sample;

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
        TraitIdBSS_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            TraitIdBSS *sample = (TraitIdBSS *)void_sample;

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
        TraitIdBSS_get_serialized_sample_max_size(
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
        TraitIdBSS_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return TraitIdBSS_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        TraitIdBSS_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return TraitIdBSS_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        TraitIdBSS_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return TraitIdBSS_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        TraitIdKeypad_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            TraitIdKeypad *sample = (TraitIdKeypad *)void_sample;

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
        TraitIdKeypad_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            TraitIdKeypad *sample = (TraitIdKeypad *)void_sample;

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
        TraitIdKeypad_get_serialized_sample_max_size(
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
        TraitIdKeypad_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return TraitIdKeypad_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        TraitIdKeypad_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return TraitIdKeypad_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        TraitIdKeypad_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return TraitIdKeypad_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        TraitIdSAF_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            TraitIdSAF *sample = (TraitIdSAF *)void_sample;

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
        TraitIdSAF_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            TraitIdSAF *sample = (TraitIdSAF *)void_sample;

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
        TraitIdSAF_get_serialized_sample_max_size(
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
        TraitIdSAF_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return TraitIdSAF_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        TraitIdSAF_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return TraitIdSAF_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        TraitIdSAF_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return TraitIdSAF_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        TraitIdLog_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            TraitIdLog *sample = (TraitIdLog *)void_sample;

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
        TraitIdLog_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            TraitIdLog *sample = (TraitIdLog *)void_sample;

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
        TraitIdLog_get_serialized_sample_max_size(
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
        TraitIdLog_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return TraitIdLog_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        TraitIdLog_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return TraitIdLog_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        TraitIdLog_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return TraitIdLog_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        TraitIdConfigure_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            TraitIdConfigure *sample = (TraitIdConfigure *)void_sample;

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
        TraitIdConfigure_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            TraitIdConfigure *sample = (TraitIdConfigure *)void_sample;

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
        TraitIdConfigure_get_serialized_sample_max_size(
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
        TraitIdConfigure_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return TraitIdConfigure_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        TraitIdConfigure_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return TraitIdConfigure_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        TraitIdConfigure_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return TraitIdConfigure_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        TraitIdPDT_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            TraitIdPDT *sample = (TraitIdPDT *)void_sample;

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
        TraitIdPDT_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            TraitIdPDT *sample = (TraitIdPDT *)void_sample;

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
        TraitIdPDT_get_serialized_sample_max_size(
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
        TraitIdPDT_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return TraitIdPDT_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        TraitIdPDT_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return TraitIdPDT_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        TraitIdPDT_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return TraitIdPDT_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        TraitIdPanel_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            TraitIdPanel *sample = (TraitIdPanel *)void_sample;

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
        TraitIdPanel_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            TraitIdPanel *sample = (TraitIdPanel *)void_sample;

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
        TraitIdPanel_get_serialized_sample_max_size(
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
        TraitIdPanel_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return TraitIdPanel_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        TraitIdPanel_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return TraitIdPanel_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        TraitIdPanel_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return TraitIdPanel_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        TraitIdSnout_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            TraitIdSnout *sample = (TraitIdSnout *)void_sample;

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
        TraitIdSnout_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            TraitIdSnout *sample = (TraitIdSnout *)void_sample;

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
        TraitIdSnout_get_serialized_sample_max_size(
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
        TraitIdSnout_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return TraitIdSnout_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        TraitIdSnout_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return TraitIdSnout_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        TraitIdSnout_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return TraitIdSnout_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

        /* --------------------------------------------------------------------------
        (De)Serialize functions:
        * -------------------------------------------------------------------------- */
        RTI_BOOL 
        TraitIdLMS_cdr_serialize(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            TraitIdLMS *sample = (TraitIdLMS *)void_sample;

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
        TraitIdLMS_cdr_deserialize(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            TraitIdLMS *sample = (TraitIdLMS *)void_sample;

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
        TraitIdLMS_get_serialized_sample_max_size(
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
        TraitIdLMS_cdr_serialize_key(
            struct CDR_Stream_t *stream, const void *void_sample, void *param)
        {
            return TraitIdLMS_cdr_serialize(stream, void_sample, param);
        }

        RTI_BOOL
        TraitIdLMS_cdr_deserialize_key(
            struct CDR_Stream_t *stream, void *void_sample, void *param)
        {
            return TraitIdLMS_cdr_deserialize(stream, void_sample, param);
        }

        RTI_UINT32
        TraitIdLMS_get_serialized_key_max_size(
            struct NDDS_Type_Plugin *plugin,
            RTI_UINT32 current_alignment,
            void *param)
        {
            return TraitIdLMS_get_serialized_sample_max_size(plugin, current_alignment, param);
        }

    } /* namespace TraitIdTable  */

} /* namespace NewRT  */

