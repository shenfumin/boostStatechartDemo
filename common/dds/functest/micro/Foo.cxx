/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Foo.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#include "Foo.h"

#ifndef UNUSED_ARG
#define UNUSED_ARG(x) (void)(x)
#endif

/*** SOURCE_BEGIN ***/

/* ========================================================================= */

const char *FooTYPENAME = "Foo";

RTI_BOOL
Foo_initialize(Foo* sample)
{
    if (sample == NULL)
    {
        return RTI_FALSE;
    }

    CDR_Primitive_init_long(&sample->x);
    CDR_Primitive_init_long(&sample->y);
    return RTI_TRUE;
}

Foo *
Foo_create(void)
{
    Foo* sample;
    OSAPI_Heap_allocate_struct(&sample, Foo);
    if (sample != NULL) {
        if (!Foo_initialize(sample)) {
            OSAPI_Heap_free_struct(sample);
            sample = NULL;
        }
    }
    return sample;
}

#ifndef RTI_CERT

RTI_BOOL
Foo_finalize(Foo* sample)
{
    if (sample == NULL)
    {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

void
Foo_delete(Foo*sample)
{
    if (sample != NULL) {
        /* Foo_finalize() always 
        returns RTI_TRUE when called with sample != NULL */
        Foo_finalize(sample);
        OSAPI_Heap_free_struct(sample);
    }
}
#endif

RTI_BOOL
Foo_copy(Foo* dst,const Foo* src)
{        
    if ((dst == NULL) || (src == NULL))
    {
        return RTI_FALSE;
    }
    CDR_Primitive_copy_long(&dst->x, &src->x);
    CDR_Primitive_copy_long(&dst->y, &src->y);
    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'Foo' sequence class.
*/
#define REDA_SEQUENCE_USER_API
#define T Foo
#define TSeq FooSeq
#define T_initialize Foo_initialize
#define T_finalize   Foo_finalize
#define T_copy       Foo_copy
#include "reda/reda_sequence_defn.h"
#undef T_copy
#undef T_finalize
#undef T_initialize

#define REDA_SEQUENCE_USER_API
#define T Foo
#define TSeq FooSeq
#include "dds_cpp/dds_cpp_sequence_defn.hxx"

/* ========================================================================= */

const char *MyTypeTYPENAME = "MyType";

RTI_BOOL
MyType_initialize(MyType* sample)
{
    if (sample == NULL)
    {
        return RTI_FALSE;
    }

    CDR_Primitive_init_long(&sample->my_long);
    if (!CDR_String_initialize(&sample->my_string, (512)))
    {
        return RTI_FALSE;
    }
    if (!Foo_initialize(&sample->my_foo)) {
        return RTI_FALSE;
    }
    if (!CDR_LongSeq_initialize(&sample->my_sequence)) {
        return RTI_FALSE;
    }
    if (!CDR_LongSeq_set_maximum(&sample->my_sequence,(10))) {
        return RTI_FALSE;
    }
    {
        int i = 0;
        Foo* elem =
        (Foo*) &sample->my_array[0];

        for (i = 0; i < (5); ++i, ++elem) {
            if (!Foo_initialize(elem)) {
                return RTI_FALSE;
            }
        }
    }
    if (!Foo_initialize(&sample->my_optional)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

MyType *
MyType_create(void)
{
    MyType* sample;
    OSAPI_Heap_allocate_struct(&sample, MyType);
    if (sample != NULL) {
        if (!MyType_initialize(sample)) {
            OSAPI_Heap_free_struct(sample);
            sample = NULL;
        }
    }
    return sample;
}

#ifndef RTI_CERT

RTI_BOOL
MyType_finalize(MyType* sample)
{
    if (sample == NULL)
    {
        return RTI_FALSE;
    }

    CDR_String_finalize(&sample->my_string);
    Foo_finalize(&sample->my_foo);
    CDR_LongSeq_finalize(&sample->my_sequence);
    {
        int i = 0;
        Foo* elem =
        (Foo*) &sample->my_array[0];

        for (i = 0; i < (5); ++i, ++elem) {
            Foo_finalize(elem);
        }
    }

    Foo_finalize(&sample->my_optional);
    return RTI_TRUE;
}

void
MyType_delete(MyType*sample)
{
    if (sample != NULL) {
        /* MyType_finalize() always 
        returns RTI_TRUE when called with sample != NULL */
        MyType_finalize(sample);
        OSAPI_Heap_free_struct(sample);
    }
}
#endif

RTI_BOOL
MyType_copy(MyType* dst,const MyType* src)
{        
    if ((dst == NULL) || (src == NULL))
    {
        return RTI_FALSE;
    }
    CDR_Primitive_copy_long(&dst->my_long, &src->my_long);
    if (!CDR_String_copy(&dst->my_string, &src->my_string, (512)))
    {
        return RTI_FALSE;
    }
    if (!Foo_copy(
        &dst->my_foo, &src->my_foo)) {
        return RTI_FALSE;
    }
    if (!CDR_LongSeq_copy(&dst->my_sequence ,
    &src->my_sequence  )) {
        return RTI_FALSE;
    }
    {
        int i = 0;
        Foo* elemOut = (Foo*) &dst->my_array[0];
        const Foo* elemIn = (const Foo*) &src->my_array[0];
        for (i = 0; i < (5);
        ++i, ++elemOut, ++elemIn) {
            if (!Foo_copy(elemOut,(const Foo*)elemIn)) {
                return RTI_FALSE;
            }
        }
    }

    if (!Foo_copy(
        &dst->my_optional, &src->my_optional)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'MyType' sequence class.
*/
#define REDA_SEQUENCE_USER_API
#define T MyType
#define TSeq MyTypeSeq
#define T_initialize MyType_initialize
#define T_finalize   MyType_finalize
#define T_copy       MyType_copy
#include "reda/reda_sequence_defn.h"
#undef T_copy
#undef T_finalize
#undef T_initialize

#define REDA_SEQUENCE_USER_API
#define T MyType
#define TSeq MyTypeSeq
#include "dds_cpp/dds_cpp_sequence_defn.hxx"

/* ========================================================================= */

const char *MyOtherTypeTYPENAME = "MyOtherType";

RTI_BOOL
MyOtherType_initialize(MyOtherType* sample)
{
    if (sample == NULL)
    {
        return RTI_FALSE;
    }

    CDR_Primitive_init_long(&sample->m1);
    CDR_Primitive_init_double(&sample->m2);
    if (!CDR_String_initialize(&sample->m3, (255)))
    {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

MyOtherType *
MyOtherType_create(void)
{
    MyOtherType* sample;
    OSAPI_Heap_allocate_struct(&sample, MyOtherType);
    if (sample != NULL) {
        if (!MyOtherType_initialize(sample)) {
            OSAPI_Heap_free_struct(sample);
            sample = NULL;
        }
    }
    return sample;
}

#ifndef RTI_CERT

RTI_BOOL
MyOtherType_finalize(MyOtherType* sample)
{
    if (sample == NULL)
    {
        return RTI_FALSE;
    }

    CDR_String_finalize(&sample->m3);
    return RTI_TRUE;
}

void
MyOtherType_delete(MyOtherType*sample)
{
    if (sample != NULL) {
        /* MyOtherType_finalize() always 
        returns RTI_TRUE when called with sample != NULL */
        MyOtherType_finalize(sample);
        OSAPI_Heap_free_struct(sample);
    }
}
#endif

RTI_BOOL
MyOtherType_copy(MyOtherType* dst,const MyOtherType* src)
{        
    if ((dst == NULL) || (src == NULL))
    {
        return RTI_FALSE;
    }
    CDR_Primitive_copy_long(&dst->m1, &src->m1);
    CDR_Primitive_copy_double(&dst->m2, &src->m2);
    if (!CDR_String_copy(&dst->m3, &src->m3, (255)))
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
* Configure and implement 'MyOtherType' sequence class.
*/
#define REDA_SEQUENCE_USER_API
#define T MyOtherType
#define TSeq MyOtherTypeSeq
#define T_initialize MyOtherType_initialize
#define T_finalize   MyOtherType_finalize
#define T_copy       MyOtherType_copy
#include "reda/reda_sequence_defn.h"
#undef T_copy
#undef T_finalize
#undef T_initialize

#define REDA_SEQUENCE_USER_API
#define T MyOtherType
#define TSeq MyOtherTypeSeq
#include "dds_cpp/dds_cpp_sequence_defn.hxx"

