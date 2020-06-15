/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Hello.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef Hello_1095434426_h
#define Hello_1095434426_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#if (defined(RTI_WIN32) || defined(RTI_WIN64) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

struct HelloWorldSeq;
class HelloWorldTypeSupport;
class HelloWorldDataWriter;
class HelloWorldDataReader;

class HelloWorld  
{
  public:
    typedef struct HelloWorldSeq Seq;
    typedef HelloWorldTypeSupport TypeSupport;
    typedef HelloWorldDataWriter DataWriter;
    typedef HelloWorldDataReader DataReader;

    CDR_String msg;

};

NDDSUSERDllExport extern const char *HelloWorldTYPENAME;

#define REDA_SEQUENCE_USER_API
#define T HelloWorld
#define TSeq HelloWorldSeq
#define REDA_SEQUENCE_EXCLUDE_C_METHODS
#define REDA_SEQUENCE_USER_CPP
#include <reda/reda_sequence_decl.h>

#define REDA_SEQUENCE_USER_API
#define T HelloWorld
#define TSeq HelloWorldSeq
#define REDA_SEQUENCE_EXCLUDE_STRUCT
#define REDA_SEQUENCE_USER_CPP
#include <reda/reda_sequence_decl.h>

NDDSUSERDllExport extern RTI_BOOL
HelloWorld_initialize(HelloWorld* sample);

NDDSUSERDllExport extern HelloWorld*
HelloWorld_create();

#ifndef RTI_CERT
NDDSUSERDllExport extern RTI_BOOL
HelloWorld_finalize(HelloWorld* sample);

NDDSUSERDllExport extern void
HelloWorld_delete(HelloWorld* sample);
#endif

NDDSUSERDllExport extern RTI_BOOL
HelloWorld_copy(HelloWorld* dst, const HelloWorld* src);

#if (defined(RTI_WIN32) || defined(RTI_WIN64) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Hello */

