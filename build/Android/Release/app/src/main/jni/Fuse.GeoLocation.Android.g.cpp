// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Fuse.GeoLocation.Andr-47443a0.h>
#include <Fuse.GeoLocation.GeoC-86dbdb21.h>
#include <Fuse.GeoLocation.Location.h>
#include <Java.Object.h>
#include <jni.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Time.CalendarSystem.h>
#include <Uno.Time.Instant.h>
#include <Uno.Time.LocalDateTime.h>
#include <Uno/JNIHelper.h>

namespace g{
namespace Fuse{
namespace GeoLocation{
namespace Android{

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.GeoLocation\1.3.0-rc2\Android\LocationHelpers.uno
// --------------------------------------------------------------------------------------------------

// public sealed extern class LocationHelpers :7
// {
static void LocationHelpers_build(uType* type)
{
}

uType* LocationHelpers_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(LocationHelpers);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.GeoLocation.Android.LocationHelpers", options);
    type->fp_build_ = LocationHelpers_build;
    return type;
}

// public static Fuse.GeoLocation.Location ConvertLocation(Java.Object loc) :51
void LocationHelpers__ConvertLocation_fn(::g::Java::Object* loc, ::g::Fuse::GeoLocation::Location** __retval)
{
    *__retval = LocationHelpers::ConvertLocation(loc);
}

// public static float GetAccuracy(Java.Object handle) :45
void LocationHelpers__GetAccuracy_fn(::g::Java::Object* handle, float* __retval)
{
    *__retval = LocationHelpers::GetAccuracy(handle);
}

// public static double GetAltitude(Java.Object handle) :10
void LocationHelpers__GetAltitude_fn(::g::Java::Object* handle, double* __retval)
{
    *__retval = LocationHelpers::GetAltitude(handle);
}

// public static double GetLatitude(Java.Object handle) :17
void LocationHelpers__GetLatitude_fn(::g::Java::Object* handle, double* __retval)
{
    *__retval = LocationHelpers::GetLatitude(handle);
}

// public static double GetLongitude(Java.Object handle) :24
void LocationHelpers__GetLongitude_fn(::g::Java::Object* handle, double* __retval)
{
    *__retval = LocationHelpers::GetLongitude(handle);
}

// public static double GetSpeed(Java.Object handle) :31
void LocationHelpers__GetSpeed_fn(::g::Java::Object* handle, double* __retval)
{
    *__retval = LocationHelpers::GetSpeed(handle);
}

// public static int GetTime(Java.Object handle) :38
void LocationHelpers__GetTime_fn(::g::Java::Object* handle, int* __retval)
{
    *__retval = LocationHelpers::GetTime(handle);
}

// public static Fuse.GeoLocation.Location ConvertLocation(Java.Object loc) [static] :51
::g::Fuse::GeoLocation::Location* LocationHelpers::ConvertLocation(::g::Java::Object* loc)
{
    ::g::Uno::Time::Instant instant = ::g::Uno::Time::Instant__FromMillisecondsSinceUnixEpoch((int64_t)LocationHelpers::GetTime(loc));
    ::g::Uno::Time::LocalDateTime* dateTime = ::g::Uno::Time::LocalDateTime::New10(instant, ::g::Uno::Time::CalendarSystem::Iso());
    return ::g::Fuse::GeoLocation::Location::New1(::g::Fuse::GeoLocation::GeoCoordinates::New1(LocationHelpers::GetLatitude(loc), LocationHelpers::GetLongitude(loc)), (double)LocationHelpers::GetAccuracy(loc), LocationHelpers::GetAltitude(loc), LocationHelpers::GetSpeed(loc), dateTime);
}

// public static float GetAccuracy(Java.Object handle) [static] :45
float LocationHelpers::GetAccuracy(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetAccuracy408", "(Ljava/lang/Object;)F");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jfloat __jresult = U_JNIVAR->CallStaticFloatMethod(__cls,__mtd,_handle);
        float __result = (float)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static double GetAltitude(Java.Object handle) [static] :10
double LocationHelpers::GetAltitude(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetAltitude409", "(Ljava/lang/Object;)D");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jdouble __jresult = U_JNIVAR->CallStaticDoubleMethod(__cls,__mtd,_handle);
        double __result = (double)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static double GetLatitude(Java.Object handle) [static] :17
double LocationHelpers::GetLatitude(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLatitude410", "(Ljava/lang/Object;)D");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jdouble __jresult = U_JNIVAR->CallStaticDoubleMethod(__cls,__mtd,_handle);
        double __result = (double)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static double GetLongitude(Java.Object handle) [static] :24
double LocationHelpers::GetLongitude(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLongitude411", "(Ljava/lang/Object;)D");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jdouble __jresult = U_JNIVAR->CallStaticDoubleMethod(__cls,__mtd,_handle);
        double __result = (double)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static double GetSpeed(Java.Object handle) [static] :31
double LocationHelpers::GetSpeed(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetSpeed412", "(Ljava/lang/Object;)D");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jdouble __jresult = U_JNIVAR->CallStaticDoubleMethod(__cls,__mtd,_handle);
        double __result = (double)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static int GetTime(Java.Object handle) [static] :38
int LocationHelpers::GetTime(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetTime413", "(Ljava/lang/Object;)I");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_handle);
        int __result = (int)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}
// }

}}}} // ::g::Fuse::GeoLocation::Android
