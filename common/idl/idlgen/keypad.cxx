/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from keypad.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#include "keypad.h"

#ifndef UNUSED_ARG
#define UNUSED_ARG(x) (void)(x)
#endif

/*** SOURCE_BEGIN ***/

namespace NewRT {

    namespace TraitKeypad {

        /* ========================================================================= */

        RTI_BOOL
        FunctionId_initialize(FunctionId* sample)
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

        FunctionId *
        FunctionId_create(void)
        {
            FunctionId* sample;
            OSAPI_Heap_allocate_struct(&sample, FunctionId);
            if (sample != NULL) {
                if (!FunctionId_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        FunctionId_finalize(FunctionId* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        FunctionId_delete(FunctionId*sample)
        {
            if (sample != NULL) {
                /* FunctionId_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                FunctionId_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        FunctionId_copy(FunctionId* dst,const FunctionId* src)
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
        * Configure and implement 'FunctionId' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T FunctionId
        #define TSeq FunctionIdSeq
        #define T_initialize NewRT::TraitKeypad::FunctionId_initialize
        #define T_finalize   NewRT::TraitKeypad::FunctionId_finalize
        #define T_copy       NewRT::TraitKeypad::FunctionId_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T FunctionId
        #define TSeq FunctionIdSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        FunctionActiveState_initialize(FunctionActiveState* sample)
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

        FunctionActiveState *
        FunctionActiveState_create(void)
        {
            FunctionActiveState* sample;
            OSAPI_Heap_allocate_struct(&sample, FunctionActiveState);
            if (sample != NULL) {
                if (!FunctionActiveState_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        FunctionActiveState_finalize(FunctionActiveState* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        FunctionActiveState_delete(FunctionActiveState*sample)
        {
            if (sample != NULL) {
                /* FunctionActiveState_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                FunctionActiveState_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        FunctionActiveState_copy(FunctionActiveState* dst,const FunctionActiveState* src)
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
        * Configure and implement 'FunctionActiveState' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T FunctionActiveState
        #define TSeq FunctionActiveStateSeq
        #define T_initialize NewRT::TraitKeypad::FunctionActiveState_initialize
        #define T_finalize   NewRT::TraitKeypad::FunctionActiveState_finalize
        #define T_copy       NewRT::TraitKeypad::FunctionActiveState_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T FunctionActiveState
        #define TSeq FunctionActiveStateSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        FunctionEnableState_initialize(FunctionEnableState* sample)
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

        FunctionEnableState *
        FunctionEnableState_create(void)
        {
            FunctionEnableState* sample;
            OSAPI_Heap_allocate_struct(&sample, FunctionEnableState);
            if (sample != NULL) {
                if (!FunctionEnableState_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        FunctionEnableState_finalize(FunctionEnableState* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        FunctionEnableState_delete(FunctionEnableState*sample)
        {
            if (sample != NULL) {
                /* FunctionEnableState_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                FunctionEnableState_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        FunctionEnableState_copy(FunctionEnableState* dst,const FunctionEnableState* src)
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
        * Configure and implement 'FunctionEnableState' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T FunctionEnableState
        #define TSeq FunctionEnableStateSeq
        #define T_initialize NewRT::TraitKeypad::FunctionEnableState_initialize
        #define T_finalize   NewRT::TraitKeypad::FunctionEnableState_finalize
        #define T_copy       NewRT::TraitKeypad::FunctionEnableState_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T FunctionEnableState
        #define TSeq FunctionEnableStateSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        KeySwitchState_initialize(KeySwitchState* sample)
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

        KeySwitchState *
        KeySwitchState_create(void)
        {
            KeySwitchState* sample;
            OSAPI_Heap_allocate_struct(&sample, KeySwitchState);
            if (sample != NULL) {
                if (!KeySwitchState_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        KeySwitchState_finalize(KeySwitchState* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        KeySwitchState_delete(KeySwitchState*sample)
        {
            if (sample != NULL) {
                /* KeySwitchState_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                KeySwitchState_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        KeySwitchState_copy(KeySwitchState* dst,const KeySwitchState* src)
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
        * Configure and implement 'KeySwitchState' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T KeySwitchState
        #define TSeq KeySwitchStateSeq
        #define T_initialize NewRT::TraitKeypad::KeySwitchState_initialize
        #define T_finalize   NewRT::TraitKeypad::KeySwitchState_finalize
        #define T_copy       NewRT::TraitKeypad::KeySwitchState_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T KeySwitchState
        #define TSeq KeySwitchStateSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        FunctionEnableItem_initialize(FunctionEnableItem* sample)
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

        FunctionEnableItem *
        FunctionEnableItem_create(void)
        {
            FunctionEnableItem* sample;
            OSAPI_Heap_allocate_struct(&sample, FunctionEnableItem);
            if (sample != NULL) {
                if (!FunctionEnableItem_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        FunctionEnableItem_finalize(FunctionEnableItem* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            NewRT::TraitCommon::TraitValueSeq_finalize(sample);
            return RTI_TRUE;
        }

        void
        FunctionEnableItem_delete(FunctionEnableItem*sample)
        {
            if (sample != NULL) {
                /* FunctionEnableItem_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                FunctionEnableItem_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        FunctionEnableItem_copy(FunctionEnableItem* dst,const FunctionEnableItem* src)
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
        * Configure and implement 'FunctionEnableItem' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T FunctionEnableItem
        #define TSeq FunctionEnableItemSeq
        #define T_initialize NewRT::TraitKeypad::FunctionEnableItem_initialize
        #define T_finalize   NewRT::TraitKeypad::FunctionEnableItem_finalize
        #define T_copy       NewRT::TraitKeypad::FunctionEnableItem_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T FunctionEnableItem
        #define TSeq FunctionEnableItemSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        const char *FunctionEnableRequestTYPENAME = "NewRT::TraitKeypad::FunctionEnableRequest";

        RTI_BOOL
        FunctionEnableRequest_initialize(FunctionEnableRequest* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            if (!NewRT::TraitKeypad::FunctionEnableItemSeq_initialize(&sample->functions)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitKeypad::FunctionEnableItemSeq_set_maximum(&sample->functions, (15))) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        FunctionEnableRequest *
        FunctionEnableRequest_create(void)
        {
            FunctionEnableRequest* sample;
            OSAPI_Heap_allocate_struct(&sample, FunctionEnableRequest);
            if (sample != NULL) {
                if (!FunctionEnableRequest_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        FunctionEnableRequest_finalize(FunctionEnableRequest* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            NewRT::TraitKeypad::FunctionEnableItemSeq_finalize(&sample->functions);
            return RTI_TRUE;
        }

        void
        FunctionEnableRequest_delete(FunctionEnableRequest*sample)
        {
            if (sample != NULL) {
                /* FunctionEnableRequest_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                FunctionEnableRequest_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        FunctionEnableRequest_copy(FunctionEnableRequest* dst,const FunctionEnableRequest* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            if (!NewRT::TraitKeypad::FunctionEnableItemSeq_copy(&dst->functions ,
            &src->functions  )) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'FunctionEnableRequest' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T FunctionEnableRequest
        #define TSeq FunctionEnableRequestSeq
        #define T_initialize NewRT::TraitKeypad::FunctionEnableRequest_initialize
        #define T_finalize   NewRT::TraitKeypad::FunctionEnableRequest_finalize
        #define T_copy       NewRT::TraitKeypad::FunctionEnableRequest_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T FunctionEnableRequest
        #define TSeq FunctionEnableRequestSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        FunctionActiveStateItem_initialize(FunctionActiveStateItem* sample)
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

        FunctionActiveStateItem *
        FunctionActiveStateItem_create(void)
        {
            FunctionActiveStateItem* sample;
            OSAPI_Heap_allocate_struct(&sample, FunctionActiveStateItem);
            if (sample != NULL) {
                if (!FunctionActiveStateItem_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        FunctionActiveStateItem_finalize(FunctionActiveStateItem* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            NewRT::TraitCommon::TraitValueSeq_finalize(sample);
            return RTI_TRUE;
        }

        void
        FunctionActiveStateItem_delete(FunctionActiveStateItem*sample)
        {
            if (sample != NULL) {
                /* FunctionActiveStateItem_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                FunctionActiveStateItem_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        FunctionActiveStateItem_copy(FunctionActiveStateItem* dst,const FunctionActiveStateItem* src)
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
        * Configure and implement 'FunctionActiveStateItem' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T FunctionActiveStateItem
        #define TSeq FunctionActiveStateItemSeq
        #define T_initialize NewRT::TraitKeypad::FunctionActiveStateItem_initialize
        #define T_finalize   NewRT::TraitKeypad::FunctionActiveStateItem_finalize
        #define T_copy       NewRT::TraitKeypad::FunctionActiveStateItem_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T FunctionActiveStateItem
        #define TSeq FunctionActiveStateItemSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        const char *FunctionActiveStateReportTYPENAME = "NewRT::TraitKeypad::FunctionActiveStateReport";

        RTI_BOOL
        FunctionActiveStateReport_initialize(FunctionActiveStateReport* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            if (!NewRT::TraitKeypad::FunctionActiveStateItemSeq_initialize(&sample->activeStates)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitKeypad::FunctionActiveStateItemSeq_set_maximum(&sample->activeStates, (15))) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        FunctionActiveStateReport *
        FunctionActiveStateReport_create(void)
        {
            FunctionActiveStateReport* sample;
            OSAPI_Heap_allocate_struct(&sample, FunctionActiveStateReport);
            if (sample != NULL) {
                if (!FunctionActiveStateReport_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        FunctionActiveStateReport_finalize(FunctionActiveStateReport* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            NewRT::TraitKeypad::FunctionActiveStateItemSeq_finalize(&sample->activeStates);
            return RTI_TRUE;
        }

        void
        FunctionActiveStateReport_delete(FunctionActiveStateReport*sample)
        {
            if (sample != NULL) {
                /* FunctionActiveStateReport_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                FunctionActiveStateReport_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        FunctionActiveStateReport_copy(FunctionActiveStateReport* dst,const FunctionActiveStateReport* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            if (!NewRT::TraitKeypad::FunctionActiveStateItemSeq_copy(&dst->activeStates ,
            &src->activeStates  )) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'FunctionActiveStateReport' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T FunctionActiveStateReport
        #define TSeq FunctionActiveStateReportSeq
        #define T_initialize NewRT::TraitKeypad::FunctionActiveStateReport_initialize
        #define T_finalize   NewRT::TraitKeypad::FunctionActiveStateReport_finalize
        #define T_copy       NewRT::TraitKeypad::FunctionActiveStateReport_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T FunctionActiveStateReport
        #define TSeq FunctionActiveStateReportSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        const char *KeySwitchStateReportTYPENAME = "NewRT::TraitKeypad::KeySwitchStateReport";

        RTI_BOOL
        KeySwitchStateReport_initialize(KeySwitchStateReport* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            if (!NewRT::TraitCommon::TraitValue_initialize(&sample->state)) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        KeySwitchStateReport *
        KeySwitchStateReport_create(void)
        {
            KeySwitchStateReport* sample;
            OSAPI_Heap_allocate_struct(&sample, KeySwitchStateReport);
            if (sample != NULL) {
                if (!KeySwitchStateReport_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        KeySwitchStateReport_finalize(KeySwitchStateReport* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            NewRT::TraitCommon::TraitValue_finalize(&sample->state);
            return RTI_TRUE;
        }

        void
        KeySwitchStateReport_delete(KeySwitchStateReport*sample)
        {
            if (sample != NULL) {
                /* KeySwitchStateReport_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                KeySwitchStateReport_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        KeySwitchStateReport_copy(KeySwitchStateReport* dst,const KeySwitchStateReport* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::TraitValue_copy(
                &dst->state, &src->state)) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'KeySwitchStateReport' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T KeySwitchStateReport
        #define TSeq KeySwitchStateReportSeq
        #define T_initialize NewRT::TraitKeypad::KeySwitchStateReport_initialize
        #define T_finalize   NewRT::TraitKeypad::KeySwitchStateReport_finalize
        #define T_copy       NewRT::TraitKeypad::KeySwitchStateReport_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T KeySwitchStateReport
        #define TSeq KeySwitchStateReportSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        PvsMode_initialize(PvsMode* sample)
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

        PvsMode *
        PvsMode_create(void)
        {
            PvsMode* sample;
            OSAPI_Heap_allocate_struct(&sample, PvsMode);
            if (sample != NULL) {
                if (!PvsMode_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        PvsMode_finalize(PvsMode* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        PvsMode_delete(PvsMode*sample)
        {
            if (sample != NULL) {
                /* PvsMode_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                PvsMode_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        PvsMode_copy(PvsMode* dst,const PvsMode* src)
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
        * Configure and implement 'PvsMode' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T PvsMode
        #define TSeq PvsModeSeq
        #define T_initialize NewRT::TraitKeypad::PvsMode_initialize
        #define T_finalize   NewRT::TraitKeypad::PvsMode_finalize
        #define T_copy       NewRT::TraitKeypad::PvsMode_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T PvsMode
        #define TSeq PvsModeSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        ExposureState_initialize(ExposureState* sample)
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

        ExposureState *
        ExposureState_create(void)
        {
            ExposureState* sample;
            OSAPI_Heap_allocate_struct(&sample, ExposureState);
            if (sample != NULL) {
                if (!ExposureState_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        ExposureState_finalize(ExposureState* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        ExposureState_delete(ExposureState*sample)
        {
            if (sample != NULL) {
                /* ExposureState_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                ExposureState_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        ExposureState_copy(ExposureState* dst,const ExposureState* src)
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
        * Configure and implement 'ExposureState' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T ExposureState
        #define TSeq ExposureStateSeq
        #define T_initialize NewRT::TraitKeypad::ExposureState_initialize
        #define T_finalize   NewRT::TraitKeypad::ExposureState_finalize
        #define T_copy       NewRT::TraitKeypad::ExposureState_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T ExposureState
        #define TSeq ExposureStateSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        const char *PvsInformationReportTYPENAME = "NewRT::TraitKeypad::PvsInformationReport";

        RTI_BOOL
        PvsInformationReport_initialize(PvsInformationReport* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            if (!NewRT::TraitCommon::TraitValueList_initialize(&sample->infos)) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        PvsInformationReport *
        PvsInformationReport_create(void)
        {
            PvsInformationReport* sample;
            OSAPI_Heap_allocate_struct(&sample, PvsInformationReport);
            if (sample != NULL) {
                if (!PvsInformationReport_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        PvsInformationReport_finalize(PvsInformationReport* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            NewRT::TraitCommon::TraitValueList_finalize(&sample->infos);
            return RTI_TRUE;
        }

        void
        PvsInformationReport_delete(PvsInformationReport*sample)
        {
            if (sample != NULL) {
                /* PvsInformationReport_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                PvsInformationReport_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        PvsInformationReport_copy(PvsInformationReport* dst,const PvsInformationReport* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::TraitValueList_copy(
                &dst->infos, &src->infos)) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'PvsInformationReport' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T PvsInformationReport
        #define TSeq PvsInformationReportSeq
        #define T_initialize NewRT::TraitKeypad::PvsInformationReport_initialize
        #define T_finalize   NewRT::TraitKeypad::PvsInformationReport_finalize
        #define T_copy       NewRT::TraitKeypad::PvsInformationReport_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T PvsInformationReport
        #define TSeq PvsInformationReportSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        MotionStatus_initialize(MotionStatus* sample)
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

        MotionStatus *
        MotionStatus_create(void)
        {
            MotionStatus* sample;
            OSAPI_Heap_allocate_struct(&sample, MotionStatus);
            if (sample != NULL) {
                if (!MotionStatus_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        MotionStatus_finalize(MotionStatus* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        MotionStatus_delete(MotionStatus*sample)
        {
            if (sample != NULL) {
                /* MotionStatus_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                MotionStatus_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        MotionStatus_copy(MotionStatus* dst,const MotionStatus* src)
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
        * Configure and implement 'MotionStatus' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T MotionStatus
        #define TSeq MotionStatusSeq
        #define T_initialize NewRT::TraitKeypad::MotionStatus_initialize
        #define T_finalize   NewRT::TraitKeypad::MotionStatus_finalize
        #define T_copy       NewRT::TraitKeypad::MotionStatus_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T MotionStatus
        #define TSeq MotionStatusSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        MotionStatusItem_initialize(MotionStatusItem* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            if (!NewRT::TraitCommon::TraitValueList_initialize(sample)) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        MotionStatusItem *
        MotionStatusItem_create(void)
        {
            MotionStatusItem* sample;
            OSAPI_Heap_allocate_struct(&sample, MotionStatusItem);
            if (sample != NULL) {
                if (!MotionStatusItem_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        MotionStatusItem_finalize(MotionStatusItem* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            NewRT::TraitCommon::TraitValueList_finalize(sample);
            return RTI_TRUE;
        }

        void
        MotionStatusItem_delete(MotionStatusItem*sample)
        {
            if (sample != NULL) {
                /* MotionStatusItem_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                MotionStatusItem_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        MotionStatusItem_copy(MotionStatusItem* dst,const MotionStatusItem* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::TraitValueList_copy(
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
        * Configure and implement 'MotionStatusItem' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T MotionStatusItem
        #define TSeq MotionStatusItemSeq
        #define T_initialize NewRT::TraitKeypad::MotionStatusItem_initialize
        #define T_finalize   NewRT::TraitKeypad::MotionStatusItem_finalize
        #define T_copy       NewRT::TraitKeypad::MotionStatusItem_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T MotionStatusItem
        #define TSeq MotionStatusItemSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        const char *MotionStatusReportTYPENAME = "NewRT::TraitKeypad::MotionStatusReport";

        RTI_BOOL
        MotionStatusReport_initialize(MotionStatusReport* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            if (!NewRT::TraitKeypad::MotionStatusItemSeq_initialize(&sample->status)) {
                return RTI_FALSE;
            }
            if (!NewRT::TraitKeypad::MotionStatusItemSeq_set_maximum(&sample->status, (15))) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        MotionStatusReport *
        MotionStatusReport_create(void)
        {
            MotionStatusReport* sample;
            OSAPI_Heap_allocate_struct(&sample, MotionStatusReport);
            if (sample != NULL) {
                if (!MotionStatusReport_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        MotionStatusReport_finalize(MotionStatusReport* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            NewRT::TraitKeypad::MotionStatusItemSeq_finalize(&sample->status);
            return RTI_TRUE;
        }

        void
        MotionStatusReport_delete(MotionStatusReport*sample)
        {
            if (sample != NULL) {
                /* MotionStatusReport_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                MotionStatusReport_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        MotionStatusReport_copy(MotionStatusReport* dst,const MotionStatusReport* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            if (!NewRT::TraitKeypad::MotionStatusItemSeq_copy(&dst->status ,
            &src->status  )) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'MotionStatusReport' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T MotionStatusReport
        #define TSeq MotionStatusReportSeq
        #define T_initialize NewRT::TraitKeypad::MotionStatusReport_initialize
        #define T_finalize   NewRT::TraitKeypad::MotionStatusReport_finalize
        #define T_copy       NewRT::TraitKeypad::MotionStatusReport_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T MotionStatusReport
        #define TSeq MotionStatusReportSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        const char *MessageReportTYPENAME = "NewRT::TraitKeypad::MessageReport";

        RTI_BOOL
        MessageReport_initialize(MessageReport* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            if (!NewRT::TraitCommon::MessageIdList_initialize(&sample->messages)) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        MessageReport *
        MessageReport_create(void)
        {
            MessageReport* sample;
            OSAPI_Heap_allocate_struct(&sample, MessageReport);
            if (sample != NULL) {
                if (!MessageReport_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        MessageReport_finalize(MessageReport* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            NewRT::TraitCommon::MessageIdList_finalize(&sample->messages);
            return RTI_TRUE;
        }

        void
        MessageReport_delete(MessageReport*sample)
        {
            if (sample != NULL) {
                /* MessageReport_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                MessageReport_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        MessageReport_copy(MessageReport* dst,const MessageReport* src)
        {        
            if ((dst == NULL) || (src == NULL))
            {
                return RTI_FALSE;
            }
            if (!NewRT::TraitCommon::MessageIdList_copy(
                &dst->messages, &src->messages)) {
                return RTI_FALSE;
            }
            return RTI_TRUE;
        }

        /**
        * <<IMPLEMENTATION>>
        *
        * Defines:  TSeq, T
        *
        * Configure and implement 'MessageReport' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T MessageReport
        #define TSeq MessageReportSeq
        #define T_initialize NewRT::TraitKeypad::MessageReport_initialize
        #define T_finalize   NewRT::TraitKeypad::MessageReport_finalize
        #define T_copy       NewRT::TraitKeypad::MessageReport_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T MessageReport
        #define TSeq MessageReportSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

    } /* namespace TraitKeypad  */

} /* namespace NewRT  */

