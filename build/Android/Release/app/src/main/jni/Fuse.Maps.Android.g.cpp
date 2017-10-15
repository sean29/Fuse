// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Fuse.Controls.MapMarker.h>
#include <Fuse.Controls.MapStyle.h>
#include <Fuse.Controls.MapView.h>
#include <Fuse.Controls.Native.-e502cdf1.h>
#include <Fuse.Maps.Android.For-68709a60.h>
#include <Fuse.Maps.Android.Map-ec887b29.h>
#include <Fuse.Maps.Android.MapView.h>
#include <Fuse.Maps.MarkerIconCache.h>
#include <Java.Object.h>
#include <jni.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Action-3.h>
#include <Uno.Bool.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.Obser-ca008b9a.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Permissions.Permi-d35d5681.h>
#include <Uno.Permissions.Permissions.h>
#include <Uno.Permissions.Platf-7d72d93e.h>
#include <Uno.String.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.UX.FileSource.h>
#include <Uno/JNIHelper.h>
static uType* TYPES[9];

namespace g{
namespace Fuse{
namespace Maps{
namespace Android{

// /Users/a/Library/Application Support/Fusetools/Packages/Fuse.Maps/1.2.1/android/$.uno
// -------------------------------------------------------------------------------------

// internal static extern class ForeignHelpers :12
// {
static void ForeignHelpers_build(uType* type)
{
}

uClassType* ForeignHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Maps.Android.ForeignHelpers", options);
    type->fp_build_ = ForeignHelpers_build;
    return type;
}

// internal static string AddMarker(Java.Object handle, double lat, double lng, string label, string iconPath, float iconAnchorX, float iconAnchorY, int uid) :133
void ForeignHelpers__AddMarker_fn(::g::Java::Object* handle, double* lat, double* lng, uString* label, uString* iconPath, float* iconAnchorX, float* iconAnchorY, int* uid, uString** __retval)
{
    *__retval = ForeignHelpers::AddMarker(handle, *lat, *lng, label, iconPath, *iconAnchorX, *iconAnchorY, *uid);
}

// internal static void Clear(Java.Object handle) :112
void ForeignHelpers__Clear_fn(::g::Java::Object* handle)
{
    ForeignHelpers::Clear(handle);
}

// internal static void Configure(Java.Object handle) :154
void ForeignHelpers__Configure_fn(::g::Java::Object* handle)
{
    ForeignHelpers::Configure(handle);
}

// internal static void ConfigureGestures(Java.Object handle, bool zoom, bool rotate, bool tilt, bool scroll) :56
void ForeignHelpers__ConfigureGestures_fn(::g::Java::Object* handle, bool* zoom, bool* rotate, bool* tilt, bool* scroll)
{
    ForeignHelpers::ConfigureGestures(handle, *zoom, *rotate, *tilt, *scroll);
}

// internal static void ConfigureUI(Java.Object handle, bool compass, bool myLocationButton) :49
void ForeignHelpers__ConfigureUI_fn(::g::Java::Object* handle, bool* compass, bool* myLocationButton)
{
    ForeignHelpers::ConfigureUI(handle, *compass, *myLocationButton);
}

// internal static Java.Object CreateMap() :15
void ForeignHelpers__CreateMap_fn(::g::Java::Object** __retval)
{
    *__retval = ForeignHelpers::CreateMap();
}

// internal static void Destroy(Java.Object handle) :147
void ForeignHelpers__Destroy_fn(::g::Java::Object* handle)
{
    ForeignHelpers::Destroy(handle);
}

// internal static float GetOrientation(Java.Object handle) :77
void ForeignHelpers__GetOrientation_fn(::g::Java::Object* handle, float* __retval)
{
    *__retval = ForeignHelpers::GetOrientation(handle);
}

// internal static double GetPositionLat(Java.Object handle) :35
void ForeignHelpers__GetPositionLat_fn(::g::Java::Object* handle, double* __retval)
{
    *__retval = ForeignHelpers::GetPositionLat(handle);
}

// internal static double GetPositionLong(Java.Object handle) :42
void ForeignHelpers__GetPositionLong_fn(::g::Java::Object* handle, double* __retval)
{
    *__retval = ForeignHelpers::GetPositionLong(handle);
}

// internal static float GetTilt(Java.Object handle) :63
void ForeignHelpers__GetTilt_fn(::g::Java::Object* handle, float* __retval)
{
    *__retval = ForeignHelpers::GetTilt(handle);
}

// internal static float GetZoom(Java.Object handle) :119
void ForeignHelpers__GetZoom_fn(::g::Java::Object* handle, float* __retval)
{
    *__retval = ForeignHelpers::GetZoom(handle);
}

// internal static void MoveCamera(Java.Object handle, double lat, double lng, float zoom, float tilt, float bearing, double duration) :21
void ForeignHelpers__MoveCamera_fn(::g::Java::Object* handle, double* lat, double* lng, float* zoom, float* tilt, float* bearing, double* duration)
{
    ForeignHelpers::MoveCamera(handle, *lat, *lng, *zoom, *tilt, *bearing, *duration);
}

// internal static void SetHybridStyle(Java.Object handle) :98
void ForeignHelpers__SetHybridStyle_fn(::g::Java::Object* handle)
{
    ForeignHelpers::SetHybridStyle(handle);
}

// internal static void SetMapEventHandlers(Java.Object handle, Uno.Action onMapReady, Uno.Action<double, double> handleLocationLongPress, Uno.Action<double, double> handleLocationTapped, Uno.Action onAnimationBegin, Uno.Action onAnimationEnd, Uno.Action<double, double> handleCameraChange, Uno.Action<int, string> handleMarkerPressed, Uno.Action<int, float, float> handleTouchEvent) :162
void ForeignHelpers__SetMapEventHandlers_fn(::g::Java::Object* handle, uDelegate* onMapReady, uDelegate* handleLocationLongPress, uDelegate* handleLocationTapped, uDelegate* onAnimationBegin, uDelegate* onAnimationEnd, uDelegate* handleCameraChange, uDelegate* handleMarkerPressed, uDelegate* handleTouchEvent)
{
    ForeignHelpers::SetMapEventHandlers(handle, onMapReady, handleLocationLongPress, handleLocationTapped, onAnimationBegin, onAnimationEnd, handleCameraChange, handleMarkerPressed, handleTouchEvent);
}

// internal static void SetMyLocationEnabled(Java.Object handle, bool b) :140
void ForeignHelpers__SetMyLocationEnabled_fn(::g::Java::Object* handle, bool* b)
{
    ForeignHelpers::SetMyLocationEnabled(handle, *b);
}

// public static void SetNormalStyle(Java.Object handle) :105
void ForeignHelpers__SetNormalStyle_fn(::g::Java::Object* handle)
{
    ForeignHelpers::SetNormalStyle(handle);
}

// internal static void SetSatelliteStyle(Java.Object handle) :91
void ForeignHelpers__SetSatelliteStyle_fn(::g::Java::Object* handle)
{
    ForeignHelpers::SetSatelliteStyle(handle);
}

// internal static string AddMarker(Java.Object handle, double lat, double lng, string label, string iconPath, float iconAnchorX, float iconAnchorY, int uid) [static] :133
uString* ForeignHelpers::AddMarker(::g::Java::Object* handle, double lat, double lng, uString* label, uString* iconPath, float iconAnchorX, float iconAnchorY, int uid)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddMarker384", "(Ljava/lang/Object;DDLjava/lang/String;Ljava/lang/String;FFI)Ljava/lang/String;");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        double _ulat=lat;
        jdouble _lat = (jdouble)_ulat;
        double _ulng=lng;
        jdouble _lng = (jdouble)_ulng;
        uString* _ulabel=label;
        jstring _label = JniHelper::UnoToJavaString(_ulabel);
        uString* _uiconPath=iconPath;
        jstring _iconPath = JniHelper::UnoToJavaString(_uiconPath);
        float _uiconAnchorX=iconAnchorX;
        jfloat _iconAnchorX = (jfloat)_uiconAnchorX;
        float _uiconAnchorY=iconAnchorY;
        jfloat _iconAnchorY = (jfloat)_uiconAnchorY;
        int _uuid=uid;
        jint _uid = (jint)_uuid;
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_handle,_lat,_lng,_label,_iconPath,_iconAnchorX,_iconAnchorY,_uid);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        if (_label!=NULL) { U_JNIVAR->DeleteLocalRef(_label); }
        if (_iconPath!=NULL) { U_JNIVAR->DeleteLocalRef(_iconPath); }
        
        
        
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// internal static void Clear(Java.Object handle) [static] :112
void ForeignHelpers::Clear(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Clear385", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// internal static void Configure(Java.Object handle) [static] :154
void ForeignHelpers::Configure(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Configure386", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// internal static void ConfigureGestures(Java.Object handle, bool zoom, bool rotate, bool tilt, bool scroll) [static] :56
void ForeignHelpers::ConfigureGestures(::g::Java::Object* handle, bool zoom, bool rotate, bool tilt, bool scroll)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ConfigureGestures387", "(Ljava/lang/Object;ZZZZ)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uzoom=zoom;
        jboolean _zoom = (jboolean)_uzoom;
        bool _urotate=rotate;
        jboolean _rotate = (jboolean)_urotate;
        bool _utilt=tilt;
        jboolean _tilt = (jboolean)_utilt;
        bool _uscroll=scroll;
        jboolean _scroll = (jboolean)_uscroll;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_zoom,_rotate,_tilt,_scroll);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// internal static void ConfigureUI(Java.Object handle, bool compass, bool myLocationButton) [static] :49
void ForeignHelpers::ConfigureUI(::g::Java::Object* handle, bool compass, bool myLocationButton)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ConfigureUI388", "(Ljava/lang/Object;ZZ)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _ucompass=compass;
        jboolean _compass = (jboolean)_ucompass;
        bool _umyLocationButton=myLocationButton;
        jboolean _myLocationButton = (jboolean)_umyLocationButton;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_compass,_myLocationButton);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// internal static Java.Object CreateMap() [static] :15
::g::Java::Object* ForeignHelpers::CreateMap()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateMap389", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// internal static void Destroy(Java.Object handle) [static] :147
void ForeignHelpers::Destroy(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Destroy390", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// internal static float GetOrientation(Java.Object handle) [static] :77
float ForeignHelpers::GetOrientation(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetOrientation391", "(Ljava/lang/Object;)F");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jfloat __jresult = U_JNIVAR->CallStaticFloatMethod(__cls,__mtd,_handle);
        float __result = (float)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// internal static double GetPositionLat(Java.Object handle) [static] :35
double ForeignHelpers::GetPositionLat(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetPositionLat392", "(Ljava/lang/Object;)D");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jdouble __jresult = U_JNIVAR->CallStaticDoubleMethod(__cls,__mtd,_handle);
        double __result = (double)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// internal static double GetPositionLong(Java.Object handle) [static] :42
double ForeignHelpers::GetPositionLong(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetPositionLong393", "(Ljava/lang/Object;)D");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jdouble __jresult = U_JNIVAR->CallStaticDoubleMethod(__cls,__mtd,_handle);
        double __result = (double)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// internal static float GetTilt(Java.Object handle) [static] :63
float ForeignHelpers::GetTilt(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetTilt394", "(Ljava/lang/Object;)F");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jfloat __jresult = U_JNIVAR->CallStaticFloatMethod(__cls,__mtd,_handle);
        float __result = (float)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// internal static float GetZoom(Java.Object handle) [static] :119
float ForeignHelpers::GetZoom(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetZoom395", "(Ljava/lang/Object;)F");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jfloat __jresult = U_JNIVAR->CallStaticFloatMethod(__cls,__mtd,_handle);
        float __result = (float)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// internal static void MoveCamera(Java.Object handle, double lat, double lng, float zoom, float tilt, float bearing, double duration) [static] :21
void ForeignHelpers::MoveCamera(::g::Java::Object* handle, double lat, double lng, float zoom, float tilt, float bearing, double duration)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "MoveCamera396", "(Ljava/lang/Object;DDFFFD)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        double _ulat=lat;
        jdouble _lat = (jdouble)_ulat;
        double _ulng=lng;
        jdouble _lng = (jdouble)_ulng;
        float _uzoom=zoom;
        jfloat _zoom = (jfloat)_uzoom;
        float _utilt=tilt;
        jfloat _tilt = (jfloat)_utilt;
        float _ubearing=bearing;
        jfloat _bearing = (jfloat)_ubearing;
        double _uduration=duration;
        jdouble _duration = (jdouble)_uduration;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_lat,_lng,_zoom,_tilt,_bearing,_duration);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// internal static void SetHybridStyle(Java.Object handle) [static] :98
void ForeignHelpers::SetHybridStyle(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetHybridStyle397", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// internal static void SetMapEventHandlers(Java.Object handle, Uno.Action onMapReady, Uno.Action<double, double> handleLocationLongPress, Uno.Action<double, double> handleLocationTapped, Uno.Action onAnimationBegin, Uno.Action onAnimationEnd, Uno.Action<double, double> handleCameraChange, Uno.Action<int, string> handleMarkerPressed, Uno.Action<int, float, float> handleTouchEvent) [static] :162
void ForeignHelpers::SetMapEventHandlers(::g::Java::Object* handle, uDelegate* onMapReady, uDelegate* handleLocationLongPress, uDelegate* handleLocationTapped, uDelegate* onAnimationBegin, uDelegate* onAnimationEnd, uDelegate* handleCameraChange, uDelegate* handleMarkerPressed, uDelegate* handleTouchEvent)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetMapEventHandlers398", "(Ljava/lang/Object;Lcom/foreign/Uno/Action;Lcom/foreign/Uno/Action_double_double;Lcom/foreign/Uno/Action_double_double;Lcom/foreign/Uno/Action;Lcom/foreign/Uno/Action;Lcom/foreign/Uno/Action_double_double;Lcom/foreign/Uno/Action_int_String;Lcom/foreign/Uno/Action_int_float_float;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uDelegate* _uonMapReady=onMapReady;
        jobject _onMapReady = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uonMapReady, "com.foreign.Uno.Action");
        uDelegate* _uhandleLocationLongPress=handleLocationLongPress;
        jobject _handleLocationLongPress = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uhandleLocationLongPress, "com.foreign.Uno.Action_double_double");
        uDelegate* _uhandleLocationTapped=handleLocationTapped;
        jobject _handleLocationTapped = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uhandleLocationTapped, "com.foreign.Uno.Action_double_double");
        uDelegate* _uonAnimationBegin=onAnimationBegin;
        jobject _onAnimationBegin = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uonAnimationBegin, "com.foreign.Uno.Action");
        uDelegate* _uonAnimationEnd=onAnimationEnd;
        jobject _onAnimationEnd = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uonAnimationEnd, "com.foreign.Uno.Action");
        uDelegate* _uhandleCameraChange=handleCameraChange;
        jobject _handleCameraChange = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uhandleCameraChange, "com.foreign.Uno.Action_double_double");
        uDelegate* _uhandleMarkerPressed=handleMarkerPressed;
        jobject _handleMarkerPressed = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uhandleMarkerPressed, "com.foreign.Uno.Action_int_String");
        uDelegate* _uhandleTouchEvent=handleTouchEvent;
        jobject _handleTouchEvent = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uhandleTouchEvent, "com.foreign.Uno.Action_int_float_float");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_onMapReady,_handleLocationLongPress,_handleLocationTapped,_onAnimationBegin,_onAnimationEnd,_handleCameraChange,_handleMarkerPressed,_handleTouchEvent);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_onMapReady!=NULL) { U_JNIVAR->DeleteLocalRef(_onMapReady); }
        if (_handleLocationLongPress!=NULL) { U_JNIVAR->DeleteLocalRef(_handleLocationLongPress); }
        if (_handleLocationTapped!=NULL) { U_JNIVAR->DeleteLocalRef(_handleLocationTapped); }
        if (_onAnimationBegin!=NULL) { U_JNIVAR->DeleteLocalRef(_onAnimationBegin); }
        if (_onAnimationEnd!=NULL) { U_JNIVAR->DeleteLocalRef(_onAnimationEnd); }
        if (_handleCameraChange!=NULL) { U_JNIVAR->DeleteLocalRef(_handleCameraChange); }
        if (_handleMarkerPressed!=NULL) { U_JNIVAR->DeleteLocalRef(_handleMarkerPressed); }
        if (_handleTouchEvent!=NULL) { U_JNIVAR->DeleteLocalRef(_handleTouchEvent); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// internal static void SetMyLocationEnabled(Java.Object handle, bool b) [static] :140
void ForeignHelpers::SetMyLocationEnabled(::g::Java::Object* handle, bool b)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetMyLocationEnabled399", "(Ljava/lang/Object;Z)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _ub=b;
        jboolean _b = (jboolean)_ub;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_b);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void SetNormalStyle(Java.Object handle) [static] :105
