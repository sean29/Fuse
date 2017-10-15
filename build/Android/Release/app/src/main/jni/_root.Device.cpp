// This file was generated based on fuse_modules/MaxGraey/fuse-device/Device.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Device.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Fuse.AppBase.h>
#include <Fuse.RootViewport.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.Native-c8feecef.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.Result-92713bce.h>
#include <Fuse.Scripting.ValueC-23d67df6.h>
#include <jni.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Func-1.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Permissions.Permi-d35d5681.h>
#include <Uno.Permissions.Permissions.h>
#include <Uno.String.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.UX.Resource.h>
#include <Uno/JNIHelper.h>
#include <Uno.Permissions.Platf-7d72d93e.h>
static uString* STRINGS[13];
static uType* TYPES[11];

namespace g{

// public sealed class Device :28
// {
// static generated Device() :28
static void Device__cctor__fn(uType* __type)
{
    Device::cachedNumProcessorCores_ = 0.0;
}

static void Device_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Device");
    ::STRINGS[1] = uString::Const("vendor");
    ::STRINGS[2] = uString::Const("model");
    ::STRINGS[3] = uString::Const("system");
    ::STRINGS[4] = uString::Const("systemVersion");
    ::STRINGS[5] = uString::Const("SDKVersion");
    ::STRINGS[6] = uString::Const("cores");
    ::STRINGS[7] = uString::Const("displayScale");
    ::STRINGS[8] = uString::Const("isRetina");
    ::STRINGS[9] = uString::Const("UUID");
    ::STRINGS[10] = uString::Const("locale");
    ::STRINGS[11] = uString::Const("getUUID");
    ::STRINGS[12] = uString::Const("");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::Double_typeof(), uObject_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::Double_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::Bool_typeof(), uObject_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[6] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Permissions::PlatformPermission_typeof(), NULL);
    ::TYPES[10] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::AppBase_typeof(),
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        ::TYPES[8/*Uno.Threading.Promise<string>*/], (uintptr_t)&Device::_authorizePromise_, uFieldFlagsStatic,
        type, (uintptr_t)&Device::_instance_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&Device::cachedModelName_, uFieldFlagsStatic,
        ::g::Uno::Double_typeof(), (uintptr_t)&Device::cachedNumProcessorCores_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&Device::cachedSDKVersion_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&Device::cachedSystemName_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&Device::cachedSystemVersion_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&Device::cachedUUID_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&Device::cachedVendorName_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* Device_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 2;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Device);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Device", options);
    type->fp_build_ = Device_build;
    type->fp_ctor_ = (void*)Device__New2_fn;
    type->fp_cctor_ = Device__cctor__fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Device() :39
void Device__ctor_2_fn(Device* __this)
{
    __this->ctor_2();
}

// private Uno.Threading.Future<string> AsyncUUID(object[] args) :63
void Device__AsyncUUID_fn(Device* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->AsyncUUID(args);
}

// public static extern Uno.Threading.Future<string> AsyncUUIDImpl() :77
void Device__AsyncUUIDImpl_fn(::g::Uno::Threading::Future1** __retval)
{
    *__retval = Device::AsyncUUIDImpl();
}

// private static extern void AuthorizeRejected(Uno.Exception reason) :95
void Device__AuthorizeRejected_fn(::g::Uno::Exception* reason)
{
    Device::AuthorizeRejected(reason);
}

// private static extern void AuthorizeResolved(Uno.Permissions.PlatformPermission permission) :87
void Device__AuthorizeResolved_fn(::g::Uno::Permissions::PlatformPermission* permission)
{
    Device::AuthorizeResolved(*permission);
}

// public static extern string GetCurrentLocale() :227
void Device__GetCurrentLocale_fn(uString** __retval)
{
    *__retval = Device::GetCurrentLocale();
}

// private static extern string GetModel() :363
void Device__GetModel_fn(uString** __retval)
{
    *__retval = Device::GetModel();
}

// private static extern int GetNumProcessorCores() :391
void Device__GetNumProcessorCores_fn(int* __retval)
{
    *__retval = Device::GetNumProcessorCores();
}

// private static extern string GetSDKVersion() :384
void Device__GetSDKVersion_fn(uString** __retval)
{
    *__retval = Device::GetSDKVersion();
}

// private static extern string GetSystem() :369
void Device__GetSystem_fn(uString** __retval)
{
    *__retval = Device::GetSystem();
}

// private static extern string GetSystemVersion() :378
void Device__GetSystemVersion_fn(uString** __retval)
{
    *__retval = Device::GetSystemVersion();
}

// private static extern string GetUUID() :177
void Device__GetUUID_fn(uString** __retval)
{
    *__retval = Device::GetUUID();
}

// private static extern string GetVendor() :357
void Device__GetVendor_fn(uString** __retval)
{
    *__retval = Device::GetVendor();
}

// public static bool IsRetina() :163
void Device__IsRetina_fn(bool* __retval)
{
    *__retval = Device::IsRetina();
}

