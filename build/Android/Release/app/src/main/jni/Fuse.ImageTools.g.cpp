// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Fuse.ImageTools.Andro-2781a4e0.h>
#include <Fuse.ImageTools.BoolP-6b212329.h>
#include <Fuse.ImageTools.CropCommand.h>
#include <Fuse.ImageTools.Image.h>
#include <Fuse.ImageTools.Image-3344558a.h>
#include <Fuse.ImageTools.Image-57a76110.h>
#include <Fuse.ImageTools.Image-e09a55cd.h>
#include <Fuse.ImageTools.ImageTools.h>
#include <Fuse.ImageTools.PCommand.h>
#include <Fuse.ImageTools.Promi-47f46f5b.h>
#include <Fuse.ImageTools.ResizeCommand.h>
#include <Fuse.ImageTools.ResizeMode.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.JSObjectUtils.h>
#include <Fuse.Scripting.Native-c8feecef.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.Result-92713bce.h>
#include <jni.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dicti-87d2e37d.h>
#include <Uno.Collections.Dicti-894ef3c3.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IO.File.h>
#include <Uno.IO.Path.h>
#include <Uno.Object.h>
#include <Uno.Permissions.Permi-d35d5681.h>
#include <Uno.Permissions.Permissions.h>
#include <Uno.Permissions.Platf-7d72d93e.h>
#include <Uno.SByte.h>
#include <Uno.String.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.UX.Resource.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[31];
static uType* TYPES[27];

namespace g{
namespace Fuse{
namespace ImageTools{

// /Users/a/Library/Application Support/Fusetools/Packages/Fuse.ImageTools/1.2.1/android/$.uno
// -------------------------------------------------------------------------------------------

// internal static extern class AndroidImageUtils :10
// {
static void AndroidImageUtils_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Int_typeof()->Array();
}

uClassType* AndroidImageUtils_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.ImageTools.AndroidImageUtils", options);
    type->fp_build_ = AndroidImageUtils_build;
    return type;
}

// public static void Crop(string path, int width, int height, int x, int y, Uno.Action<string> onSuccess, Uno.Action<string> onFail, [bool performInPlace]) :76
void AndroidImageUtils__Crop_fn(uString* path, int* width, int* height, int* x, int* y, uDelegate* onSuccess, uDelegate* onFail, bool* performInPlace)
{
    AndroidImageUtils::Crop(path, *width, *height, *x, *y, onSuccess, onFail, *performInPlace);
}

// public static void GetBase64FromImage(string path, Uno.Action<string> onSuccess, Uno.Action<string> onFail) :108
void AndroidImageUtils__GetBase64FromImage_fn(uString* path, uDelegate* onSuccess, uDelegate* onFail)
{
    AndroidImageUtils::GetBase64FromImage(path, onSuccess, onFail);
}

// public static void GetImageFromBase64(string b64, Uno.Action<string> onSuccess, Uno.Action<string> onFail) :92
void AndroidImageUtils__GetImageFromBase64_fn(uString* b64, uDelegate* onSuccess, uDelegate* onFail)
{
    AndroidImageUtils::GetImageFromBase64(b64, onSuccess, onFail);
}

// public static void GetImageFromBuffer(sbyte[] bytes, Uno.Action<string> onSuccess, Uno.Action<string> onFail) :48
void AndroidImageUtils__GetImageFromBuffer_fn(uArray* bytes, uDelegate* onSuccess, uDelegate* onFail)
{
    AndroidImageUtils::GetImageFromBuffer(bytes, onSuccess, onFail);
}

// public static string GetImageFromBufferSync(sbyte[] bytes) :63
void AndroidImageUtils__GetImageFromBufferSync_fn(uArray* bytes, uString** __retval)
{
    *__retval = AndroidImageUtils::GetImageFromBufferSync(bytes);
}

// public static int2 GetSize(Fuse.ImageTools.Image inImage) :13
void AndroidImageUtils__GetSize_fn(::g::Fuse::ImageTools::Image* inImage, ::g::Uno::Int2* __retval)
{
    *__retval = AndroidImageUtils::GetSize(inImage);
}

// private static void GetSizeInternal(string path, int[] values) :21
void AndroidImageUtils__GetSizeInternal_fn(uString* path, uArray* values)
{
    AndroidImageUtils::GetSizeInternal(path, values);
}

// public static void Resize(string path, int width, int height, int mode, Uno.Action<string> onSuccess, Uno.Action<string> onFail, [bool performInPlace]) :32
void AndroidImageUtils__Resize_fn(uString* path, int* width, int* height, int* mode, uDelegate* onSuccess, uDelegate* onFail, bool* performInPlace)
{
    AndroidImageUtils::Resize(path, *width, *height, *mode, onSuccess, onFail, *performInPlace);
}

// public static void Crop(string path, int width, int height, int x, int y, Uno.Action<string> onSuccess, Uno.Action<string> onFail, [bool performInPlace]) [static] :76
void AndroidImageUtils::Crop(uString* path, int width, int height, int x, int y, uDelegate* onSuccess, uDelegate* onFail, bool performInPlace)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Crop374", "(Ljava/lang/String;IIIILcom/foreign/Uno/Action_String;Lcom/foreign/Uno/Action_String;Z)V");
        uString* _upath=path;
        jstring _path = JniHelper::UnoToJavaString(_upath);
        int _uwidth=width;
        jint _width = (jint)_uwidth;
        int _uheight=height;
        jint _height = (jint)_uheight;
        int _ux=x;
        jint _x = (jint)_ux;
        int _uy=y;
        jint _y = (jint)_uy;
        uDelegate* _uonSuccess=onSuccess;
        jobject _onSuccess = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uonSuccess, "com.foreign.Uno.Action_String");
        uDelegate* _uonFail=onFail;
        jobject _onFail = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uonFail, "com.foreign.Uno.Action_String");
        bool _uperformInPlace=performInPlace;
        jboolean _performInPlace = (jboolean)_uperformInPlace;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_path,_width,_height,_x,_y,_onSuccess,_onFail,_performInPlace);
        
        if (_path!=NULL) { U_JNIVAR->DeleteLocalRef(_path); }
        
        
        
        
        if (_onSuccess!=NULL) { U_JNIVAR->DeleteLocalRef(_onSuccess); }
        if (_onFail!=NULL) { U_JNIVAR->DeleteLocalRef(_onFail); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void GetBase64FromImage(string path, Uno.Action<string> onSuccess, Uno.Action<string> onFail) [static] :108
void AndroidImageUtils::GetBase64FromImage(uString* path, uDelegate* onSuccess, uDelegate* onFail)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetBase64FromImage375", "(Ljava/lang/String;Lcom/foreign/Uno/Action_String;Lcom/foreign/Uno/Action_String;)V");
        uString* _upath=path;
        jstring _path = JniHelper::UnoToJavaString(_upath);
        uDelegate* _uonSuccess=onSuccess;
        jobject _onSuccess = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uonSuccess, "com.foreign.Uno.Action_String");
        uDelegate* _uonFail=onFail;
        jobject _onFail = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uonFail, "com.foreign.Uno.Action_String");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_path,_onSuccess,_onFail);
        
        if (_path!=NULL) { U_JNIVAR->DeleteLocalRef(_path); }
        if (_onSuccess!=NULL) { U_JNIVAR->DeleteLocalRef(_onSuccess); }
        if (_onFail!=NULL) { U_JNIVAR->DeleteLocalRef(_onFail); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void GetImageFromBase64(string b64, Uno.Action<string> onSuccess, Uno.Action<string> onFail) [static] :92
void AndroidImageUtils::GetImageFromBase64(uString* b64, uDelegate* onSuccess, uDelegate* onFail)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetImageFromBase64376", "(Ljava/lang/String;Lcom/foreign/Uno/Action_String;Lcom/foreign/Uno/Action_String;)V");
        uString* _ub64=b64;
        jstring _b64 = JniHelper::UnoToJavaString(_ub64);
        uDelegate* _uonSuccess=onSuccess;
        jobject _onSuccess = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uonSuccess, "com.foreign.Uno.Action_String");
        uDelegate* _uonFail=onFail;
        jobject _onFail = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uonFail, "com.foreign.Uno.Action_String");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_b64,_onSuccess,_onFail);
        
        if (_b64!=NULL) { U_JNIVAR->DeleteLocalRef(_b64); }
        if (_onSuccess!=NULL) { U_JNIVAR->DeleteLocalRef(_onSuccess); }
        if (_onFail!=NULL) { U_JNIVAR->DeleteLocalRef(_onFail); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void GetImageFromBuffer(sbyte[] bytes, Uno.Action<string> onSuccess, Uno.Action<string> onFail) [static] :48
void AndroidImageUtils::GetImageFromBuffer(uArray* bytes, uDelegate* onSuccess, uDelegate* onFail)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetImageFromBuffer377", "(Lcom/uno/ByteArray;Lcom/foreign/Uno/Action_String;Lcom/foreign/Uno/Action_String;)V");
        uArray* _ubytes=bytes;
        jobject _bytes = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box8(_ubytes);
        uDelegate* _uonSuccess=onSuccess;
        jobject _onSuccess = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uonSuccess, "com.foreign.Uno.Action_String");
        uDelegate* _uonFail=onFail;
        jobject _onFail = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uonFail, "com.foreign.Uno.Action_String");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_bytes,_onSuccess,_onFail);
        
        if (_bytes!=NULL) { U_JNIVAR->DeleteLocalRef(_bytes); }
        if (_onSuccess!=NULL) { U_JNIVAR->DeleteLocalRef(_onSuccess); }
        if (_onFail!=NULL) { U_JNIVAR->DeleteLocalRef(_onFail); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static string GetImageFromBufferSync(sbyte[] bytes) [static] :63
uString* AndroidImageUtils::GetImageFromBufferSync(uArray* bytes)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetImageFromBufferSync378", "(Lcom/uno/ByteArray;)Ljava/lang/String;");
        uArray* _ubytes=bytes;
        jobject _bytes = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box8(_ubytes);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_bytes);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (_bytes!=NULL) { U_JNIVAR->DeleteLocalRef(_bytes); }
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static int2 GetSize(Fuse.ImageTools.Image inImage) [static] :13
::g::Uno::Int2 AndroidImageUtils::GetSize(::g::Fuse::ImageTools::Image* inImage)
{
    uArray* size = uArray::Init<int>(::TYPES[0/*int[]*/], 2, 0, 0);
    AndroidImageUtils::GetSizeInternal(uPtr(inImage)->Path(), size);
    return ::g::Uno::Int2__New2(size->Item<int>(0), size->Item<int>(1));
}

