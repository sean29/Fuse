// This file was generated based on '.uno/ux13/emrals.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Double.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct MapMarker;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct emrals_FuseControlsMapMarker_Latitude_Property;}

namespace g{

// internal sealed class emrals_FuseControlsMapMarker_Latitude_Property :251
// {
::g::Uno::UX::Property1_type* emrals_FuseControlsMapMarker_Latitude_Property_typeof();
void emrals_FuseControlsMapMarker_Latitude_Property__ctor_3_fn(emrals_FuseControlsMapMarker_Latitude_Property* __this, ::g::Fuse::Controls::MapMarker* obj, ::g::Uno::UX::Selector* name);
void emrals_FuseControlsMapMarker_Latitude_Property__Get1_fn(emrals_FuseControlsMapMarker_Latitude_Property* __this, ::g::Uno::UX::PropertyObject* obj, double* __retval);
void emrals_FuseControlsMapMarker_Latitude_Property__New1_fn(::g::Fuse::Controls::MapMarker* obj, ::g::Uno::UX::Selector* name, emrals_FuseControlsMapMarker_Latitude_Property** __retval);
void emrals_FuseControlsMapMarker_Latitude_Property__get_Object_fn(emrals_FuseControlsMapMarker_Latitude_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void emrals_FuseControlsMapMarker_Latitude_Property__Set1_fn(emrals_FuseControlsMapMarker_Latitude_Property* __this, ::g::Uno::UX::PropertyObject* obj, double* v, uObject* origin);

struct emrals_FuseControlsMapMarker_Latitude_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::MapMarker*> _obj;

    void ctor_3(::g::Fuse::Controls::MapMarker* obj, ::g::Uno::UX::Selector name);
    static emrals_FuseControlsMapMarker_Latitude_Property* New1(::g::Fuse::Controls::MapMarker* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
