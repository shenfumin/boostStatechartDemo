/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TraitCommon.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#include "TraitCommon.h"

#ifndef UNUSED_ARG
#define UNUSED_ARG(x) (void)(x)
#endif

/*** SOURCE_BEGIN ***/
namespace NewRT {

    namespace TraitCommon {

        /* ========================================================================= */

        RTI_BOOL
        TreatmentControlProblem_initialize(TreatmentControlProblem* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            /* The following method initializes the enum value to zero. However,
            * some enumerations may not have a member with the value zero. In such
            * cases, it may be desirable to modify the generated code to use a valid
            * enumeration member instead.
            */
            CDR_Primitive_init_enum((CDR_Enum*) sample);
            return RTI_TRUE;
        }

        TreatmentControlProblem *
        TreatmentControlProblem_create(void)
        {
            TreatmentControlProblem* sample;
            OSAPI_Heap_allocate_struct(&sample, TreatmentControlProblem);
            if (sample != NULL) {
                if (!TreatmentControlProblem_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        TreatmentControlProblem_finalize(TreatmentControlProblem* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        TreatmentControlProblem_delete(TreatmentControlProblem*sample)
        {
            if (sample != NULL) {
                /* TreatmentControlProblem_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                TreatmentControlProblem_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        TreatmentControlProblem_copy(TreatmentControlProblem* dst,const TreatmentControlProblem* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            CDR_Primitive_copy_enum((CDR_Enum *)dst, (CDR_Enum *)src);
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'TreatmentControlProblem' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T TreatmentControlProblem
        #define TSeq TreatmentControlProblemSeq
        #define T_initialize NewRT::TraitCommon::TreatmentControlProblem_initialize
        #define T_finalize   NewRT::TraitCommon::TreatmentControlProblem_finalize
        #define T_copy       NewRT::TraitCommon::TreatmentControlProblem_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T TreatmentControlProblem
        #define TSeq TreatmentControlProblemSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        RelativeSeconds_initialize(RelativeSeconds* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            CDR_Primitive_init_unsigned_short(sample);
            return RTI_TRUE;
        }

        RelativeSeconds *
        RelativeSeconds_create(void)
        {
            RelativeSeconds* sample;
            OSAPI_Heap_allocate_struct(&sample, RelativeSeconds);
            if (sample != NULL) {
                if (!RelativeSeconds_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        RelativeSeconds_finalize(RelativeSeconds* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        RelativeSeconds_delete(RelativeSeconds*sample)
        {
            if (sample != NULL) {
                /* RelativeSeconds_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                RelativeSeconds_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        RelativeSeconds_copy(RelativeSeconds* dst,const RelativeSeconds* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            CDR_Primitive_copy_unsigned_short( dst, src);
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'RelativeSeconds' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T RelativeSeconds
        #define TSeq RelativeSecondsSeq
        #define T_initialize NewRT::TraitCommon::RelativeSeconds_initialize
        #define T_finalize   NewRT::TraitCommon::RelativeSeconds_finalize
        #define T_copy       NewRT::TraitCommon::RelativeSeconds_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T RelativeSeconds
        #define TSeq RelativeSecondsSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        RelativeMsecs_initialize(RelativeMsecs* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            CDR_Primitive_init_unsigned_short(sample);
            return RTI_TRUE;
        }

        RelativeMsecs *
        RelativeMsecs_create(void)
        {
            RelativeMsecs* sample;
            OSAPI_Heap_allocate_struct(&sample, RelativeMsecs);
            if (sample != NULL) {
                if (!RelativeMsecs_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        RelativeMsecs_finalize(RelativeMsecs* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        RelativeMsecs_delete(RelativeMsecs*sample)
        {
            if (sample != NULL) {
                /* RelativeMsecs_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                RelativeMsecs_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        RelativeMsecs_copy(RelativeMsecs* dst,const RelativeMsecs* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            CDR_Primitive_copy_unsigned_short( dst, src);
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'RelativeMsecs' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T RelativeMsecs
        #define TSeq RelativeMsecsSeq
        #define T_initialize NewRT::TraitCommon::RelativeMsecs_initialize
        #define T_finalize   NewRT::TraitCommon::RelativeMsecs_finalize
        #define T_copy       NewRT::TraitCommon::RelativeMsecs_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T RelativeMsecs
        #define TSeq RelativeMsecsSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        TimeSeconds_initialize(TimeSeconds* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            CDR_Primitive_init_unsigned_long(sample);
            return RTI_TRUE;
        }

        TimeSeconds *
        TimeSeconds_create(void)
        {
            TimeSeconds* sample;
            OSAPI_Heap_allocate_struct(&sample, TimeSeconds);
            if (sample != NULL) {
                if (!TimeSeconds_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        TimeSeconds_finalize(TimeSeconds* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        TimeSeconds_delete(TimeSeconds*sample)
        {
            if (sample != NULL) {
                /* TimeSeconds_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                TimeSeconds_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        TimeSeconds_copy(TimeSeconds* dst,const TimeSeconds* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            CDR_Primitive_copy_unsigned_long( dst, src);
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'TimeSeconds' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T TimeSeconds
        #define TSeq TimeSecondsSeq
        #define T_initialize NewRT::TraitCommon::TimeSeconds_initialize
        #define T_finalize   NewRT::TraitCommon::TimeSeconds_finalize
        #define T_copy       NewRT::TraitCommon::TimeSeconds_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T TimeSeconds
        #define TSeq TimeSecondsSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        NLSIndex_initialize(NLSIndex* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            CDR_Primitive_init_long(sample);
            return RTI_TRUE;
        }

        NLSIndex *
        NLSIndex_create(void)
        {
            NLSIndex* sample;
            OSAPI_Heap_allocate_struct(&sample, NLSIndex);
            if (sample != NULL) {
                if (!NLSIndex_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        NLSIndex_finalize(NLSIndex* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        NLSIndex_delete(NLSIndex*sample)
        {
            if (sample != NULL) {
                /* NLSIndex_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                NLSIndex_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        NLSIndex_copy(NLSIndex* dst,const NLSIndex* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            CDR_Primitive_copy_long( dst, src);
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'NLSIndex' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T NLSIndex
        #define TSeq NLSIndexSeq
        #define T_initialize NewRT::TraitCommon::NLSIndex_initialize
        #define T_finalize   NewRT::TraitCommon::NLSIndex_finalize
        #define T_copy       NewRT::TraitCommon::NLSIndex_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T NLSIndex
        #define TSeq NLSIndexSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        NLSKey_initialize(NLSKey* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            if (!CDR_String_initialize(sample, (255)))
            {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        NLSKey *
        NLSKey_create(void)
        {
            NLSKey* sample;
            OSAPI_Heap_allocate_struct(&sample, NLSKey);
            if (sample != NULL) {
                if (!NLSKey_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        NLSKey_finalize(NLSKey* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            CDR_String_finalize(sample);
            return RTI_TRUE;
        }

        void
        NLSKey_delete(NLSKey*sample)
        {
            if (sample != NULL) {
                /* NLSKey_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                NLSKey_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        NLSKey_copy(NLSKey* dst,const NLSKey* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            if (!CDR_String_copy( dst, src, (255)))
            {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'NLSKey' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T NLSKey
        #define TSeq NLSKeySeq
        #define T_initialize NewRT::TraitCommon::NLSKey_initialize
        #define T_finalize   NewRT::TraitCommon::NLSKey_finalize
        #define T_copy       NewRT::TraitCommon::NLSKey_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T NLSKey
        #define TSeq NLSKeySeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        NLSText_initialize(NLSText* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            if (!CDR_String_initialize(sample, (255)))
            {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        NLSText *
        NLSText_create(void)
        {
            NLSText* sample;
            OSAPI_Heap_allocate_struct(&sample, NLSText);
            if (sample != NULL) {
                if (!NLSText_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        NLSText_finalize(NLSText* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            CDR_String_finalize(sample);
            return RTI_TRUE;
        }

        void
        NLSText_delete(NLSText*sample)
        {
            if (sample != NULL) {
                /* NLSText_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                NLSText_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        NLSText_copy(NLSText* dst,const NLSText* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            if (!CDR_String_copy( dst, src, (255)))
            {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'NLSText' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T NLSText
        #define TSeq NLSTextSeq
        #define T_initialize NewRT::TraitCommon::NLSText_initialize
        #define T_finalize   NewRT::TraitCommon::NLSText_finalize
        #define T_copy       NewRT::TraitCommon::NLSText_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T NLSText
        #define TSeq NLSTextSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        const char *LocaleTextTYPENAME = "NewRT::TraitCommon::LocaleText";

        RTI_BOOL
        LocaleText_initialize(LocaleText* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            if (!NewRT::TraitCommon::NLSKey_initialize(&sample->ltKey)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::NLSText_initialize(&sample->ltText)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::NLSIndex_initialize(&sample->ltIndex)) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        LocaleText *
        LocaleText_create(void)
        {
            LocaleText* sample;
            OSAPI_Heap_allocate_struct(&sample, LocaleText);
            if (sample != NULL) {
                if (!LocaleText_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        LocaleText_finalize(LocaleText* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            NewRT::TraitCommon::NLSKey_finalize(&sample->ltKey);
            NewRT::TraitCommon::NLSText_finalize(&sample->ltText);
            NewRT::TraitCommon::NLSIndex_finalize(&sample->ltIndex);
            return RTI_TRUE;
        }

        void
        LocaleText_delete(LocaleText*sample)
        {
            if (sample != NULL) {
                /* LocaleText_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                LocaleText_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        LocaleText_copy(LocaleText* dst,const LocaleText* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::NLSKey_copy(
                &dst->ltKey, &src->ltKey)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::NLSText_copy(
                &dst->ltText, &src->ltText)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::NLSIndex_copy(
                &dst->ltIndex, &src->ltIndex)) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'LocaleText' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T LocaleText
        #define TSeq LocaleTextSeq
        #define T_initialize NewRT::TraitCommon::LocaleText_initialize
        #define T_finalize   NewRT::TraitCommon::LocaleText_finalize
        #define T_copy       NewRT::TraitCommon::LocaleText_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T LocaleText
        #define TSeq LocaleTextSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        LocaleTextList_initialize(LocaleTextList* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            if (!NewRT::TraitCommon::LocaleTextSeq_initialize(sample)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::LocaleTextSeq_set_maximum(sample, (15))) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        LocaleTextList *
        LocaleTextList_create(void)
        {
            LocaleTextList* sample;
            OSAPI_Heap_allocate_struct(&sample, LocaleTextList);
            if (sample != NULL) {
                if (!LocaleTextList_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        LocaleTextList_finalize(LocaleTextList* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            NewRT::TraitCommon::LocaleTextSeq_finalize(sample);
            return RTI_TRUE;
        }

        void
        LocaleTextList_delete(LocaleTextList*sample)
        {
            if (sample != NULL) {
                /* LocaleTextList_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                LocaleTextList_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        LocaleTextList_copy(LocaleTextList* dst,const LocaleTextList* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::LocaleTextSeq_copy(  dst,
            src  )) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'LocaleTextList' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T LocaleTextList
        #define TSeq LocaleTextListSeq
        #define T_initialize NewRT::TraitCommon::LocaleTextList_initialize
        #define T_finalize   NewRT::TraitCommon::LocaleTextList_finalize
        #define T_copy       NewRT::TraitCommon::LocaleTextList_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T LocaleTextList
        #define TSeq LocaleTextListSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        UserTextSeverity_initialize(UserTextSeverity* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            /* The following method initializes the enum value to zero. However,
            * some enumerations may not have a member with the value zero. In such
            * cases, it may be desirable to modify the generated code to use a valid
            * enumeration member instead.
            */
            CDR_Primitive_init_enum((CDR_Enum*) sample);
            return RTI_TRUE;
        }

        UserTextSeverity *
        UserTextSeverity_create(void)
        {
            UserTextSeverity* sample;
            OSAPI_Heap_allocate_struct(&sample, UserTextSeverity);
            if (sample != NULL) {
                if (!UserTextSeverity_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        UserTextSeverity_finalize(UserTextSeverity* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        UserTextSeverity_delete(UserTextSeverity*sample)
        {
            if (sample != NULL) {
                /* UserTextSeverity_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                UserTextSeverity_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        UserTextSeverity_copy(UserTextSeverity* dst,const UserTextSeverity* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            CDR_Primitive_copy_enum((CDR_Enum *)dst, (CDR_Enum *)src);
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'UserTextSeverity' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T UserTextSeverity
        #define TSeq UserTextSeveritySeq
        #define T_initialize NewRT::TraitCommon::UserTextSeverity_initialize
        #define T_finalize   NewRT::TraitCommon::UserTextSeverity_finalize
        #define T_copy       NewRT::TraitCommon::UserTextSeverity_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T UserTextSeverity
        #define TSeq UserTextSeveritySeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        TraitID_initialize(TraitID* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            CDR_Primitive_init_long(sample);
            return RTI_TRUE;
        }

        TraitID *
        TraitID_create(void)
        {
            TraitID* sample;
            OSAPI_Heap_allocate_struct(&sample, TraitID);
            if (sample != NULL) {
                if (!TraitID_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        TraitID_finalize(TraitID* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        TraitID_delete(TraitID*sample)
        {
            if (sample != NULL) {
                /* TraitID_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                TraitID_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        TraitID_copy(TraitID* dst,const TraitID* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            CDR_Primitive_copy_long( dst, src);
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'TraitID' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T TraitID
        #define TSeq TraitIDSeq
        #define T_initialize NewRT::TraitCommon::TraitID_initialize
        #define T_finalize   NewRT::TraitCommon::TraitID_finalize
        #define T_copy       NewRT::TraitCommon::TraitID_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T TraitID
        #define TSeq TraitIDSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        TCKind_initialize(TCKind* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            /* The following method initializes the enum value to zero. However,
            * some enumerations may not have a member with the value zero. In such
            * cases, it may be desirable to modify the generated code to use a valid
            * enumeration member instead.
            */
            CDR_Primitive_init_enum((CDR_Enum*) sample);
            return RTI_TRUE;
        }

        TCKind *
        TCKind_create(void)
        {
            TCKind* sample;
            OSAPI_Heap_allocate_struct(&sample, TCKind);
            if (sample != NULL) {
                if (!TCKind_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        TCKind_finalize(TCKind* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        TCKind_delete(TCKind*sample)
        {
            if (sample != NULL) {
                /* TCKind_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                TCKind_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        TCKind_copy(TCKind* dst,const TCKind* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            CDR_Primitive_copy_enum((CDR_Enum *)dst, (CDR_Enum *)src);
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'TCKind' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T TCKind
        #define TSeq TCKindSeq
        #define T_initialize NewRT::TraitCommon::TCKind_initialize
        #define T_finalize   NewRT::TraitCommon::TCKind_finalize
        #define T_copy       NewRT::TraitCommon::TCKind_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T TCKind
        #define TSeq TCKindSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        const char *TraitDataTYPENAME = "NewRT::TraitCommon::TraitData";

        RTI_BOOL
        TraitData_initialize(TraitData* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            CDR_Primitive_init_char(&sample->_u.nullValue);
            CDR_Primitive_init_short(&sample->_u.svalue);
            CDR_Primitive_init_long(&sample->_u.lvalue);
            CDR_Primitive_init_unsigned_short(&sample->_u.usvalue);
            CDR_Primitive_init_unsigned_long(&sample->_u.ulvalue);
            CDR_Primitive_init_float(&sample->_u.fvalue);
            CDR_Primitive_init_double(&sample->_u.dvalue);
            CDR_Primitive_init_boolean(&sample->_u.bvalue);
            CDR_Primitive_init_char(&sample->_u.cvalue);
            CDR_Primitive_init_octet(&sample->_u.ovalue);
            if (!CDR_String_initialize(&sample->_u.strvalue, (255)))
            {
                return RTI_FALSE;
            }
            CDR_Primitive_init_long_long(&sample->_u.llvalue);
            CDR_Primitive_init_unsigned_long_long(&sample->_u.ullvalue);
            return RTI_TRUE;
        }

        TraitData *
        TraitData_create(void)
        {
            TraitData* sample;
            OSAPI_Heap_allocate_struct(&sample, TraitData);
            if (sample != NULL) {
                if (!TraitData_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        TraitData_finalize(TraitData* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            CDR_String_finalize(&sample->_u.strvalue);
            return RTI_TRUE;
        }

        void
        TraitData_delete(TraitData*sample)
        {
            if (sample != NULL) {
                /* TraitData_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                TraitData_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        TraitData_copy(TraitData* dst,const TraitData* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::TCKind_copy(
                &dst->_d, &src->_d)) {
                return RTI_FALSE;
            }
            switch(src->_d) {
                case (NewRT::TraitCommon::TK_NULL):
                    {  
                        CDR_Primitive_copy_char(&dst->_u.nullValue, &src->_u.nullValue);
                } break ;
                case (NewRT::TraitCommon::TK_SHORT):
                    {  
                        CDR_Primitive_copy_short(&dst->_u.svalue, &src->_u.svalue);
                } break ;
                case (NewRT::TraitCommon::TK_LONG):
                    {  
                        CDR_Primitive_copy_long(&dst->_u.lvalue, &src->_u.lvalue);
                } break ;
                case (NewRT::TraitCommon::TK_USHORT):
                    {  
                        CDR_Primitive_copy_unsigned_short(&dst->_u.usvalue, &src->_u.usvalue);
                } break ;
                case (NewRT::TraitCommon::TK_ULONG):
                    {  
                        CDR_Primitive_copy_unsigned_long(&dst->_u.ulvalue, &src->_u.ulvalue);
                } break ;
                case (NewRT::TraitCommon::TK_FLOAT):
                    {  
                        CDR_Primitive_copy_float(&dst->_u.fvalue, &src->_u.fvalue);
                } break ;
                case (NewRT::TraitCommon::TK_DOUBLE):
                    {  
                        CDR_Primitive_copy_double(&dst->_u.dvalue, &src->_u.dvalue);
                } break ;
                case (NewRT::TraitCommon::TK_BOOLEAN):
                    {  
                        CDR_Primitive_copy_boolean(&dst->_u.bvalue, &src->_u.bvalue);
                } break ;
                case (NewRT::TraitCommon::TK_CHAR):
                    {  
                        CDR_Primitive_copy_char(&dst->_u.cvalue, &src->_u.cvalue);
                } break ;
                case (NewRT::TraitCommon::TK_OCTET):
                    {  
                        CDR_Primitive_copy_octet(&dst->_u.ovalue, &src->_u.ovalue);
                } break ;
                case (NewRT::TraitCommon::TK_STRING):
                    {  
                        if (!CDR_String_copy(&dst->_u.strvalue, &src->_u.strvalue, (255)))
                        {
                            return RTI_FALSE;
                    }
                } break ;
                case (NewRT::TraitCommon::TK_LONGLONG):
                    {  
                        CDR_Primitive_copy_long_long(&dst->_u.llvalue, &src->_u.llvalue);
                } break ;
                case (NewRT::TraitCommon::TK_ULONGLONG):
                    {  
                        CDR_Primitive_copy_unsigned_long_long(&dst->_u.ullvalue, &src->_u.ullvalue);
                } break ;
            }
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'TraitData' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T TraitData
        #define TSeq TraitDataSeq
        #define T_initialize NewRT::TraitCommon::TraitData_initialize
        #define T_finalize   NewRT::TraitCommon::TraitData_finalize
        #define T_copy       NewRT::TraitCommon::TraitData_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T TraitData
        #define TSeq TraitDataSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        RegExp_initialize(RegExp* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            if (!CDR_String_initialize(sample, (255)))
            {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        RegExp *
        RegExp_create(void)
        {
            RegExp* sample;
            OSAPI_Heap_allocate_struct(&sample, RegExp);
            if (sample != NULL) {
                if (!RegExp_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        RegExp_finalize(RegExp* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            CDR_String_finalize(sample);
            return RTI_TRUE;
        }

        void
        RegExp_delete(RegExp*sample)
        {
            if (sample != NULL) {
                /* RegExp_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                RegExp_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        RegExp_copy(RegExp* dst,const RegExp* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            if (!CDR_String_copy( dst, src, (255)))
            {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'RegExp' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T RegExp
        #define TSeq RegExpSeq
        #define T_initialize NewRT::TraitCommon::RegExp_initialize
        #define T_finalize   NewRT::TraitCommon::RegExp_finalize
        #define T_copy       NewRT::TraitCommon::RegExp_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T RegExp
        #define TSeq RegExpSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        TraitType_initialize(TraitType* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            if (!NewRT::TraitCommon::TCKind_initialize(sample)) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        TraitType *
        TraitType_create(void)
        {
            TraitType* sample;
            OSAPI_Heap_allocate_struct(&sample, TraitType);
            if (sample != NULL) {
                if (!TraitType_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        TraitType_finalize(TraitType* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            NewRT::TraitCommon::TCKind_finalize(sample);
            return RTI_TRUE;
        }

        void
        TraitType_delete(TraitType*sample)
        {
            if (sample != NULL) {
                /* TraitType_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                TraitType_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        TraitType_copy(TraitType* dst,const TraitType* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::TCKind_copy(
                dst, src)) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'TraitType' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T TraitType
        #define TSeq TraitTypeSeq
        #define T_initialize NewRT::TraitCommon::TraitType_initialize
        #define T_finalize   NewRT::TraitCommon::TraitType_finalize
        #define T_copy       NewRT::TraitCommon::TraitType_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T TraitType
        #define TSeq TraitTypeSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        const char *TraitValueTYPENAME = "NewRT::TraitCommon::TraitValue";

        RTI_BOOL
        TraitValue_initialize(TraitValue* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            if (!NewRT::TraitCommon::TraitID_initialize(&sample->tid)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::TraitData_initialize(&sample->tval)) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        TraitValue *
        TraitValue_create(void)
        {
            TraitValue* sample;
            OSAPI_Heap_allocate_struct(&sample, TraitValue);
            if (sample != NULL) {
                if (!TraitValue_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        TraitValue_finalize(TraitValue* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            NewRT::TraitCommon::TraitID_finalize(&sample->tid);
            NewRT::TraitCommon::TraitData_finalize(&sample->tval);
            return RTI_TRUE;
        }

        void
        TraitValue_delete(TraitValue*sample)
        {
            if (sample != NULL) {
                /* TraitValue_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                TraitValue_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        TraitValue_copy(TraitValue* dst,const TraitValue* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::TraitID_copy(
                &dst->tid, &src->tid)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::TraitData_copy(
                &dst->tval, &src->tval)) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'TraitValue' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T TraitValue
        #define TSeq TraitValueSeq
        #define T_initialize NewRT::TraitCommon::TraitValue_initialize
        #define T_finalize   NewRT::TraitCommon::TraitValue_finalize
        #define T_copy       NewRT::TraitCommon::TraitValue_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T TraitValue
        #define TSeq TraitValueSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        TraitValueList_initialize(TraitValueList* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            if (!NewRT::TraitCommon::TraitValueSeq_initialize(sample)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::TraitValueSeq_set_maximum(sample, (15))) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        TraitValueList *
        TraitValueList_create(void)
        {
            TraitValueList* sample;
            OSAPI_Heap_allocate_struct(&sample, TraitValueList);
            if (sample != NULL) {
                if (!TraitValueList_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        TraitValueList_finalize(TraitValueList* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            NewRT::TraitCommon::TraitValueSeq_finalize(sample);
            return RTI_TRUE;
        }

        void
        TraitValueList_delete(TraitValueList*sample)
        {
            if (sample != NULL) {
                /* TraitValueList_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                TraitValueList_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        TraitValueList_copy(TraitValueList* dst,const TraitValueList* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::TraitValueSeq_copy(  dst,
            src  )) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'TraitValueList' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T TraitValueList
        #define TSeq TraitValueListSeq
        #define T_initialize NewRT::TraitCommon::TraitValueList_initialize
        #define T_finalize   NewRT::TraitCommon::TraitValueList_finalize
        #define T_copy       NewRT::TraitCommon::TraitValueList_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T TraitValueList
        #define TSeq TraitValueListSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        TraitCategory_initialize(TraitCategory* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            /* The following method initializes the enum value to zero. However,
            * some enumerations may not have a member with the value zero. In such
            * cases, it may be desirable to modify the generated code to use a valid
            * enumeration member instead.
            */
            CDR_Primitive_init_enum((CDR_Enum*) sample);
            return RTI_TRUE;
        }

        TraitCategory *
        TraitCategory_create(void)
        {
            TraitCategory* sample;
            OSAPI_Heap_allocate_struct(&sample, TraitCategory);
            if (sample != NULL) {
                if (!TraitCategory_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        TraitCategory_finalize(TraitCategory* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        TraitCategory_delete(TraitCategory*sample)
        {
            if (sample != NULL) {
                /* TraitCategory_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                TraitCategory_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        TraitCategory_copy(TraitCategory* dst,const TraitCategory* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            CDR_Primitive_copy_enum((CDR_Enum *)dst, (CDR_Enum *)src);
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'TraitCategory' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T TraitCategory
        #define TSeq TraitCategorySeq
        #define T_initialize NewRT::TraitCommon::TraitCategory_initialize
        #define T_finalize   NewRT::TraitCommon::TraitCategory_finalize
        #define T_copy       NewRT::TraitCommon::TraitCategory_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T TraitCategory
        #define TSeq TraitCategorySeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        TraitPurpose_initialize(TraitPurpose* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            /* The following method initializes the enum value to zero. However,
            * some enumerations may not have a member with the value zero. In such
            * cases, it may be desirable to modify the generated code to use a valid
            * enumeration member instead.
            */
            CDR_Primitive_init_enum((CDR_Enum*) sample);
            return RTI_TRUE;
        }

        TraitPurpose *
        TraitPurpose_create(void)
        {
            TraitPurpose* sample;
            OSAPI_Heap_allocate_struct(&sample, TraitPurpose);
            if (sample != NULL) {
                if (!TraitPurpose_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        TraitPurpose_finalize(TraitPurpose* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        TraitPurpose_delete(TraitPurpose*sample)
        {
            if (sample != NULL) {
                /* TraitPurpose_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                TraitPurpose_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        TraitPurpose_copy(TraitPurpose* dst,const TraitPurpose* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            CDR_Primitive_copy_enum((CDR_Enum *)dst, (CDR_Enum *)src);
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'TraitPurpose' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T TraitPurpose
        #define TSeq TraitPurposeSeq
        #define T_initialize NewRT::TraitCommon::TraitPurpose_initialize
        #define T_finalize   NewRT::TraitCommon::TraitPurpose_finalize
        #define T_copy       NewRT::TraitCommon::TraitPurpose_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T TraitPurpose
        #define TSeq TraitPurposeSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        const char *MatchNumericTYPENAME = "NewRT::TraitCommon::MatchNumeric";

        RTI_BOOL
        MatchNumeric_initialize(MatchNumeric* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            CDR_Primitive_init_double(&sample->loValue);
            CDR_Primitive_init_double(&sample->hiValue);
            return RTI_TRUE;
        }

        MatchNumeric *
        MatchNumeric_create(void)
        {
            MatchNumeric* sample;
            OSAPI_Heap_allocate_struct(&sample, MatchNumeric);
            if (sample != NULL) {
                if (!MatchNumeric_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        MatchNumeric_finalize(MatchNumeric* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        MatchNumeric_delete(MatchNumeric*sample)
        {
            if (sample != NULL) {
                /* MatchNumeric_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                MatchNumeric_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        MatchNumeric_copy(MatchNumeric* dst,const MatchNumeric* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            CDR_Primitive_copy_double(&dst->loValue, &src->loValue);
            CDR_Primitive_copy_double(&dst->hiValue, &src->hiValue);
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'MatchNumeric' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T MatchNumeric
        #define TSeq MatchNumericSeq
        #define T_initialize NewRT::TraitCommon::MatchNumeric_initialize
        #define T_finalize   NewRT::TraitCommon::MatchNumeric_finalize
        #define T_copy       NewRT::TraitCommon::MatchNumeric_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T MatchNumeric
        #define TSeq MatchNumericSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        const char *MatchDateTYPENAME = "NewRT::TraitCommon::MatchDate";

        RTI_BOOL
        MatchDate_initialize(MatchDate* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            if (!CDR_String_initialize(&sample->startDate, (255)))
            {
                return RTI_FALSE;
            }
            if (!CDR_String_initialize(&sample->endDate, (255)))
            {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        MatchDate *
        MatchDate_create(void)
        {
            MatchDate* sample;
            OSAPI_Heap_allocate_struct(&sample, MatchDate);
            if (sample != NULL) {
                if (!MatchDate_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        MatchDate_finalize(MatchDate* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            CDR_String_finalize(&sample->startDate);
            CDR_String_finalize(&sample->endDate);
            return RTI_TRUE;
        }

        void
        MatchDate_delete(MatchDate*sample)
        {
            if (sample != NULL) {
                /* MatchDate_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                MatchDate_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        MatchDate_copy(MatchDate* dst,const MatchDate* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            if (!CDR_String_copy(&dst->startDate, &src->startDate, (255)))
            {
                return RTI_FALSE;
            }
            if (!CDR_String_copy(&dst->endDate, &src->endDate, (255)))
            {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'MatchDate' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T MatchDate
        #define TSeq MatchDateSeq
        #define T_initialize NewRT::TraitCommon::MatchDate_initialize
        #define T_finalize   NewRT::TraitCommon::MatchDate_finalize
        #define T_copy       NewRT::TraitCommon::MatchDate_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T MatchDate
        #define TSeq MatchDateSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        const char *TraitMatchTYPENAME = "NewRT::TraitCommon::TraitMatch";

        RTI_BOOL
        TraitMatch_initialize(TraitMatch* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            if (!NewRT::TraitCommon::MatchNumeric_initialize(&sample->_u.limits)) {
                return RTI_FALSE;
            }
            if (!CDR_String_initialize(&sample->_u.key, (255)))
            {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::RegExp_initialize(&sample->_u.pattern)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::TraitDataSeq_initialize(&sample->_u.choice)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::TraitDataSeq_set_maximum(&sample->_u.choice, (10))) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::MatchDate_initialize(&sample->_u.dates)) {
                return RTI_FALSE;
            }
            CDR_Primitive_init_boolean(&sample->_u.expected);
            return RTI_TRUE;
        }

        TraitMatch *
        TraitMatch_create(void)
        {
            TraitMatch* sample;
            OSAPI_Heap_allocate_struct(&sample, TraitMatch);
            if (sample != NULL) {
                if (!TraitMatch_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        TraitMatch_finalize(TraitMatch* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            NewRT::TraitCommon::MatchNumeric_finalize(&sample->_u.limits);
            CDR_String_finalize(&sample->_u.key);
            NewRT::TraitCommon::RegExp_finalize(&sample->_u.pattern);
            NewRT::TraitCommon::TraitDataSeq_finalize(&sample->_u.choice);
            NewRT::TraitCommon::MatchDate_finalize(&sample->_u.dates);
            return RTI_TRUE;
        }

        void
        TraitMatch_delete(TraitMatch*sample)
        {
            if (sample != NULL) {
                /* TraitMatch_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                TraitMatch_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        TraitMatch_copy(TraitMatch* dst,const TraitMatch* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::TraitCategory_copy(
                &dst->_d, &src->_d)) {
                return RTI_FALSE;
            }
            switch(src->_d) {
                case (NewRT::TraitCommon::TRAIT_NUMERIC):
                    {  
                        if (!NewRT::TraitCommon::MatchNumeric_copy(
                            &dst->_u.limits, &src->_u.limits)) {
                            return RTI_FALSE;
                    }
                } break ;
                case (NewRT::TraitCommon::TRAIT_NLSKEY):
                    {  
                        if (!CDR_String_copy(&dst->_u.key, &src->_u.key, (255)))
                        {
                            return RTI_FALSE;
                    }
                } break ;
                case (NewRT::TraitCommon::TRAIT_STRING):
                    {  
                        if (!NewRT::TraitCommon::RegExp_copy(
                            &dst->_u.pattern, &src->_u.pattern)) {
                            return RTI_FALSE;
                    }
                } break ;
                case (NewRT::TraitCommon::TRAIT_CHOICE):
                    {  
                        if (!NewRT::TraitCommon::TraitDataSeq_copy(&dst->_u.choice ,
                        &src->_u.choice  )) {
                            return RTI_FALSE;
                    }
                } break ;
                case (NewRT::TraitCommon::TRAIT_DATE):
                    {  
                        if (!NewRT::TraitCommon::MatchDate_copy(
                            &dst->_u.dates, &src->_u.dates)) {
                            return RTI_FALSE;
                    }
                } break ;
                case (NewRT::TraitCommon::TRAIT_BOOL):
                    {  
                        CDR_Primitive_copy_boolean(&dst->_u.expected, &src->_u.expected);
                } break ;
            }
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'TraitMatch' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T TraitMatch
        #define TSeq TraitMatchSeq
        #define T_initialize NewRT::TraitCommon::TraitMatch_initialize
        #define T_finalize   NewRT::TraitCommon::TraitMatch_finalize
        #define T_copy       NewRT::TraitCommon::TraitMatch_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T TraitMatch
        #define TSeq TraitMatchSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        const char *LookupMatchTYPENAME = "NewRT::TraitCommon::LookupMatch";

        RTI_BOOL
        LookupMatch_initialize(LookupMatch* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            if (!NewRT::TraitCommon::TraitID_initialize(&sample->field)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::TraitMatch_initialize(&sample->match)) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        LookupMatch *
        LookupMatch_create(void)
        {
            LookupMatch* sample;
            OSAPI_Heap_allocate_struct(&sample, LookupMatch);
            if (sample != NULL) {
                if (!LookupMatch_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        LookupMatch_finalize(LookupMatch* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            NewRT::TraitCommon::TraitID_finalize(&sample->field);
            NewRT::TraitCommon::TraitMatch_finalize(&sample->match);
            return RTI_TRUE;
        }

        void
        LookupMatch_delete(LookupMatch*sample)
        {
            if (sample != NULL) {
                /* LookupMatch_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                LookupMatch_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        LookupMatch_copy(LookupMatch* dst,const LookupMatch* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::TraitID_copy(
                &dst->field, &src->field)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::TraitMatch_copy(
                &dst->match, &src->match)) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'LookupMatch' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T LookupMatch
        #define TSeq LookupMatchSeq
        #define T_initialize NewRT::TraitCommon::LookupMatch_initialize
        #define T_finalize   NewRT::TraitCommon::LookupMatch_finalize
        #define T_copy       NewRT::TraitCommon::LookupMatch_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T LookupMatch
        #define TSeq LookupMatchSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        LookupMatchList_initialize(LookupMatchList* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            if (!NewRT::TraitCommon::LookupMatchSeq_initialize(sample)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::LookupMatchSeq_set_maximum(sample, (15))) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        LookupMatchList *
        LookupMatchList_create(void)
        {
            LookupMatchList* sample;
            OSAPI_Heap_allocate_struct(&sample, LookupMatchList);
            if (sample != NULL) {
                if (!LookupMatchList_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        LookupMatchList_finalize(LookupMatchList* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            NewRT::TraitCommon::LookupMatchSeq_finalize(sample);
            return RTI_TRUE;
        }

        void
        LookupMatchList_delete(LookupMatchList*sample)
        {
            if (sample != NULL) {
                /* LookupMatchList_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                LookupMatchList_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        LookupMatchList_copy(LookupMatchList* dst,const LookupMatchList* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::LookupMatchSeq_copy(  dst,
            src  )) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'LookupMatchList' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T LookupMatchList
        #define TSeq LookupMatchListSeq
        #define T_initialize NewRT::TraitCommon::LookupMatchList_initialize
        #define T_finalize   NewRT::TraitCommon::LookupMatchList_finalize
        #define T_copy       NewRT::TraitCommon::LookupMatchList_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T LookupMatchList
        #define TSeq LookupMatchListSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        const char *TraitAttrTYPENAME = "NewRT::TraitCommon::TraitAttr";

        RTI_BOOL
        TraitAttr_initialize(TraitAttr* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            if (!NewRT::TraitCommon::TraitID_initialize(&sample->tid)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::TraitType_initialize(&sample->type)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::NLSKey_initialize(&sample->name)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::NLSKey_initialize(&sample->description)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::TraitMatch_initialize(&sample->range)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::TraitPurpose_initialize(&sample->purpose)) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        TraitAttr *
        TraitAttr_create(void)
        {
            TraitAttr* sample;
            OSAPI_Heap_allocate_struct(&sample, TraitAttr);
            if (sample != NULL) {
                if (!TraitAttr_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        TraitAttr_finalize(TraitAttr* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            NewRT::TraitCommon::TraitID_finalize(&sample->tid);
            NewRT::TraitCommon::TraitType_finalize(&sample->type);
            NewRT::TraitCommon::NLSKey_finalize(&sample->name);
            NewRT::TraitCommon::NLSKey_finalize(&sample->description);
            NewRT::TraitCommon::TraitMatch_finalize(&sample->range);
            NewRT::TraitCommon::TraitPurpose_finalize(&sample->purpose);
            return RTI_TRUE;
        }

        void
        TraitAttr_delete(TraitAttr*sample)
        {
            if (sample != NULL) {
                /* TraitAttr_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                TraitAttr_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        TraitAttr_copy(TraitAttr* dst,const TraitAttr* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::TraitID_copy(
                &dst->tid, &src->tid)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::TraitType_copy(
                &dst->type, &src->type)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::NLSKey_copy(
                &dst->name, &src->name)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::NLSKey_copy(
                &dst->description, &src->description)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::TraitMatch_copy(
                &dst->range, &src->range)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::TraitPurpose_copy(
                &dst->purpose, &src->purpose)) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'TraitAttr' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T TraitAttr
        #define TSeq TraitAttrSeq
        #define T_initialize NewRT::TraitCommon::TraitAttr_initialize
        #define T_finalize   NewRT::TraitCommon::TraitAttr_finalize
        #define T_copy       NewRT::TraitCommon::TraitAttr_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T TraitAttr
        #define TSeq TraitAttrSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        TraitAttrList_initialize(TraitAttrList* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            if (!NewRT::TraitCommon::TraitAttrSeq_initialize(sample)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::TraitAttrSeq_set_maximum(sample, (15))) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        TraitAttrList *
        TraitAttrList_create(void)
        {
            TraitAttrList* sample;
            OSAPI_Heap_allocate_struct(&sample, TraitAttrList);
            if (sample != NULL) {
                if (!TraitAttrList_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        TraitAttrList_finalize(TraitAttrList* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            NewRT::TraitCommon::TraitAttrSeq_finalize(sample);
            return RTI_TRUE;
        }

        void
        TraitAttrList_delete(TraitAttrList*sample)
        {
            if (sample != NULL) {
                /* TraitAttrList_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                TraitAttrList_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        TraitAttrList_copy(TraitAttrList* dst,const TraitAttrList* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::TraitAttrSeq_copy(  dst,
            src  )) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'TraitAttrList' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T TraitAttrList
        #define TSeq TraitAttrListSeq
        #define T_initialize NewRT::TraitCommon::TraitAttrList_initialize
        #define T_finalize   NewRT::TraitCommon::TraitAttrList_finalize
        #define T_copy       NewRT::TraitCommon::TraitAttrList_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T TraitAttrList
        #define TSeq TraitAttrListSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        MsgID_initialize(MsgID* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            CDR_Primitive_init_long(sample);
            return RTI_TRUE;
        }

        MsgID *
        MsgID_create(void)
        {
            MsgID* sample;
            OSAPI_Heap_allocate_struct(&sample, MsgID);
            if (sample != NULL) {
                if (!MsgID_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        MsgID_finalize(MsgID* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        MsgID_delete(MsgID*sample)
        {
            if (sample != NULL) {
                /* MsgID_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                MsgID_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        MsgID_copy(MsgID* dst,const MsgID* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            CDR_Primitive_copy_long( dst, src);
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'MsgID' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T MsgID
        #define TSeq MsgIDSeq
        #define T_initialize NewRT::TraitCommon::MsgID_initialize
        #define T_finalize   NewRT::TraitCommon::MsgID_finalize
        #define T_copy       NewRT::TraitCommon::MsgID_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T MsgID
        #define TSeq MsgIDSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        MsgText_initialize(MsgText* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            if (!CDR_String_initialize(sample, (255)))
            {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        MsgText *
        MsgText_create(void)
        {
            MsgText* sample;
            OSAPI_Heap_allocate_struct(&sample, MsgText);
            if (sample != NULL) {
                if (!MsgText_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        MsgText_finalize(MsgText* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            CDR_String_finalize(sample);
            return RTI_TRUE;
        }

        void
        MsgText_delete(MsgText*sample)
        {
            if (sample != NULL) {
                /* MsgText_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                MsgText_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        MsgText_copy(MsgText* dst,const MsgText* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            if (!CDR_String_copy( dst, src, (255)))
            {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'MsgText' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T MsgText
        #define TSeq MsgTextSeq
        #define T_initialize NewRT::TraitCommon::MsgText_initialize
        #define T_finalize   NewRT::TraitCommon::MsgText_finalize
        #define T_copy       NewRT::TraitCommon::MsgText_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T MsgText
        #define TSeq MsgTextSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        MsgSeverity_initialize(MsgSeverity* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            /* The following method initializes the enum value to zero. However,
            * some enumerations may not have a member with the value zero. In such
            * cases, it may be desirable to modify the generated code to use a valid
            * enumeration member instead.
            */
            CDR_Primitive_init_enum((CDR_Enum*) sample);
            return RTI_TRUE;
        }

        MsgSeverity *
        MsgSeverity_create(void)
        {
            MsgSeverity* sample;
            OSAPI_Heap_allocate_struct(&sample, MsgSeverity);
            if (sample != NULL) {
                if (!MsgSeverity_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        MsgSeverity_finalize(MsgSeverity* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        MsgSeverity_delete(MsgSeverity*sample)
        {
            if (sample != NULL) {
                /* MsgSeverity_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                MsgSeverity_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        MsgSeverity_copy(MsgSeverity* dst,const MsgSeverity* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            CDR_Primitive_copy_enum((CDR_Enum *)dst, (CDR_Enum *)src);
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'MsgSeverity' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T MsgSeverity
        #define TSeq MsgSeveritySeq
        #define T_initialize NewRT::TraitCommon::MsgSeverity_initialize
        #define T_finalize   NewRT::TraitCommon::MsgSeverity_finalize
        #define T_copy       NewRT::TraitCommon::MsgSeverity_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T MsgSeverity
        #define TSeq MsgSeveritySeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        MsgCategory_initialize(MsgCategory* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            /* The following method initializes the enum value to zero. However,
            * some enumerations may not have a member with the value zero. In such
            * cases, it may be desirable to modify the generated code to use a valid
            * enumeration member instead.
            */
            CDR_Primitive_init_enum((CDR_Enum*) sample);
            return RTI_TRUE;
        }

        MsgCategory *
        MsgCategory_create(void)
        {
            MsgCategory* sample;
            OSAPI_Heap_allocate_struct(&sample, MsgCategory);
            if (sample != NULL) {
                if (!MsgCategory_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        MsgCategory_finalize(MsgCategory* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        MsgCategory_delete(MsgCategory*sample)
        {
            if (sample != NULL) {
                /* MsgCategory_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                MsgCategory_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        MsgCategory_copy(MsgCategory* dst,const MsgCategory* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            CDR_Primitive_copy_enum((CDR_Enum *)dst, (CDR_Enum *)src);
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'MsgCategory' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T MsgCategory
        #define TSeq MsgCategorySeq
        #define T_initialize NewRT::TraitCommon::MsgCategory_initialize
        #define T_finalize   NewRT::TraitCommon::MsgCategory_finalize
        #define T_copy       NewRT::TraitCommon::MsgCategory_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T MsgCategory
        #define TSeq MsgCategorySeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        const char *MessageTYPENAME = "NewRT::TraitCommon::Message";

        RTI_BOOL
        Message_initialize(Message* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            if (!NewRT::TraitCommon::MsgID_initialize(&sample->mid)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::MsgSeverity_initialize(&sample->severity)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::MsgText_initialize(&sample->description)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::MsgText_initialize(&sample->action)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::MsgCategory_initialize(&sample->category)) {
                return RTI_FALSE;
            }
            CDR_Primitive_init_boolean(&sample->needAck);
            return RTI_TRUE;
        }

        Message *
        Message_create(void)
        {
            Message* sample;
            OSAPI_Heap_allocate_struct(&sample, Message);
            if (sample != NULL) {
                if (!Message_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        Message_finalize(Message* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            NewRT::TraitCommon::MsgID_finalize(&sample->mid);
            NewRT::TraitCommon::MsgSeverity_finalize(&sample->severity);
            NewRT::TraitCommon::MsgText_finalize(&sample->description);
            NewRT::TraitCommon::MsgText_finalize(&sample->action);
            NewRT::TraitCommon::MsgCategory_finalize(&sample->category);
            return RTI_TRUE;
        }

        void
        Message_delete(Message*sample)
        {
            if (sample != NULL) {
                /* Message_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                Message_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        Message_copy(Message* dst,const Message* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::MsgID_copy(
                &dst->mid, &src->mid)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::MsgSeverity_copy(
                &dst->severity, &src->severity)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::MsgText_copy(
                &dst->description, &src->description)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::MsgText_copy(
                &dst->action, &src->action)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::MsgCategory_copy(
                &dst->category, &src->category)) {
                return RTI_FALSE;
            }
            CDR_Primitive_copy_boolean(&dst->needAck, &src->needAck);
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'Message' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T Message
        #define TSeq MessageSeq
        #define T_initialize NewRT::TraitCommon::Message_initialize
        #define T_finalize   NewRT::TraitCommon::Message_finalize
        #define T_copy       NewRT::TraitCommon::Message_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T Message
        #define TSeq MessageSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        MessageList_initialize(MessageList* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            if (!NewRT::TraitCommon::MessageSeq_initialize(sample)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::MessageSeq_set_maximum(sample, (15))) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        MessageList *
        MessageList_create(void)
        {
            MessageList* sample;
            OSAPI_Heap_allocate_struct(&sample, MessageList);
            if (sample != NULL) {
                if (!MessageList_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        MessageList_finalize(MessageList* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            NewRT::TraitCommon::MessageSeq_finalize(sample);
            return RTI_TRUE;
        }

        void
        MessageList_delete(MessageList*sample)
        {
            if (sample != NULL) {
                /* MessageList_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                MessageList_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        MessageList_copy(MessageList* dst,const MessageList* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::MessageSeq_copy(  dst,
            src  )) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'MessageList' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T MessageList
        #define TSeq MessageListSeq
        #define T_initialize NewRT::TraitCommon::MessageList_initialize
        #define T_finalize   NewRT::TraitCommon::MessageList_finalize
        #define T_copy       NewRT::TraitCommon::MessageList_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T MessageList
        #define TSeq MessageListSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        MessageIdList_initialize(MessageIdList* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            if (!NewRT::TraitCommon::TraitValueSeq_initialize(sample)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::TraitValueSeq_set_maximum(sample, (15))) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        MessageIdList *
        MessageIdList_create(void)
        {
            MessageIdList* sample;
            OSAPI_Heap_allocate_struct(&sample, MessageIdList);
            if (sample != NULL) {
                if (!MessageIdList_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        MessageIdList_finalize(MessageIdList* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            NewRT::TraitCommon::TraitValueSeq_finalize(sample);
            return RTI_TRUE;
        }

        void
        MessageIdList_delete(MessageIdList*sample)
        {
            if (sample != NULL) {
                /* MessageIdList_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                MessageIdList_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        MessageIdList_copy(MessageIdList* dst,const MessageIdList* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::TraitValueSeq_copy(  dst,
            src  )) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'MessageIdList' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T MessageIdList
        #define TSeq MessageIdListSeq
        #define T_initialize NewRT::TraitCommon::MessageIdList_initialize
        #define T_finalize   NewRT::TraitCommon::MessageIdList_finalize
        #define T_copy       NewRT::TraitCommon::MessageIdList_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T MessageIdList
        #define TSeq MessageIdListSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        SoftwareComponent_initialize(SoftwareComponent* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            /* The following method initializes the enum value to zero. However,
            * some enumerations may not have a member with the value zero. In such
            * cases, it may be desirable to modify the generated code to use a valid
            * enumeration member instead.
            */
            CDR_Primitive_init_enum((CDR_Enum*) sample);
            return RTI_TRUE;
        }

        SoftwareComponent *
        SoftwareComponent_create(void)
        {
            SoftwareComponent* sample;
            OSAPI_Heap_allocate_struct(&sample, SoftwareComponent);
            if (sample != NULL) {
                if (!SoftwareComponent_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        SoftwareComponent_finalize(SoftwareComponent* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        SoftwareComponent_delete(SoftwareComponent*sample)
        {
            if (sample != NULL) {
                /* SoftwareComponent_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                SoftwareComponent_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        SoftwareComponent_copy(SoftwareComponent* dst,const SoftwareComponent* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            CDR_Primitive_copy_enum((CDR_Enum *)dst, (CDR_Enum *)src);
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'SoftwareComponent' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T SoftwareComponent
        #define TSeq SoftwareComponentSeq
        #define T_initialize NewRT::TraitCommon::SoftwareComponent_initialize
        #define T_finalize   NewRT::TraitCommon::SoftwareComponent_finalize
        #define T_copy       NewRT::TraitCommon::SoftwareComponent_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T SoftwareComponent
        #define TSeq SoftwareComponentSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

    } /* namespace TraitCommon  */

} /* namespace NewRT  */