void ForeignHelpers::SetNormalStyle(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetNormalStyle400", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// internal static void SetSatelliteStyle(Java.Object handle) [static] :91
void ForeignHelpers::SetSatelliteStyle(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetSatelliteStyle403", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /Users/a/Library/Application Support/Fusetools/Packages/Fuse.Maps/1.2.1/android/$.uno
// -------------------------------------------------------------------------------------

// public sealed extern class MapView :235
// {
static void MapView_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[1] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Action3_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[5] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Controls::MapMarker_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Permissions::PlatformPermission_typeof()->Array();
    ::TYPES[7] = ::g::Uno::Action1_typeof()->MakeType(::TYPES[6/*Uno.Permissions.PlatformPermission[]*/], NULL);
    ::TYPES[8] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(MapView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(MapView_type, interface1),
        ::g::Fuse::Controls::IMapView_typeof(), offsetof(MapView_type, interface2));
    type->SetFields(5,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Maps::Android::MapView, _allowRotate), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Maps::Android::MapView, _allowScroll), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Maps::Android::MapView, _allowTilt), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Maps::Android::MapView, _allowZoom), 0,
        ::g::Fuse::Controls::MapStyle_typeof(), offsetof(::g::Fuse::Maps::Android::MapView, _mapStyleInternal), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Maps::Android::MapView, _mapView), 0,
        ::g::Fuse::Controls::MapView_typeof(), offsetof(::g::Fuse::Maps::Android::MapView, _mapViewHost), 0,
        ::g::Fuse::Maps::MarkerIconCache_typeof(), offsetof(::g::Fuse::Maps::Android::MapView, _markerGraphicsCache), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Maps::Android::MapView, _showCompass), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Maps::Android::MapView, _showLocation), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Maps::Android::MapView, _showLocationButton), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Maps::Android::MapView, _IsReady), 0,
        ::TYPES[0/*Uno.Action*/], offsetof(::g::Fuse::Maps::Android::MapView, _OnReady), 0);
}