// private static void GetSizeInternal(string path, int[] values) [static] :21
void AndroidImageUtils::GetSizeInternal(uString* path, uArray* values)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetSizeInternal379", "(Ljava/lang/String;Lcom/uno/IntArray;)V");
        uString* _upath=path;
        jstring _path = JniHelper::UnoToJavaString(_upath);
        uArray* _uvalues=values;
        jobject _values = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box4(_uvalues);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_path,_values);
        
        if (_path!=NULL) { U_JNIVAR->DeleteLocalRef(_path); }
        if (_values!=NULL) { U_JNIVAR->DeleteLocalRef(_values); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void Resize(string path, int width, int height, int mode, Uno.Action<string> onSuccess, Uno.Action<string> onFail, [bool performInPlace]) [static] :32
void AndroidImageUtils::Resize(uString* path, int width, int height, int mode, uDelegate* onSuccess, uDelegate* onFail, bool performInPlace)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Resize380", "(Ljava/lang/String;IIILcom/foreign/Uno/Action_String;Lcom/foreign/Uno/Action_String;Z)V");
        uString* _upath=path;
        jstring _path = JniHelper::UnoToJavaString(_upath);
        int _uwidth=width;
        jint _width = (jint)_uwidth;
        int _uheight=height;
        jint _height = (jint)_uheight;
        int _umode=mode;
        jint _mode = (jint)_umode;
        uDelegate* _uonSuccess=onSuccess;
        jobject _onSuccess = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uonSuccess, "com.foreign.Uno.Action_String");
        uDelegate* _uonFail=onFail;
        jobject _onFail = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uonFail, "com.foreign.Uno.Action_String");
        bool _uperformInPlace=performInPlace;
        jboolean _performInPlace = (jboolean)_uperformInPlace;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_path,_width,_height,_mode,_onSuccess,_onFail,_performInPlace);
        
        if (_path!=NULL) { U_JNIVAR->DeleteLocalRef(_path); }
        
        
        
        if (_onSuccess!=NULL) { U_JNIVAR->DeleteLocalRef(_onSuccess); }
        if (_onFail!=NULL) { U_JNIVAR->DeleteLocalRef(_onFail); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /Users/a/Library/Application Support/Fusetools/Packages/Fuse.ImageTools/1.2.1/$.uno
// -----------------------------------------------------------------------------------

// internal sealed class BoolPromiseCallback :656
// {
static void BoolPromiseCallback_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::Fuse::ImageTools::BoolPromiseCallback, _p), 0);
}

uType* BoolPromiseCallback_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(BoolPromiseCallback);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.ImageTools.BoolPromiseCallback", options);
    type->fp_build_ = BoolPromiseCallback_build;
    return type;
}

// public BoolPromiseCallback(Uno.Threading.Promise<bool> p) :659
void BoolPromiseCallback__ctor__fn(BoolPromiseCallback* __this, ::g::Uno::Threading::Promise* p)
{
    __this->ctor_(p);
}

// public BoolPromiseCallback New(Uno.Threading.Promise<bool> p) :659
void BoolPromiseCallback__New1_fn(::g::Uno::Threading::Promise* p, BoolPromiseCallback** __retval)
{
    *__retval = BoolPromiseCallback::New1(p);
}

// public void Reject(string reason) :669
void BoolPromiseCallback__Reject_fn(BoolPromiseCallback* __this, uString* reason)
{
    __this->Reject(reason);
}

// public void Resolve() :664
void BoolPromiseCallback__Resolve_fn(BoolPromiseCallback* __this)
{
    __this->Resolve();
}

// public BoolPromiseCallback(Uno.Threading.Promise<bool> p) [instance] :659
void BoolPromiseCallback::ctor_(::g::Uno::Threading::Promise* p)
{
    _p = p;
}

// public void Reject(string reason) [instance] :669
void BoolPromiseCallback::Reject(uString* reason)
{
    uPtr(_p)->Reject(::g::Uno::Exception::New2(reason));
}

// public void Resolve() [instance] :664
void BoolPromiseCallback::Resolve()
{
    ::g::Uno::Threading::Promise__Resolve_fn(uPtr(_p), uCRef(true));
}

// public BoolPromiseCallback New(Uno.Threading.Promise<bool> p) [static] :659
BoolPromiseCallback* BoolPromiseCallback::New1(::g::Uno::Threading::Promise* p)
{
    BoolPromiseCallback* obj1 = (BoolPromiseCallback*)uNew(BoolPromiseCallback_typeof());
    obj1->ctor_(p);
    return obj1;
}
// }

// /Users/a/Library/Application Support/Fusetools/Packages/Fuse.ImageTools/1.2.1/android/$.uno
// -------------------------------------------------------------------------------------------

// internal sealed extern class CropCommand :200
// {
static void CropCommand_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Permissions::PlatformPermission_typeof()->Array();
    type->SetFields(1,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::ImageTools::CropCommand, _height), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::ImageTools::CropCommand, _inPlace), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::ImageTools::CropCommand, _path), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Fuse::ImageTools::CropCommand, _reject), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Fuse::ImageTools::CropCommand, _resolve), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::ImageTools::CropCommand, _width), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::ImageTools::CropCommand, _x), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::ImageTools::CropCommand, _y), 0);
}

::g::Fuse::ImageTools::PCommand_type* CropCommand_typeof()
{
    static uSStrong< ::g::Fuse::ImageTools::PCommand_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::ImageTools::PCommand_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(CropCommand);
    options.TypeSize = sizeof(::g::Fuse::ImageTools::PCommand_type);
    type = (::g::Fuse::ImageTools::PCommand_type*)uClassType::New("Fuse.ImageTools.CropCommand", options);
    type->fp_build_ = CropCommand_build;
    type->fp_OnGranted = (void(*)(::g::Fuse::ImageTools::PCommand*))CropCommand__OnGranted_fn;
    type->fp_OnRejected = (void(*)(::g::Fuse::ImageTools::PCommand*, ::g::Uno::Exception*))CropCommand__OnRejected_fn;
    return type;
}

// public CropCommand(string path, int x, int y, int desiredWidth, int desiredHeight, Uno.Action<string> Resolve, Uno.Action<string> Reject, bool inPlace) :209
void CropCommand__ctor_1_fn(CropCommand* __this, uString* path, int* x, int* y, int* desiredWidth, int* desiredHeight, uDelegate* Resolve, uDelegate* Reject, bool* inPlace)
{
    __this->ctor_1(path, *x, *y, *desiredWidth, *desiredHeight, Resolve, Reject, *inPlace);
}

// public CropCommand New(string path, int x, int y, int desiredWidth, int desiredHeight, Uno.Action<string> Resolve, Uno.Action<string> Reject, bool inPlace) :209
void CropCommand__New1_fn(uString* path, int* x, int* y, int* desiredWidth, int* desiredHeight, uDelegate* Resolve, uDelegate* Reject, bool* inPlace, CropCommand** __retval)
{
    *__retval = CropCommand::New1(path, *x, *y, *desiredWidth, *desiredHeight, Resolve, Reject, *inPlace);
}

// private override sealed void OnGranted() :220
void CropCommand__OnGranted_fn(CropCommand* __this)
{
    ::g::Fuse::ImageTools::AndroidImageUtils::Crop(__this->_path, __this->_x, __this->_y, __this->_width, __this->_height, __this->_resolve, __this->_reject, __this->_inPlace);
}

// private override sealed void OnRejected(Uno.Exception e) :225
void CropCommand__OnRejected_fn(CropCommand* __this, ::g::Uno::Exception* e)
{
    uPtr(__this->_reject)->InvokeVoid(uPtr(e)->Message());
}

