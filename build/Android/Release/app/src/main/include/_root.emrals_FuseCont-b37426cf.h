// This file was generated based on '.uno/ux13/emrals.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct emrals_FuseControlsTextControl_Value_Property;}

namespace g{

// internal sealed class emrals_FuseControlsTextControl_Value_Property :51
// {
::g::Uno::UX::Property1_type* emrals_FuseControlsTextControl_Value_Property_typeof();
void emrals_FuseControlsTextControl_Value_Property__ctor_3_fn(emrals_FuseControlsTextControl_Value_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name);
void emrals_FuseControlsTextControl_Value_Property__Get1_fn(emrals_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void emrals_FuseControlsTextControl_Value_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, emrals_FuseControlsTextControl_Value_Property** __retval);
void emrals_FuseControlsTextControl_Value_Property__get_Object_fn(emrals_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void emrals_FuseControlsTextControl_Value_Property__Set1_fn(emrals_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);
void emrals_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn(emrals_FuseControlsTextControl_Value_Property* __this, bool* __retval);

struct emrals_FuseControlsTextControl_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::TextControl*> _obj;

    void ctor_3(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name);
    static emrals_FuseControlsTextControl_Value_Property* New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