// public static string Model() :128
void Device__Model_fn(uString** __retval)
{
    *__retval = Device::Model();
}

// public Device New() :39
void Device__New2_fn(Device** __retval)
{
    *__retval = Device::New2();
}

// public static double NumProcessorCores() :156
void Device__NumProcessorCores_fn(double* __retval)
{
    *__retval = Device::NumProcessorCores();
}

// public static double PixelsPerPoint() :167
void Device__PixelsPerPoint_fn(double* __retval)
{
    *__retval = Device::PixelsPerPoint();
}

// public static string SDKVersion() :149
void Device__SDKVersion_fn(uString** __retval)
{
    *__retval = Device::SDKVersion();
}

// public static string System() :135
void Device__System_fn(uString** __retval)
{
    *__retval = Device::System();
}

// public static string SystemVersion() :142
void Device__SystemVersion_fn(uString** __retval)
{
    *__retval = Device::SystemVersion();
}

// public static extern string UUID() :110
void Device__UUID_fn(uString** __retval)
{
    *__retval = Device::UUID();
}

// public static string Vendor() :121
void Device__Vendor_fn(uString** __retval)
{
    *__retval = Device::Vendor();
}

uSStrong< ::g::Uno::Threading::Promise*> Device::_authorizePromise_;
uSStrong<Device*> Device::_instance_;
uSStrong<uString*> Device::cachedModelName_;
double Device::cachedNumProcessorCores_;
uSStrong<uString*> Device::cachedSDKVersion_;
uSStrong<uString*> Device::cachedSystemName_;
uSStrong<uString*> Device::cachedSystemVersion_;
uSStrong<uString*> Device::cachedUUID_;
uSStrong<uString*> Device::cachedVendorName_;

// public Device() [instance] :39
void Device::ctor_2()
{
    ctor_1();

    if (Device::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(Device::_instance_ = this, ::STRINGS[0/*"Device"*/]);
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[0/*Fuse.Scripting.NativeProperty<string, object>*/], ::STRINGS[1/*"vendor"*/], uDelegate::New(::TYPES[1/*Uno.Func<string>*/], (void*)Device__Vendor_fn), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[0/*Fuse.Scripting.NativeProperty<string, object>*/], ::STRINGS[2/*"model"*/], uDelegate::New(::TYPES[1/*Uno.Func<string>*/], (void*)Device__Model_fn), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[0/*Fuse.Scripting.NativeProperty<string, object>*/], ::STRINGS[3/*"system"*/], uDelegate::New(::TYPES[1/*Uno.Func<string>*/], (void*)Device__System_fn), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[0/*Fuse.Scripting.NativeProperty<string, object>*/], ::STRINGS[4/*"systemVersion"*/], uDelegate::New(::TYPES[1/*Uno.Func<string>*/], (void*)Device__SystemVersion_fn), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[0/*Fuse.Scripting.NativeProperty<string, object>*/], ::STRINGS[5/*"SDKVersion"*/], uDelegate::New(::TYPES[1/*Uno.Func<string>*/], (void*)Device__SDKVersion_fn), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[2/*Fuse.Scripting.NativeProperty<double, object>*/], ::STRINGS[6/*"cores"*/], uDelegate::New(::TYPES[3/*Uno.Func<double>*/], (void*)Device__NumProcessorCores_fn), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[2/*Fuse.Scripting.NativeProperty<double, object>*/], ::STRINGS[7/*"displayScale"*/], uDelegate::New(::TYPES[3/*Uno.Func<double>*/], (void*)Device__PixelsPerPoint_fn), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[4/*Fuse.Scripting.NativeProperty<bool, object>*/], ::STRINGS[8/*"isRetina"*/], uDelegate::New(::TYPES[5/*Uno.Func<bool>*/], (void*)Device__IsRetina_fn), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[0/*Fuse.Scripting.NativeProperty<string, object>*/], ::STRINGS[9/*"UUID"*/], uDelegate::New(::TYPES[1/*Uno.Func<string>*/], (void*)Device__UUID_fn), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[0/*Fuse.Scripting.NativeProperty<string, object>*/], ::STRINGS[10/*"locale"*/], uDelegate::New(::TYPES[1/*Uno.Func<string>*/], (void*)Device__GetCurrentLocale_fn), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[6/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[11/*"getUUID"*/], uDelegate::New(::TYPES[7/*Fuse.Scripting.FutureFactory<string>*/], (void*)Device__AsyncUUID_fn, this), NULL));
}

// private Uno.Threading.Future<string> AsyncUUID(object[] args) [instance] :63
::g::Uno::Threading::Future1* Device::AsyncUUID(uArray* args)
{
    return Device::AsyncUUIDImpl();
}