// public CropCommand(string path, int x, int y, int desiredWidth, int desiredHeight, Uno.Action<string> Resolve, Uno.Action<string> Reject, bool inPlace) [instance] :209
void CropCommand::ctor_1(uString* path, int x, int y, int desiredWidth, int desiredHeight, uDelegate* Resolve, uDelegate* Reject, bool inPlace)
{
    uArray* array2;
    ctor_((array2 = uArray::New(::TYPES[1/*Uno.Permissions.PlatformPermission[]*/], 2), uPtr(array2)->Item< ::g::Uno::Permissions::PlatformPermission>(0) = ::g::Uno::Permissions::Permissions__Android::READ_EXTERNAL_STORAGE(), uPtr(array2)->Item< ::g::Uno::Permissions::PlatformPermission>(1) = ::g::Uno::Permissions::Permissions__Android::WRITE_EXTERNAL_STORAGE(), array2));
    _path = path;
    _x = x;
    _y = y;
    _width = desiredWidth;
    _height = desiredHeight;
    _resolve = Resolve;
    _reject = Reject;
    _inPlace = inPlace;
}

// public CropCommand New(string path, int x, int y, int desiredWidth, int desiredHeight, Uno.Action<string> Resolve, Uno.Action<string> Reject, bool inPlace) [static] :209
CropCommand* CropCommand::New1(uString* path, int x, int y, int desiredWidth, int desiredHeight, uDelegate* Resolve, uDelegate* Reject, bool inPlace)
{
    CropCommand* obj1 = (CropCommand*)uNew(CropCommand_typeof());
    obj1->ctor_1(path, x, y, desiredWidth, desiredHeight, Resolve, Reject, inPlace);
    return obj1;
}
// }

// /Users/a/Library/Application Support/Fusetools/Packages/Fuse.ImageTools/1.2.1/$.uno
// -----------------------------------------------------------------------------------

// private sealed extern class ImageTools.GetBase64Command :552
// {
static void ImageTools__GetBase64Command_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Permissions::PlatformPermission_typeof()->Array();
    type->SetFields(1,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::ImageTools::ImageTools__GetBase64Command, _path), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Fuse::ImageTools::ImageTools__GetBase64Command, _reject), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Fuse::ImageTools::ImageTools__GetBase64Command, _resolve), 0);
}

::g::Fuse::ImageTools::PCommand_type* ImageTools__GetBase64Command_typeof()
{
    static uSStrong< ::g::Fuse::ImageTools::PCommand_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::ImageTools::PCommand_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(ImageTools__GetBase64Command);
    options.TypeSize = sizeof(::g::Fuse::ImageTools::PCommand_type);
    type = (::g::Fuse::ImageTools::PCommand_type*)uClassType::New("Fuse.ImageTools.ImageTools.GetBase64Command", options);
    type->fp_build_ = ImageTools__GetBase64Command_build;
    type->fp_OnGranted = (void(*)(::g::Fuse::ImageTools::PCommand*))ImageTools__GetBase64Command__OnGranted_fn;
    type->fp_OnRejected = (void(*)(::g::Fuse::ImageTools::PCommand*, ::g::Uno::Exception*))ImageTools__GetBase64Command__OnRejected_fn;
    return type;
}

// public GetBase64Command(string path, Uno.Action<string> Resolve, Uno.Action<string> Reject) :556
void ImageTools__GetBase64Command__ctor_1_fn(ImageTools__GetBase64Command* __this, uString* path, uDelegate* Resolve, uDelegate* Reject)
{
    __this->ctor_1(path, Resolve, Reject);
}

// public GetBase64Command New(string path, Uno.Action<string> Resolve, Uno.Action<string> Reject) :556
void ImageTools__GetBase64Command__New1_fn(uString* path, uDelegate* Resolve, uDelegate* Reject, ImageTools__GetBase64Command** __retval)
{
    *__retval = ImageTools__GetBase64Command::New1(path, Resolve, Reject);
}

// private override sealed void OnGranted() :562
void ImageTools__GetBase64Command__OnGranted_fn(ImageTools__GetBase64Command* __this)
{
    ::g::Fuse::ImageTools::AndroidImageUtils::GetBase64FromImage(__this->_path, __this->_resolve, __this->_reject);
}

// private override sealed void OnRejected(Uno.Exception e) :567
void ImageTools__GetBase64Command__OnRejected_fn(ImageTools__GetBase64Command* __this, ::g::Uno::Exception* e)
{
    uPtr(__this->_reject)->InvokeVoid(uPtr(e)->Message());
}

// public GetBase64Command(string path, Uno.Action<string> Resolve, Uno.Action<string> Reject) [instance] :556
void ImageTools__GetBase64Command::ctor_1(uString* path, uDelegate* Resolve, uDelegate* Reject)
{
    uArray* array2;
    ctor_((array2 = uArray::New(::TYPES[1/*Uno.Permissions.PlatformPermission[]*/], 1), uPtr(array2)->Item< ::g::Uno::Permissions::PlatformPermission>(0) = ::g::Uno::Permissions::Permissions__Android::READ_EXTERNAL_STORAGE(), array2));
    _path = path;
    _resolve = Resolve;
    _reject = Reject;
}

// public GetBase64Command New(string path, Uno.Action<string> Resolve, Uno.Action<string> Reject) [static] :556
ImageTools__GetBase64Command* ImageTools__GetBase64Command::New1(uString* path, uDelegate* Resolve, uDelegate* Reject)
{
    ImageTools__GetBase64Command* obj1 = (ImageTools__GetBase64Command*)uNew(ImageTools__GetBase64Command_typeof());
    obj1->ctor_1(path, Resolve, Reject);
    return obj1;
}
// }

// /Users/a/Library/Application Support/Fusetools/Packages/Fuse.ImageTools/1.2.1/$.uno
// -----------------------------------------------------------------------------------

// public sealed class Image :91
// {
static void Image_build(uType* type)
{
    ::STRINGS[0] = uString::Const("path");
    ::STRINGS[1] = uString::Const("name");
    ::STRINGS[2] = uString::Const("width");
    ::STRINGS[3] = uString::Const("height");
    ::STRINGS[4] = uString::Const("info");
    ::TYPES[2] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::String_typeof();
    ::TYPES[4] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[5] = ::g::Uno::Collections::Dictionary__KeyCollection__Enumerator_typeof()->MakeType(::TYPES[3/*string*/], uObject_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Int2_typeof(), offsetof(::g::Fuse::ImageTools::Image, _dims), 0,
        ::TYPES[2/*Uno.Collections.Dictionary<string, object>*/], offsetof(::g::Fuse::ImageTools::Image, _Info), 0,
        ::TYPES[3/*string*/], offsetof(::g::Fuse::ImageTools::Image, _Name), 0,
        ::TYPES[3/*string*/], offsetof(::g::Fuse::ImageTools::Image, _Path), 0);
}

uType* Image_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Image);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.ImageTools.Image", options);
    type->fp_build_ = Image_build;
    return type;
}

// public Image(string path) :140
void Image__ctor_1_fn(Image* __this, uString* path)
{
    __this->ctor_1(path);
}

// private extern void CheckDims() :111
void Image__CheckDims_fn(Image* __this)
{
    __this->CheckDims();
}

// public static Fuse.Scripting.Object Converter(Fuse.Scripting.Context context, Fuse.ImageTools.Image result) :185
void Image__Converter_fn(::g::Fuse::Scripting::Context* context, Image* result, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = Image::Converter(context, result);
}

// public static Fuse.ImageTools.Image FromObject(Fuse.Scripting.Object o) :152
void Image__FromObject_fn(::g::Fuse::Scripting::Object* o, Image** __retval)
{
    *__retval = Image::FromObject(o);
}

// public static Fuse.ImageTools.Image FromObject(object o) :147
void Image__FromObject1_fn(uObject* o, Image** __retval)
{
    *__retval = Image::FromObject1(o);
}

// public int get_Height() :105
void Image__get_Height_fn(Image* __this, int* __retval)
{
    *__retval = __this->Height();
}

// public generated Uno.Collections.Dictionary<string, object> get_Info() :136
void Image__get_Info_fn(Image* __this, ::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = __this->Info();
}

// private generated void set_Info(Uno.Collections.Dictionary<string, object> value) :136
void Image__set_Info_fn(Image* __this, ::g::Uno::Collections::Dictionary* value)
{
    __this->Info(value);
}

// private Fuse.Scripting.Object InfoToObject(Fuse.Scripting.Context c) :159
void Image__InfoToObject_fn(Image* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->InfoToObject(c);
}

// public generated string get_Name() :94
void Image__get_Name_fn(Image* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value) :94
void Image__set_Name_fn(Image* __this, uString* value)
{
    __this->Name(value);
}

// public Image New(string path) :140
void Image__New2_fn(uString* path, Image** __retval)
{
    *__retval = Image::New2(path);
}

// public generated string get_Path() :93
void Image__get_Path_fn(Image* __this, uString** __retval)
{
    *__retval = __this->Path();
}

// private generated void set_Path(string value) :93
void Image__set_Path_fn(Image* __this, uString* value)
{
    __this->Path(value);
}

// public bool Rename(string newName, [bool overwrite]) :123
void Image__Rename_fn(Image* __this, uString* newName, bool* overwrite, bool* __retval)
{
    *__retval = __this->Rename(newName, *overwrite);
}