MapView_type* MapView_typeof()
{
    static uSStrong<MapView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::LeafView_typeof();
    options.FieldCount = 18;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(MapView);
    options.TypeSize = sizeof(MapView_type);
    type = (MapView_type*)uClassType::New("Fuse.Maps.Android.MapView", options);
    type->fp_build_ = MapView_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))MapView__Dispose_fn;
    type->interface2.fp_MoveTo = (void(*)(uObject*, double*, double*, double*, double*, double*))MapView__MoveTo_fn;
    type->interface2.fp_UpdateMarkers = (void(*)(uObject*))MapView__UpdateMarkers_fn;
    type->interface2.fp_get_Style = (void(*)(uObject*, int*))MapView__get_Style_fn;
    type->interface2.fp_set_Style = (void(*)(uObject*, int*))MapView__set_Style_fn;
    type->interface2.fp_get_Latitude = (void(*)(uObject*, double*))MapView__get_Latitude_fn;
    type->interface2.fp_get_Longitude = (void(*)(uObject*, double*))MapView__get_Longitude_fn;
    type->interface2.fp_get_Bearing = (void(*)(uObject*, double*))MapView__get_Bearing_fn;
    type->interface2.fp_get_Tilt = (void(*)(uObject*, double*))MapView__get_Tilt_fn;
    type->interface2.fp_get_Zoom = (void(*)(uObject*, double*))MapView__get_Zoom_fn;
    type->interface2.fp_get_ShowMyLocation = (void(*)(uObject*, bool*))MapView__get_ShowMyLocation_fn;
    type->interface2.fp_set_ShowMyLocation = (void(*)(uObject*, bool*))MapView__set_ShowMyLocation_fn;
    type->interface2.fp_get_ShowMyLocationButton = (void(*)(uObject*, bool*))MapView__get_ShowMyLocationButton_fn;
    type->interface2.fp_set_ShowMyLocationButton = (void(*)(uObject*, bool*))MapView__set_ShowMyLocationButton_fn;
    type->interface2.fp_get_ShowCompass = (void(*)(uObject*, bool*))MapView__get_ShowCompass_fn;
    type->interface2.fp_set_ShowCompass = (void(*)(uObject*, bool*))MapView__set_ShowCompass_fn;
    type->interface2.fp_get_AllowZoom = (void(*)(uObject*, bool*))MapView__get_AllowZoom_fn;
    type->interface2.fp_set_AllowZoom = (void(*)(uObject*, bool*))MapView__set_AllowZoom_fn;
    type->interface2.fp_get_AllowTilt = (void(*)(uObject*, bool*))MapView__get_AllowTilt_fn;
    type->interface2.fp_set_AllowTilt = (void(*)(uObject*, bool*))MapView__set_AllowTilt_fn;
    type->interface2.fp_get_AllowRotate = (void(*)(uObject*, bool*))MapView__get_AllowRotate_fn;
    type->interface2.fp_set_AllowRotate = (void(*)(uObject*, bool*))MapView__set_AllowRotate_fn;
    type->interface2.fp_get_AllowScroll = (void(*)(uObject*, bool*))MapView__get_AllowScroll_fn;
    type->interface2.fp_set_AllowScroll = (void(*)(uObject*, bool*))MapView__set_AllowScroll_fn;
    type->interface2.fp_get_OnReady = (void(*)(uObject*, uDelegate**))MapView__get_OnReady_fn;
    type->interface2.fp_set_OnReady = (void(*)(uObject*, uDelegate*))MapView__set_OnReady_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))MapView__Dispose_fn;
    return type;
}

