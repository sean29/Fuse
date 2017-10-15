// This file was generated based on '.uno/ux11/emrals.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Double.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Triggers{struct Timeline;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct emrals_FuseTriggersTimeline_TargetProgress_Property;}

namespace g{

// internal sealed class emrals_FuseTriggersTimeline_TargetProgress_Property :160
// {
::g::Uno::UX::Property1_type* emrals_FuseTriggersTimeline_TargetProgress_Property_typeof();
void emrals_FuseTriggersTimeline_TargetProgress_Property__ctor_3_fn(emrals_FuseTriggersTimeline_TargetProgress_Property* __this, ::g::Fuse::Triggers::Timeline* obj, ::g::Uno::UX::Selector* name);
void emrals_FuseTriggersTimeline_TargetProgress_Property__Get1_fn(emrals_FuseTriggersTimeline_TargetProgress_Property* __this, ::g::Uno::UX::PropertyObject* obj, double* __retval);
void emrals_FuseTriggersTimeline_TargetProgress_Property__New1_fn(::g::Fuse::Triggers::Timeline* obj, ::g::Uno::UX::Selector* name, emrals_FuseTriggersTimeline_TargetProgress_Property** __retval);
void emrals_FuseTriggersTimeline_TargetProgress_Property__get_Object_fn(emrals_FuseTriggersTimeline_TargetProgress_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void emrals_FuseTriggersTimeline_TargetProgress_Property__Set1_fn(emrals_FuseTriggersTimeline_TargetProgress_Property* __this, ::g::Uno::UX::PropertyObject* obj, double* v, uObject* origin);

struct emrals_FuseTriggersTimeline_TargetProgress_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Triggers::Timeline*> _obj;

    void ctor_3(::g::Fuse::Triggers::Timeline* obj, ::g::Uno::UX::Selector name);
    static emrals_FuseTriggersTimeline_TargetProgress_Property* New1(::g::Fuse::Triggers::Timeline* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
