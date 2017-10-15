// This file was generated based on C:/Users/q/AppData/Local/Fusetools/Packages/Fuse.Launcher.Email/1.3.0-rc2/Email/EmailLauncher.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace LauncherImpl{struct EmailLauncher;}}}

namespace g{
namespace Fuse{
namespace LauncherImpl{

// public static class EmailLauncher :15
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