// private MapView(Fuse.Controls.MapView mapViewHost, Java.Object map) :251
void MapView__ctor_8_fn(MapView* __this, ::g::Fuse::Controls::MapView* mapViewHost, ::g::Java::Object* map)
{
    __this->ctor_8(mapViewHost, map);
}

// public bool get_AllowRotate() :535
void MapView__get_AllowRotate_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->AllowRotate();
}

// public void set_AllowRotate(bool value) :538
void MapView__set_AllowRotate_fn(MapView* __this, bool* value)
{
    __this->AllowRotate(*value);
}

// public bool get_AllowScroll() :546
void MapView__get_AllowScroll_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->AllowScroll();
}

// public void set_AllowScroll(bool value) :549
void MapView__set_AllowScroll_fn(MapView* __this, bool* value)
{
    __this->AllowScroll(*value);
}

// public bool get_AllowTilt() :524
void MapView__get_AllowTilt_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->AllowTilt();
}

// public void set_AllowTilt(bool value) :527
void MapView__set_AllowTilt_fn(MapView* __this, bool* value)
{
    __this->AllowTilt(*value);
}

// public bool get_AllowZoom() :513
void MapView__get_AllowZoom_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->AllowZoom();
}

// public void set_AllowZoom(bool value) :516
void MapView__set_AllowZoom_fn(MapView* __this, bool* value)
{
    __this->AllowZoom(*value);
}

