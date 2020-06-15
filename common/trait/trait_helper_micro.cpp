#include "trait_helper_micro.h"

namespace NewRT
{
namespace TraitCommon
{
namespace TraitHelper
{

template<>
void toTraitData<int32_t>(TraitData& d, const int32_t& data)
{
    // d.lvalue(data);
    d._u.lvalue = data;
    d._d = TCKind::TK_LONG;
}

template<>
void toTraitData<int16_t>(TraitData& d, const int16_t& data)
{
    // d.svalue(data);
    d._u.svalue = data;
    d._d = TCKind::TK_SHORT;
}

template<>
void toTraitData<uint16_t>(TraitData& d, const uint16_t& data)
{
    // d.usvalue(data);
    d._u.usvalue = data;
    d._d = TCKind::TK_USHORT;
}

template<>
void toTraitData<uint32_t>(TraitData& d, const uint32_t& data)
{
    // d.ulvalue(data);
    d._u.ulvalue = data;
    d._d = TCKind::TK_ULONG;
}

template<>
void toTraitData<float>(TraitData& d, const float& data)
{
    // d.fvalue(data);
    d._u.fvalue = data;
    d._d = TCKind::TK_FLOAT;
}

template<>
void toTraitData<double>(TraitData& d, const double& data)
{
    // d.dvalue(data);
    d._u.dvalue = data;
    d._d = TCKind::TK_DOUBLE;
}

template<>
void toTraitData<bool>(TraitData& d, const bool& data)
{
    // d.bvalue(data);
    d._u.bvalue = data;
    d._d = TCKind::TK_BOOLEAN;
}

template<>
void toTraitData<char>(TraitData& d, const char& data)
{
    // d.cvalue(data);
    d._u.cvalue = data;
    d._d = TCKind::TK_CHAR;
}

template<>
void toTraitData<uint8_t>(TraitData& d, const uint8_t& data)
{
    // d.ovalue(data);
    d._u.ovalue = data;
    d._d = TCKind::TK_OCTET;
}

template<>
void toTraitData<CDR_String>(TraitData& d, const CDR_String& data)
{
    // d.strvalue(data);
    d._u.strvalue = data;
    d._d = TCKind::TK_STRING;
}

template<>
void toTraitData<CDR_LongLong>(TraitData& d, const CDR_LongLong& data)
{
    // d.llvalue(data);
    d._u.llvalue = data;
    d._d = TCKind::TK_LONGLONG;
}

template<>
void toTraitData<CDR_UnsignedLongLong>(TraitData& d, const CDR_UnsignedLongLong& data)
{
    // d.ullvalue(data);
    d._u.ullvalue = data;
    d._d = TCKind::TK_ULONGLONG;
}
/*
template<>
void toTraitData<CDR_LongDouble>(TraitData& d, const CDR_LongDouble& data)
{
    // d.ldvalue(data);
    d._u.ldvalue = data;
    d._d = TCKind::TK_LONGDOUBLE;
}

template<>
void toTraitData<wchar_t>(TraitData& d, const wchar_t& data)
{
    // d.wcvalue(data);
    d._u.wcvalue = data;
    d._d = TCKind::TK_WCHAR;
}

template<>
void toTraitData<CDR_Wstring>(TraitData& d, const CDR_Wstring& data)
{
    // d.wsvalue(data);
    d._u.wsvalue = data;
    d._d = TCKind::TK_WSTRING;
}
*/

template <>
const int16_t &fromTraitData<int16_t>(const TraitData &d)
{
    return d._u.svalue;
}

template <>
const int32_t &fromTraitData<int32_t>(const TraitData &d)
{
    return d._u.lvalue;
}

template <>
const uint16_t &fromTraitData<uint16_t>(const TraitData &d)
{
    return d._u.usvalue;
}

template <>
const uint32_t &fromTraitData<uint32_t>(const TraitData &d)
{
    return d._u.ulvalue;
}

template <>
const float &fromTraitData<float>(const TraitData &d)
{
    return d._u.fvalue;
}

template <>
const double &fromTraitData<double>(const TraitData &d)
{
    return d._u.dvalue;
}

template <>
const CDR_Boolean &fromTraitData<CDR_Boolean>(const TraitData &d)
{
    return d._u.bvalue;
}

template <>
const CDR_Char &fromTraitData<CDR_Char>(const TraitData &d)
{
    return d._u.cvalue;
}

// template <>
// const CDR_Octet &fromTraitData<CDR_Octet>(const TraitData &d)
// {
//     return d._u.ovalue;
// }

template <>
const CDR_String &fromTraitData<CDR_String>(const TraitData &d)
{
    return d._u.strvalue;
}

template <>
const CDR_LongLong &fromTraitData<CDR_LongLong>(const TraitData &d)
{
    return d._u.llvalue;
}

template <>
const CDR_UnsignedLongLong &fromTraitData<CDR_UnsignedLongLong>(const TraitData &d)
{
    return d._u.ullvalue;
}
/*
template <>
const CDR_LongDouble &fromTraitData<CDR_LongDouble>(const TraitData &d)
{
    return d._u.ldvalue;
}

// template <>
// const CDR_Wchar &fromTraitData<CDR_Wchar>(const TraitData &d)
// {
//     return d._u.wcvalue;
// }
template <>
const CDR_Wstring &fromTraitData<CDR_Wstring>(const TraitData &d)
{
    return d._u.wsvalue;
}
*/


}
}
}
