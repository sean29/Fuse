// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.2.2/targets/android/uno/base/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <jni.h>
#include <Uno.h>
namespace g{namespace Android{namespace Base{namespace Wrappers{struct JavaObjectHelper;}}}}

namespace g{
namespace Android{
namespace Base{
namespace Wrappers{

// public static extern class JavaObjectHelper :1241
// {
uClassType* JavaObjectHelper_typeof();
void JavaObjectHelper__JObjectToJWrapper_fn(jobject* tmpRes, bool* stackArg, uObject** __retval);

struct JavaObjectHelper : uObject
{
    static uObject* JObjectToJWrapper(jobject tmpRes, bool stackArg);
};
// }

}}}} // ::g::Android::Base::Wrappers
