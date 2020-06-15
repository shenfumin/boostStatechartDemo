/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MsgId.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#include "MsgId.h"

#ifndef UNUSED_ARG
#define UNUSED_ARG(x) (void)(x)
#endif

/*** SOURCE_BEGIN ***/
namespace NewRT {

    namespace MsgIdTable {

        /* ========================================================================= */

        RTI_BOOL
        MessageIdCMS_initialize(MessageIdCMS* sample)
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

        MessageIdCMS *
        MessageIdCMS_create(void)
        {
            MessageIdCMS* sample;
            OSAPI_Heap_allocate_struct(&sample, MessageIdCMS);
            if (sample != NULL) {
                if (!MessageIdCMS_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        MessageIdCMS_finalize(MessageIdCMS* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        MessageIdCMS_delete(MessageIdCMS*sample)
        {
            if (sample != NULL) {
                /* MessageIdCMS_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                MessageIdCMS_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        MessageIdCMS_copy(MessageIdCMS* dst,const MessageIdCMS* src)
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
        * Configure and implement 'MessageIdCMS' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T MessageIdCMS
        #define TSeq MessageIdCMSSeq
        #define T_initialize NewRT::MsgIdTable::MessageIdCMS_initialize
        #define T_finalize   NewRT::MsgIdTable::MessageIdCMS_finalize
        #define T_copy       NewRT::MsgIdTable::MessageIdCMS_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T MessageIdCMS
        #define TSeq MessageIdCMSSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        MessageIdCHAIR_initialize(MessageIdCHAIR* sample)
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

        MessageIdCHAIR *
        MessageIdCHAIR_create(void)
        {
            MessageIdCHAIR* sample;
            OSAPI_Heap_allocate_struct(&sample, MessageIdCHAIR);
            if (sample != NULL) {
                if (!MessageIdCHAIR_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        MessageIdCHAIR_finalize(MessageIdCHAIR* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        MessageIdCHAIR_delete(MessageIdCHAIR*sample)
        {
            if (sample != NULL) {
                /* MessageIdCHAIR_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                MessageIdCHAIR_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        MessageIdCHAIR_copy(MessageIdCHAIR* dst,const MessageIdCHAIR* src)
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
        * Configure and implement 'MessageIdCHAIR' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T MessageIdCHAIR
        #define TSeq MessageIdCHAIRSeq
        #define T_initialize NewRT::MsgIdTable::MessageIdCHAIR_initialize
        #define T_finalize   NewRT::MsgIdTable::MessageIdCHAIR_finalize
        #define T_copy       NewRT::MsgIdTable::MessageIdCHAIR_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T MessageIdCHAIR
        #define TSeq MessageIdCHAIRSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        MessageIdCOUCH_initialize(MessageIdCOUCH* sample)
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

        MessageIdCOUCH *
        MessageIdCOUCH_create(void)
        {
            MessageIdCOUCH* sample;
            OSAPI_Heap_allocate_struct(&sample, MessageIdCOUCH);
            if (sample != NULL) {
                if (!MessageIdCOUCH_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        MessageIdCOUCH_finalize(MessageIdCOUCH* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        MessageIdCOUCH_delete(MessageIdCOUCH*sample)
        {
            if (sample != NULL) {
                /* MessageIdCOUCH_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                MessageIdCOUCH_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        MessageIdCOUCH_copy(MessageIdCOUCH* dst,const MessageIdCOUCH* src)
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
        * Configure and implement 'MessageIdCOUCH' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T MessageIdCOUCH
        #define TSeq MessageIdCOUCHSeq
        #define T_initialize NewRT::MsgIdTable::MessageIdCOUCH_initialize
        #define T_finalize   NewRT::MsgIdTable::MessageIdCOUCH_finalize
        #define T_copy       NewRT::MsgIdTable::MessageIdCOUCH_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T MessageIdCOUCH
        #define TSeq MessageIdCOUCHSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        MessageIdGANTRY_initialize(MessageIdGANTRY* sample)
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

        MessageIdGANTRY *
        MessageIdGANTRY_create(void)
        {
            MessageIdGANTRY* sample;
            OSAPI_Heap_allocate_struct(&sample, MessageIdGANTRY);
            if (sample != NULL) {
                if (!MessageIdGANTRY_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        MessageIdGANTRY_finalize(MessageIdGANTRY* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        MessageIdGANTRY_delete(MessageIdGANTRY*sample)
        {
            if (sample != NULL) {
                /* MessageIdGANTRY_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                MessageIdGANTRY_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        MessageIdGANTRY_copy(MessageIdGANTRY* dst,const MessageIdGANTRY* src)
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
        * Configure and implement 'MessageIdGANTRY' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T MessageIdGANTRY
        #define TSeq MessageIdGANTRYSeq
        #define T_initialize NewRT::MsgIdTable::MessageIdGANTRY_initialize
        #define T_finalize   NewRT::MsgIdTable::MessageIdGANTRY_finalize
        #define T_copy       NewRT::MsgIdTable::MessageIdGANTRY_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T MessageIdGANTRY
        #define TSeq MessageIdGANTRYSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        MessageIdSNS_initialize(MessageIdSNS* sample)
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

        MessageIdSNS *
        MessageIdSNS_create(void)
        {
            MessageIdSNS* sample;
            OSAPI_Heap_allocate_struct(&sample, MessageIdSNS);
            if (sample != NULL) {
                if (!MessageIdSNS_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        MessageIdSNS_finalize(MessageIdSNS* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        MessageIdSNS_delete(MessageIdSNS*sample)
        {
            if (sample != NULL) {
                /* MessageIdSNS_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                MessageIdSNS_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        MessageIdSNS_copy(MessageIdSNS* dst,const MessageIdSNS* src)
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
        * Configure and implement 'MessageIdSNS' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T MessageIdSNS
        #define TSeq MessageIdSNSSeq
        #define T_initialize NewRT::MsgIdTable::MessageIdSNS_initialize
        #define T_finalize   NewRT::MsgIdTable::MessageIdSNS_finalize
        #define T_copy       NewRT::MsgIdTable::MessageIdSNS_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T MessageIdSNS
        #define TSeq MessageIdSNSSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        MessageIdTCS_initialize(MessageIdTCS* sample)
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

        MessageIdTCS *
        MessageIdTCS_create(void)
        {
            MessageIdTCS* sample;
            OSAPI_Heap_allocate_struct(&sample, MessageIdTCS);
            if (sample != NULL) {
                if (!MessageIdTCS_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        MessageIdTCS_finalize(MessageIdTCS* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        MessageIdTCS_delete(MessageIdTCS*sample)
        {
            if (sample != NULL) {
                /* MessageIdTCS_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                MessageIdTCS_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        MessageIdTCS_copy(MessageIdTCS* dst,const MessageIdTCS* src)
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
        * Configure and implement 'MessageIdTCS' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T MessageIdTCS
        #define TSeq MessageIdTCSSeq
        #define T_initialize NewRT::MsgIdTable::MessageIdTCS_initialize
        #define T_finalize   NewRT::MsgIdTable::MessageIdTCS_finalize
        #define T_copy       NewRT::MsgIdTable::MessageIdTCS_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T MessageIdTCS
        #define TSeq MessageIdTCSSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        MessageIdBSS_initialize(MessageIdBSS* sample)
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

        MessageIdBSS *
        MessageIdBSS_create(void)
        {
            MessageIdBSS* sample;
            OSAPI_Heap_allocate_struct(&sample, MessageIdBSS);
            if (sample != NULL) {
                if (!MessageIdBSS_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        MessageIdBSS_finalize(MessageIdBSS* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        MessageIdBSS_delete(MessageIdBSS*sample)
        {
            if (sample != NULL) {
                /* MessageIdBSS_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                MessageIdBSS_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        MessageIdBSS_copy(MessageIdBSS* dst,const MessageIdBSS* src)
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
        * Configure and implement 'MessageIdBSS' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T MessageIdBSS
        #define TSeq MessageIdBSSSeq
        #define T_initialize NewRT::MsgIdTable::MessageIdBSS_initialize
        #define T_finalize   NewRT::MsgIdTable::MessageIdBSS_finalize
        #define T_copy       NewRT::MsgIdTable::MessageIdBSS_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T MessageIdBSS
        #define TSeq MessageIdBSSSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        MessageIdSAF_initialize(MessageIdSAF* sample)
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

        MessageIdSAF *
        MessageIdSAF_create(void)
        {
            MessageIdSAF* sample;
            OSAPI_Heap_allocate_struct(&sample, MessageIdSAF);
            if (sample != NULL) {
                if (!MessageIdSAF_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        MessageIdSAF_finalize(MessageIdSAF* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        MessageIdSAF_delete(MessageIdSAF*sample)
        {
            if (sample != NULL) {
                /* MessageIdSAF_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                MessageIdSAF_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        MessageIdSAF_copy(MessageIdSAF* dst,const MessageIdSAF* src)
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
        * Configure and implement 'MessageIdSAF' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T MessageIdSAF
        #define TSeq MessageIdSAFSeq
        #define T_initialize NewRT::MsgIdTable::MessageIdSAF_initialize
        #define T_finalize   NewRT::MsgIdTable::MessageIdSAF_finalize
        #define T_copy       NewRT::MsgIdTable::MessageIdSAF_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T MessageIdSAF
        #define TSeq MessageIdSAFSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        MessageIdAIN_initialize(MessageIdAIN* sample)
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

        MessageIdAIN *
        MessageIdAIN_create(void)
        {
            MessageIdAIN* sample;
            OSAPI_Heap_allocate_struct(&sample, MessageIdAIN);
            if (sample != NULL) {
                if (!MessageIdAIN_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        MessageIdAIN_finalize(MessageIdAIN* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        MessageIdAIN_delete(MessageIdAIN*sample)
        {
            if (sample != NULL) {
                /* MessageIdAIN_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                MessageIdAIN_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        MessageIdAIN_copy(MessageIdAIN* dst,const MessageIdAIN* src)
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
        * Configure and implement 'MessageIdAIN' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T MessageIdAIN
        #define TSeq MessageIdAINSeq
        #define T_initialize NewRT::MsgIdTable::MessageIdAIN_initialize
        #define T_finalize   NewRT::MsgIdTable::MessageIdAIN_finalize
        #define T_copy       NewRT::MsgIdTable::MessageIdAIN_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T MessageIdAIN
        #define TSeq MessageIdAINSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        MessageIdSITE_initialize(MessageIdSITE* sample)
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

        MessageIdSITE *
        MessageIdSITE_create(void)
        {
            MessageIdSITE* sample;
            OSAPI_Heap_allocate_struct(&sample, MessageIdSITE);
            if (sample != NULL) {
                if (!MessageIdSITE_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        MessageIdSITE_finalize(MessageIdSITE* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        MessageIdSITE_delete(MessageIdSITE*sample)
        {
            if (sample != NULL) {
                /* MessageIdSITE_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                MessageIdSITE_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        MessageIdSITE_copy(MessageIdSITE* dst,const MessageIdSITE* src)
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
        * Configure and implement 'MessageIdSITE' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T MessageIdSITE
        #define TSeq MessageIdSITESeq
        #define T_initialize NewRT::MsgIdTable::MessageIdSITE_initialize
        #define T_finalize   NewRT::MsgIdTable::MessageIdSITE_finalize
        #define T_copy       NewRT::MsgIdTable::MessageIdSITE_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T MessageIdSITE
        #define TSeq MessageIdSITESeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

    } /* namespace MsgIdTable  */

} /* namespace NewRT  */

