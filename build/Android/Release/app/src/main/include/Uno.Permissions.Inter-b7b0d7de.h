// This file was generated based on '/Users/a/Library/Application Support/Fusetools/Packages/Uno.Permissions/1.2.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Permissions{namespace Internal{struct Android;}}}}
namespace g{namespace Uno{namespace Permissions{struct PlatformPermission;}}}

namespace g{
namespace Uno{
namespace Permissions{
namespace Internal{

// internal sealed extern class Android :313
// {
uType* Android_typeof();
void Android___access_coarse_location_fn(::g::Uno::Permissions::PlatformPermission* __retval);
void Android___access_fine_location_fn(::g::Uno::Permissions::PlatformPermission* __retval);
void Android___call_phone_fn(::g::Uno::Permissions::PlatformPermission* __retval);
void Android___camera_fn(::g::Uno::Permissions::PlatformPermission* __retval);
void Android___internet_fn(::g::Uno::Permissions::PlatformPermission* __retval);
void Android___read_external_storage_fn(::g::Uno::Permissions::PlatformPermission* __retval);
void Android___read_phone_state_fn(::g::Uno::Permissions::PlatformPermission* __retval);
void Android___write_external_storage_fn(::g::Uno::Permissions::PlatformPermission* __retval);

struct Android : uObject
{
    static ::g::Uno::Permissions::PlatformPermission _access_coarse_location();
    static ::g::Uno::Permissions::PlatformPermission _access_fine_location();
    static ::g::Uno::Permissions::PlatformPermission _call_phone();
    static ::g::Uno::Permissions::PlatformPermission _camera();
    static ::g::Uno::Permissions::PlatformPermission _internet();
    static ::g::Uno::Permissions::PlatformPermission _read_external_storage();
    static ::g::Uno::Permissions::PlatformPermission _read_phone_state();
    static ::g::Uno::Permissions::PlatformPermission _write_external_storage();
};
// }

}}}} // ::g::Uno::Permissions::Internal
