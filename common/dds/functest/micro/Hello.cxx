/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Hello.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#include "Hello.h"

#ifndef UNUSED_ARG
#define UNUSED_ARG(x) (void)(x)
#endif

/*** SOURCE_BEGIN ***/

/* ========================================================================= */

const char *HelloWorldTYPENAME = "HelloWorld";

RTI_BOOL
HelloWorld_initialize(HelloWorld* sample)
{
    if (sample == NULL)
    {
        return RTI_FALSE;
    }

    if (!CDR_String_initialize(&sample->msg, (128)))
    {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

HelloWorld *
HelloWorld_create(void)
{
    HelloWorld* sample;
    OSAPI_Heap_allocate_struct(&sample, HelloWorld);
    if (sample != NULL) {
        if (!HelloWorld_initialize(sample)) {
            OSAPI_Heap_free_struct(sample);
            sample = NULL;
        }
    }
    return sample;
}

#ifndef RTI_CERT

RTI_BOOL
HelloWorld_finalize(HelloWorld* sample)
{
    if (sample == NULL)
    {
        return RTI_FALSE;
    }

    CDR_String_finalize(&sample->msg);
    return RTI_TRUE;
}

void
HelloWorld_delete(HelloWorld*sample)
{
    if (sample != NULL) {
        /* HelloWorld_finalize() always 
        returns RTI_TRUE when called with sample != NULL */
        HelloWorld_finalize(sample);
        OSAPI_Heap_free_struct(sample);
    }
}
#endif

RTI_BOOL
HelloWorld_copy(HelloWorld* dst,const HelloWorld* src)
{        
    if ((dst == NULL) || (src == NULL))
    {
        return RTI_FALSE;
    }
    if (!CDR_String_copy(&dst->msg, &src->msg, (128)))
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
* Configure and implement 'HelloWorld' sequence class.
*/
#define REDA_SEQUENCE_USER_API
#define T HelloWorld
#define TSeq HelloWorldSeq
#define T_initialize HelloWorld_initialize
#define T_finalize   HelloWorld_finalize
#define T_copy       HelloWorld_copy
#include "reda/reda_sequence_defn.h"
#undef T_copy
#undef T_finalize
#undef T_initialize

#define REDA_SEQUENCE_USER_API
#define T HelloWorld
#define TSeq HelloWorldSeq
#include "dds_cpp/dds_cpp_sequence_defn.hxx"

