// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Fuse.Android.Bindings-f8058cd2.h>
#include <Fuse.LauncherImpl.AndroidCall.h>
#include <Fuse.LauncherImpl.Ema-bf1389b5.h>
#include <Fuse.LauncherImpl.Int-58fad324.h>
#include <Fuse.LauncherImpl.MapsLauncher.h>
#include <Fuse.LauncherImpl.Pho-6b03eff9.h>
#include <Fuse.PhoneUriHelper.h>
#include <Java.Object.h>
#include <jni.h>
#include <Uno.Action-1.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Net.Http.Uri.h>
#include <Uno.Permissions.Permi-d35d5681.h>
#include <Uno.Permissions.Permissions.h>
#include <Uno.Permissions.Platf-7d72d93e.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Threading.Future-1.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[14];
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace LauncherImpl{

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.Launcher.Phone\1.2.0\phone\$.uno
// ---------------------------------------------------------------------------------

// internal sealed extern class AndroidCall :37
// {
static void AndroidCall_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Permissions::PlatformPermission_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::LauncherImpl::AndroidCall, _uri), 0);
}

uType* AndroidCall_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(AndroidCall);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.LauncherImpl.AndroidCall", options);
    type->fp_build_ = AndroidCall_build;
    return type;
}

// public AndroidCall(string uri) :50
void AndroidCall__ctor__fn(AndroidCall* __this, uString* uri)
{
    __this->ctor_(uri);
}

// private static extern string get__actionCall() :44
void AndroidCall__get__actionCall_fn(uString** __retval)
{
    *__retval = AndroidCall::_actionCall();
}

// public void Begin() :55
void AndroidCall__Begin_fn(AndroidCall* __this)
{
    __this->Begin();
}

// public AndroidCall New(string uri) :50
void AndroidCall__New1_fn(uString* uri, AndroidCall** __retval)
{
    *__retval = AndroidCall::New1(uri);
}

// private extern void OnPermitted(Uno.Permissions.PlatformPermission permission) :60
void AndroidCall__OnPermitted_fn(AndroidCall* __this, ::g::Uno::Permissions::PlatformPermission* permission)
{
    __this->OnPermitted(*permission);
}

// public AndroidCall(string uri) [instance] :50
void AndroidCall::ctor_(uString* uri)
{
    _uri = uri;
}

// public void Begin() [instance] :55
void AndroidCall::Begin()
{
    uPtr(::g::Uno::Permissions::Permissions::Request(::g::Uno::Permissions::Permissions__Android::CALL_PHONE()))->Then(uDelegate::New(::TYPES[0/*Uno.Action<Uno.Permissions.PlatformPermission>*/], (void*)AndroidCall__OnPermitted_fn, this));
}

// private extern void OnPermitted(Uno.Permissions.PlatformPermission permission) [instance] :60
void AndroidCall::OnPermitted(::g::Uno::Permissions::PlatformPermission permission)
{
    ::g::Fuse::Android::Bindings::AndroidDeviceInterop::LaunchIntent(AndroidCall::_actionCall(), _uri, NULL, NULL);
}

// public AndroidCall New(string uri) [static] :50
AndroidCall* AndroidCall::New1(uString* uri)
{
    AndroidCall* obj1 = (AndroidCall*)uNew(AndroidCall_typeof());
    obj1->ctor_(uri);
    return obj1;
}

// private static extern string get__actionCall() [static] :44
uString* AndroidCall::_actionCall()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "get__actionCall406", "()Ljava/lang/String;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.Launcher.Email\1.2.0\email\$.uno
// ---------------------------------------------------------------------------------

// public static class EmailLauncher :17
// {
static void EmailLauncher_build(uType* type)
{
    ::STRINGS[0] = uString::Const("to");
    ::STRINGS[1] = uString::Const("mailto:");
    ::STRINGS[2] = uString::Const("?");
    ::STRINGS[3] = uString::Const("cc=");
    ::STRINGS[4] = uString::Const("&");
    ::STRINGS[5] = uString::Const("bcc=");
    ::STRINGS[6] = uString::Const("subject=");
    ::STRINGS[7] = uString::Const("body=");
}

uClassType* EmailLauncher_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.LauncherImpl.EmailLauncher", options);
    type->fp_build_ = EmailLauncher_build;
    return type;
}

// private static extern string get__actionSendTo() :22
void EmailLauncher__get__actionSendTo_fn(uString** __retval)
{
    *__retval = EmailLauncher::_actionSendTo();
}