// public double get_Bearing() :408
void MapView__get_Bearing_fn(MapView* __this, double* __retval)
{
    *__retval = __this->Bearing();
}

// private void ConfigGestures() :440
void MapView__ConfigGestures_fn(MapView* __this)
{
    __this->ConfigGestures();
}

// private void ConfigUI() :436
void MapView__ConfigUI_fn(MapView* __this)
{
    __this->ConfigUI();
}

// public static Fuse.Maps.Android.MapView Create(Fuse.Controls.MapView mapViewHost) :241
void MapView__Create_fn(::g::Fuse::Controls::MapView* mapViewHost, MapView** __retval)
{
    *__retval = MapView::Create(mapViewHost);
}

// public override sealed void Dispose() :272
void MapView__Dispose_fn(MapView* __this)
{
    uPtr(__this->SemanticControl())->MapViewClient(NULL);
    __this->IsReady(false);

    if (__this->_mapView != NULL)
        ::g::Fuse::Maps::Android::ForeignHelpers::Destroy(__this->_mapView);

    __this->_mapView = NULL;
    __this->_mapViewHost = NULL;
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// public void HandleLocationLongPress(double latitude, double longitude) :323
void MapView__HandleLocationLongPress_fn(MapView* __this, double* latitude, double* longitude)
{
    __this->HandleLocationLongPress(*latitude, *longitude);
}

// public void HandleLocationTapped(double latitude, double longitude) :318
void MapView__HandleLocationTapped_fn(MapView* __this, double* latitude, double* longitude)
{
    __this->HandleLocationTapped(*latitude, *longitude);
}

// public void HandleMarkerTapped(int uid, string title) :328
void MapView__HandleMarkerTapped_fn(MapView* __this, int* uid, uString* title)
{
    __this->HandleMarkerTapped(*uid, title);
}

// public generated bool get_IsReady() :237
void MapView__get_IsReady_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->IsReady();
}

// private generated void set_IsReady(bool value) :237
void MapView__set_IsReady_fn(MapView* __this, bool* value)
{
    __this->IsReady(*value);
}

// public double get_Latitude() :420
void MapView__get_Latitude_fn(MapView* __this, double* __retval)
{
    *__retval = __this->Latitude();
}

// public double get_Longitude() :426
void MapView__get_Longitude_fn(MapView* __this, double* __retval)
{
    *__retval = __this->Longitude();
}

// public Uno.Collections.ObservableList<Fuse.Controls.MapMarker> get_Markers() :378
void MapView__get_Markers_fn(MapView* __this, ::g::Uno::Collections::ObservableList** __retval)
{
    *__retval = __this->Markers();
}

// public void MoveTo(double latitude, double longitude, double zoomlevel, double tilt, double orientation) :431
void MapView__MoveTo_fn(MapView* __this, double* latitude, double* longitude, double* zoomlevel, double* tilt, double* orientation)
{
    __this->MoveTo(*latitude, *longitude, *zoomlevel, *tilt, *orientation);
}

// private MapView New(Fuse.Controls.MapView mapViewHost, Java.Object map) :251
void MapView__New4_fn(::g::Fuse::Controls::MapView* mapViewHost, ::g::Java::Object* map, MapView** __retval)
{
    *__retval = MapView::New4(mapViewHost, map);
}

// private void OnAnimationEnd() :300
void MapView__OnAnimationEnd_fn(MapView* __this)
{
    __this->OnAnimationEnd();
}

// private void OnAnimationStart() :294
void MapView__OnAnimationStart_fn(MapView* __this)
{
    __this->OnAnimationStart();
}

// internal void OnMapReady() :333
void MapView__OnMapReady_fn(MapView* __this)
{
    __this->OnMapReady();
}

// public generated Uno.Action get_OnReady() :238
void MapView__get_OnReady_fn(MapView* __this, uDelegate** __retval)
{
    *__retval = __this->OnReady();
}

// public generated void set_OnReady(Uno.Action value) :238
void MapView__set_OnReady_fn(MapView* __this, uDelegate* value)
{
    __this->OnReady(value);
}

// private void OnTouchEvent(int action, float x, float y) :305
void MapView__OnTouchEvent_fn(MapView* __this, int* action, float* x, float* y)
{
    __this->OnTouchEvent(*action, *x, *y);
}

// private Fuse.Controls.MapView get_SemanticControl() :285
void MapView__get_SemanticControl_fn(MapView* __this, ::g::Fuse::Controls::MapView** __retval)
{
    *__retval = __this->SemanticControl();
}

