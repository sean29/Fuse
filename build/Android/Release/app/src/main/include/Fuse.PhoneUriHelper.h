// This file was generated based on C:/Users/q/AppData/Local/Fusetools/Packages/Fuse.Launcher.Phone/1.3.0-rc2/Phone/PhoneUriHelper.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct PhoneUriHelper;}}

namespace g{
namespace Fuse{

// internal static class PhoneUriHelper :7
// {
uClassType* PhoneUriHelper_typeof();
void PhoneUriHelper__PhoneNumberToUri_fn(uString* phoneNumber, uString** __retval);

struct PhoneUriHelper : uObject
{
    static uString* PhoneNumberToUri(uString* phoneNumber);
};
// }

}} // ::g::Fuse
