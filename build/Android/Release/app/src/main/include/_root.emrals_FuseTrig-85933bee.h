// This file was generated based on '.uno/ux13/emrals.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Triggers{struct Busy;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct emrals_FuseTriggersBusy_IsActive_Property;}

namespace g{

// internal sealed class emrals_FuseTriggersBusy_IsActive_Property :177
// {
::g::Uno::UX::Property1_type* emrals_FuseTriggersBusy_IsActive_Property_typeof();
void emrals_FuseTriggersBusy_IsActive_Property__ctor_3_fn(emrals_FuseTriggersBusy_IsActive_Property* __this, ::g::Fuse::Triggers::Busy* obj, ::g::Uno::UX::Selector* name);
void emrals_FuseTriggersBusy_IsActive_Property__Get1_fn(emrals_FuseTriggersBusy_IsActive_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval);
void emrals_FuseTriggersBusy_IsActive_Property__New1_fn(::g::Fuse::Triggers::Busy* obj, ::g::Uno::UX::Selector* name, emrals_FuseTriggersBusy_IsActive_Property** __retval);
void emrals_FuseTriggersBusy_IsActive_Property__get_Object_fn(emrals_FuseTriggersBusy_IsActive_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void emrals_FuseTriggersBusy_IsActive_Property__Set1_fn(emrals_FuseTriggersBusy_IsActive_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin);

struct emrals_FuseTriggersBusy_IsActive_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Triggers::Busy*> _obj;

    void ctor_3(::g::Fuse::Triggers::Busy* obj, ::g::Uno::UX::Selector name);
    static emrals_FuseTriggersBusy_IsActive_Property* New1(::g::Fuse::Triggers::Busy* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