// private void SetLocationFromMap(double lat, double lng) :288
void MapView__SetLocationFromMap_fn(MapView* __this, double* lat, double* lng)
{
    __this->SetLocationFromMap(*lat, *lng);
}

// public bool get_ShowCompass() :503
void MapView__get_ShowCompass_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->ShowCompass();
}

// public void set_ShowCompass(bool value) :506
void MapView__set_ShowCompass_fn(MapView* __this, bool* value)
{
    __this->ShowCompass(*value);
}

// public bool get_ShowMyLocation() :465
void MapView__get_ShowMyLocation_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->ShowMyLocation();
}

// public void set_ShowMyLocation(bool value) :468
void MapView__set_ShowMyLocation_fn(MapView* __this, bool* value)
{
    __this->ShowMyLocation(*value);
}

// public bool get_ShowMyLocationButton() :492
void MapView__get_ShowMyLocationButton_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->ShowMyLocationButton();
}

// public void set_ShowMyLocationButton(bool value) :495
void MapView__set_ShowMyLocationButton_fn(MapView* __this, bool* value)
{
    __this->ShowMyLocationButton(*value);
}

// public Fuse.Controls.MapStyle get_Style() :348
void MapView__get_Style_fn(MapView* __this, int* __retval)
{
    *__retval = __this->Style();
}

// public void set_Style(Fuse.Controls.MapStyle value) :349
void MapView__set_Style_fn(MapView* __this, int* value)
{
    __this->Style(*value);
}

// public double get_Tilt() :414
void MapView__get_Tilt_fn(MapView* __this, double* __retval)
{
    *__retval = __this->Tilt();
}

// public void UpdateMarkers() :384
void MapView__UpdateMarkers_fn(MapView* __this)
{
    __this->UpdateMarkers();
}

// public double get_Zoom() :370
void MapView__get_Zoom_fn(MapView* __this, double* __retval)
{
    *__retval = __this->Zoom();
}

// private MapView(Fuse.Controls.MapView mapViewHost, Java.Object map) [instance] :251
void MapView::ctor_8(::g::Fuse::Controls::MapView* mapViewHost, ::g::Java::Object* map)
{
    ctor_6(map);
    IsReady(false);
    _mapView = map;
    _mapViewHost = mapViewHost;
    _markerGraphicsCache = ::g::Fuse::Maps::MarkerIconCache::New1(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)MapView__UpdateMarkers_fn, this));
    ::g::Fuse::Maps::Android::ForeignHelpers::SetMapEventHandlers(_mapView, uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)MapView__OnMapReady_fn, this), uDelegate::New(::TYPES[1/*Uno.Action<double, double>*/], (void*)MapView__HandleLocationLongPress_fn, this), uDelegate::New(::TYPES[1/*Uno.Action<double, double>*/], (void*)MapView__HandleLocationTapped_fn, this), uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)MapView__OnAnimationStart_fn, this), uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)MapView__OnAnimationEnd_fn, this), uDelegate::New(::TYPES[1/*Uno.Action<double, double>*/], (void*)MapView__SetLocationFromMap_fn, this), uDelegate::New(::TYPES[2/*Uno.Action<int, string>*/], (void*)MapView__HandleMarkerTapped_fn, this), uDelegate::New(::TYPES[3/*Uno.Action<int, float, float>*/], (void*)MapView__OnTouchEvent_fn, this));
    ::g::Fuse::Maps::Android::ForeignHelpers::Configure(_mapView);
    uPtr(SemanticControl())->MapViewClient((uObject*)this);
}

// public bool get_AllowRotate() [instance] :535
bool MapView::AllowRotate()
{
    return _allowRotate;
}

// public void set_AllowRotate(bool value) [instance] :538
void MapView::AllowRotate(bool value)
{
    _allowRotate = value;
    ConfigGestures();
}

// public bool get_AllowScroll() [instance] :546
bool MapView::AllowScroll()
{
    return _allowScroll;
}

// public void set_AllowScroll(bool value) [instance] :549
void MapView::AllowScroll(bool value)
{
    _allowScroll = value;
    ConfigGestures();
}

// public bool get_AllowTilt() [instance] :524
bool MapView::AllowTilt()
{
    return _allowTilt;
}

// public void set_AllowTilt(bool value) [instance] :527
void MapView::AllowTilt(bool value)
{
    _allowTilt = value;
    ConfigGestures();
}

// public bool get_AllowZoom() [instance] :513
bool MapView::AllowZoom()
{
    return _allowZoom;
}

// public void set_AllowZoom(bool value) [instance] :516
void MapView::AllowZoom(bool value)
{
    _allowZoom = value;
    ConfigGestures();
}

// public double get_Bearing() [instance] :408
double MapView::Bearing()
{
    return (double)::g::Fuse::Maps::Android::ForeignHelpers::GetOrientation(_mapView);
}

// private void ConfigGestures() [instance] :440
void MapView::ConfigGestures()
{
    if (IsReady())
        ::g::Fuse::Maps::Android::ForeignHelpers::ConfigureGestures(_mapView, _allowZoom, _allowRotate, _allowTilt, _allowScroll);
}

// private void ConfigUI() [instance] :436
void MapView::ConfigUI()
{
    if (IsReady())
        ::g::Fuse::Maps::Android::ForeignHelpers::ConfigureUI(_mapView, _showCompass, _showLocationButton);
}

// public void HandleLocationLongPress(double latitude, double longitude) [instance] :323
void MapView::HandleLocationLongPress(double latitude, double longitude)
{
    uPtr(SemanticControl())->HandleLocationLongPress(latitude, longitude);
}

