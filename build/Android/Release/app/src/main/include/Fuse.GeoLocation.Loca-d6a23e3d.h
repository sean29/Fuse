// This file was generated based on C:/Users/q/AppData/Local/Fusetools/Packages/Fuse.GeoLocation/1.3.0-rc2/LocationProvider.BufferedCalls.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace GeoLocation{

// private abstract interface LocationTracker.BufferedCall :8
// {
uInterfaceType* LocationTracker__BufferedCall_typeof();

struct LocationTracker__BufferedCall
{
    void(*fp_Apply)(uObject*, uObject*);
    static void Apply(const uInterface& __this, uObject* tracker) { __this.VTable<LocationTracker__BufferedCall>()->fp_Apply(__this, tracker); }
};
// }

}}} // ::g::Fuse::GeoLocation
