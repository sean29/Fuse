// This file was generated based on C:/Users/q/AppData/Local/Fusetools/Packages/Fuse.Android/1.3.0-rc2/AndroidInterop.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Android{namespace Bindings{struct AndroidDeviceInterop;}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Android{
namespace Bindings{

// internal static extern class AndroidDeviceInterop :16
// {
uClassType* AndroidDeviceInterop_typeof();
void AndroidDeviceInterop__LaunchIntent_fn(uString* action, uString* uri, uString* packageName, uString* className, ::g::Java::Object** __retval);

struct AndroidDeviceInterop : uObject
{
    static ::g::Java::Object* LaunchIntent(uString* action, uString* uri, uString* packageName, uString* className);
};
// }

}}}} // ::g::Fuse::Android::Bindings