// public void HandleLocationTapped(double latitude, double longitude) [instance] :318
void MapView::HandleLocationTapped(double latitude, double longitude)
{
    uPtr(SemanticControl())->HandleLocationTapped(latitude, longitude);
}

// public void HandleMarkerTapped(int uid, string title) [instance] :328
void MapView::HandleMarkerTapped(int uid, uString* title)
{
    uPtr(SemanticControl())->HandleMarkerTapped(uid, title);
}

// public generated bool get_IsReady() [instance] :237
bool MapView::IsReady()
{
    return _IsReady;
}

// private generated void set_IsReady(bool value) [instance] :237
void MapView::IsReady(bool value)
{
    _IsReady = value;
}

// public double get_Latitude() [instance] :420
double MapView::Latitude()
{
    return ::g::Fuse::Maps::Android::ForeignHelpers::GetPositionLat(_mapView);
}

// public double get_Longitude() [instance] :426
double MapView::Longitude()
{
    return ::g::Fuse::Maps::Android::ForeignHelpers::GetPositionLong(_mapView);
}

// public Uno.Collections.ObservableList<Fuse.Controls.MapMarker> get_Markers() [instance] :378
::g::Uno::Collections::ObservableList* MapView::Markers()
{
    return uPtr(SemanticControl())->Markers();
}

// public void MoveTo(double latitude, double longitude, double zoomlevel, double tilt, double orientation) [instance] :431
void MapView::MoveTo(double latitude, double longitude, double zoomlevel, double tilt, double orientation)
{
    ::g::Fuse::Maps::Android::ForeignHelpers::MoveCamera(_mapView, latitude, longitude, (float)zoomlevel, (float)tilt, (float)orientation, 0.0);
}

// private void OnAnimationEnd() [instance] :300
void MapView::OnAnimationEnd()
{
    uPtr(SemanticControl())->OnMapInteractionEnd();
}

// private void OnAnimationStart() [instance] :294
void MapView::OnAnimationStart()
{
    uPtr(SemanticControl())->OnMapInteractionStart();
}

// internal void OnMapReady() [instance] :333
void MapView::OnMapReady()
{
    IsReady(true);
    Style(_mapStyleInternal);
    ShowMyLocation(_showLocation);
    ConfigUI();
    ConfigGestures();
    UpdateMarkers();
    uPtr(OnReady())->InvokeVoid();
}

// public generated Uno.Action get_OnReady() [instance] :238
uDelegate* MapView::OnReady()
{
    return _OnReady;
}

// public generated void set_OnReady(Uno.Action value) [instance] :238
void MapView::OnReady(uDelegate* value)
{
    _OnReady = value;
}

// private void OnTouchEvent(int action, float x, float y) [instance] :305
void MapView::OnTouchEvent(int action, float x, float y)
{
    switch (action)
    {
        case 0:
        {
            uPtr(SemanticControl())->OnMapInteractionStart();
            break;
        }
        case 1:
        {
            uPtr(SemanticControl())->OnMapInteractionEnd();
            break;
        }
    }
}

// private Fuse.Controls.MapView get_SemanticControl() [instance] :285
::g::Fuse::Controls::MapView* MapView::SemanticControl()
{
    return _mapViewHost;
}

// private void SetLocationFromMap(double lat, double lng) [instance] :288
void MapView::SetLocationFromMap(double lat, double lng)
{
    if (uPtr(SemanticControl())->UserInteractingWithMap())
        uPtr(SemanticControl())->UpdateRestState();
}

// public bool get_ShowCompass() [instance] :503
bool MapView::ShowCompass()
{
    return _showCompass;
}

// public void set_ShowCompass(bool value) [instance] :506
void MapView::ShowCompass(bool value)
{
    _showCompass = value;
    ConfigUI();
}

// public bool get_ShowMyLocation() [instance] :465
bool MapView::ShowMyLocation()
{
    return _showLocation;
}

// public void set_ShowMyLocation(bool value) [instance] :468
void MapView::ShowMyLocation(bool value)
{
    uArray* array4;
    _showLocation = value;

    if (IsReady())
    {
        if (_showLocation)
        {
            array4 = uArray::New(::TYPES[6/*Uno.Permissions.PlatformPermission[]*/], 2);
            uPtr(array4)->Item< ::g::Uno::Permissions::PlatformPermission>(0) = ::g::Uno::Permissions::Permissions__Android::ACCESS_FINE_LOCATION();
            uPtr(array4)->Item< ::g::Uno::Permissions::PlatformPermission>(1) = ::g::Uno::Permissions::Permissions__Android::ACCESS_COARSE_LOCATION();
            uArray* permissions = array4;
            MapView__ShowLocationCommand* cmd = MapView__ShowLocationCommand::New1(_mapView, _showLocation);
            uPtr(::g::Uno::Permissions::Permissions::Request1(permissions))->Then1(uDelegate::New(::TYPES[7/*Uno.Action<Uno.Permissions.PlatformPermission[]>*/], (void*)MapView__ShowLocationCommand__Execute_fn, cmd), uDelegate::New(::TYPES[8/*Uno.Action<Uno.Exception>*/], (void*)MapView__ShowLocationCommand__Reject_fn, cmd));
        }
        else
            ::g::Fuse::Maps::Android::ForeignHelpers::SetMyLocationEnabled(_mapView, _showLocation);
    }
}

// public bool get_ShowMyLocationButton() [instance] :492
bool MapView::ShowMyLocationButton()
{
    return _showLocationButton;
}

// public void set_ShowMyLocationButton(bool value) [instance] :495
void MapView::ShowMyLocationButton(bool value)
{
    _showLocationButton = value;
    ConfigUI();
}

// public Fuse.Controls.MapStyle get_Style() [instance] :348
int MapView::Style()
{
    return _mapStyleInternal;
}

