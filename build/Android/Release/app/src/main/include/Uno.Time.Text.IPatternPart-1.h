// This file was generated based on C:/Users/q/AppData/Local/Fusetools/Packages/UnoCore/1.3.1/Source/Uno/Time/Text/PatternPart.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// internal abstract interface IPatternPart<T> :3
// {
uInterfaceType* IPatternPart_typeof();

struct IPatternPart
{
    void(*fp_Write)(uObject*, void*, uString**);
    template<class T>
    static uString* Write(const uInterface& __this, T value) { uString* __retval; return __this.VTable<IPatternPart>()->fp_Write(__this, uConstrain(__this->__type->GetBase(IPatternPart_typeof())->T(0), value), &__retval), __retval; }
    static void Write_ex(const uInterface& __this, void* value, uString** __retval) { __this.VTable<IPatternPart>()->fp_Write(__this, value, __retval); }
};
// }

}}}} // ::g::Uno::Time::Text