// public static void LaunchEmail(string to, string carbonCopy, string blindCarbonCopy, string subject, string message) :28
void EmailLauncher__LaunchEmail_fn(uString* to, uString* carbonCopy, uString* blindCarbonCopy, uString* subject, uString* message)
{
    EmailLauncher::LaunchEmail(to, carbonCopy, blindCarbonCopy, subject, message);
}

// public static void LaunchEmail(string to, string carbonCopy, string blindCarbonCopy, string subject, string message) [static] :28
void EmailLauncher::LaunchEmail(uString* to, uString* carbonCopy, uString* blindCarbonCopy, uString* subject, uString* message)
{
    if (::g::Uno::String::op_Equality(to, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"to"*/]));

    ::g::Uno::Text::StringBuilder* builder = ::g::Uno::Text::StringBuilder::New1();
    builder->Append2(::STRINGS[1/*"mailto:"*/]);
    builder->Append2(to);
    builder->Append2(::STRINGS[2/*"?"*/]);

    if (!::g::Uno::String::IsNullOrEmpty(carbonCopy))
    {
        uPtr(builder)->Append2(::STRINGS[3/*"cc="*/]);
        builder->Append2(carbonCopy);
    }

    if (!::g::Uno::String::IsNullOrEmpty(blindCarbonCopy))
    {
        uPtr(builder)->Append2(::STRINGS[4/*"&"*/]);
        builder->Append2(::STRINGS[5/*"bcc="*/]);
        builder->Append2(blindCarbonCopy);
    }

    if (!::g::Uno::String::IsNullOrEmpty(subject))
    {
        uPtr(builder)->Append2(::STRINGS[4/*"&"*/]);
        builder->Append2(::STRINGS[6/*"subject="*/]);
        builder->Append2(::g::Uno::Net::Http::Uri::Encode(subject));
    }

    if (!::g::Uno::String::IsNullOrEmpty(message))
    {
        uPtr(builder)->Append2(::STRINGS[4/*"&"*/]);
        builder->Append2(::STRINGS[7/*"body="*/]);
        builder->Append2(::g::Uno::Net::Http::Uri::Encode(message));
    }

    ::g::Uno::Permissions::Permissions::Request(::g::Uno::Permissions::Permissions__Android::INTERNET());
    ::g::Fuse::Android::Bindings::AndroidDeviceInterop::LaunchIntent(EmailLauncher::_actionSendTo(), uPtr(builder)->ToString(), NULL, NULL);
}

// private static extern string get__actionSendTo() [static] :22
uString* EmailLauncher::_actionSendTo()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "get__actionSendTo407", "()Ljava/lang/String;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.Launcher.InterApp\1.2.0\interapp\$.uno
// ---------------------------------------------------------------------------------------

// public static class InterAppLauncher :17
// {
static void InterAppLauncher_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Exception_typeof();
}

uClassType* InterAppLauncher_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.LauncherImpl.InterAppLauncher", options);
    type->fp_build_ = InterAppLauncher_build;
    return type;
}

// private static extern string get__actionView() :22
void InterAppLauncher__get__actionView_fn(uString** __retval)
{
    *__retval = InterAppLauncher::_actionView();
}

// public static void LaunchUri(Uno.Net.Http.Uri uri) :28
void InterAppLauncher__LaunchUri_fn(::g::Uno::Net::Http::Uri* uri)
{
    InterAppLauncher::LaunchUri(uri);
}

// public static void LaunchUri(Uno.Net.Http.Uri uri) [static] :28
void InterAppLauncher::LaunchUri(::g::Uno::Net::Http::Uri* uri)
{
    ::g::Uno::Permissions::Permissions::Request(::g::Uno::Permissions::Permissions__Android::INTERNET());

    try
    {
        ::g::Fuse::Android::Bindings::AndroidDeviceInterop::LaunchIntent(InterAppLauncher::_actionView(), uPtr(uri)->AbsoluteUri(), NULL, NULL);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
    }
}

// private static extern string get__actionView() [static] :22
uString* InterAppLauncher::_actionView()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "get__actionView408", "()Ljava/lang/String;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.Launcher.Maps\1.2.0\maps\$.uno
// -------------------------------------------------------------------------------

// public static class MapsLauncher :17
// {
static void MapsLauncher_build(uType* type)
{
    ::STRINGS[8] = uString::Const(",");
    ::STRINGS[9] = uString::Const("geo:");
    ::STRINGS[10] = uString::Const("?q=");
    ::STRINGS[11] = uString::Const("geo:0,0?q=");
    ::STRINGS[12] = uString::Const("com.google.android.apps.maps");
    ::STRINGS[13] = uString::Const("com.google.android.maps.MapsActivity");
    ::TYPES[2] = ::g::Uno::Double_typeof();
    ::TYPES[1] = ::g::Uno::Exception_typeof();
}