// public void set_Style(Fuse.Controls.MapStyle value) [instance] :349
void MapView::Style(int value)
{
    _mapStyleInternal = value;

    if (IsReady())

        switch (_mapStyleInternal)
        {
            case 1:
            {
                ::g::Fuse::Maps::Android::ForeignHelpers::SetSatelliteStyle(_mapView);
                break;
            }
            case 2:
            {
                ::g::Fuse::Maps::Android::ForeignHelpers::SetHybridStyle(_mapView);
                break;
            }
            default:
            {
                ::g::Fuse::Maps::Android::ForeignHelpers::SetNormalStyle(_mapView);
                break;
            }
        }
}

// public double get_Tilt() [instance] :414
double MapView::Tilt()
{
    return (double)::g::Fuse::Maps::Android::ForeignHelpers::GetTilt(_mapView);
}

// public void UpdateMarkers() [instance] :384
void MapView::UpdateMarkers()
{
    ::g::Fuse::Controls::MapMarker* ret3;

    if (!IsReady())
        return;

    ::g::Fuse::Maps::Android::ForeignHelpers::Clear(_mapView);

    for (uObject* enum1 = (uObject*)uPtr(Markers())->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[4/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Controls::MapMarker* m = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[5/*Uno.Collections.IEnumerator<Fuse.Controls.MapMarker>*/]), &ret3), ret3);
        ::g::Fuse::Maps::Android::ForeignHelpers::AddMarker(_mapView, uPtr(m)->Latitude(), uPtr(m)->Longitude(), uPtr(m)->Label(), uPtr(_markerGraphicsCache)->Get(uPtr(m)->IconFile()), uPtr(m)->IconAnchorX(), uPtr(m)->IconAnchorY(), uPtr(m)->uid);
    }
}

// public double get_Zoom() [instance] :370
double MapView::Zoom()
{
    if (!IsReady())
        return 0.0;

    return (double)::g::Fuse::Maps::Android::ForeignHelpers::GetZoom(_mapView);
}

// public static Fuse.Maps.Android.MapView Create(Fuse.Controls.MapView mapViewHost) [static] :241
MapView* MapView::Create(::g::Fuse::Controls::MapView* mapViewHost)
{
    ::g::Java::Object* m = ::g::Fuse::Maps::Android::ForeignHelpers::CreateMap();
    return MapView::New4(mapViewHost, m);
}

// private MapView New(Fuse.Controls.MapView mapViewHost, Java.Object map) [static] :251
MapView* MapView::New4(::g::Fuse::Controls::MapView* mapViewHost, ::g::Java::Object* map)
{
    MapView* obj2 = (MapView*)uNew(MapView_typeof());
    obj2->ctor_8(mapViewHost, map);
    return obj2;
}
// }

// /Users/a/Library/Application Support/Fusetools/Packages/Fuse.Maps/1.2.1/android/$.uno
// -------------------------------------------------------------------------------------

// private sealed class MapView.ShowLocationCommand :444
// {
static void MapView__ShowLocationCommand_build(uType* type)
{
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Maps::Android::MapView__ShowLocationCommand, _handle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Maps::Android::MapView__ShowLocationCommand, _value), 0);
}

uType* MapView__ShowLocationCommand_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(MapView__ShowLocationCommand);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Maps.Android.MapView.ShowLocationCommand", options);
    type->fp_build_ = MapView__ShowLocationCommand_build;
    return type;
}

// public ShowLocationCommand(Java.Object handle, bool newValue) :448
void MapView__ShowLocationCommand__ctor__fn(MapView__ShowLocationCommand* __this, ::g::Java::Object* handle, bool* newValue)
{
    __this->ctor_(handle, *newValue);
}

// public void Execute(Uno.Permissions.PlatformPermission[] grantedPermissions) :453
void MapView__ShowLocationCommand__Execute_fn(MapView__ShowLocationCommand* __this, uArray* grantedPermissions)
{
    __this->Execute(grantedPermissions);
}

// public ShowLocationCommand New(Java.Object handle, bool newValue) :448
void MapView__ShowLocationCommand__New1_fn(::g::Java::Object* handle, bool* newValue, MapView__ShowLocationCommand** __retval)
{
    *__retval = MapView__ShowLocationCommand::New1(handle, *newValue);
}

// public void Reject(Uno.Exception e) :457
void MapView__ShowLocationCommand__Reject_fn(MapView__ShowLocationCommand* __this, ::g::Uno::Exception* e)
{
    __this->Reject(e);
}

// public ShowLocationCommand(Java.Object handle, bool newValue) [instance] :448
void MapView__ShowLocationCommand::ctor_(::g::Java::Object* handle, bool newValue)
{
    _handle = handle;
    _value = newValue;
}

// public void Execute(Uno.Permissions.PlatformPermission[] grantedPermissions) [instance] :453
void MapView__ShowLocationCommand::Execute(uArray* grantedPermissions)
{
    ::g::Fuse::Maps::Android::ForeignHelpers::SetMyLocationEnabled(_handle, _value);
}

// public void Reject(Uno.Exception e) [instance] :457
void MapView__ShowLocationCommand::Reject(::g::Uno::Exception* e)
{
}

// public ShowLocationCommand New(Java.Object handle, bool newValue) [static] :448
MapView__ShowLocationCommand* MapView__ShowLocationCommand::New1(::g::Java::Object* handle, bool newValue)
{
    MapView__ShowLocationCommand* obj1 = (MapView__ShowLocationCommand*)uNew(MapView__ShowLocationCommand_typeof());
    obj1->ctor_(handle, newValue);
    return obj1;
}
// }

}}}} // ::g::Fuse::Maps::Android
