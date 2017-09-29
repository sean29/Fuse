// This file was generated based on '.uno/ux11/emrals.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Triggers{struct PullToReload;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct emrals_FuseTriggersPullToReload_IsLoading_Property;}

namespace g{

// internal sealed class emrals_FuseTriggersPullToReload_IsLoading_Property :191
// {
::g::Uno::UX::Property1_type* emrals_FuseTriggersPullToReload_IsLoading_Property_typeof();
void emrals_FuseTriggersPullToReload_IsLoading_Property__ctor_3_fn(emrals_FuseTriggersPullToReload_IsLoading_Property* __this, ::g::Fuse::Triggers::PullToReload* obj, ::g::Uno::UX::Selector* name);
void emrals_FuseTriggersPullToReload_IsLoading_Property__Get1_fn(emrals_FuseTriggersPullToReload_IsLoading_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval);
void emrals_FuseTriggersPullToReload_IsLoading_Property__New1_fn(::g::Fuse::Triggers::PullToReload* obj, ::g::Uno::UX::Selector* name, emrals_FuseTriggersPullToReload_IsLoading_Property** __retval);
void emrals_FuseTriggersPullToReload_IsLoading_Property__get_Object_fn(emrals_FuseTriggersPullToReload_IsLoading_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void emrals_FuseTriggersPullToReload_IsLoading_Property__Set1_fn(emrals_FuseTriggersPullToReload_IsLoading_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin);

struct emrals_FuseTriggersPullToReload_IsLoading_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Triggers::PullToReload*> _obj;

    void ctor_3(::g::Fuse::Triggers::PullToReload* obj, ::g::Uno::UX::Selector name);
    static emrals_FuseTriggersPullToReload_IsLoading_Property* New1(::g::Fuse::Triggers::PullToReload* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