// public Fuse.Scripting.Object ToObject(Fuse.Scripting.Context c) :169
void Image__ToObject_fn(Image* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->ToObject(c);
}

// public int get_Width() :98
void Image__get_Width_fn(Image* __this, int* __retval)
{
    *__retval = __this->Width();
}

// public Image(string path) [instance] :140
void Image::ctor_1(uString* path)
{
    Path(path);
    Name(::g::Uno::IO::Path::GetFileName(Path()));
    Info((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[2/*Uno.Collections.Dictionary<string, object>*/]));
}

// private extern void CheckDims() [instance] :111
void Image::CheckDims()
{
    if ((_dims.X == 0) && (_dims.Y == 0))
        _dims = ::g::Fuse::ImageTools::AndroidImageUtils::GetSize(this);
}

// public int get_Height() [instance] :105
int Image::Height()
{
    CheckDims();
    return _dims.Y;
}

// public generated Uno.Collections.Dictionary<string, object> get_Info() [instance] :136
::g::Uno::Collections::Dictionary* Image::Info()
{
    return _Info;
}

// private generated void set_Info(Uno.Collections.Dictionary<string, object> value) [instance] :136
void Image::Info(::g::Uno::Collections::Dictionary* value)
{
    _Info = value;
}

// private Fuse.Scripting.Object InfoToObject(Fuse.Scripting.Context c) [instance] :159
::g::Fuse::Scripting::Object* Image::InfoToObject(::g::Fuse::Scripting::Context* c)
{
    ::g::Uno::Collections::Dictionary__KeyCollection__Enumerator<uStrong<uString*> > ret4;
    uObject* ret5;
    ::g::Fuse::Scripting::Object* outValue = uPtr(c)->NewObject();

    for (::g::Uno::Collections::Dictionary__KeyCollection__Enumerator<uStrong<uString*> > enum1 = (::g::Uno::Collections::Dictionary__KeyCollection__GetEnumerator_fn(uPtr((::g::Uno::Collections::Dictionary__KeyCollection*)uPtr(Info())->Keys()), &ret4), ret4); enum1.MoveNext(::TYPES[5/*Uno.Collections.Dictionary<string, object>.KeyCollection.Enumerator*/]); )
    {
        uString* key = enum1.Current(::TYPES[5/*Uno.Collections.Dictionary<string, object>.KeyCollection.Enumerator*/]);
        uPtr(outValue)->Item(key, (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(Info()), key, &ret5), ret5));
    }

    return outValue;
}

// public generated string get_Name() [instance] :94
uString* Image::Name()
{
    return _Name;
}

// private generated void set_Name(string value) [instance] :94
void Image::Name(uString* value)
{
    _Name = value;
}

// public generated string get_Path() [instance] :93
uString* Image::Path()
{
    return _Path;
}

// private generated void set_Path(string value) [instance] :93
void Image::Path(uString* value)
{
    _Path = value;
}

// public bool Rename(string newName, [bool overwrite]) [instance] :123
bool Image::Rename(uString* newName, bool overwrite)
{
    if (::g::Uno::String::op_Equality(newName, Name()))
        return true;

    uString* newPath = ::g::Uno::IO::Path::Combine(::g::Uno::IO::Path::GetDirectoryName(Path()), newName);

    if (!overwrite && ::g::Uno::IO::File::Exists(newPath))
        return false;

    ::g::Uno::IO::File::Move(Path(), newPath);
    Path(newPath);
    Name(newName);
    return true;
}

// public Fuse.Scripting.Object ToObject(Fuse.Scripting.Context c) [instance] :169
::g::Fuse::Scripting::Object* Image::ToObject(::g::Fuse::Scripting::Context* c)
{
    ::g::Fuse::Scripting::Object* outValue = uPtr(c)->NewObject();
    uPtr(outValue)->Item(::STRINGS[0/*"path"*/], Path());
    outValue->Item(::STRINGS[1/*"name"*/], ::g::Uno::IO::Path::GetFileName(Path()));
    outValue->Item(::STRINGS[2/*"width"*/], uBox<int>(::g::Uno::Int_typeof(), Width()));
    outValue->Item(::STRINGS[3/*"height"*/], uBox<int>(::g::Uno::Int_typeof(), Height()));
    outValue->Item(::STRINGS[4/*"info"*/], InfoToObject(c));
    ::g::Fuse::Scripting::JSObjectUtils::Freeze(outValue, c);
    return outValue;
}

// public int get_Width() [instance] :98
int Image::Width()
{
    CheckDims();
    return _dims.X;
}

// public static Fuse.Scripting.Object Converter(Fuse.Scripting.Context context, Fuse.ImageTools.Image result) [static] :185
::g::Fuse::Scripting::Object* Image::Converter(::g::Fuse::Scripting::Context* context, Image* result)
{
    return uPtr(result)->ToObject(context);
}

// public static Fuse.ImageTools.Image FromObject(Fuse.Scripting.Object o) [static] :152
Image* Image::FromObject(::g::Fuse::Scripting::Object* o)
{
    uString* path = uCast<uString*>(uPtr(o)->Item(::STRINGS[0/*"path"*/]), ::TYPES[3/*string*/]);
    Image* outValue = Image::New2(path);
    return outValue;
}

// public static Fuse.ImageTools.Image FromObject(object o) [static] :147
Image* Image::FromObject1(uObject* o)
{
    return Image::FromObject(uCast< ::g::Fuse::Scripting::Object*>(o, ::TYPES[4/*Fuse.Scripting.Object*/]));
}

// public Image New(string path) [static] :140
Image* Image::New2(uString* path)
{
    Image* obj3 = (Image*)uNew(Image_typeof());
    obj3->ctor_1(path);
    return obj3;
}
// }

// /Users/a/Library/Application Support/Fusetools/Packages/Fuse.ImageTools/1.2.1/$.uno
// -----------------------------------------------------------------------------------

// private sealed extern class ImageTools.ImageFromBase64Command :588
// {
static void ImageTools__ImageFromBase64Command_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Permissions::PlatformPermission_typeof()->Array();
    type->SetFields(1,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::ImageTools::ImageTools__ImageFromBase64Command, _base64Image), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Fuse::ImageTools::ImageTools__ImageFromBase64Command, _reject), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Fuse::ImageTools::ImageTools__ImageFromBase64Command, _resolve), 0);
}

::g::Fuse::ImageTools::PCommand_type* ImageTools__ImageFromBase64Command_typeof()
{
    static uSStrong< ::g::Fuse::ImageTools::PCommand_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::ImageTools::PCommand_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(ImageTools__ImageFromBase64Command);
    options.TypeSize = sizeof(::g::Fuse::ImageTools::PCommand_type);
    type = (::g::Fuse::ImageTools::PCommand_type*)uClassType::New("Fuse.ImageTools.ImageTools.ImageFromBase64Command", options);
    type->fp_build_ = ImageTools__ImageFromBase64Command_build;
    type->fp_OnGranted = (void(*)(::g::Fuse::ImageTools::PCommand*))ImageTools__ImageFromBase64Command__OnGranted_fn;
    type->fp_OnRejected = (void(*)(::g::Fuse::ImageTools::PCommand*, ::g::Uno::Exception*))ImageTools__ImageFromBase64Command__OnRejected_fn;
    return type;
}

// public ImageFromBase64Command(string base64Image, Uno.Action<string> Resolve, Uno.Action<string> Reject) :592
void ImageTools__ImageFromBase64Command__ctor_1_fn(ImageTools__ImageFromBase64Command* __this, uString* base64Image, uDelegate* Resolve, uDelegate* Reject)
{
    __this->ctor_1(base64Image, Resolve, Reject);
}

// public ImageFromBase64Command New(string base64Image, Uno.Action<string> Resolve, Uno.Action<string> Reject) :592
void ImageTools__ImageFromBase64Command__New1_fn(uString* base64Image, uDelegate* Resolve, uDelegate* Reject, ImageTools__ImageFromBase64Command** __retval)
{
    *__retval = ImageTools__ImageFromBase64Command::New1(base64Image, Resolve, Reject);
}

// private override sealed void OnGranted() :598
void ImageTools__ImageFromBase64Command__OnGranted_fn(ImageTools__ImageFromBase64Command* __this)
{
    ::g::Fuse::ImageTools::AndroidImageUtils::GetImageFromBase64(__this->_base64Image, __this->_resolve, __this->_reject);
}

// private override sealed void OnRejected(Uno.Exception e) :603
void ImageTools__ImageFromBase64Command__OnRejected_fn(ImageTools__ImageFromBase64Command* __this, ::g::Uno::Exception* e)
{
    uPtr(__this->_reject)->InvokeVoid(uPtr(e)->Message());
}

// public ImageFromBase64Command(string base64Image, Uno.Action<string> Resolve, Uno.Action<string> Reject) [instance] :592
void ImageTools__ImageFromBase64Command::ctor_1(uString* base64Image, uDelegate* Resolve, uDelegate* Reject)
{
    uArray* array2;
    ctor_((array2 = uArray::New(::TYPES[1/*Uno.Permissions.PlatformPermission[]*/], 1), uPtr(array2)->Item< ::g::Uno::Permissions::PlatformPermission>(0) = ::g::Uno::Permissions::Permissions__Android::WRITE_EXTERNAL_STORAGE(), array2));
    _base64Image = base64Image;
    _resolve = Resolve;
    _reject = Reject;
}

