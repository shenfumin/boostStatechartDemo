/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TraitId.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#include "TraitId.h"

#ifndef UNUSED_ARG
#define UNUSED_ARG(x) (void)(x)
#endif

/*** SOURCE_BEGIN ***/
namespace NewRT {

    namespace TraitIdTable {

        /* ========================================================================= */

        RTI_BOOL
        TraitIdUser_initialize(TraitIdUser* sample)
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

        TraitIdUser *
        TraitIdUser_create(void)
        {
            TraitIdUser* sample;
            OSAPI_Heap_allocate_struct(&sample, TraitIdUser);
            if (sample != NULL) {
                if (!TraitIdUser_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        TraitIdUser_finalize(TraitIdUser* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        TraitIdUser_delete(TraitIdUser*sample)
        {
            if (sample != NULL) {
                /* TraitIdUser_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                TraitIdUser_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        TraitIdUser_copy(TraitIdUser* dst,const TraitIdUser* src)
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
        * Configure and implement 'TraitIdUser' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T TraitIdUser
        #define TSeq TraitIdUserSeq
        #define T_initialize NewRT::TraitIdTable::TraitIdUser_initialize
        #define T_finalize   NewRT::TraitIdTable::TraitIdUser_finalize
        #define T_copy       NewRT::TraitIdTable::TraitIdUser_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdUser
        #define TSeq TraitIdUserSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        TraitIdRoom_initialize(TraitIdRoom* sample)
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

        TraitIdRoom *
        TraitIdRoom_create(void)
        {
            TraitIdRoom* sample;
            OSAPI_Heap_allocate_struct(&sample, TraitIdRoom);
            if (sample != NULL) {
                if (!TraitIdRoom_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        TraitIdRoom_finalize(TraitIdRoom* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        TraitIdRoom_delete(TraitIdRoom*sample)
        {
            if (sample != NULL) {
                /* TraitIdRoom_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                TraitIdRoom_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        TraitIdRoom_copy(TraitIdRoom* dst,const TraitIdRoom* src)
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
        * Configure and implement 'TraitIdRoom' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T TraitIdRoom
        #define TSeq TraitIdRoomSeq
        #define T_initialize NewRT::TraitIdTable::TraitIdRoom_initialize
        #define T_finalize   NewRT::TraitIdTable::TraitIdRoom_finalize
        #define T_copy       NewRT::TraitIdTable::TraitIdRoom_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdRoom
        #define TSeq TraitIdRoomSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        TraitIdTCS_initialize(TraitIdTCS* sample)
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

        TraitIdTCS *
        TraitIdTCS_create(void)
        {
            TraitIdTCS* sample;
            OSAPI_Heap_allocate_struct(&sample, TraitIdTCS);
            if (sample != NULL) {
                if (!TraitIdTCS_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        TraitIdTCS_finalize(TraitIdTCS* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        TraitIdTCS_delete(TraitIdTCS*sample)
        {
            if (sample != NULL) {
                /* TraitIdTCS_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                TraitIdTCS_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        TraitIdTCS_copy(TraitIdTCS* dst,const TraitIdTCS* src)
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
        * Configure and implement 'TraitIdTCS' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T TraitIdTCS
        #define TSeq TraitIdTCSSeq
        #define T_initialize NewRT::TraitIdTable::TraitIdTCS_initialize
        #define T_finalize   NewRT::TraitIdTable::TraitIdTCS_finalize
        #define T_copy       NewRT::TraitIdTable::TraitIdTCS_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdTCS
        #define TSeq TraitIdTCSSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        TraitIdGantry_initialize(TraitIdGantry* sample)
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

        TraitIdGantry *
        TraitIdGantry_create(void)
        {
            TraitIdGantry* sample;
            OSAPI_Heap_allocate_struct(&sample, TraitIdGantry);
            if (sample != NULL) {
                if (!TraitIdGantry_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        TraitIdGantry_finalize(TraitIdGantry* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        TraitIdGantry_delete(TraitIdGantry*sample)
        {
            if (sample != NULL) {
                /* TraitIdGantry_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                TraitIdGantry_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        TraitIdGantry_copy(TraitIdGantry* dst,const TraitIdGantry* src)
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
        * Configure and implement 'TraitIdGantry' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T TraitIdGantry
        #define TSeq TraitIdGantrySeq
        #define T_initialize NewRT::TraitIdTable::TraitIdGantry_initialize
        #define T_finalize   NewRT::TraitIdTable::TraitIdGantry_finalize
        #define T_copy       NewRT::TraitIdTable::TraitIdGantry_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdGantry
        #define TSeq TraitIdGantrySeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        TraitIdCouch_initialize(TraitIdCouch* sample)
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

        TraitIdCouch *
        TraitIdCouch_create(void)
        {
            TraitIdCouch* sample;
            OSAPI_Heap_allocate_struct(&sample, TraitIdCouch);
            if (sample != NULL) {
                if (!TraitIdCouch_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        TraitIdCouch_finalize(TraitIdCouch* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        TraitIdCouch_delete(TraitIdCouch*sample)
        {
            if (sample != NULL) {
                /* TraitIdCouch_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                TraitIdCouch_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        TraitIdCouch_copy(TraitIdCouch* dst,const TraitIdCouch* src)
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
        * Configure and implement 'TraitIdCouch' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T TraitIdCouch
        #define TSeq TraitIdCouchSeq
        #define T_initialize NewRT::TraitIdTable::TraitIdCouch_initialize
        #define T_finalize   NewRT::TraitIdTable::TraitIdCouch_finalize
        #define T_copy       NewRT::TraitIdTable::TraitIdCouch_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdCouch
        #define TSeq TraitIdCouchSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        TraitIdClinical_initialize(TraitIdClinical* sample)
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

        TraitIdClinical *
        TraitIdClinical_create(void)
        {
            TraitIdClinical* sample;
            OSAPI_Heap_allocate_struct(&sample, TraitIdClinical);
            if (sample != NULL) {
                if (!TraitIdClinical_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        TraitIdClinical_finalize(TraitIdClinical* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        TraitIdClinical_delete(TraitIdClinical*sample)
        {
            if (sample != NULL) {
                /* TraitIdClinical_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                TraitIdClinical_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        TraitIdClinical_copy(TraitIdClinical* dst,const TraitIdClinical* src)
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
        * Configure and implement 'TraitIdClinical' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T TraitIdClinical
        #define TSeq TraitIdClinicalSeq
        #define T_initialize NewRT::TraitIdTable::TraitIdClinical_initialize
        #define T_finalize   NewRT::TraitIdTable::TraitIdClinical_finalize
        #define T_copy       NewRT::TraitIdTable::TraitIdClinical_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdClinical
        #define TSeq TraitIdClinicalSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        TraitIdSystem_initialize(TraitIdSystem* sample)
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

        TraitIdSystem *
        TraitIdSystem_create(void)
        {
            TraitIdSystem* sample;
            OSAPI_Heap_allocate_struct(&sample, TraitIdSystem);
            if (sample != NULL) {
                if (!TraitIdSystem_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        TraitIdSystem_finalize(TraitIdSystem* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        TraitIdSystem_delete(TraitIdSystem*sample)
        {
            if (sample != NULL) {
                /* TraitIdSystem_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                TraitIdSystem_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        TraitIdSystem_copy(TraitIdSystem* dst,const TraitIdSystem* src)
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
        * Configure and implement 'TraitIdSystem' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T TraitIdSystem
        #define TSeq TraitIdSystemSeq
        #define T_initialize NewRT::TraitIdTable::TraitIdSystem_initialize
        #define T_finalize   NewRT::TraitIdTable::TraitIdSystem_finalize
        #define T_copy       NewRT::TraitIdTable::TraitIdSystem_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdSystem
        #define TSeq TraitIdSystemSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        TraitIdChair_initialize(TraitIdChair* sample)
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

        TraitIdChair *
        TraitIdChair_create(void)
        {
            TraitIdChair* sample;
            OSAPI_Heap_allocate_struct(&sample, TraitIdChair);
            if (sample != NULL) {
                if (!TraitIdChair_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        TraitIdChair_finalize(TraitIdChair* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        TraitIdChair_delete(TraitIdChair*sample)
        {
            if (sample != NULL) {
                /* TraitIdChair_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                TraitIdChair_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        TraitIdChair_copy(TraitIdChair* dst,const TraitIdChair* src)
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
        * Configure and implement 'TraitIdChair' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T TraitIdChair
        #define TSeq TraitIdChairSeq
        #define T_initialize NewRT::TraitIdTable::TraitIdChair_initialize
        #define T_finalize   NewRT::TraitIdTable::TraitIdChair_finalize
        #define T_copy       NewRT::TraitIdTable::TraitIdChair_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdChair
        #define TSeq TraitIdChairSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        TraitIdBSS_initialize(TraitIdBSS* sample)
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

        TraitIdBSS *
        TraitIdBSS_create(void)
        {
            TraitIdBSS* sample;
            OSAPI_Heap_allocate_struct(&sample, TraitIdBSS);
            if (sample != NULL) {
                if (!TraitIdBSS_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        TraitIdBSS_finalize(TraitIdBSS* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        TraitIdBSS_delete(TraitIdBSS*sample)
        {
            if (sample != NULL) {
                /* TraitIdBSS_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                TraitIdBSS_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        TraitIdBSS_copy(TraitIdBSS* dst,const TraitIdBSS* src)
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
        * Configure and implement 'TraitIdBSS' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T TraitIdBSS
        #define TSeq TraitIdBSSSeq
        #define T_initialize NewRT::TraitIdTable::TraitIdBSS_initialize
        #define T_finalize   NewRT::TraitIdTable::TraitIdBSS_finalize
        #define T_copy       NewRT::TraitIdTable::TraitIdBSS_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdBSS
        #define TSeq TraitIdBSSSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        TraitIdKeypad_initialize(TraitIdKeypad* sample)
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

        TraitIdKeypad *
        TraitIdKeypad_create(void)
        {
            TraitIdKeypad* sample;
            OSAPI_Heap_allocate_struct(&sample, TraitIdKeypad);
            if (sample != NULL) {
                if (!TraitIdKeypad_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        TraitIdKeypad_finalize(TraitIdKeypad* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        TraitIdKeypad_delete(TraitIdKeypad*sample)
        {
            if (sample != NULL) {
                /* TraitIdKeypad_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                TraitIdKeypad_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        TraitIdKeypad_copy(TraitIdKeypad* dst,const TraitIdKeypad* src)
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
        * Configure and implement 'TraitIdKeypad' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T TraitIdKeypad
        #define TSeq TraitIdKeypadSeq
        #define T_initialize NewRT::TraitIdTable::TraitIdKeypad_initialize
        #define T_finalize   NewRT::TraitIdTable::TraitIdKeypad_finalize
        #define T_copy       NewRT::TraitIdTable::TraitIdKeypad_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdKeypad
        #define TSeq TraitIdKeypadSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        TraitIdSAF_initialize(TraitIdSAF* sample)
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

        TraitIdSAF *
        TraitIdSAF_create(void)
        {
            TraitIdSAF* sample;
            OSAPI_Heap_allocate_struct(&sample, TraitIdSAF);
            if (sample != NULL) {
                if (!TraitIdSAF_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        TraitIdSAF_finalize(TraitIdSAF* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        TraitIdSAF_delete(TraitIdSAF*sample)
        {
            if (sample != NULL) {
                /* TraitIdSAF_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                TraitIdSAF_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        TraitIdSAF_copy(TraitIdSAF* dst,const TraitIdSAF* src)
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
        * Configure and implement 'TraitIdSAF' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T TraitIdSAF
        #define TSeq TraitIdSAFSeq
        #define T_initialize NewRT::TraitIdTable::TraitIdSAF_initialize
        #define T_finalize   NewRT::TraitIdTable::TraitIdSAF_finalize
        #define T_copy       NewRT::TraitIdTable::TraitIdSAF_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdSAF
        #define TSeq TraitIdSAFSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        TraitIdLog_initialize(TraitIdLog* sample)
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

        TraitIdLog *
        TraitIdLog_create(void)
        {
            TraitIdLog* sample;
            OSAPI_Heap_allocate_struct(&sample, TraitIdLog);
            if (sample != NULL) {
                if (!TraitIdLog_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        TraitIdLog_finalize(TraitIdLog* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        TraitIdLog_delete(TraitIdLog*sample)
        {
            if (sample != NULL) {
                /* TraitIdLog_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                TraitIdLog_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        TraitIdLog_copy(TraitIdLog* dst,const TraitIdLog* src)
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
        * Configure and implement 'TraitIdLog' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T TraitIdLog
        #define TSeq TraitIdLogSeq
        #define T_initialize NewRT::TraitIdTable::TraitIdLog_initialize
        #define T_finalize   NewRT::TraitIdTable::TraitIdLog_finalize
        #define T_copy       NewRT::TraitIdTable::TraitIdLog_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdLog
        #define TSeq TraitIdLogSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        TraitIdConfigure_initialize(TraitIdConfigure* sample)
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

        TraitIdConfigure *
        TraitIdConfigure_create(void)
        {
            TraitIdConfigure* sample;
            OSAPI_Heap_allocate_struct(&sample, TraitIdConfigure);
            if (sample != NULL) {
                if (!TraitIdConfigure_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        TraitIdConfigure_finalize(TraitIdConfigure* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        TraitIdConfigure_delete(TraitIdConfigure*sample)
        {
            if (sample != NULL) {
                /* TraitIdConfigure_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                TraitIdConfigure_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        TraitIdConfigure_copy(TraitIdConfigure* dst,const TraitIdConfigure* src)
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
        * Configure and implement 'TraitIdConfigure' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T TraitIdConfigure
        #define TSeq TraitIdConfigureSeq
        #define T_initialize NewRT::TraitIdTable::TraitIdConfigure_initialize
        #define T_finalize   NewRT::TraitIdTable::TraitIdConfigure_finalize
        #define T_copy       NewRT::TraitIdTable::TraitIdConfigure_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdConfigure
        #define TSeq TraitIdConfigureSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        TraitIdPDT_initialize(TraitIdPDT* sample)
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

        TraitIdPDT *
        TraitIdPDT_create(void)
        {
            TraitIdPDT* sample;
            OSAPI_Heap_allocate_struct(&sample, TraitIdPDT);
            if (sample != NULL) {
                if (!TraitIdPDT_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        TraitIdPDT_finalize(TraitIdPDT* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        TraitIdPDT_delete(TraitIdPDT*sample)
        {
            if (sample != NULL) {
                /* TraitIdPDT_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                TraitIdPDT_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        TraitIdPDT_copy(TraitIdPDT* dst,const TraitIdPDT* src)
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
        * Configure and implement 'TraitIdPDT' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T TraitIdPDT
        #define TSeq TraitIdPDTSeq
        #define T_initialize NewRT::TraitIdTable::TraitIdPDT_initialize
        #define T_finalize   NewRT::TraitIdTable::TraitIdPDT_finalize
        #define T_copy       NewRT::TraitIdTable::TraitIdPDT_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdPDT
        #define TSeq TraitIdPDTSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        TraitIdPanel_initialize(TraitIdPanel* sample)
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

        TraitIdPanel *
        TraitIdPanel_create(void)
        {
            TraitIdPanel* sample;
            OSAPI_Heap_allocate_struct(&sample, TraitIdPanel);
            if (sample != NULL) {
                if (!TraitIdPanel_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        TraitIdPanel_finalize(TraitIdPanel* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        TraitIdPanel_delete(TraitIdPanel*sample)
        {
            if (sample != NULL) {
                /* TraitIdPanel_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                TraitIdPanel_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        TraitIdPanel_copy(TraitIdPanel* dst,const TraitIdPanel* src)
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
        * Configure and implement 'TraitIdPanel' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T TraitIdPanel
        #define TSeq TraitIdPanelSeq
        #define T_initialize NewRT::TraitIdTable::TraitIdPanel_initialize
        #define T_finalize   NewRT::TraitIdTable::TraitIdPanel_finalize
        #define T_copy       NewRT::TraitIdTable::TraitIdPanel_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdPanel
        #define TSeq TraitIdPanelSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        TraitIdSnout_initialize(TraitIdSnout* sample)
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

        TraitIdSnout *
        TraitIdSnout_create(void)
        {
            TraitIdSnout* sample;
            OSAPI_Heap_allocate_struct(&sample, TraitIdSnout);
            if (sample != NULL) {
                if (!TraitIdSnout_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        TraitIdSnout_finalize(TraitIdSnout* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        TraitIdSnout_delete(TraitIdSnout*sample)
        {
            if (sample != NULL) {
                /* TraitIdSnout_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                TraitIdSnout_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        TraitIdSnout_copy(TraitIdSnout* dst,const TraitIdSnout* src)
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
        * Configure and implement 'TraitIdSnout' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T TraitIdSnout
        #define TSeq TraitIdSnoutSeq
        #define T_initialize NewRT::TraitIdTable::TraitIdSnout_initialize
        #define T_finalize   NewRT::TraitIdTable::TraitIdSnout_finalize
        #define T_copy       NewRT::TraitIdTable::TraitIdSnout_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdSnout
        #define TSeq TraitIdSnoutSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

        /* ========================================================================= */

        RTI_BOOL
        TraitIdLMS_initialize(TraitIdLMS* sample)
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

        TraitIdLMS *
        TraitIdLMS_create(void)
        {
            TraitIdLMS* sample;
            OSAPI_Heap_allocate_struct(&sample, TraitIdLMS);
            if (sample != NULL) {
                if (!TraitIdLMS_initialize(sample)) {
                    OSAPI_Heap_free_struct(sample);
                    sample = NULL;
                }
            }
            return sample;
        }

        #ifndef RTI_CERT

        RTI_BOOL
        TraitIdLMS_finalize(TraitIdLMS* sample)
        {
            if (sample == NULL)
            {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }

        void
        TraitIdLMS_delete(TraitIdLMS*sample)
        {
            if (sample != NULL) {
                /* TraitIdLMS_finalize() always 
                returns RTI_TRUE when called with sample != NULL */
                TraitIdLMS_finalize(sample);
                OSAPI_Heap_free_struct(sample);
            }
        }
        #endif

        RTI_BOOL
        TraitIdLMS_copy(TraitIdLMS* dst,const TraitIdLMS* src)
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
        * Configure and implement 'TraitIdLMS' sequence class.
        */
        #define REDA_SEQUENCE_USER_API
        #define T TraitIdLMS
        #define TSeq TraitIdLMSSeq
        #define T_initialize NewRT::TraitIdTable::TraitIdLMS_initialize
        #define T_finalize   NewRT::TraitIdTable::TraitIdLMS_finalize
        #define T_copy       NewRT::TraitIdTable::TraitIdLMS_copy
        #include "reda/reda_sequence_defn.h"
        #undef T_copy
        #undef T_finalize
        #undef T_initialize

        #define REDA_SEQUENCE_USER_API
        #define T TraitIdLMS
        #define TSeq TraitIdLMSSeq
        #include "dds_cpp/dds_cpp_sequence_defn.hxx"

    } /* namespace TraitIdTable  */

} /* namespace NewRT  */

