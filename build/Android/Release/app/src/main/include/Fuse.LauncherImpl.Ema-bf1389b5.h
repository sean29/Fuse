// This file was generated based on '/Users/a/Library/Application Support/Fusetools/Packages/Fuse.Launcher.Email/1.2.1/email/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace LauncherImpl{struct EmailLauncher;}}}

namespace g{
namespace Fuse{
namespace LauncherImpl{

// public static class EmailLauncher :17
// {
uClassType* EmailLauncher_typeof();
void EmailLauncher__get__actionSendTo_fn(uString** __retval);
void EmailLauncher__LaunchEmail_fn(uString* to, uString* carbonCopy, uString* blindCarbonCopy, uString* subject, uString* message);

struct EmailLauncher : uObject
{
    static void LaunchEmail(uString* to, uString* carbonCopy, uString* blindCarbonCopy, uString* subject, uString* message);
    static uString* _actionSendTo();
};
// }

}}} // ::g::Fuse::LauncherImpl