// public ImageFromBase64Command New(string base64Image, Uno.Action<string> Resolve, Uno.Action<string> Reject) [static] :592
ImageTools__ImageFromBase64Command* ImageTools__ImageFromBase64Command::New1(uString* base64Image, uDelegate* Resolve, uDelegate* Reject)
{
    ImageTools__ImageFromBase64Command* obj1 = (ImageTools__ImageFromBase64Command*)uNew(ImageTools__ImageFromBase64Command_typeof());
    obj1->ctor_1(base64Image, Resolve, Reject);
    return obj1;
}
// }

// /Users/a/Library/Application Support/Fusetools/Packages/Fuse.ImageTools/1.2.1/$.uno
// -----------------------------------------------------------------------------------

// internal sealed class ImagePromiseCallback :637
// {
static void ImagePromiseCallback_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), NULL), offsetof(::g::Fuse::ImageTools::ImagePromiseCallback, _p), 0);
}

uType* ImagePromiseCallback_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ImagePromiseCallback);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.ImageTools.ImagePromiseCallback", options);
    type->fp_build_ = ImagePromiseCallback_build;
    return type;
}

// public ImagePromiseCallback(Uno.Threading.Promise<Fuse.ImageTools.Image> p) :640
void ImagePromiseCallback__ctor__fn(ImagePromiseCallback* __this, ::g::Uno::Threading::Promise* p)
{
    __this->ctor_(p);
}

// public ImagePromiseCallback New(Uno.Threading.Promise<Fuse.ImageTools.Image> p) :640
void ImagePromiseCallback__New1_fn(::g::Uno::Threading::Promise* p, ImagePromiseCallback** __retval)
{
    *__retval = ImagePromiseCallback::New1(p);
}

// public void Reject(string reason) :650
void ImagePromiseCallback__Reject_fn(ImagePromiseCallback* __this, uString* reason)
{
    __this->Reject(reason);
}

// public void Resolve(string path) :645
void ImagePromiseCallback__Resolve_fn(ImagePromiseCallback* __this, uString* path)
{
    __this->Resolve(path);
}

// public ImagePromiseCallback(Uno.Threading.Promise<Fuse.ImageTools.Image> p) [instance] :640
void ImagePromiseCallback::ctor_(::g::Uno::Threading::Promise* p)
{
    _p = p;
}

// public void Reject(string reason) [instance] :650
void ImagePromiseCallback::Reject(uString* reason)
{
    uPtr(_p)->Reject(::g::Uno::Exception::New2(reason));
}

// public void Resolve(string path) [instance] :645
void ImagePromiseCallback::Resolve(uString* path)
{
    ::g::Uno::Threading::Promise__Resolve_fn(uPtr(_p), ::g::Fuse::ImageTools::Image::New2(path));
}

// public ImagePromiseCallback New(Uno.Threading.Promise<Fuse.ImageTools.Image> p) [static] :640
ImagePromiseCallback* ImagePromiseCallback::New1(::g::Uno::Threading::Promise* p)
{
    ImagePromiseCallback* obj1 = (ImagePromiseCallback*)uNew(ImagePromiseCallback_typeof());
    obj1->ctor_(p);
    return obj1;
}
// }

// /Users/a/Library/Application Support/Fusetools/Packages/Fuse.ImageTools/1.2.1/$.uno
// -----------------------------------------------------------------------------------

// public sealed class ImageTools :243
// {
static void ImageTools_build(uType* type)
{
    ::STRINGS[5] = uString::Const("FuseJS/ImageTools");
    ::STRINGS[6] = uString::Const("resize");
    ::STRINGS[7] = uString::Const("crop");
    ::STRINGS[8] = uString::Const("getImageFromBase64");
    ::STRINGS[9] = uString::Const("getBase64FromImage");
    ::STRINGS[10] = uString::Const("getImageFromBuffer");
    ::STRINGS[11] = uString::Const("getBufferFromImage");
    ::STRINGS[12] = uString::Const("IGNORE_ASPECT");
    ::STRINGS[13] = uString::Const("KEEP_ASPECT");
    ::STRINGS[14] = uString::Const("SCALE_AND_CROP");
    ::STRINGS[15] = uString::Const("base64FromImage needs a Image argument");
    ::STRINGS[16] = uString::Const("Invalid image reference");
    ::STRINGS[17] = uString::Const("Invalid arguments");
    ::STRINGS[18] = uString::Const("crop takes 2 arguments: An Image and an options object");
    ::STRINGS[19] = uString::Const("x");
    ::STRINGS[20] = uString::Const("y");
    ::STRINGS[2] = uString::Const("width");
    ::STRINGS[21] = uString::Const("performInPlace");
    ::STRINGS[22] = uString::Const("Width and height must be larger than 0");
    ::STRINGS[23] = uString::Const("imageFromBase64 needs a base64 string argument");
    ::STRINGS[24] = uString::Const("getImageFromBuffer requires an arraybuffer argument");
    ::STRINGS[25] = uString::Const("resize takes 2 arguments: An Image and an Object of options");
    ::STRINGS[26] = uString::Const("desiredWidth");
    ::STRINGS[27] = uString::Const("desiredWidth must be defined");
    ::STRINGS[28] = uString::Const("desiredHeight");
    ::STRINGS[29] = uString::Const("mode");
    ::TYPES[6] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), NULL);
    ::TYPES[8] = ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[9] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[10] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[11] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::Byte_typeof()->Array(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[12] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::Byte_typeof()->Array(), NULL);
    ::TYPES[13] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(uObject_typeof(), ::g::Uno::Int_typeof(), NULL);
    ::TYPES[14] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::Byte_typeof()->Array(), NULL);
    ::TYPES[15] = ::g::Uno::Exception_typeof();
    ::TYPES[16] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), NULL);
    ::TYPES[17] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[18] = ::g::Fuse::Scripting::JSObjectUtils_typeof()->MakeMethod(0/*ValueOrDefault<int>*/, ::g::Uno::Int_typeof(), NULL);
    ::TYPES[19] = ::g::Fuse::Scripting::JSObjectUtils_typeof()->MakeMethod(0/*ValueOrDefault<bool>*/, ::g::Uno::Bool_typeof(), NULL);
    ::TYPES[20] = ::g::Fuse::Scripting::JSObjectUtils_typeof()->MakeMethod(1/*ValueOrDefault<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[21] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[22] = ::g::Uno::SByte_typeof()->Array();
    ::TYPES[23] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[24] = ::g::Fuse::ImageTools::PromiseCallback_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&::g::Fuse::ImageTools::ImageTools::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* ImageTools_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ImageTools);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.ImageTools.ImageTools", options);
    type->fp_build_ = ImageTools_build;
    type->fp_ctor_ = (void*)ImageTools__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public ImageTools() :248
void ImageTools__ctor_2_fn(ImageTools* __this)
{
    __this->ctor_2();
}

// private Uno.Threading.Future<string> Base64FromImageInterface(object[] args) :511
void ImageTools__Base64FromImageInterface_fn(ImageTools* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Base64FromImageInterface(args);
}

// private Uno.Threading.Future<byte[]> BufferFromImageInterface(object[] args) :343
void ImageTools__BufferFromImageInterface_fn(ImageTools* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->BufferFromImageInterface(args);
}

// public static Uno.Threading.Future<Fuse.ImageTools.Image> Crop(Fuse.ImageTools.Image img, int width, int height, int x, int y, [bool inPlace]) :539
void ImageTools__Crop_fn(::g::Fuse::ImageTools::Image* img, int* width, int* height, int* x, int* y, bool* inPlace, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = ImageTools::Crop(img, *width, *height, *x, *y, *inPlace);
}

// private Uno.Threading.Future<Fuse.ImageTools.Image> CropImageInterface(object[] args) :445
void ImageTools__CropImageInterface_fn(ImageTools* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->CropImageInterface(args);
}

// public static Uno.Threading.Future<Fuse.ImageTools.Image> ImageFromBase64(string b64) :609
void ImageTools__ImageFromBase64_fn(uString* b64, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = ImageTools::ImageFromBase64(b64);
}

// private Uno.Threading.Future<Fuse.ImageTools.Image> ImageFromBase64Interface(object[] args) :489
void ImageTools__ImageFromBase64Interface_fn(ImageTools* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ImageFromBase64Interface(args);
}

// private Uno.Threading.Future<Fuse.ImageTools.Image> ImageFromBufferInterface(object[] args) :296
void ImageTools__ImageFromBufferInterface_fn(ImageTools* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ImageFromBufferInterface(args);
}

// public static Fuse.ImageTools.Image ImageFromByteArray(byte[] bytes) :263
void ImageTools__ImageFromByteArray_fn(uArray* bytes, ::g::Fuse::ImageTools::Image** __retval)
{
    *__retval = ImageTools::ImageFromByteArray(bytes);
}

// public static Uno.Threading.Future<string> ImageToBase64(Fuse.ImageTools.Image img) :573
void ImageTools__ImageToBase64_fn(::g::Fuse::ImageTools::Image* img, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = ImageTools::ImageToBase64(img);
}

// public ImageTools New() :248
void ImageTools__New2_fn(ImageTools** __retval)
{
    *__retval = ImageTools::New2();
}

// public static Uno.Threading.Future<Fuse.ImageTools.Image> Resize(Fuse.ImageTools.Image img, int desiredWidth, int desiredHeight, Fuse.ImageTools.ResizeMode mode, [bool inPlace]) :520
void ImageTools__Resize_fn(::g::Fuse::ImageTools::Image* img, int* desiredWidth, int* desiredHeight, int* mode, bool* inPlace, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = ImageTools::Resize(img, *desiredWidth, *desiredHeight, *mode, *inPlace);
}

// private Uno.Threading.Future<Fuse.ImageTools.Image> ResizeImageInterface(object[] args) :399
void ImageTools__ResizeImageInterface_fn(ImageTools* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ResizeImageInterface(args);
}

uSStrong<ImageTools*> ImageTools::_instance_;

// public ImageTools() [instance] :248
void ImageTools::ctor_2()
{
    ::g::Fuse::Scripting::NativeProperty* ret2;
    ::g::Fuse::Scripting::NativeProperty* ret3;
    ::g::Fuse::Scripting::NativeProperty* ret4;
    ctor_1();

    if (ImageTools::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(ImageTools::_instance_ = this, ::STRINGS[5/*"FuseJS/Imag...*/]);
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[6/*Fuse.Scripting.NativePromise<Fuse.ImageTools.Image, Fuse.Scripting.Object>*/], ::STRINGS[6/*"resize"*/], uDelegate::New(::TYPES[7/*Fuse.Scripting.FutureFactory<Fuse.ImageTools.Image>*/], (void*)ImageTools__ResizeImageInterface_fn, this), uDelegate::New(::TYPES[8/*Fuse.Scripting.ResultConverter<Fuse.ImageTools.Image, Fuse.Scripting.Object>*/], (void*)::g::Fuse::ImageTools::Image__Converter_fn)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[6/*Fuse.Scripting.NativePromise<Fuse.ImageTools.Image, Fuse.Scripting.Object>*/], ::STRINGS[7/*"crop"*/], uDelegate::New(::TYPES[7/*Fuse.Scripting.FutureFactory<Fuse.ImageTools.Image>*/], (void*)ImageTools__CropImageInterface_fn, this), uDelegate::New(::TYPES[8/*Fuse.Scripting.ResultConverter<Fuse.ImageTools.Image, Fuse.Scripting.Object>*/], (void*)::g::Fuse::ImageTools::Image__Converter_fn)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[6/*Fuse.Scripting.NativePromise<Fuse.ImageTools.Image, Fuse.Scripting.Object>*/], ::STRINGS[8/*"getImageFro...*/], uDelegate::New(::TYPES[7/*Fuse.Scripting.FutureFactory<Fuse.ImageTools.Image>*/], (void*)ImageTools__ImageFromBase64Interface_fn, this), uDelegate::New(::TYPES[8/*Fuse.Scripting.ResultConverter<Fuse.ImageTools.Image, Fuse.Scripting.Object>*/], (void*)::g::Fuse::ImageTools::Image__Converter_fn)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[9/*Fuse.Scripting.NativePromise<string, Fuse.Scripting.Object>*/], ::STRINGS[9/*"getBase64Fr...*/], uDelegate::New(::TYPES[10/*Fuse.Scripting.FutureFactory<string>*/], (void*)ImageTools__Base64FromImageInterface_fn, this), NULL));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[6/*Fuse.Scripting.NativePromise<Fuse.ImageTools.Image, Fuse.Scripting.Object>*/], ::STRINGS[10/*"getImageFro...*/], uDelegate::New(::TYPES[7/*Fuse.Scripting.FutureFactory<Fuse.ImageTools.Image>*/], (void*)ImageTools__ImageFromBufferInterface_fn, this), uDelegate::New(::TYPES[8/*Fuse.Scripting.ResultConverter<Fuse.ImageTools.Image, Fuse.Scripting.Object>*/], (void*)::g::Fuse::ImageTools::Image__Converter_fn)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[11/*Fuse.Scripting.NativePromise<byte[], Fuse.Scripting.Object>*/], ::STRINGS[11/*"getBufferFr...*/], uDelegate::New(::TYPES[12/*Fuse.Scripting.FutureFactory<byte[]>*/], (void*)ImageTools__BufferFromImageInterface_fn, this), NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[13/*Fuse.Scripting.NativeProperty<object, int>*/], ::STRINGS[12/*"IGNORE_ASPECT"*/], uCRef<int>(0), &ret2), ret2));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[13/*Fuse.Scripting.NativeProperty<object, int>*/], ::STRINGS[13/*"KEEP_ASPECT"*/], uCRef<int>(1), &ret3), ret3));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[13/*Fuse.Scripting.NativeProperty<object, int>*/], ::STRINGS[14/*"SCALE_AND_C...*/], uCRef<int>(2), &ret4), ret4));
}

