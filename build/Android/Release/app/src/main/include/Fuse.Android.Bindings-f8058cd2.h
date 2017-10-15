// This file was generated based on /usr/local/share/uno/Packages/Fuse.Android/1.2.1/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Android{namespace Bindings{struct AndroidDeviceInterop;}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Android{
namespace Bindings{

// internal static extern class AndroidDeviceInterop :403
// {
uClassType* AndroidDeviceInterop_typeof();
void AndroidDeviceInterop__LaunchIntent_fn(uString* action, uString* uri, uString* packageName, uString* className, ::g::Java::Object** __retval);

struct AndroidDeviceInterop : uObject
{
    static ::g::Java::Object* LaunchIntent(uString* action, uString* uri, uString* packageName, uString* className);
};
// }

}}}} // ::g::Fuse::Android::Bindings