uClassType* MapsLauncher_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.LauncherImpl.MapsLauncher", options);
    type->fp_build_ = MapsLauncher_build;
    return type;
}

// private static extern string get__actionView() :22
void MapsLauncher__get__actionView_fn(uString** __retval)
{
    *__retval = MapsLauncher::_actionView();
}

// public static void LaunchMaps(double latitude, double longitude) :28
void MapsLauncher__LaunchMaps_fn(double* latitude, double* longitude)
{
    MapsLauncher::LaunchMaps(*latitude, *longitude);
}

// public static void LaunchMaps(double latitude, double longitude, string query) :50
void MapsLauncher__LaunchMaps1_fn(double* latitude, double* longitude, uString* query)
{
    MapsLauncher::LaunchMaps1(*latitude, *longitude, query);
}

// public static void LaunchMaps(string query) :41
void MapsLauncher__LaunchMaps2_fn(uString* query)
{
    MapsLauncher::LaunchMaps2(query);
}

// private static extern void LaunchMapsAndroid(string uri) :64
void MapsLauncher__LaunchMapsAndroid_fn(uString* uri)
{
    MapsLauncher::LaunchMapsAndroid(uri);
}

// public static void LaunchMaps(double latitude, double longitude) [static] :28
void MapsLauncher::LaunchMaps(double latitude, double longitude)
{
    uString* latlon = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Double::ToString(latitude, ::TYPES[2/*double*/]), ::STRINGS[8/*","*/]), ::g::Uno::Double::ToString(longitude, ::TYPES[2/*double*/]));
    MapsLauncher::LaunchMapsAndroid(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[9/*"geo:"*/], latlon), ::STRINGS[10/*"?q="*/]), latlon));
}

// public static void LaunchMaps(double latitude, double longitude, string query) [static] :50
void MapsLauncher::LaunchMaps1(double latitude, double longitude, uString* query)
{
    uString* latlon = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Double::ToString(latitude, ::TYPES[2/*double*/]), ::STRINGS[8/*","*/]), ::g::Uno::Double::ToString(longitude, ::TYPES[2/*double*/]));
    query = ::g::Uno::Net::Http::Uri::Encode(query);
    MapsLauncher::LaunchMapsAndroid(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[9/*"geo:"*/], latlon), ::STRINGS[10/*"?q="*/]), query));
}

// public static void LaunchMaps(string query) [static] :41
void MapsLauncher::LaunchMaps2(uString* query)
{
    query = ::g::Uno::Net::Http::Uri::Encode(query);
    MapsLauncher::LaunchMapsAndroid(::g::Uno::String::op_Addition2(::STRINGS[11/*"geo:0,0?q="*/], query));
}

// private static extern void LaunchMapsAndroid(string uri) [static] :64
void MapsLauncher::LaunchMapsAndroid(uString* uri)
{
    try
    {
        ::g::Fuse::Android::Bindings::AndroidDeviceInterop::LaunchIntent(MapsLauncher::_actionView(), uri, ::STRINGS[12/*"com.google....*/], ::STRINGS[13/*"com.google....*/]);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
    }
}

// private static extern string get__actionView() [static] :22
uString* MapsLauncher::_actionView()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "get__actionView409", "()Ljava/lang/String;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.Launcher.Phone\1.2.0\phone\$.uno
// ---------------------------------------------------------------------------------

// public static class PhoneLauncher :15
// {
static void PhoneLauncher_build(uType* type)
{
}

uClassType* PhoneLauncher_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.LauncherImpl.PhoneLauncher", options);
    type->fp_build_ = PhoneLauncher_build;
    return type;
}

// public static void LaunchCall(string callString) :17
void PhoneLauncher__LaunchCall_fn(uString* callString)
{
    PhoneLauncher::LaunchCall(callString);
}

// public static void LaunchCall(string callString) [static] :17
void PhoneLauncher::LaunchCall(uString* callString)
{
    uString* uri = ::g::Fuse::PhoneUriHelper::PhoneNumberToUri(callString);
    ::g::Fuse::LauncherImpl::AndroidCall* call = ::g::Fuse::LauncherImpl::AndroidCall::New1(uri);
    call->Begin();
}
// }

}}} // ::g::Fuse::LauncherImpl
