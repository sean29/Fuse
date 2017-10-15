// This file was generated based on '.uno/ux11/emrals.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct emrals_MyLoadingIndicator2_ThemeColor_Property;}
namespace g{struct MyLoadingIndicator2;}

namespace g{

// internal sealed class emrals_MyLoadingIndicator2_ThemeColor_Property :284
// {
::g::Uno::UX::Property1_type* emrals_MyLoadingIndicator2_ThemeColor_Property_typeof();
void emrals_MyLoadingIndicator2_ThemeColor_Property__ctor_3_fn(emrals_MyLoadingIndicator2_ThemeColor_Property* __this, ::g::MyLoadingIndicator2* obj, ::g::Uno::UX::Selector* name);
void emrals_MyLoadingIndicator2_ThemeColor_Property__Get1_fn(emrals_MyLoadingIndicator2_ThemeColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval);
void emrals_MyLoadingIndicator2_ThemeColor_Property__New1_fn(::g::MyLoadingIndicator2* obj, ::g::Uno::UX::Selector* name, emrals_MyLoadingIndicator2_ThemeColor_Property** __retval);
void emrals_MyLoadingIndicator2_ThemeColor_Property__get_Object_fn(emrals_MyLoadingIndicator2_ThemeColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void emrals_MyLoadingIndicator2_ThemeColor_Property__Set1_fn(emrals_MyLoadingIndicator2_ThemeColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin);
void emrals_MyLoadingIndicator2_ThemeColor_Property__get_SupportsOriginSetter_fn(emrals_MyLoadingIndicator2_ThemeColor_Property* __this, bool* __retval);

struct emrals_MyLoadingIndicator2_ThemeColor_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::MyLoadingIndicator2*> _obj;

    void ctor_3(::g::MyLoadingIndicator2* obj, ::g::Uno::UX::Selector name);
    static emrals_MyLoadingIndicator2_ThemeColor_Property* New1(::g::MyLoadingIndicator2* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