// private Uno.Threading.Future<string> Base64FromImageInterface(object[] args) [instance] :511
::g::Uno::Threading::Future1* ImageTools::Base64FromImageInterface(uArray* args)
{
    if (uPtr(args)->Length() != 1)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[15/*"base64FromI...*/]));

    ::g::Fuse::ImageTools::Image* image = ::g::Fuse::ImageTools::Image::FromObject1(uPtr(args)->Strong<uObject*>(0));
    return ImageTools::ImageToBase64(image);
}

// private Uno.Threading.Future<byte[]> BufferFromImageInterface(object[] args) [instance] :343
::g::Uno::Threading::Future1* ImageTools::BufferFromImageInterface(uArray* args)
{
    ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[14/*Uno.Threading.Promise<byte[]>*/]);

    if (uPtr(args)->Length() == 1)
    {
        ::g::Fuse::ImageTools::Image* img = ::g::Fuse::ImageTools::Image::FromObject1(uPtr(args)->Strong<uObject*>(0));

        if (img != NULL)
        {
            try
            {
                uArray* bytes = ::g::Uno::IO::File::ReadAllBytes(uPtr(img)->Path());
                ::g::Uno::Threading::Promise__Resolve_fn(uPtr(p), bytes);
            }
            catch (const uThrowable& __t)
            {
                ::g::Uno::Exception* e = __t.Exception;
                uPtr(p)->Reject(e);
            }
        }
        else
            uPtr(p)->Reject(::g::Uno::Exception::New2(::STRINGS[16/*"Invalid ima...*/]));
    }
    else
        uPtr(p)->Reject(::g::Uno::Exception::New2(::STRINGS[17/*"Invalid arg...*/]));

    return p;
}

// private Uno.Threading.Future<Fuse.ImageTools.Image> CropImageInterface(object[] args) [instance] :445
::g::Uno::Threading::Future1* ImageTools::CropImageInterface(uArray* args)
{
    int ret5;
    int ret6;
    int ret7;
    int ret8;
    bool ret9;

    if (uPtr(args)->Length() != 2)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[18/*"crop takes ...*/]));

    ::g::Fuse::ImageTools::Image* image = ::g::Fuse::ImageTools::Image::FromObject1(uPtr(args)->Strong<uObject*>(0));
    ::g::Fuse::Scripting::Object* opts = uAs< ::g::Fuse::Scripting::Object*>(args->Strong<uObject*>(1), ::TYPES[4/*Fuse.Scripting.Object*/]);
    int width = 0;
    int height = 0;
    int x = 0;
    int y = 0;
    bool inPlace = true;

    if (opts != NULL)
    {
        x = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault_fn(::TYPES[18/*Fuse.Scripting.JSObjectUtils.ValueOrDefault<int>*/], opts, ::STRINGS[19/*"x"*/], uCRef<int>(0), &ret5), ret5);
        y = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault_fn(::TYPES[18/*Fuse.Scripting.JSObjectUtils.ValueOrDefault<int>*/], opts, ::STRINGS[20/*"y"*/], uCRef<int>(0), &ret6), ret6);
        width = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault_fn(::TYPES[18/*Fuse.Scripting.JSObjectUtils.ValueOrDefault<int>*/], opts, ::STRINGS[2/*"width"*/], uCRef<int>(0), &ret7), ret7);
        height = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault_fn(::TYPES[18/*Fuse.Scripting.JSObjectUtils.ValueOrDefault<int>*/], opts, ::STRINGS[2/*"width"*/], uCRef<int>(width), &ret8), ret8);
        inPlace = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault_fn(::TYPES[19/*Fuse.Scripting.JSObjectUtils.ValueOrDefault<bool>*/], opts, ::STRINGS[21/*"performInPl...*/], uCRef(true), &ret9), ret9);
    }

    if ((width == 0) || (height == 0))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[22/*"Width and h...*/]));

    return ImageTools::Crop(image, width, height, x, y, inPlace);
}

