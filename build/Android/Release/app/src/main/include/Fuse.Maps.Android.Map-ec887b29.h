// This file was generated based on '/Users/a/Library/Application Support/Fusetools/Packages/Fuse.Maps/1.2.1/android/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Maps{namespace Android{struct MapView__ShowLocationCommand;}}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace Permissions{struct PlatformPermission;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Maps{
namespace Android{

// private sealed class MapView.ShowLocationCommand :444
// {
uType* MapView__ShowLocationCommand_typeof();
void MapView__ShowLocationCommand__ctor__fn(MapView__ShowLocationCommand* __this, ::g::Java::Object* handle, bool* newValue);
void MapView__ShowLocationCommand__Execute_fn(MapView__ShowLocationCommand* __this, uArray* grantedPermissions);
void MapView__ShowLocationCommand__New1_fn(::g::Java::Object* handle, bool* newValue, MapView__ShowLocationCommand** __retval);
void MapView__ShowLocationCommand__Reject_fn(MapView__ShowLocationCommand* __this, ::g::Uno::Exception* e);

struct MapView__ShowLocationCommand : uObject
{
    uStrong< ::g::Java::Object*> _handle;
    bool _value;

    void ctor_(::g::Java::Object* handle, bool newValue);
    void Execute(uArray* grantedPermissions);
    void Reject(::g::Uno::Exception* e);
    static MapView__ShowLocationCommand* New1(::g::Java::Object* handle, bool newValue);
};
// }

}}}} // ::g::Fuse::Maps::Android
