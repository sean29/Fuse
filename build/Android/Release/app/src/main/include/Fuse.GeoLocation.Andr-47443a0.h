// This file was generated based on C:/Users/q/AppData/Local/Fusetools/Packages/Fuse.GeoLocation/1.2.0/android/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace GeoLocation{namespace Android{struct LocationHelpers;}}}}
namespace g{namespace Fuse{namespace GeoLocation{struct Location;}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace GeoLocation{
namespace Android{

// public sealed extern class LocationHelpers :215
// {
uType* LocationHelpers_typeof();
void LocationHelpers__ConvertLocation_fn(::g::Java::Object* loc, ::g::Fuse::GeoLocation::Location** __retval);
void LocationHelpers__GetAccuracy_fn(::g::Java::Object* handle, float* __retval);
void LocationHelpers__GetAltitude_fn(::g::Java::Object* handle, double* __retval);
void LocationHelpers__GetLatitude_fn(::g::Java::Object* handle, double* __retval);
void LocationHelpers__GetLongitude_fn(::g::Java::Object* handle, double* __retval);
void LocationHelpers__GetSpeed_fn(::g::Java::Object* handle, double* __retval);
void LocationHelpers__GetTime_fn(::g::Java::Object* handle, int* __retval);

struct LocationHelpers : uObject
{
    static ::g::Fuse::GeoLocation::Location* ConvertLocation(::g::Java::Object* loc);
    static float GetAccuracy(::g::Java::Object* handle);
    static double GetAltitude(::g::Java::Object* handle);
    static double GetLatitude(::g::Java::Object* handle);
    static double GetLongitude(::g::Java::Object* handle);
    static double GetSpeed(::g::Java::Object* handle);
    static int GetTime(::g::Java::Object* handle);
};
// }

}}}} // ::g::Fuse::GeoLocation::Android
