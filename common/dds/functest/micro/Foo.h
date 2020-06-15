/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Foo.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Foo_982569605_h
#define Foo_982569605_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#if (defined(RTI_WIN32) || defined(RTI_WIN64) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

struct FooSeq;
class FooTypeSupport;
class FooDataWriter;
class FooDataReader;

class Foo  
{
  public:
    typedef struct FooSeq Seq;
    typedef FooTypeSupport TypeSupport;
    typedef FooDataWriter DataWriter;
    typedef FooDataReader DataReader;

    CDR_Long x;
    CDR_Long y;

};

NDDSUSERDllExport extern const char *FooTYPENAME;

#define REDA_SEQUENCE_USER_API
#define T Foo
#define TSeq FooSeq
#define REDA_SEQUENCE_EXCLUDE_C_METHODS
#define REDA_SEQUENCE_USER_CPP
#include <reda/reda_sequence_decl.h>

#define REDA_SEQUENCE_USER_API
#define T Foo
#define TSeq FooSeq
#define REDA_SEQUENCE_EXCLUDE_STRUCT
#define REDA_SEQUENCE_USER_CPP
#include <reda/reda_sequence_decl.h>

NDDSUSERDllExport extern RTI_BOOL
Foo_initialize(Foo* sample);

NDDSUSERDllExport extern Foo*
Foo_create();

#ifndef RTI_CERT
NDDSUSERDllExport extern RTI_BOOL
Foo_finalize(Foo* sample);

NDDSUSERDllExport extern void
Foo_delete(Foo* sample);
#endif

NDDSUSERDllExport extern RTI_BOOL
Foo_copy(Foo* dst, const Foo* src);

struct MyTypeSeq;
class MyTypeTypeSupport;
class MyTypeDataWriter;
class MyTypeDataReader;

class MyType  
{
  public:
    typedef struct MyTypeSeq Seq;
    typedef MyTypeTypeSupport TypeSupport;
    typedef MyTypeDataWriter DataWriter;
    typedef MyTypeDataReader DataReader;

    CDR_Long my_long;
    CDR_String my_string;
    Foo my_foo;
    struct CDR_LongSeq my_sequence;
    Foo my_array[5];
    Foo my_optional;

};

NDDSUSERDllExport extern const char *MyTypeTYPENAME;

#define REDA_SEQUENCE_USER_API
#define T MyType
#define TSeq MyTypeSeq
#define REDA_SEQUENCE_EXCLUDE_C_METHODS
#define REDA_SEQUENCE_USER_CPP
#include <reda/reda_sequence_decl.h>

#define REDA_SEQUENCE_USER_API
#define T MyType
#define TSeq MyTypeSeq
#define REDA_SEQUENCE_EXCLUDE_STRUCT
#define REDA_SEQUENCE_USER_CPP
#include <reda/reda_sequence_decl.h>

NDDSUSERDllExport extern RTI_BOOL
MyType_initialize(MyType* sample);

NDDSUSERDllExport extern MyType*
MyType_create();

#ifndef RTI_CERT
NDDSUSERDllExport extern RTI_BOOL
MyType_finalize(MyType* sample);

NDDSUSERDllExport extern void
MyType_delete(MyType* sample);
#endif

NDDSUSERDllExport extern RTI_BOOL
MyType_copy(MyType* dst, const MyType* src);

struct MyOtherTypeSeq;
class MyOtherTypeTypeSupport;
class MyOtherTypeDataWriter;
class MyOtherTypeDataReader;

class MyOtherType  
{
  public:
    typedef struct MyOtherTypeSeq Seq;
    typedef MyOtherTypeTypeSupport TypeSupport;
    typedef MyOtherTypeDataWriter DataWriter;
    typedef MyOtherTypeDataReader DataReader;

    CDR_Long m1;
    CDR_Double m2;
    CDR_String m3;

};

NDDSUSERDllExport extern const char *MyOtherTypeTYPENAME;

#define REDA_SEQUENCE_USER_API
#define T MyOtherType
#define TSeq MyOtherTypeSeq
#define REDA_SEQUENCE_EXCLUDE_C_METHODS
#define REDA_SEQUENCE_USER_CPP
#include <reda/reda_sequence_decl.h>

#define REDA_SEQUENCE_USER_API
#define T MyOtherType
#define TSeq MyOtherTypeSeq
#define REDA_SEQUENCE_EXCLUDE_STRUCT
#define REDA_SEQUENCE_USER_CPP
#include <reda/reda_sequence_decl.h>

NDDSUSERDllExport extern RTI_BOOL
MyOtherType_initialize(MyOtherType* sample);

NDDSUSERDllExport extern MyOtherType*
MyOtherType_create();

#ifndef RTI_CERT
NDDSUSERDllExport extern RTI_BOOL
MyOtherType_finalize(MyOtherType* sample);

NDDSUSERDllExport extern void
MyOtherType_delete(MyOtherType* sample);
#endif

NDDSUSERDllExport extern RTI_BOOL
MyOtherType_copy(MyOtherType* dst, const MyOtherType* src);

#if (defined(RTI_WIN32) || defined(RTI_WIN64) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Foo */