// private Uno.Threading.Future<Fuse.ImageTools.Image> ImageFromBase64Interface(object[] args) [instance] :489
::g::Uno::Threading::Future1* ImageTools::ImageFromBase64Interface(uArray* args)
{
    uString* ret10;

    if (uPtr(args)->Length() != 1)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[23/*"imageFromBa...*/]));

    uString* str = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault1_fn(::TYPES[20/*Fuse.Scripting.JSObjectUtils.ValueOrDefault<string>*/], args, uCRef<int>(0), NULL, &ret10), ret10);
    return ImageTools::ImageFromBase64(str);
}

// private Uno.Threading.Future<Fuse.ImageTools.Image> ImageFromBufferInterface(object[] args) [instance] :296
::g::Uno::Threading::Future1* ImageTools::ImageFromBufferInterface(uArray* args)
{
    ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[16/*Uno.Threading.Promise<Fuse.ImageTools.Image>*/]);
    ::g::Fuse::ImageTools::ImagePromiseCallback* cb = ::g::Fuse::ImageTools::ImagePromiseCallback::New1(p);

    if (uPtr(args)->Length() == 1)
    {
        uArray* bytes = uAs<uArray*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[21/*byte[]*/]);

        if (bytes != NULL)
        {
            uArray* sbytes = uArray::New(::TYPES[22/*sbyte[]*/], uPtr(bytes)->Length());

            for (int i = 0; i < bytes->Length(); i++)
                uPtr(sbytes)->Item<int8_t>(i) = (int8_t)uPtr(bytes)->Item<uint8_t>(i);

            ::g::Fuse::ImageTools::AndroidImageUtils::GetImageFromBuffer(sbytes, uDelegate::New(::TYPES[17/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::ImagePromiseCallback__Resolve_fn, uPtr(cb)), uDelegate::New(::TYPES[17/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::ImagePromiseCallback__Reject_fn, uPtr(cb)));
        }
        else
            uPtr(cb)->Reject(::STRINGS[24/*"getImageFro...*/]);
    }
    else
        uPtr(cb)->Reject(::STRINGS[24/*"getImageFro...*/]);

    return p;
}

// private Uno.Threading.Future<Fuse.ImageTools.Image> ResizeImageInterface(object[] args) [instance] :399
::g::Uno::Threading::Future1* ImageTools::ResizeImageInterface(uArray* args)
{
    int ret11;
    int ret12;
    int ret13;
    bool ret14;

    if (uPtr(args)->Length() != 2)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[25/*"resize take...*/]));

    ::g::Fuse::ImageTools::Image* image = ::g::Fuse::ImageTools::Image::FromObject1(uPtr(args)->Strong<uObject*>(0));
    ::g::Fuse::Scripting::Object* opts = uAs< ::g::Fuse::Scripting::Object*>(args->Strong<uObject*>(1), ::TYPES[4/*Fuse.Scripting.Object*/]);
    int w = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault_fn(::TYPES[18/*Fuse.Scripting.JSObjectUtils.ValueOrDefault<int>*/], opts, ::STRINGS[26/*"desiredWidth"*/], uCRef<int>(-1), &ret11), ret11);

    if (w == -1)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[27/*"desiredWidt...*/]));

    int h = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault_fn(::TYPES[18/*Fuse.Scripting.JSObjectUtils.ValueOrDefault<int>*/], opts, ::STRINGS[28/*"desiredHeight"*/], uCRef<int>(w), &ret12), ret12);
    int m = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault_fn(::TYPES[18/*Fuse.Scripting.JSObjectUtils.ValueOrDefault<int>*/], opts, ::STRINGS[29/*"mode"*/], uCRef<int>(3), &ret13), ret13);
    bool inPlace = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault_fn(::TYPES[19/*Fuse.Scripting.JSObjectUtils.ValueOrDefault<bool>*/], opts, ::STRINGS[21/*"performInPl...*/], uCRef(true), &ret14), ret14);
    return ImageTools::Resize(image, w, h, m, inPlace);
}

// public static Uno.Threading.Future<Fuse.ImageTools.Image> Crop(Fuse.ImageTools.Image img, int width, int height, int x, int y, [bool inPlace]) [static] :539
::g::Uno::Threading::Future1* ImageTools::Crop(::g::Fuse::ImageTools::Image* img, int width, int height, int x, int y, bool inPlace)
{
    ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[16/*Uno.Threading.Promise<Fuse.ImageTools.Image>*/]);
    ::g::Fuse::ImageTools::ImagePromiseCallback* closure = ::g::Fuse::ImageTools::ImagePromiseCallback::New1(p);
    ::g::Fuse::ImageTools::CropCommand::New1(uPtr(img)->Path(), x, y, width, height, uDelegate::New(::TYPES[17/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::ImagePromiseCallback__Resolve_fn, closure), uDelegate::New(::TYPES[17/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::ImagePromiseCallback__Reject_fn, closure), inPlace)->Execute();
    return p;
}

// public static Uno.Threading.Future<Fuse.ImageTools.Image> ImageFromBase64(string b64) [static] :609
::g::Uno::Threading::Future1* ImageTools::ImageFromBase64(uString* b64)
{
    ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[16/*Uno.Threading.Promise<Fuse.ImageTools.Image>*/]);
    ::g::Fuse::ImageTools::ImagePromiseCallback* closure = ::g::Fuse::ImageTools::ImagePromiseCallback::New1(p);
    ImageTools__ImageFromBase64Command::New1(b64, uDelegate::New(::TYPES[17/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::ImagePromiseCallback__Resolve_fn, closure), uDelegate::New(::TYPES[17/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::ImagePromiseCallback__Reject_fn, closure))->Execute();
    return p;
}

// public static Fuse.ImageTools.Image ImageFromByteArray(byte[] bytes) [static] :263
::g::Fuse::ImageTools::Image* ImageTools::ImageFromByteArray(uArray* bytes)
{
    uArray* sbytes = uArray::New(::TYPES[22/*sbyte[]*/], uPtr(bytes)->Length());

    for (int i = 0; i < bytes->Length(); i++)
        uPtr(sbytes)->Item<int8_t>(i) = (int8_t)uPtr(bytes)->Item<uint8_t>(i);

    return ::g::Fuse::ImageTools::Image::New2(::g::Fuse::ImageTools::AndroidImageUtils::GetImageFromBufferSync(sbytes));
}

// public static Uno.Threading.Future<string> ImageToBase64(Fuse.ImageTools.Image img) [static] :573
::g::Uno::Threading::Future1* ImageTools::ImageToBase64(::g::Fuse::ImageTools::Image* img)
{
    ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[23/*Uno.Threading.Promise<string>*/]);
    ::g::Fuse::ImageTools::PromiseCallback* closure = (::g::Fuse::ImageTools::PromiseCallback*)::g::Fuse::ImageTools::PromiseCallback::New1(::TYPES[24/*Fuse.ImageTools.PromiseCallback<string>*/], p);
    ImageTools__GetBase64Command::New1(uPtr(img)->Path(), uDelegate::New(::TYPES[17/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::PromiseCallback__Resolve_fn, closure), uDelegate::New(::TYPES[17/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::PromiseCallback__Reject_fn, closure))->Execute();
    return p;
}

// public ImageTools New() [static] :248
ImageTools* ImageTools::New2()
{
    ImageTools* obj1 = (ImageTools*)uNew(ImageTools_typeof());
    obj1->ctor_2();
    return obj1;
}

// public static Uno.Threading.Future<Fuse.ImageTools.Image> Resize(Fuse.ImageTools.Image img, int desiredWidth, int desiredHeight, Fuse.ImageTools.ResizeMode mode, [bool inPlace]) [static] :520
::g::Uno::Threading::Future1* ImageTools::Resize(::g::Fuse::ImageTools::Image* img, int desiredWidth, int desiredHeight, int mode, bool inPlace)
{
    ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[16/*Uno.Threading.Promise<Fuse.ImageTools.Image>*/]);
    ::g::Fuse::ImageTools::ImagePromiseCallback* closure = ::g::Fuse::ImageTools::ImagePromiseCallback::New1(p);
    ::g::Fuse::ImageTools::ResizeCommand::New1(uPtr(img)->Path(), desiredWidth, desiredHeight, mode, uDelegate::New(::TYPES[17/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::ImagePromiseCallback__Resolve_fn, uPtr(closure)), uDelegate::New(::TYPES[17/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::ImagePromiseCallback__Reject_fn, uPtr(closure)), inPlace)->Execute();
    return p;
}
// }

// /Users/a/Library/Application Support/Fusetools/Packages/Fuse.ImageTools/1.2.1/android/$.uno
// -------------------------------------------------------------------------------------------

// internal abstract extern class PCommand :134
// {
static void PCommand_build(uType* type)
{
    ::STRINGS[30] = uString::Const("Required permission(s) not granted.");
    ::TYPES[25] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Permissions::PlatformPermission_typeof()->Array(), NULL);
    ::TYPES[26] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Permissions::PlatformPermission_typeof()->Array(), offsetof(::g::Fuse::ImageTools::PCommand, _requiredPermissions), 0);
}

PCommand_type* PCommand_typeof()
{
    static uSStrong<PCommand_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(PCommand);
    options.TypeSize = sizeof(PCommand_type);
    type = (PCommand_type*)uClassType::New("Fuse.ImageTools.PCommand", options);
    type->fp_build_ = PCommand_build;
    return type;
}

// public PCommand(Uno.Permissions.PlatformPermission[] requiredPermissions) :138
void PCommand__ctor__fn(PCommand* __this, uArray* requiredPermissions)
{
    __this->ctor_(requiredPermissions);
}

// public void Execute() :143
void PCommand__Execute_fn(PCommand* __this)
{
    __this->Execute();
}

// private void OnPermissions(Uno.Permissions.PlatformPermission[] grantedPermissions) :155
void PCommand__OnPermissions_fn(PCommand* __this, uArray* grantedPermissions)
{
    __this->OnPermissions(grantedPermissions);
}

// public PCommand(Uno.Permissions.PlatformPermission[] requiredPermissions) [instance] :138
void PCommand::ctor_(uArray* requiredPermissions)
{
    _requiredPermissions = requiredPermissions;
}

// public void Execute() [instance] :143
void PCommand::Execute()
{
    uPtr(::g::Uno::Permissions::Permissions::Request1(_requiredPermissions))->Then1(uDelegate::New(::TYPES[25/*Uno.Action<Uno.Permissions.PlatformPermission[]>*/], (void*)PCommand__OnPermissions_fn, this), uDelegate::New(::TYPES[26/*Uno.Action<Uno.Exception>*/], this, offsetof(PCommand_type, fp_OnRejected)));
}

// private void OnPermissions(Uno.Permissions.PlatformPermission[] grantedPermissions) [instance] :155
void PCommand::OnPermissions(uArray* grantedPermissions)
{
    if (uPtr(grantedPermissions)->Length() != uPtr(_requiredPermissions)->Length())
        OnRejected(::g::Uno::Exception::New2(::STRINGS[30/*"Required pe...*/]));
    else
        OnGranted();
}
// }

// /Users/a/Library/Application Support/Fusetools/Packages/Fuse.ImageTools/1.2.1/$.uno
// -----------------------------------------------------------------------------------

// internal sealed class PromiseCallback<T> :675
// {
static void PromiseCallback_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Threading::Promise_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::ImageTools::PromiseCallback, _p), 0);
}

