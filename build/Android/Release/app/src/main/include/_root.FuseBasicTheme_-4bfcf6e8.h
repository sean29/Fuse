// This file was generated based on C:/Users/q/AppData/Local/Fusetools/Packages/Fuse.BasicTheme/1.3.0-rc2/.uno/ux13/Fuse.BasicTheme.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Size.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseBasicTheme_FuseElementsElement_Height_Property;}

namespace g{

// internal sealed class FuseBasicTheme_FuseElementsElement_Height_Property :102
// {
::g::Uno::UX::Property1_type* FuseBasicTheme_FuseElementsElement_Height_Property_typeof();
void FuseBasicTheme_FuseElementsElement_Height_Property__ctor_3_fn(FuseBasicTheme_FuseElementsElement_Height_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name);
void FuseBasicTheme_FuseElementsElement_Height_Property__Get1_fn(FuseBasicTheme_FuseElementsElement_Height_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Size* __retval);
void FuseBasicTheme_FuseElementsElement_Height_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, FuseBasicTheme_FuseElementsElement_Height_Property** __retval);
void FuseBasicTheme_FuseElementsElement_Height_Property__get_Object_fn(FuseBasicTheme_FuseElementsElement_Height_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseBasicTheme_FuseElementsElement_Height_Property__Set1_fn(FuseBasicTheme_FuseElementsElement_Height_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Size* v, uObject* origin);

struct FuseBasicTheme_FuseElementsElement_Height_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Elements::Element*> _obj;

    void ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
    static FuseBasicTheme_FuseElementsElement_Height_Property* New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
