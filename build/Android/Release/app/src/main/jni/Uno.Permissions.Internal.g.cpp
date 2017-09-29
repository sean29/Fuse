// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Permissions.Inter-b7b0d7de.h>
#include <Uno.Permissions.Platf-7d72d93e.h>
#include <Uno.String.h>
static uString* STRINGS[7];

namespace g{
namespace Uno{
namespace Permissions{
namespace Internal{

// C:\Users\q\AppData\Local\Fusetools\Packages\Uno.Permissions\1.2.1\$.uno
// -----------------------------------------------------------------------

// internal sealed extern class Android :313
// {
static void Android_build(uType* type)
{
    ::STRINGS[0] = uString::Const("android.permission.ACCESS_COARSE_LOCATION");
    ::STRINGS[1] = uString::Const("android.permission.ACCESS_FINE_LOCATION");
    ::STRINGS[2] = uString::Const("android.permission.CALL_PHONE");
    ::STRINGS[3] = uString::Const("android.permission.CAMERA");
    ::STRINGS[4] = uString::Const("android.permission.INTERNET");
    ::STRINGS[5] = uString::Const("android.permission.READ_EXTERNAL_STORAGE");
    ::STRINGS[6] = uString::Const("android.permission.WRITE_EXTERNAL_STORAGE");
}

uType* Android_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Android);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Permissions.Internal.Android", options);
    type->fp_build_ = Android_build;
    return type;
}

// internal static extern Uno.Permissions.PlatformPermission _access_coarse_location() :321
void Android___access_coarse_location_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Android::_access_coarse_location();
}

// internal static extern Uno.Permissions.PlatformPermission _access_fine_location() :326
void Android___access_fine_location_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Android::_access_fine_location();
}

// internal static extern Uno.Permissions.PlatformPermission _call_phone() :491
void Android___call_phone_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Android::_call_phone();
}

// internal static extern Uno.Permissions.PlatformPermission _camera() :501
void Android___camera_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Android::_camera();
}

// internal static extern Uno.Permissions.PlatformPermission _internet() :666
void Android___internet_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Android::_internet();
}

// internal static extern Uno.Permissions.PlatformPermission _read_external_storage() :756
void Android___read_external_storage_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Android::_read_external_storage();
}

// internal static extern Uno.Permissions.PlatformPermission _write_external_storage() :1016
void Android___write_external_storage_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Android::_write_external_storage();
}

// internal static extern Uno.Permissions.PlatformPermission _access_coarse_location() [static] :321
::g::Uno::Permissions::PlatformPermission Android::_access_coarse_location()
{
    return ::g::Uno::Permissions::PlatformPermission__New1(::STRINGS[0/*"android.per...*/]);
}

// internal static extern Uno.Permissions.PlatformPermission _access_fine_location() [static] :326
::g::Uno::Permissions::PlatformPermission Android::_access_fine_location()
{
    return ::g::Uno::Permissions::PlatformPermission__New1(::STRINGS[1/*"android.per...*/]);
}

// internal static extern Uno.Permissions.PlatformPermission _call_phone() [static] :491
::g::Uno::Permissions::PlatformPermission Android::_call_phone()
{
    return ::g::Uno::Permissions::PlatformPermission__New1(::STRINGS[2/*"android.per...*/]);
}

// internal static extern Uno.Permissions.PlatformPermission _camera() [static] :501
::g::Uno::Permissions::PlatformPermission Android::_camera()
{
    return ::g::Uno::Permissions::PlatformPermission__New1(::STRINGS[3/*"android.per...*/]);
}

// internal static extern Uno.Permissions.PlatformPermission _internet() [static] :666
::g::Uno::Permissions::PlatformPermission Android::_internet()
{
    return ::g::Uno::Permissions::PlatformPermission__New1(::STRINGS[4/*"android.per...*/]);
}

// internal static extern Uno.Permissions.PlatformPermission _read_external_storage() [static] :756
::g::Uno::Permissions::PlatformPermission Android::_read_external_storage()
{
    return ::g::Uno::Permissions::PlatformPermission__New1(::STRINGS[5/*"android.per...*/]);
}

// internal static extern Uno.Permissions.PlatformPermission _write_external_storage() [static] :1016
::g::Uno::Permissions::PlatformPermission Android::_write_external_storage()
{
    return ::g::Uno::Permissions::PlatformPermission__New1(::STRINGS[6/*"android.per...*/]);
}
// }

}}}} // ::g::Uno::Permissions::Internal
