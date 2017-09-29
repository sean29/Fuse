// This file was generated based on '.uno/ux11/emrals.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct emrals_SelectableRectangle_ID_Property;}
namespace g{struct SelectableRectangle;}

namespace g{

// internal sealed class emrals_SelectableRectangle_ID_Property :216
// {
::g::Uno::UX::Property1_type* emrals_SelectableRectangle_ID_Property_typeof();
void emrals_SelectableRectangle_ID_Property__ctor_3_fn(emrals_SelectableRectangle_ID_Property* __this, ::g::SelectableRectangle* obj, ::g::Uno::UX::Selector* name);
void emrals_SelectableRectangle_ID_Property__Get1_fn(emrals_SelectableRectangle_ID_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void emrals_SelectableRectangle_ID_Property__New1_fn(::g::SelectableRectangle* obj, ::g::Uno::UX::Selector* name, emrals_SelectableRectangle_ID_Property** __retval);
void emrals_SelectableRectangle_ID_Property__get_Object_fn(emrals_SelectableRectangle_ID_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void emrals_SelectableRectangle_ID_Property__Set1_fn(emrals_SelectableRectangle_ID_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);
void emrals_SelectableRectangle_ID_Property__get_SupportsOriginSetter_fn(emrals_SelectableRectangle_ID_Property* __this, bool* __retval);

struct emrals_SelectableRectangle_ID_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::SelectableRectangle*> _obj;

    void ctor_3(::g::SelectableRectangle* obj, ::g::Uno::UX::Selector name);
    static emrals_SelectableRectangle_ID_Property* New1(::g::SelectableRectangle* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
