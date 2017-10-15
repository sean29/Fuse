// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Fuse.Android.Bindings-f8058cd2.h>
#include <Java.Object.h>
#include <jni.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Platform.CoreApp.h>
#include <Uno.String.h>
#include <Uno/JNIHelper.h>

namespace g{
namespace Fuse{
namespace Android{
namespace Bindings{

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.Android\1.3.0-rc2\AndroidInterop.uno
// -------------------------------------------------------------------------------------

// internal static extern class AndroidDeviceInterop :16
// {
static void AndroidDeviceInterop_build(uType* type)
{
}

uClassType* AndroidDeviceInterop_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Android.Bindings.AndroidDeviceInterop", options);
    type->fp_build_ = AndroidDeviceInterop_build;
    return type;
}

// public static extern Java.Object LaunchIntent(string action, string uri, [string packageName], [string className]) :19
void AndroidDeviceInterop__LaunchIntent_fn(uString* action, uString* uri, uString* packageName, uString* className, ::g::Java::Object** __retval)
{
    *__retval = AndroidDeviceInterop::LaunchIntent(action, uri, packageName, className);
}

// public static extern Java.Object LaunchIntent(string action, string uri, [string packageName], [string className]) [static] :19
::g::Java::Object* AndroidDeviceInterop::LaunchIntent(uString* action, uString* uri, uString* packageName, uString* className)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "LaunchIntent315", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;");
        uString* _uaction=action;
        jstring _action = JniHelper::UnoToJavaString(_uaction);
        uString* _uuri=uri;
        jstring _uri = JniHelper::UnoToJavaString(_uuri);
        uString* _upackageName=packageName;
        jstring _packageName = JniHelper::UnoToJavaString(_upackageName);
        uString* _uclassName=className;
        jstring _className = JniHelper::UnoToJavaString(_uclassName);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_action,_uri,_packageName,_className);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_action!=NULL) { U_JNIVAR->DeleteLocalRef(_action); }
        if (_uri!=NULL) { U_JNIVAR->DeleteLocalRef(_uri); }
        if (_packageName!=NULL) { U_JNIVAR->DeleteLocalRef(_packageName); }
        if (_className!=NULL) { U_JNIVAR->DeleteLocalRef(_className); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}
// }

}}}} // ::g::Fuse::Android::Bindings
