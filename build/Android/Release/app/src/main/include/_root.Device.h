// This file was generated based on fuse_modules/MaxGraey/fuse-device/Device.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Uno{namespace Permissions{struct PlatformPermission;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}
namespace g{namespace Uno{struct Exception;}}
namespace g{struct Device;}

namespace g{

// public sealed class Device :28
// {
::g::Fuse::Scripting::NativeModule_type* Device_typeof();
void Device__ctor_2_fn(Device* __this);
void Device__AsyncUUID_fn(Device* __this, uArray* args, ::g::Uno::Threading::Future1** __retval);
void Device__AsyncUUIDImpl_fn(::g::Uno::Threading::Future1** __retval);
void Device__AuthorizeRejected_fn(::g::Uno::Exception* reason);
void Device__AuthorizeResolved_fn(::g::Uno::Permissions::PlatformPermission* permission);
void Device__GetCurrentLocale_fn(uString** __retval);
void Device__GetModel_fn(uString** __retval);
void Device__GetNumProcessorCores_fn(int* __retval);
void Device__GetSDKVersion_fn(uString** __retval);
void Device__GetSystem_fn(uString** __retval);
void Device__GetSystemVersion_fn(uString** __retval);
void Device__GetUUID_fn(uString** __retval);
void Device__GetVendor_fn(uString** __retval);
void Device__IsRetina_fn(bool* __retval);
void Device__Model_fn(uString** __retval);
void Device__New2_fn(Device** __retval);
void Device__NumProcessorCores_fn(double* __retval);
void Device__PixelsPerPoint_fn(double* __retval);
void Device__SDKVersion_fn(uString** __retval);
void Device__System_fn(uString** __retval);
void Device__SystemVersion_fn(uString** __retval);
void Device__UUID_fn(uString** __retval);
void Device__Vendor_fn(uString** __retval);

struct Device : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong< ::g::Uno::Threading::Promise*> _authorizePromise_;
    static uSStrong< ::g::Uno::Threading::Promise*>& _authorizePromise() { return _authorizePromise_; }
    static uSStrong<Device*> _instance_;
    static uSStrong<Device*>& _instance() { return _instance_; }
    static uSStrong<uString*> cachedModelName_;
    static uSStrong<uString*>& cachedModelName() { return cachedModelName_; }
    static double cachedNumProcessorCores_;
    static double& cachedNumProcessorCores() { return cachedNumProcessorCores_; }
    static uSStrong<uString*> cachedSDKVersion_;
    static uSStrong<uString*>& cachedSDKVersion() { return cachedSDKVersion_; }
    static uSStrong<uString*> cachedSystemName_;
    static uSStrong<uString*>& cachedSystemName() { return cachedSystemName_; }
    static uSStrong<uString*> cachedSystemVersion_;
    static uSStrong<uString*>& cachedSystemVersion() { return cachedSystemVersion_; }
    static uSStrong<uString*> cachedUUID_;
    static uSStrong<uString*>& cachedUUID() { return cachedUUID_; }
    static uSStrong<uString*> cachedVendorName_;
    static uSStrong<uString*>& cachedVendorName() { return cachedVendorName_; }

    void ctor_2();
    ::g::Uno::Threading::Future1* AsyncUUID(uArray* args);
    static ::g::Uno::Threading::Future1* AsyncUUIDImpl();
    static void AuthorizeRejected(::g::Uno::Exception* reason);
    static void AuthorizeResolved(::g::Uno::Permissions::PlatformPermission permission);
    static uString* GetCurrentLocale();
    static uString* GetModel();
    static int GetNumProcessorCores();
    static uString* GetSDKVersion();
    static uString* GetSystem();
    static uString* GetSystemVersion();
    static uString* GetUUID();
    static uString* GetVendor();
    static bool IsRetina();
    static uString* Model();
    static Device* New2();
    static double NumProcessorCores();
    static double PixelsPerPoint();
    static uString* SDKVersion();
    static uString* System();
    static uString* SystemVersion();
    static uString* UUID();
    static uString* Vendor();
};
// }

} // ::g
