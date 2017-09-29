// This file was generated based on C:/Users/q/AppData/Local/Fusetools/Packages/Fuse.Launcher.Phone/1.2.0/phone/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace LauncherImpl{struct AndroidCall;}}}
namespace g{namespace Uno{namespace Permissions{struct PlatformPermission;}}}

namespace g{
namespace Fuse{
namespace LauncherImpl{

// internal sealed extern class AndroidCall :37
// {
uType* AndroidCall_typeof();
void AndroidCall__ctor__fn(AndroidCall* __this, uString* uri);
void AndroidCall__get__actionCall_fn(uString** __retval);
void AndroidCall__Begin_fn(AndroidCall* __this);
void AndroidCall__New1_fn(uString* uri, AndroidCall** __retval);
void AndroidCall__OnPermitted_fn(AndroidCall* __this, ::g::Uno::Permissions::PlatformPermission* permission);

struct AndroidCall : uObject
{
    uStrong<uString*> _uri;

    void ctor_(uString* uri);
    void Begin();
    void OnPermitted(::g::Uno::Permissions::PlatformPermission permission);
    static AndroidCall* New1(uString* uri);
    static uString* _actionCall();
};
// }

}}} // ::g::Fuse::LauncherImpl
