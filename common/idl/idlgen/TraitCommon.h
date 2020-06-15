/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TraitCommon.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Data Distribution Service manual.
*/

#ifndef TraitCommon_851419176_h
#define TraitCommon_851419176_h

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#if (defined(RTI_WIN32) || defined(RTI_WIN64) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace NewRT {

    namespace TraitCommon {

        typedef enum TreatmentControlProblem
        {
            TCS_NOFACILITY ,      
            TCS_NOTREATMENTROOM ,      
            TCS_NOCONSOLE ,      
            TCS_NOIMAGING ,      
            TCS_NOGANTRY ,      
            TCS_NOTABLE ,      
            TCS_NOCHAIR ,      
            TCS_NOPROTONS ,      
            TCS_NOPATIENT ,      
            TCS_NOMEMORY ,      
            TCS_NODISKSPACE ,      
            TCS_NOPERMISSION ,      
            TCS_INPROGRESS ,      
            TCS_NOTEXT ,      
            TCS_NOTFOUND ,      
            TCS_BADSTATE ,      
            TCS_NOLOCALE ,      
            TCS_BADTRAIT ,      
            TCS_TRAITVALUE ,      
            TCS_DUPLICATETRAIT ,      
            TCS_NOVISITS ,      
            TCS_BADARG ,      
            TCS_SOFTWARE ,      
            TCS_NETWORK ,      
            TCS_UNKNOWN      
        } TreatmentControlProblem;

        #define REDA_SEQUENCE_USER_API
        #define T TreatmentControlProblem
        #define TSeq TreatmentControlProblemSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T TreatmentControlProblem
        #define TSeq TreatmentControlProblemSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        TreatmentControlProblem_initialize(TreatmentControlProblem* sample);

        NDDSUSERDllExport extern TreatmentControlProblem*
        TreatmentControlProblem_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        TreatmentControlProblem_finalize(TreatmentControlProblem* sample);

        NDDSUSERDllExport extern void
        TreatmentControlProblem_delete(TreatmentControlProblem* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        TreatmentControlProblem_copy(TreatmentControlProblem* dst, const TreatmentControlProblem* src);

        typedef CDR_UnsignedShort RelativeSeconds;

        #define REDA_SEQUENCE_USER_API
        #define T RelativeSeconds
        #define TSeq RelativeSecondsSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T RelativeSeconds
        #define TSeq RelativeSecondsSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        RelativeSeconds_initialize(RelativeSeconds* sample);

        NDDSUSERDllExport extern RelativeSeconds*
        RelativeSeconds_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        RelativeSeconds_finalize(RelativeSeconds* sample);

        NDDSUSERDllExport extern void
        RelativeSeconds_delete(RelativeSeconds* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        RelativeSeconds_copy(RelativeSeconds* dst, const RelativeSeconds* src);

        typedef CDR_UnsignedShort RelativeMsecs;

        #define REDA_SEQUENCE_USER_API
        #define T RelativeMsecs
        #define TSeq RelativeMsecsSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T RelativeMsecs
        #define TSeq RelativeMsecsSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        RelativeMsecs_initialize(RelativeMsecs* sample);

        NDDSUSERDllExport extern RelativeMsecs*
        RelativeMsecs_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        RelativeMsecs_finalize(RelativeMsecs* sample);

        NDDSUSERDllExport extern void
        RelativeMsecs_delete(RelativeMsecs* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        RelativeMsecs_copy(RelativeMsecs* dst, const RelativeMsecs* src);

        typedef CDR_UnsignedLong TimeSeconds;

        #define REDA_SEQUENCE_USER_API
        #define T TimeSeconds
        #define TSeq TimeSecondsSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T TimeSeconds
        #define TSeq TimeSecondsSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        TimeSeconds_initialize(TimeSeconds* sample);

        NDDSUSERDllExport extern TimeSeconds*
        TimeSeconds_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        TimeSeconds_finalize(TimeSeconds* sample);

        NDDSUSERDllExport extern void
        TimeSeconds_delete(TimeSeconds* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        TimeSeconds_copy(TimeSeconds* dst, const TimeSeconds* src);

        typedef CDR_Long NLSIndex;

        #define REDA_SEQUENCE_USER_API
        #define T NLSIndex
        #define TSeq NLSIndexSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T NLSIndex
        #define TSeq NLSIndexSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        NLSIndex_initialize(NLSIndex* sample);

        NDDSUSERDllExport extern NLSIndex*
        NLSIndex_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        NLSIndex_finalize(NLSIndex* sample);

        NDDSUSERDllExport extern void
        NLSIndex_delete(NLSIndex* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        NLSIndex_copy(NLSIndex* dst, const NLSIndex* src);

        typedef CDR_String NLSKey;

        #define REDA_SEQUENCE_USER_API
        #define T NLSKey
        #define TSeq NLSKeySeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T NLSKey
        #define TSeq NLSKeySeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        NLSKey_initialize(NLSKey* sample);

        NDDSUSERDllExport extern NLSKey*
        NLSKey_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        NLSKey_finalize(NLSKey* sample);

        NDDSUSERDllExport extern void
        NLSKey_delete(NLSKey* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        NLSKey_copy(NLSKey* dst, const NLSKey* src);

        typedef CDR_String NLSText;

        #define REDA_SEQUENCE_USER_API
        #define T NLSText
        #define TSeq NLSTextSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T NLSText
        #define TSeq NLSTextSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        NLSText_initialize(NLSText* sample);

        NDDSUSERDllExport extern NLSText*
        NLSText_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        NLSText_finalize(NLSText* sample);

        NDDSUSERDllExport extern void
        NLSText_delete(NLSText* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        NLSText_copy(NLSText* dst, const NLSText* src);

        struct LocaleTextSeq;
        class LocaleTextTypeSupport;
        class LocaleTextDataWriter;
        class LocaleTextDataReader;

        class LocaleText  
        {
          public:
            typedef struct LocaleTextSeq Seq;
            typedef LocaleTextTypeSupport TypeSupport;
            typedef LocaleTextDataWriter DataWriter;
            typedef LocaleTextDataReader DataReader;

            NewRT::TraitCommon::NLSKey ltKey;
            NewRT::TraitCommon::NLSText ltText;
            NewRT::TraitCommon::NLSIndex ltIndex;

        };

        NDDSUSERDllExport extern const char *LocaleTextTYPENAME;

        #define REDA_SEQUENCE_USER_API
        #define T LocaleText
        #define TSeq LocaleTextSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T LocaleText
        #define TSeq LocaleTextSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        LocaleText_initialize(LocaleText* sample);

        NDDSUSERDllExport extern LocaleText*
        LocaleText_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        LocaleText_finalize(LocaleText* sample);

        NDDSUSERDllExport extern void
        LocaleText_delete(LocaleText* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        LocaleText_copy(LocaleText* dst, const LocaleText* src);

        typedef struct NewRT::TraitCommon::LocaleTextSeq LocaleTextList;

        #define REDA_SEQUENCE_USER_API
        #define T LocaleTextList
        #define TSeq LocaleTextListSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T LocaleTextList
        #define TSeq LocaleTextListSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        LocaleTextList_initialize(LocaleTextList* sample);

        NDDSUSERDllExport extern LocaleTextList*
        LocaleTextList_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        LocaleTextList_finalize(LocaleTextList* sample);

        NDDSUSERDllExport extern void
        LocaleTextList_delete(LocaleTextList* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        LocaleTextList_copy(LocaleTextList* dst, const LocaleTextList* src);

        typedef enum UserTextSeverity
        {
            TEXT_STATUS ,      
            TEXT_WARNING ,      
            TEXT_ALARM ,      
            TEXT_ERASE      
        } UserTextSeverity;

        #define REDA_SEQUENCE_USER_API
        #define T UserTextSeverity
        #define TSeq UserTextSeveritySeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T UserTextSeverity
        #define TSeq UserTextSeveritySeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        UserTextSeverity_initialize(UserTextSeverity* sample);

        NDDSUSERDllExport extern UserTextSeverity*
        UserTextSeverity_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        UserTextSeverity_finalize(UserTextSeverity* sample);

        NDDSUSERDllExport extern void
        UserTextSeverity_delete(UserTextSeverity* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        UserTextSeverity_copy(UserTextSeverity* dst, const UserTextSeverity* src);

        typedef CDR_Long TraitID;

        #define REDA_SEQUENCE_USER_API
        #define T TraitID
        #define TSeq TraitIDSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T TraitID
        #define TSeq TraitIDSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        TraitID_initialize(TraitID* sample);

        NDDSUSERDllExport extern TraitID*
        TraitID_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        TraitID_finalize(TraitID* sample);

        NDDSUSERDllExport extern void
        TraitID_delete(TraitID* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        TraitID_copy(TraitID* dst, const TraitID* src);

        typedef enum TCKind
        {
            TK_NULL ,      
            TK_SHORT ,      
            TK_LONG ,      
            TK_USHORT ,      
            TK_ULONG ,      
            TK_FLOAT ,      
            TK_DOUBLE ,      
            TK_BOOLEAN ,      
            TK_CHAR ,      
            TK_OCTET ,      
            TK_STRUCT ,      
            TK_UNION ,      
            TK_STRING ,      
            TK_SEQUENCE ,      
            TK_ARRAY ,      
            TK_ALIAS ,      
            TK_LONGLONG ,      
            TK_ULONGLONG ,      
            TK_VALUE      
        } TCKind;

        #define REDA_SEQUENCE_USER_API
        #define T TCKind
        #define TSeq TCKindSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T TCKind
        #define TSeq TCKindSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        TCKind_initialize(TCKind* sample);

        NDDSUSERDllExport extern TCKind*
        TCKind_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        TCKind_finalize(TCKind* sample);

        NDDSUSERDllExport extern void
        TCKind_delete(TCKind* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        TCKind_copy(TCKind* dst, const TCKind* src);

        struct TraitDataSeq;
        class TraitDataTypeSupport;
        class TraitDataDataWriter;
        class TraitDataDataReader;

        typedef struct TraitData

        {
          public:
            typedef struct TraitDataSeq Seq;
            typedef TraitDataTypeSupport TypeSupport;
            typedef TraitDataDataWriter DataWriter;
            typedef TraitDataDataReader DataReader;

            NewRT::TraitCommon::TCKind _d;
            struct TraitData_u 
            {

                CDR_Char nullValue;
                CDR_Short svalue;
                CDR_Long lvalue;
                CDR_UnsignedShort usvalue;
                CDR_UnsignedLong ulvalue;
                CDR_Float fvalue;
                CDR_Double dvalue;
                CDR_Boolean bvalue;
                CDR_Char cvalue;
                CDR_Octet ovalue;
                CDR_String strvalue;
                CDR_LongLong llvalue;
                CDR_UnsignedLongLong ullvalue;
            }_u;

        } TraitData ;

        NDDSUSERDllExport extern const char *TraitDataTYPENAME;

        #define REDA_SEQUENCE_USER_API
        #define T TraitData
        #define TSeq TraitDataSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T TraitData
        #define TSeq TraitDataSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        TraitData_initialize(TraitData* sample);

        NDDSUSERDllExport extern TraitData*
        TraitData_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        TraitData_finalize(TraitData* sample);

        NDDSUSERDllExport extern void
        TraitData_delete(TraitData* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        TraitData_copy(TraitData* dst, const TraitData* src);

        typedef CDR_String RegExp;

        #define REDA_SEQUENCE_USER_API
        #define T RegExp
        #define TSeq RegExpSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T RegExp
        #define TSeq RegExpSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        RegExp_initialize(RegExp* sample);

        NDDSUSERDllExport extern RegExp*
        RegExp_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        RegExp_finalize(RegExp* sample);

        NDDSUSERDllExport extern void
        RegExp_delete(RegExp* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        RegExp_copy(RegExp* dst, const RegExp* src);

        typedef NewRT::TraitCommon::TCKind TraitType;

        #define REDA_SEQUENCE_USER_API
        #define T TraitType
        #define TSeq TraitTypeSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T TraitType
        #define TSeq TraitTypeSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        TraitType_initialize(TraitType* sample);

        NDDSUSERDllExport extern TraitType*
        TraitType_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        TraitType_finalize(TraitType* sample);

        NDDSUSERDllExport extern void
        TraitType_delete(TraitType* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        TraitType_copy(TraitType* dst, const TraitType* src);

        struct TraitValueSeq;
        class TraitValueTypeSupport;
        class TraitValueDataWriter;
        class TraitValueDataReader;

        class TraitValue  
        {
          public:
            typedef struct TraitValueSeq Seq;
            typedef TraitValueTypeSupport TypeSupport;
            typedef TraitValueDataWriter DataWriter;
            typedef TraitValueDataReader DataReader;

            NewRT::TraitCommon::TraitID tid;
            NewRT::TraitCommon::TraitData tval;

        };

        NDDSUSERDllExport extern const char *TraitValueTYPENAME;

        #define REDA_SEQUENCE_USER_API
        #define T TraitValue
        #define TSeq TraitValueSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T TraitValue
        #define TSeq TraitValueSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        TraitValue_initialize(TraitValue* sample);

        NDDSUSERDllExport extern TraitValue*
        TraitValue_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        TraitValue_finalize(TraitValue* sample);

        NDDSUSERDllExport extern void
        TraitValue_delete(TraitValue* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        TraitValue_copy(TraitValue* dst, const TraitValue* src);

        typedef struct NewRT::TraitCommon::TraitValueSeq TraitValueList;

        #define REDA_SEQUENCE_USER_API
        #define T TraitValueList
        #define TSeq TraitValueListSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T TraitValueList
        #define TSeq TraitValueListSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        TraitValueList_initialize(TraitValueList* sample);

        NDDSUSERDllExport extern TraitValueList*
        TraitValueList_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        TraitValueList_finalize(TraitValueList* sample);

        NDDSUSERDllExport extern void
        TraitValueList_delete(TraitValueList* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        TraitValueList_copy(TraitValueList* dst, const TraitValueList* src);

        typedef enum TraitCategory
        {
            TRAIT_NUMERIC ,      
            TRAIT_NLSKEY ,      
            TRAIT_STRING ,      
            TRAIT_CHOICE ,      
            TRAIT_DATE ,      
            TRAIT_BOOL ,      
            TRAIT_NONE      
        } TraitCategory;

        #define REDA_SEQUENCE_USER_API
        #define T TraitCategory
        #define TSeq TraitCategorySeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T TraitCategory
        #define TSeq TraitCategorySeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        TraitCategory_initialize(TraitCategory* sample);

        NDDSUSERDllExport extern TraitCategory*
        TraitCategory_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        TraitCategory_finalize(TraitCategory* sample);

        NDDSUSERDllExport extern void
        TraitCategory_delete(TraitCategory* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        TraitCategory_copy(TraitCategory* dst, const TraitCategory* src);

        typedef enum TraitPurpose
        {
            TRAIT_PERSONAL ,      
            TRAIT_BIOMETRIC ,      
            TRAIT_CLINICAL ,      
            TRAIT_SCHEDULE ,      
            TRAIT_FIELD ,      
            TRAIT_SESSION ,      
            TRAIT_PRESCRIPTION ,      
            TRAIT_FACILITY ,      
            TRAIT_TREATMENTROOM ,      
            TRAIT_USERPREFERENCE ,      
            TRAIT_ALL      
        } TraitPurpose;

        #define REDA_SEQUENCE_USER_API
        #define T TraitPurpose
        #define TSeq TraitPurposeSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T TraitPurpose
        #define TSeq TraitPurposeSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        TraitPurpose_initialize(TraitPurpose* sample);

        NDDSUSERDllExport extern TraitPurpose*
        TraitPurpose_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        TraitPurpose_finalize(TraitPurpose* sample);

        NDDSUSERDllExport extern void
        TraitPurpose_delete(TraitPurpose* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        TraitPurpose_copy(TraitPurpose* dst, const TraitPurpose* src);

        struct MatchNumericSeq;
        class MatchNumericTypeSupport;
        class MatchNumericDataWriter;
        class MatchNumericDataReader;

        class MatchNumeric  
        {
          public:
            typedef struct MatchNumericSeq Seq;
            typedef MatchNumericTypeSupport TypeSupport;
            typedef MatchNumericDataWriter DataWriter;
            typedef MatchNumericDataReader DataReader;

            CDR_Double loValue;
            CDR_Double hiValue;

        };

        NDDSUSERDllExport extern const char *MatchNumericTYPENAME;

        #define REDA_SEQUENCE_USER_API
        #define T MatchNumeric
        #define TSeq MatchNumericSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T MatchNumeric
        #define TSeq MatchNumericSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        MatchNumeric_initialize(MatchNumeric* sample);

        NDDSUSERDllExport extern MatchNumeric*
        MatchNumeric_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        MatchNumeric_finalize(MatchNumeric* sample);

        NDDSUSERDllExport extern void
        MatchNumeric_delete(MatchNumeric* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        MatchNumeric_copy(MatchNumeric* dst, const MatchNumeric* src);

        struct MatchDateSeq;
        class MatchDateTypeSupport;
        class MatchDateDataWriter;
        class MatchDateDataReader;

        class MatchDate  
        {
          public:
            typedef struct MatchDateSeq Seq;
            typedef MatchDateTypeSupport TypeSupport;
            typedef MatchDateDataWriter DataWriter;
            typedef MatchDateDataReader DataReader;

            CDR_String startDate;
            CDR_String endDate;

        };

        NDDSUSERDllExport extern const char *MatchDateTYPENAME;

        #define REDA_SEQUENCE_USER_API
        #define T MatchDate
        #define TSeq MatchDateSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T MatchDate
        #define TSeq MatchDateSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        MatchDate_initialize(MatchDate* sample);

        NDDSUSERDllExport extern MatchDate*
        MatchDate_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        MatchDate_finalize(MatchDate* sample);

        NDDSUSERDllExport extern void
        MatchDate_delete(MatchDate* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        MatchDate_copy(MatchDate* dst, const MatchDate* src);

        struct TraitMatchSeq;
        class TraitMatchTypeSupport;
        class TraitMatchDataWriter;
        class TraitMatchDataReader;

        typedef struct TraitMatch

        {
          public:
            typedef struct TraitMatchSeq Seq;
            typedef TraitMatchTypeSupport TypeSupport;
            typedef TraitMatchDataWriter DataWriter;
            typedef TraitMatchDataReader DataReader;

            NewRT::TraitCommon::TraitCategory _d;
            struct TraitMatch_u 
            {

                NewRT::TraitCommon::MatchNumeric limits;
                CDR_String key;
                NewRT::TraitCommon::RegExp pattern;
                struct NewRT::TraitCommon::TraitDataSeq choice;
                NewRT::TraitCommon::MatchDate dates;
                CDR_Boolean expected;
            }_u;

        } TraitMatch ;

        NDDSUSERDllExport extern const char *TraitMatchTYPENAME;

        #define REDA_SEQUENCE_USER_API
        #define T TraitMatch
        #define TSeq TraitMatchSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T TraitMatch
        #define TSeq TraitMatchSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        TraitMatch_initialize(TraitMatch* sample);

        NDDSUSERDllExport extern TraitMatch*
        TraitMatch_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        TraitMatch_finalize(TraitMatch* sample);

        NDDSUSERDllExport extern void
        TraitMatch_delete(TraitMatch* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        TraitMatch_copy(TraitMatch* dst, const TraitMatch* src);

        struct LookupMatchSeq;
        class LookupMatchTypeSupport;
        class LookupMatchDataWriter;
        class LookupMatchDataReader;

        class LookupMatch  
        {
          public:
            typedef struct LookupMatchSeq Seq;
            typedef LookupMatchTypeSupport TypeSupport;
            typedef LookupMatchDataWriter DataWriter;
            typedef LookupMatchDataReader DataReader;

            NewRT::TraitCommon::TraitID field;
            NewRT::TraitCommon::TraitMatch match;

        };

        NDDSUSERDllExport extern const char *LookupMatchTYPENAME;

        #define REDA_SEQUENCE_USER_API
        #define T LookupMatch
        #define TSeq LookupMatchSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T LookupMatch
        #define TSeq LookupMatchSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        LookupMatch_initialize(LookupMatch* sample);

        NDDSUSERDllExport extern LookupMatch*
        LookupMatch_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        LookupMatch_finalize(LookupMatch* sample);

        NDDSUSERDllExport extern void
        LookupMatch_delete(LookupMatch* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        LookupMatch_copy(LookupMatch* dst, const LookupMatch* src);

        typedef struct NewRT::TraitCommon::LookupMatchSeq LookupMatchList;

        #define REDA_SEQUENCE_USER_API
        #define T LookupMatchList
        #define TSeq LookupMatchListSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T LookupMatchList
        #define TSeq LookupMatchListSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        LookupMatchList_initialize(LookupMatchList* sample);

        NDDSUSERDllExport extern LookupMatchList*
        LookupMatchList_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        LookupMatchList_finalize(LookupMatchList* sample);

        NDDSUSERDllExport extern void
        LookupMatchList_delete(LookupMatchList* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        LookupMatchList_copy(LookupMatchList* dst, const LookupMatchList* src);

        struct TraitAttrSeq;
        class TraitAttrTypeSupport;
        class TraitAttrDataWriter;
        class TraitAttrDataReader;

        class TraitAttr  
        {
          public:
            typedef struct TraitAttrSeq Seq;
            typedef TraitAttrTypeSupport TypeSupport;
            typedef TraitAttrDataWriter DataWriter;
            typedef TraitAttrDataReader DataReader;

            NewRT::TraitCommon::TraitID tid;
            NewRT::TraitCommon::TraitType type;
            NewRT::TraitCommon::NLSKey name;
            NewRT::TraitCommon::NLSKey description;
            NewRT::TraitCommon::TraitMatch range;
            NewRT::TraitCommon::TraitPurpose purpose;

        };

        NDDSUSERDllExport extern const char *TraitAttrTYPENAME;

        #define REDA_SEQUENCE_USER_API
        #define T TraitAttr
        #define TSeq TraitAttrSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T TraitAttr
        #define TSeq TraitAttrSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        TraitAttr_initialize(TraitAttr* sample);

        NDDSUSERDllExport extern TraitAttr*
        TraitAttr_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        TraitAttr_finalize(TraitAttr* sample);

        NDDSUSERDllExport extern void
        TraitAttr_delete(TraitAttr* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        TraitAttr_copy(TraitAttr* dst, const TraitAttr* src);

        typedef struct NewRT::TraitCommon::TraitAttrSeq TraitAttrList;

        #define REDA_SEQUENCE_USER_API
        #define T TraitAttrList
        #define TSeq TraitAttrListSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T TraitAttrList
        #define TSeq TraitAttrListSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        TraitAttrList_initialize(TraitAttrList* sample);

        NDDSUSERDllExport extern TraitAttrList*
        TraitAttrList_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        TraitAttrList_finalize(TraitAttrList* sample);

        NDDSUSERDllExport extern void
        TraitAttrList_delete(TraitAttrList* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        TraitAttrList_copy(TraitAttrList* dst, const TraitAttrList* src);

        typedef CDR_Long MsgID;

        #define REDA_SEQUENCE_USER_API
        #define T MsgID
        #define TSeq MsgIDSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T MsgID
        #define TSeq MsgIDSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        MsgID_initialize(MsgID* sample);

        NDDSUSERDllExport extern MsgID*
        MsgID_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        MsgID_finalize(MsgID* sample);

        NDDSUSERDllExport extern void
        MsgID_delete(MsgID* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        MsgID_copy(MsgID* dst, const MsgID* src);

        typedef CDR_String MsgText;

        #define REDA_SEQUENCE_USER_API
        #define T MsgText
        #define TSeq MsgTextSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T MsgText
        #define TSeq MsgTextSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        MsgText_initialize(MsgText* sample);

        NDDSUSERDllExport extern MsgText*
        MsgText_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        MsgText_finalize(MsgText* sample);

        NDDSUSERDllExport extern void
        MsgText_delete(MsgText* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        MsgText_copy(MsgText* dst, const MsgText* src);

        typedef enum MsgSeverity
        {
            MSG_DEBUG ,      
            MSG_INFO ,      
            MSG_WARN ,      
            MSG_ERROR ,      
            MSG_CRITICAL      
        } MsgSeverity;

        #define REDA_SEQUENCE_USER_API
        #define T MsgSeverity
        #define TSeq MsgSeveritySeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T MsgSeverity
        #define TSeq MsgSeveritySeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        MsgSeverity_initialize(MsgSeverity* sample);

        NDDSUSERDllExport extern MsgSeverity*
        MsgSeverity_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        MsgSeverity_finalize(MsgSeverity* sample);

        NDDSUSERDllExport extern void
        MsgSeverity_delete(MsgSeverity* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        MsgSeverity_copy(MsgSeverity* dst, const MsgSeverity* src);

        typedef enum MsgCategory
        {
            NA ,      
            DOOR ,      
            NO_BEAM ,      
            MISMATCH ,      
            PENDANT ,      
            BUSY ,      
            IMAGER ,      
            MOTION_COLLISION ,      
            INTERNAL_INTERLOCK ,      
            ESTOP      
        } MsgCategory;

        #define REDA_SEQUENCE_USER_API
        #define T MsgCategory
        #define TSeq MsgCategorySeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T MsgCategory
        #define TSeq MsgCategorySeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        MsgCategory_initialize(MsgCategory* sample);

        NDDSUSERDllExport extern MsgCategory*
        MsgCategory_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        MsgCategory_finalize(MsgCategory* sample);

        NDDSUSERDllExport extern void
        MsgCategory_delete(MsgCategory* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        MsgCategory_copy(MsgCategory* dst, const MsgCategory* src);

        struct MessageSeq;
        class MessageTypeSupport;
        class MessageDataWriter;
        class MessageDataReader;

        class Message  
        {
          public:
            typedef struct MessageSeq Seq;
            typedef MessageTypeSupport TypeSupport;
            typedef MessageDataWriter DataWriter;
            typedef MessageDataReader DataReader;

            NewRT::TraitCommon::MsgID mid;
            NewRT::TraitCommon::MsgSeverity severity;
            NewRT::TraitCommon::MsgText description;
            NewRT::TraitCommon::MsgText action;
            NewRT::TraitCommon::MsgCategory category;
            CDR_Boolean needAck;

        };

        NDDSUSERDllExport extern const char *MessageTYPENAME;

        #define REDA_SEQUENCE_USER_API
        #define T Message
        #define TSeq MessageSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T Message
        #define TSeq MessageSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        Message_initialize(Message* sample);

        NDDSUSERDllExport extern Message*
        Message_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        Message_finalize(Message* sample);

        NDDSUSERDllExport extern void
        Message_delete(Message* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        Message_copy(Message* dst, const Message* src);

        typedef struct NewRT::TraitCommon::MessageSeq MessageList;

        #define REDA_SEQUENCE_USER_API
        #define T MessageList
        #define TSeq MessageListSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T MessageList
        #define TSeq MessageListSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        MessageList_initialize(MessageList* sample);

        NDDSUSERDllExport extern MessageList*
        MessageList_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        MessageList_finalize(MessageList* sample);

        NDDSUSERDllExport extern void
        MessageList_delete(MessageList* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        MessageList_copy(MessageList* dst, const MessageList* src);

        typedef struct NewRT::TraitCommon::TraitValueSeq MessageIdList;

        #define REDA_SEQUENCE_USER_API
        #define T MessageIdList
        #define TSeq MessageIdListSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T MessageIdList
        #define TSeq MessageIdListSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        MessageIdList_initialize(MessageIdList* sample);

        NDDSUSERDllExport extern MessageIdList*
        MessageIdList_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        MessageIdList_finalize(MessageIdList* sample);

        NDDSUSERDllExport extern void
        MessageIdList_delete(MessageIdList* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        MessageIdList_copy(MessageIdList* dst, const MessageIdList* src);

        typedef enum SoftwareComponent
        {
            SW_COMPONENT_UNKNOWN ,      
            SW_COMPONENT_TCC ,      
            SW_COMPONENT_TCS ,      
            SW_COMPONENT_ACC ,      
            SW_COMPONENT_GNT ,      
            SW_COMPONENT_COUCH ,      
            SW_COMPONENT_CHR ,      
            SW_COMPONENT_TKP ,      
            SW_COMPONENT_OIS ,      
            SW_COMPONENT_PVS ,      
            SW_COMPONENT_SAF ,      
            SW_COMPONENT_BSS ,      
            SW_COMPONENT_SMS ,      
            SW_COMPONENT_END      
        } SoftwareComponent;

        #define REDA_SEQUENCE_USER_API
        #define T SoftwareComponent
        #define TSeq SoftwareComponentSeq
        #define REDA_SEQUENCE_EXCLUDE_C_METHODS
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        #define REDA_SEQUENCE_USER_API
        #define T SoftwareComponent
        #define TSeq SoftwareComponentSeq
        #define REDA_SEQUENCE_EXCLUDE_STRUCT
        #define REDA_SEQUENCE_USER_CPP
        #include <reda/reda_sequence_decl.h>

        NDDSUSERDllExport extern RTI_BOOL
        SoftwareComponent_initialize(SoftwareComponent* sample);

        NDDSUSERDllExport extern SoftwareComponent*
        SoftwareComponent_create();

        #ifndef RTI_CERT
        NDDSUSERDllExport extern RTI_BOOL
        SoftwareComponent_finalize(SoftwareComponent* sample);

        NDDSUSERDllExport extern void
        SoftwareComponent_delete(SoftwareComponent* sample);
        #endif

        NDDSUSERDllExport extern RTI_BOOL
        SoftwareComponent_copy(SoftwareComponent* dst, const SoftwareComponent* src);

    } /* namespace TraitCommon  */

} /* namespace NewRT  */

#if (defined(RTI_WIN32) || defined(RTI_WIN64) || defined(RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols. */
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* TraitCommon */