uType* PromiseCallback_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(PromiseCallback);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.ImageTools.PromiseCallback`1", options);
    type->fp_build_ = PromiseCallback_build;
    return type;
}

// public PromiseCallback(Uno.Threading.Promise<T> p) :678
void PromiseCallback__ctor__fn(PromiseCallback* __this, ::g::Uno::Threading::Promise* p)
{
    __this->ctor_(p);
}

// public PromiseCallback New(Uno.Threading.Promise<T> p) :678
void PromiseCallback__New1_fn(uType* __type, ::g::Uno::Threading::Promise* p, PromiseCallback** __retval)
{
    *__retval = PromiseCallback::New1(__type, p);
}

// public void Reject(string reason) :688
void PromiseCallback__Reject_fn(PromiseCallback* __this, uString* reason)
{
    __this->Reject(reason);
}

// public void Resolve(T v) :683
void PromiseCallback__Resolve_fn(PromiseCallback* __this, void* v)
{
    ::g::Uno::Threading::Promise__Resolve_fn(uPtr(__this->_p), v);
}

// public PromiseCallback(Uno.Threading.Promise<T> p) [instance] :678
void PromiseCallback::ctor_(::g::Uno::Threading::Promise* p)
{
    _p = p;
}

// public void Reject(string reason) [instance] :688
void PromiseCallback::Reject(uString* reason)
{
    uPtr(_p)->Reject(::g::Uno::Exception::New2(reason));
}

// public PromiseCallback New(Uno.Threading.Promise<T> p) [static] :678
PromiseCallback* PromiseCallback::New1(uType* __type, ::g::Uno::Threading::Promise* p)
{
    PromiseCallback* obj1 = (PromiseCallback*)uNew(__type);
    obj1->ctor_(p);
    return obj1;
}
// }

// /Users/a/Library/Application Support/Fusetools/Packages/Fuse.ImageTools/1.2.1/android/$.uno
// -------------------------------------------------------------------------------------------

// internal sealed extern class ResizeCommand :171
// {
static void ResizeCommand_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Permissions::PlatformPermission_typeof()->Array();
    type->SetFields(1,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::ImageTools::ResizeCommand, _desiredHeight), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::ImageTools::ResizeCommand, _desiredWidth), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::ImageTools::ResizeCommand, _inPlace), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::ImageTools::ResizeCommand, _mode), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::ImageTools::ResizeCommand, _path), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Fuse::ImageTools::ResizeCommand, _reject), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Fuse::ImageTools::ResizeCommand, _resolve), 0);
}

::g::Fuse::ImageTools::PCommand_type* ResizeCommand_typeof()
{
    static uSStrong< ::g::Fuse::ImageTools::PCommand_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::ImageTools::PCommand_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(ResizeCommand);
    options.TypeSize = sizeof(::g::Fuse::ImageTools::PCommand_type);
    type = (::g::Fuse::ImageTools::PCommand_type*)uClassType::New("Fuse.ImageTools.ResizeCommand", options);
    type->fp_build_ = ResizeCommand_build;
    type->fp_OnGranted = (void(*)(::g::Fuse::ImageTools::PCommand*))ResizeCommand__OnGranted_fn;
    type->fp_OnRejected = (void(*)(::g::Fuse::ImageTools::PCommand*, ::g::Uno::Exception*))ResizeCommand__OnRejected_fn;
    return type;
}

// public ResizeCommand(string path, int desiredWidth, int desiredHeight, int mode, Uno.Action<string> Resolve, Uno.Action<string> Reject, bool inPlace) :179
void ResizeCommand__ctor_1_fn(ResizeCommand* __this, uString* path, int* desiredWidth, int* desiredHeight, int* mode, uDelegate* Resolve, uDelegate* Reject, bool* inPlace)
{
    __this->ctor_1(path, *desiredWidth, *desiredHeight, *mode, Resolve, Reject, *inPlace);
}

// public ResizeCommand New(string path, int desiredWidth, int desiredHeight, int mode, Uno.Action<string> Resolve, Uno.Action<string> Reject, bool inPlace) :179
void ResizeCommand__New1_fn(uString* path, int* desiredWidth, int* desiredHeight, int* mode, uDelegate* Resolve, uDelegate* Reject, bool* inPlace, ResizeCommand** __retval)
{
    *__retval = ResizeCommand::New1(path, *desiredWidth, *desiredHeight, *mode, Resolve, Reject, *inPlace);
}

// private override sealed void OnGranted() :189
void ResizeCommand__OnGranted_fn(ResizeCommand* __this)
{
    ::g::Fuse::ImageTools::AndroidImageUtils::Resize(__this->_path, __this->_desiredWidth, __this->_desiredHeight, __this->_mode, __this->_resolve, __this->_reject, __this->_inPlace);
}

// private override sealed void OnRejected(Uno.Exception e) :194
void ResizeCommand__OnRejected_fn(ResizeCommand* __this, ::g::Uno::Exception* e)
{
    uPtr(__this->_reject)->InvokeVoid(uPtr(e)->Message());
}

// public ResizeCommand(string path, int desiredWidth, int desiredHeight, int mode, Uno.Action<string> Resolve, Uno.Action<string> Reject, bool inPlace) [instance] :179
void ResizeCommand::ctor_1(uString* path, int desiredWidth, int desiredHeight, int mode, uDelegate* Resolve, uDelegate* Reject, bool inPlace)
{
    uArray* array2;
    ctor_((array2 = uArray::New(::TYPES[1/*Uno.Permissions.PlatformPermission[]*/], 2), uPtr(array2)->Item< ::g::Uno::Permissions::PlatformPermission>(0) = ::g::Uno::Permissions::Permissions__Android::READ_EXTERNAL_STORAGE(), uPtr(array2)->Item< ::g::Uno::Permissions::PlatformPermission>(1) = ::g::Uno::Permissions::Permissions__Android::WRITE_EXTERNAL_STORAGE(), array2));
    _path = path;
    _desiredWidth = desiredWidth;
    _desiredHeight = desiredHeight;
    _mode = mode;
    _inPlace = inPlace;
    _resolve = Resolve;
    _reject = Reject;
}

// public ResizeCommand New(string path, int desiredWidth, int desiredHeight, int mode, Uno.Action<string> Resolve, Uno.Action<string> Reject, bool inPlace) [static] :179
ResizeCommand* ResizeCommand::New1(uString* path, int desiredWidth, int desiredHeight, int mode, uDelegate* Resolve, uDelegate* Reject, bool inPlace)
{
    ResizeCommand* obj1 = (ResizeCommand*)uNew(ResizeCommand_typeof());
    obj1->ctor_1(path, desiredWidth, desiredHeight, mode, Resolve, Reject, inPlace);
    return obj1;
}
// }

// /Users/a/Library/Application Support/Fusetools/Packages/Fuse.ImageTools/1.2.1/$.uno
// -----------------------------------------------------------------------------------

// public enum ResizeMode :204
uEnumType* ResizeMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.ImageTools.ResizeMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "IgnoreAspect", 0LL,
        "KeepAspect", 1LL,
        "ScaleAndCrop", 2LL);
    return type;
}

}}} // ::g::Fuse::ImageTools