// public static extern Uno.Threading.Future<string> AsyncUUIDImpl() [static] :77
::g::Uno::Threading::Future1* Device::AsyncUUIDImpl()
{
    if (Device::_authorizePromise_ == NULL)
    {
        Device::_authorizePromise_ = ((::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[8/*Uno.Threading.Promise<string>*/]));
        uPtr(::g::Uno::Permissions::Permissions::Request(::g::Uno::Permissions::Permissions__Android::READ_PHONE_STATE()))->Then1(uDelegate::New(::TYPES[9/*Uno.Action<Uno.Permissions.PlatformPermission>*/], (void*)Device__AuthorizeResolved_fn), uDelegate::New(::TYPES[10/*Uno.Action<Uno.Exception>*/], (void*)Device__AuthorizeRejected_fn));
    }

    return Device::_authorizePromise_;
}

// private static extern void AuthorizeRejected(Uno.Exception reason) [static] :95
void Device::AuthorizeRejected(::g::Uno::Exception* reason)
{
    uPtr(Device::_authorizePromise_)->Reject(reason);
}

// private static extern void AuthorizeResolved(Uno.Permissions.PlatformPermission permission) [static] :87
void Device::AuthorizeResolved(::g::Uno::Permissions::PlatformPermission permission)
{
    if (::g::Uno::String::op_Equality(Device::cachedUUID_, NULL))
        Device::cachedUUID_ = Device::GetUUID();

    ::g::Uno::Threading::Promise__Resolve_fn(uPtr(Device::_authorizePromise_), Device::cachedUUID_);
}

// public static extern string GetCurrentLocale() [static] :227
uString* Device::GetCurrentLocale()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetCurrentLocale440", "()Ljava/lang/String;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static extern string GetModel() [static] :363
uString* Device::GetModel()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetModel441", "()Ljava/lang/String;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static extern int GetNumProcessorCores() [static] :391
int Device::GetNumProcessorCores()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetNumProcessorCores442", "()I");
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd);
        int __result = (int)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static extern string GetSDKVersion() [static] :384
uString* Device::GetSDKVersion()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetSDKVersion443", "()Ljava/lang/String;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static extern string GetSystem() [static] :369
uString* Device::GetSystem()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetSystem444", "()Ljava/lang/String;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static extern string GetSystemVersion() [static] :378
uString* Device::GetSystemVersion()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetSystemVersion445", "()Ljava/lang/String;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static extern string GetUUID() [static] :177
uString* Device::GetUUID()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetUUID446", "()Ljava/lang/String;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static extern string GetVendor() [static] :357
uString* Device::GetVendor()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetVendor447", "()Ljava/lang/String;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static bool IsRetina() [static] :163
bool Device::IsRetina()
{
    return Device::PixelsPerPoint() > 1.0;
}

// public static string Model() [static] :128
uString* Device::Model()
{
    if (::g::Uno::String::op_Equality(Device::cachedModelName_, NULL))
        Device::cachedModelName_ = Device::GetModel();

    return Device::cachedModelName_;
}

// public Device New() [static] :39
Device* Device::New2()
{
    Device* obj1 = (Device*)uNew(Device_typeof());
    obj1->ctor_2();
    return obj1;
}

// public static double NumProcessorCores() [static] :156
double Device::NumProcessorCores()
{
    if (Device::cachedNumProcessorCores_ == 0.0)
        Device::cachedNumProcessorCores_ = (double)Device::GetNumProcessorCores();

    return Device::cachedNumProcessorCores_;
}

// public static double PixelsPerPoint() [static] :167
double Device::PixelsPerPoint()
{
    return (double)uPtr(uPtr(::g::Fuse::AppBase::Current2())->RootViewport())->PixelsPerPoint();
}

// public static string SDKVersion() [static] :149
uString* Device::SDKVersion()
{
    if (::g::Uno::String::op_Equality(Device::cachedSDKVersion_, NULL))
        Device::cachedSDKVersion_ = Device::GetSDKVersion();

    return Device::cachedSDKVersion_;
}

// public static string System() [static] :135
uString* Device::System()
{
    if (::g::Uno::String::op_Equality(Device::cachedSystemName_, NULL))
        Device::cachedSystemName_ = Device::GetSystem();

    return Device::cachedSystemName_;
}

// public static string SystemVersion() [static] :142
uString* Device::SystemVersion()
{
    if (::g::Uno::String::op_Equality(Device::cachedSystemVersion_, NULL))
        Device::cachedSystemVersion_ = Device::GetSystemVersion();

    return Device::cachedSystemVersion_;
}

// public static extern string UUID() [static] :110
uString* Device::UUID()
{
    if (::g::Uno::String::op_Equality(Device::cachedUUID_, NULL))
        return ::STRINGS[12/*""*/];

    return Device::cachedUUID_;
}

// public static string Vendor() [static] :121
uString* Device::Vendor()
{
    if (::g::Uno::String::op_Equality(Device::cachedVendorName_, NULL))
        Device::cachedVendorName_ = Device::GetVendor();

    return Device::cachedVendorName_;
}
// }

} // ::g
