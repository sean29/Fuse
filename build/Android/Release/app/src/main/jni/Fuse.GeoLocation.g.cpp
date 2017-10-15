// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Fuse.GeoLocation.Andr-47443a0.h>
#include <Fuse.GeoLocation.Andr-df66dc98.h>
#include <Fuse.GeoLocation.GeoC-86dbdb21.h>
#include <Fuse.GeoLocation.GeoL-8054bfb4.h>
#include <Fuse.GeoLocation.GeoLocation.h>
#include <Fuse.GeoLocation.ILoc-89084c59.h>
#include <Fuse.GeoLocation.Loca-6668a8b3.h>
#include <Fuse.GeoLocation.Loca-739f1605.h>
#include <Fuse.GeoLocation.Loca-d10f171.h>
#include <Fuse.GeoLocation.Loca-d6a23e3d.h>
#include <Fuse.GeoLocation.Loca-fad8f858.h>
#include <Fuse.GeoLocation.Location.h>
#include <Fuse.GeoLocation.Prom-b76d5a50.h>
#include <Fuse.Marshal.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.Native-c8feecef.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeEvent.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.Result-92713bce.h>
#include <Fuse.Scripting.ValueC-23d67df6.h>
#include <Fuse.UpdateManager.h>
#include <Java.Object.h>
#include <jni.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.DateTime.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Func-1.h>
#include <Uno.Func-3.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.Permissions.Permi-d35d5681.h>
#include <Uno.Permissions.Permissions.h>
#include <Uno.Permissions.Platf-7d72d93e.h>
#include <Uno.String.h>
#include <Uno.Threading.Future.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.FutureState.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.Time.Duration.h>
#include <Uno.Time.Instant.h>
#include <Uno.Time.LocalDateTime.h>
#include <Uno.Time.ZonedDateTime.h>
#include <Uno.UX.Resource.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[22];
static uType* TYPES[35];

namespace g{
namespace Fuse{
namespace GeoLocation{

// /Users/a/Library/Application Support/Fusetools/Packages/Fuse.GeoLocation/1.2.1/android/$.uno
// --------------------------------------------------------------------------------------------

// internal sealed extern class AndroidLocationProvider :14
// {
static void AndroidLocationProvider_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[2] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::String_typeof()->Array();
    ::TYPES[5] = ::g::Uno::Permissions::PlatformPermission_typeof()->Array();
    ::TYPES[6] = ::g::Uno::Action1_typeof()->MakeType(::TYPES[5/*Uno.Permissions.PlatformPermission[]*/], NULL);
    ::TYPES[7] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Action1_typeof()->MakeType(::g::Java::Object_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::GeoLocation::ILocationTracker_typeof(), offsetof(AndroidLocationProvider_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::GeoLocation::AndroidLocationProvider, _authorized), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::GeoLocation::AndroidLocationProvider, _locationManager), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), NULL), offsetof(::g::Fuse::GeoLocation::AndroidLocationProvider, _onLocationChanged), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::GeoLocation::AndroidLocationProvider, _onReady), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::GeoLocation::AndroidLocationProvider, _started), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::GeoLocation::AndroidLocationProvider, _updateListener), 0);
}

AndroidLocationProvider_type* AndroidLocationProvider_typeof()
{
    static uSStrong<AndroidLocationProvider_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(AndroidLocationProvider);
    options.TypeSize = sizeof(AndroidLocationProvider_type);
    type = (AndroidLocationProvider_type*)uClassType::New("Fuse.GeoLocation.AndroidLocationProvider", options);
    type->fp_build_ = AndroidLocationProvider_build;
    type->fp_ctor_ = (void*)AndroidLocationProvider__New1_fn;
    type->interface0.fp_GetLastKnownPosition = (void(*)(uObject*, ::g::Fuse::GeoLocation::Location**))AndroidLocationProvider__GetLastKnownPosition_fn;
    type->interface0.fp_GetLocation = (void(*)(uObject*, ::g::Uno::Threading::Promise*, double*))AndroidLocationProvider__GetLocation_fn;
    type->interface0.fp_StartListening = (void(*)(uObject*, uDelegate*, uDelegate*, int*, double*))AndroidLocationProvider__StartListening_fn;
    type->interface0.fp_StopListening = (void(*)(uObject*))AndroidLocationProvider__StopListening_fn;
    type->interface0.fp_RequestAuthorization = (void(*)(uObject*, int*))AndroidLocationProvider__RequestAuthorization_fn;
    type->interface0.fp_Init = (void(*)(uObject*, uDelegate*))AndroidLocationProvider__Init_fn;
    return type;
}

// public AndroidLocationProvider() :25
void AndroidLocationProvider__ctor__fn(AndroidLocationProvider* __this)
{
    __this->ctor_();
}

// private Fuse.GeoLocation.Location ChooseBestLocation(Uno.Collections.IList<Fuse.GeoLocation.Location> locations, int minDistance, Uno.Time.Instant minTime) :137
void AndroidLocationProvider__ChooseBestLocation_fn(AndroidLocationProvider* __this, uObject* locations, int* minDistance, ::g::Uno::Time::Instant* minTime, ::g::Fuse::GeoLocation::Location** __retval)
{
    *__retval = __this->ChooseBestLocation(locations, *minDistance, *minTime);
}

// private static Java.Object GetLastKnownLocationFromProvider(Java.Object handle, string provider) :113
void AndroidLocationProvider__GetLastKnownLocationFromProvider_fn(::g::Java::Object* handle, uString* provider, ::g::Java::Object** __retval)
{
    *__retval = AndroidLocationProvider::GetLastKnownLocationFromProvider(handle, provider);
}

// public Fuse.GeoLocation.Location GetLastKnownPosition() :118
void AndroidLocationProvider__GetLastKnownPosition_fn(AndroidLocationProvider* __this, ::g::Fuse::GeoLocation::Location** __retval)
{
    *__retval = __this->GetLastKnownPosition();
}

// public void GetLocation(Uno.Threading.Promise<Fuse.GeoLocation.Location> promise, double timeout) :105
void AndroidLocationProvider__GetLocation_fn(AndroidLocationProvider* __this, ::g::Uno::Threading::Promise* promise, double* timeout)
{
    __this->GetLocation(promise, *timeout);
}

// private static Java.Object GetLocationManager() :57
void AndroidLocationProvider__GetLocationManager_fn(::g::Java::Object** __retval)
{
    *__retval = AndroidLocationProvider::GetLocationManager();
}

// private static int GetNumProviders(Java.Object handle) :86
void AndroidLocationProvider__GetNumProviders_fn(::g::Java::Object* handle, int* __retval)
{
    *__retval = AndroidLocationProvider::GetNumProviders(handle);
}

// private static Java.Object GetUpdateListener(Uno.Action<Java.Object> onLocationChanged) :63
void AndroidLocationProvider__GetUpdateListener_fn(uDelegate* onLocationChanged, ::g::Java::Object** __retval)
{
    *__retval = AndroidLocationProvider::GetUpdateListener(onLocationChanged);
}

// public void Init(Uno.Action onReady) :27
void AndroidLocationProvider__Init_fn(AndroidLocationProvider* __this, uDelegate* onReady)
{
    __this->Init(onReady);
}

// private static bool IsGPSEnabled(Java.Object locationManager) :79
void AndroidLocationProvider__IsGPSEnabled_fn(::g::Java::Object* locationManager, bool* __retval)
{
    *__retval = AndroidLocationProvider::IsGPSEnabled(locationManager);
}

// private static bool IsNetworkEnabled(Java.Object locationManager) :73
void AndroidLocationProvider__IsNetworkEnabled_fn(::g::Java::Object* locationManager, bool* __retval)
{
    *__retval = AndroidLocationProvider::IsNetworkEnabled(locationManager);
}

// private static void ListProviders(Java.Object handle, string[] output) :92
void AndroidLocationProvider__ListProviders_fn(::g::Java::Object* handle, uArray* output)
{
    AndroidLocationProvider::ListProviders(handle, output);
}

// public AndroidLocationProvider New() :25
void AndroidLocationProvider__New1_fn(AndroidLocationProvider** __retval)
{
    *__retval = AndroidLocationProvider::New1();
}

// private void OnLocationChanged(Java.Object location) :99
void AndroidLocationProvider__OnLocationChanged_fn(AndroidLocationProvider* __this, ::g::Java::Object* location)
{
    __this->OnLocationChanged(location);
}

// private void OnPermissionsError(Uno.Exception e) :49
void AndroidLocationProvider__OnPermissionsError_fn(AndroidLocationProvider* __this, ::g::Uno::Exception* e)
{
    __this->OnPermissionsError(e);
}

// private void OnPermissionsResult(Uno.Permissions.PlatformPermission[] grantedPermissions) :40
void AndroidLocationProvider__OnPermissionsResult_fn(AndroidLocationProvider* __this, uArray* grantedPermissions)
{
    __this->OnPermissionsResult(grantedPermissions);
}

// private static void RemoveUpdates(Java.Object manager, Java.Object listener) :193
void AndroidLocationProvider__RemoveUpdates_fn(::g::Java::Object* manager, ::g::Java::Object* listener)
{
    AndroidLocationProvider::RemoveUpdates(manager, listener);
}

// public void RequestAuthorization(Fuse.GeoLocation.GeoLocationAuthorizationType type) :68
void AndroidLocationProvider__RequestAuthorization_fn(AndroidLocationProvider* __this, int* type)
{
    __this->RequestAuthorization(*type);
}

// private static void RequestGPSLocationUpdates(Java.Object handle, int minimumReportInterval, double desiredAccuracyInMeters, Java.Object listener) :171
void AndroidLocationProvider__RequestGPSLocationUpdates_fn(::g::Java::Object* handle, int* minimumReportInterval, double* desiredAccuracyInMeters, ::g::Java::Object* listener)
{
    AndroidLocationProvider::RequestGPSLocationUpdates(handle, *minimumReportInterval, *desiredAccuracyInMeters, listener);
}

// private static void RequestNetworkLocationUpdates(Java.Object handle, int minimumReportInterval, double desiredAccuracyInMeters, Java.Object listener) :165
void AndroidLocationProvider__RequestNetworkLocationUpdates_fn(::g::Java::Object* handle, int* minimumReportInterval, double* desiredAccuracyInMeters, ::g::Java::Object* listener)
{
    AndroidLocationProvider::RequestNetworkLocationUpdates(handle, *minimumReportInterval, *desiredAccuracyInMeters, listener);
}

// public void StartListening(Uno.Action<Fuse.GeoLocation.Location> onLocationChanged, Uno.Action<Uno.Exception> onLocationError, int minimumReportInterval, double desiredAccuracyInMeters) :176
void AndroidLocationProvider__StartListening_fn(AndroidLocationProvider* __this, uDelegate* onLocationChanged, uDelegate* onLocationError, int* minimumReportInterval, double* desiredAccuracyInMeters)
{
    __this->StartListening(onLocationChanged, onLocationError, *minimumReportInterval, *desiredAccuracyInMeters);
}

// public void StopListening() :198
void AndroidLocationProvider__StopListening_fn(AndroidLocationProvider* __this)
{
    __this->StopListening();
}

// public AndroidLocationProvider() [instance] :25
void AndroidLocationProvider::ctor_()
{
}

// private Fuse.GeoLocation.Location ChooseBestLocation(Uno.Collections.IList<Fuse.GeoLocation.Location> locations, int minDistance, Uno.Time.Instant minTime) [instance] :137
::g::Fuse::GeoLocation::Location* AndroidLocationProvider::ChooseBestLocation(uObject* locations, int minDistance, ::g::Uno::Time::Instant minTime)
{
    ::g::Fuse::GeoLocation::Location* ret6;
    ::g::Fuse::GeoLocation::Location* bestResult = NULL;
    double bestAccuracy = 1.7976931348623157e+308;
    ::g::Uno::Time::Instant bestTime = uDefault< ::g::Uno::Time::Instant>();

    for (uObject* enum4 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(locations), ::TYPES[0/*Uno.Collections.IEnumerable<Fuse.GeoLocation.Location>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum4), ::TYPES[1/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::GeoLocation::Location* location = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum4), ::TYPES[2/*Uno.Collections.IEnumerator<Fuse.GeoLocation.Location>*/]), &ret6), ret6);
        double accuracy = uPtr(location)->Accuracy();
        ::g::Uno::Time::Instant time = uPtr(uPtr(location->DateTime())->InUtc())->ToInstant();

        if (::g::Uno::Time::Instant__op_GreaterThan(time, minTime) && (accuracy < bestAccuracy))
        {
            bestResult = location;
            bestAccuracy = accuracy;
            bestTime = time;
        }
        else if ((::g::Uno::Time::Instant__op_LessThan(time, minTime) && (bestAccuracy == 1.7976931348623157e+308)) && ::g::Uno::Time::Instant__op_GreaterThan(time, bestTime))
        {
            bestResult = location;
            bestTime = time;
        }
    }

    return bestResult;
}

// public Fuse.GeoLocation.Location GetLastKnownPosition() [instance] :118
::g::Fuse::GeoLocation::Location* AndroidLocationProvider::GetLastKnownPosition()
{
    if (_locationManager != NULL)
    {
        ::g::Uno::Collections::List* locations = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[3/*Uno.Collections.List<Fuse.GeoLocation.Location>*/]);
        uArray* providers = uArray::New(::TYPES[4/*string[]*/], AndroidLocationProvider::GetNumProviders(_locationManager));
        AndroidLocationProvider::ListProviders(_locationManager, providers);

        for (int index2 = 0, length3 = providers->Length(); index2 < length3; ++index2)
        {
            uString* provider = uPtr(providers)->Strong<uString*>(index2);
            ::g::Java::Object* lo = AndroidLocationProvider::GetLastKnownLocationFromProvider(_locationManager, provider);

            if (lo != NULL)
                ::g::Uno::Collections::List__Add_fn(uPtr(locations), ::g::Fuse::GeoLocation::Android::LocationHelpers::ConvertLocation(lo));
        }

        ::g::Uno::Time::Instant minTime = uPtr(uPtr(::g::Uno::DateTime::UtcNow())->Minus(::g::Uno::Time::Duration__FromHours(1LL)))->ToInstant();
        return ChooseBestLocation((uObject*)locations, 50, minTime);
    }

    return NULL;
}

// public void GetLocation(Uno.Threading.Promise<Fuse.GeoLocation.Location> promise, double timeout) [instance] :105
void AndroidLocationProvider::GetLocation(::g::Uno::Threading::Promise* promise, double timeout)
{
    if (_locationManager == NULL)
        return;

    ::g::Fuse::GeoLocation::PromiseListener::New1(_locationManager, timeout, promise);
}

// public void Init(Uno.Action onReady) [instance] :27
void AndroidLocationProvider::Init(uDelegate* onReady)
{
    uArray* array7;
    _onReady = onReady;
    array7 = uArray::New(::TYPES[5/*Uno.Permissions.PlatformPermission[]*/], 3);
    uPtr(array7)->Item< ::g::Uno::Permissions::PlatformPermission>(0) = ::g::Uno::Permissions::Permissions__Android::INTERNET();
    uPtr(array7)->Item< ::g::Uno::Permissions::PlatformPermission>(1) = ::g::Uno::Permissions::Permissions__Android::ACCESS_COARSE_LOCATION();
    uPtr(array7)->Item< ::g::Uno::Permissions::PlatformPermission>(2) = ::g::Uno::Permissions::Permissions__Android::ACCESS_FINE_LOCATION();
    uArray* permissions = array7;
    uPtr(::g::Uno::Permissions::Permissions::Request1(permissions))->Then1(uDelegate::New(::TYPES[6/*Uno.Action<Uno.Permissions.PlatformPermission[]>*/], (void*)AndroidLocationProvider__OnPermissionsResult_fn, this), uDelegate::New(::TYPES[7/*Uno.Action<Uno.Exception>*/], (void*)AndroidLocationProvider__OnPermissionsError_fn, this));
}

// private void OnLocationChanged(Java.Object location) [instance] :99
void AndroidLocationProvider::OnLocationChanged(::g::Java::Object* location)
{
    if (::g::Uno::Delegate::op_Inequality(_onLocationChanged, NULL))
        uPtr(_onLocationChanged)->InvokeVoid(::g::Fuse::GeoLocation::Android::LocationHelpers::ConvertLocation(location));
}

// private void OnPermissionsError(Uno.Exception e) [instance] :49
void AndroidLocationProvider::OnPermissionsError(::g::Uno::Exception* e)
{
    _authorized = false;
    uPtr(_onReady)->InvokeVoid();
    _onReady = NULL;
}

// private void OnPermissionsResult(Uno.Permissions.PlatformPermission[] grantedPermissions) [instance] :40
void AndroidLocationProvider::OnPermissionsResult(uArray* grantedPermissions)
{
    _authorized = true;
    _locationManager = AndroidLocationProvider::GetLocationManager();
    _updateListener = AndroidLocationProvider::GetUpdateListener(uDelegate::New(::TYPES[8/*Uno.Action<Java.Object>*/], (void*)AndroidLocationProvider__OnLocationChanged_fn, this));
    uPtr(_onReady)->InvokeVoid();
    _onReady = NULL;
}

// public void RequestAuthorization(Fuse.GeoLocation.GeoLocationAuthorizationType type) [instance] :68
void AndroidLocationProvider::RequestAuthorization(int type)
{
}

// public void StartListening(Uno.Action<Fuse.GeoLocation.Location> onLocationChanged, Uno.Action<Uno.Exception> onLocationError, int minimumReportInterval, double desiredAccuracyInMeters) [instance] :176
void AndroidLocationProvider::StartListening(uDelegate* onLocationChanged, uDelegate* onLocationError, int minimumReportInterval, double desiredAccuracyInMeters)
{
    if ((_locationManager != NULL) && !_started)
    {
        _onLocationChanged = onLocationChanged;

        if (AndroidLocationProvider::IsNetworkEnabled(_locationManager))
            AndroidLocationProvider::RequestNetworkLocationUpdates(_locationManager, minimumReportInterval, desiredAccuracyInMeters, _updateListener);

        if (AndroidLocationProvider::IsGPSEnabled(_locationManager))
            AndroidLocationProvider::RequestGPSLocationUpdates(_locationManager, minimumReportInterval, desiredAccuracyInMeters, _updateListener);

        _started = true;
    }
}

// public void StopListening() [instance] :198
void AndroidLocationProvider::StopListening()
{
    AndroidLocationProvider::RemoveUpdates(_locationManager, _updateListener);
    _started = false;
}

// private static Java.Object GetLastKnownLocationFromProvider(Java.Object handle, string provider) [static] :113
::g::Java::Object* AndroidLocationProvider::GetLastKnownLocationFromProvider(::g::Java::Object* handle, uString* provider)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLastKnownLocationFromProvider415", "(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uString* _uprovider=provider;
        jstring _provider = JniHelper::UnoToJavaString(_uprovider);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_handle,_provider);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_provider!=NULL) { U_JNIVAR->DeleteLocalRef(_provider); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object GetLocationManager() [static] :57
::g::Java::Object* AndroidLocationProvider::GetLocationManager()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLocationManager416", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetNumProviders(Java.Object handle) [static] :86
int AndroidLocationProvider::GetNumProviders(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetNumProviders417", "(Ljava/lang/Object;)I");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_handle);
        int __result = (int)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object GetUpdateListener(Uno.Action<Java.Object> onLocationChanged) [static] :63
::g::Java::Object* AndroidLocationProvider::GetUpdateListener(uDelegate* onLocationChanged)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetUpdateListener418", "(Lcom/foreign/Uno/Action_Object;)Ljava/lang/Object;");
        uDelegate* _uonLocationChanged=onLocationChanged;
        jobject _onLocationChanged = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uonLocationChanged, "com.foreign.Uno.Action_Object");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_onLocationChanged);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_onLocationChanged!=NULL) { U_JNIVAR->DeleteLocalRef(_onLocationChanged); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static bool IsGPSEnabled(Java.Object locationManager) [static] :79
bool AndroidLocationProvider::IsGPSEnabled(::g::Java::Object* locationManager)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "IsGPSEnabled419", "(Ljava/lang/Object;)Z");
        ::g::Java::Object* _ulocationManager=locationManager;
        jobject _locationManager = (_ulocationManager==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ulocationManager, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_locationManager);
        bool __result = (bool)__jresult;
        if (_locationManager!=NULL) { U_JNIVAR->DeleteLocalRef(_locationManager); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static bool IsNetworkEnabled(Java.Object locationManager) [static] :73
bool AndroidLocationProvider::IsNetworkEnabled(::g::Java::Object* locationManager)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "IsNetworkEnabled420", "(Ljava/lang/Object;)Z");
        ::g::Java::Object* _ulocationManager=locationManager;
        jobject _locationManager = (_ulocationManager==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ulocationManager, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_locationManager);
        bool __result = (bool)__jresult;
        if (_locationManager!=NULL) { U_JNIVAR->DeleteLocalRef(_locationManager); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void ListProviders(Java.Object handle, string[] output) [static] :92
void AndroidLocationProvider::ListProviders(::g::Java::Object* handle, uArray* output)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ListProviders421", "(Ljava/lang/Object;Lcom/uno/StringArray;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uArray* _uoutput=output;
        jobject _output = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box10(_uoutput);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_output);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_output!=NULL) { U_JNIVAR->DeleteLocalRef(_output); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public AndroidLocationProvider New() [static] :25
AndroidLocationProvider* AndroidLocationProvider::New1()
{
    AndroidLocationProvider* obj5 = (AndroidLocationProvider*)uNew(AndroidLocationProvider_typeof());
    obj5->ctor_();
    return obj5;
}

// private static void RemoveUpdates(Java.Object manager, Java.Object listener) [static] :193
void AndroidLocationProvider::RemoveUpdates(::g::Java::Object* manager, ::g::Java::Object* listener)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "RemoveUpdates422", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _umanager=manager;
        jobject _manager = (_umanager==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_umanager, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ulistener=listener;
        jobject _listener = (_ulistener==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ulistener, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_manager,_listener);
        
        if (_manager!=NULL) { U_JNIVAR->DeleteLocalRef(_manager); }
        if (_listener!=NULL) { U_JNIVAR->DeleteLocalRef(_listener); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void RequestGPSLocationUpdates(Java.Object handle, int minimumReportInterval, double desiredAccuracyInMeters, Java.Object listener) [static] :171
void AndroidLocationProvider::RequestGPSLocationUpdates(::g::Java::Object* handle, int minimumReportInterval, double desiredAccuracyInMeters, ::g::Java::Object* listener)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "RequestGPSLocationUpdates423", "(Ljava/lang/Object;IDLjava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uminimumReportInterval=minimumReportInterval;
        jint _minimumReportInterval = (jint)_uminimumReportInterval;
        double _udesiredAccuracyInMeters=desiredAccuracyInMeters;
        jdouble _desiredAccuracyInMeters = (jdouble)_udesiredAccuracyInMeters;
        ::g::Java::Object* _ulistener=listener;
        jobject _listener = (_ulistener==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ulistener, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_minimumReportInterval,_desiredAccuracyInMeters,_listener);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        if (_listener!=NULL) { U_JNIVAR->DeleteLocalRef(_listener); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void RequestNetworkLocationUpdates(Java.Object handle, int minimumReportInterval, double desiredAccuracyInMeters, Java.Object listener) [static] :165
void AndroidLocationProvider::RequestNetworkLocationUpdates(::g::Java::Object* handle, int minimumReportInterval, double desiredAccuracyInMeters, ::g::Java::Object* listener)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "RequestNetworkLocationUpdates424", "(Ljava/lang/Object;IDLjava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uminimumReportInterval=minimumReportInterval;
        jint _minimumReportInterval = (jint)_uminimumReportInterval;
        double _udesiredAccuracyInMeters=desiredAccuracyInMeters;
        jdouble _desiredAccuracyInMeters = (jdouble)_udesiredAccuracyInMeters;
        ::g::Java::Object* _ulistener=listener;
        jobject _listener = (_ulistener==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ulistener, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_minimumReportInterval,_desiredAccuracyInMeters,_listener);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        if (_listener!=NULL) { U_JNIVAR->DeleteLocalRef(_listener); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /Users/a/Library/Application Support/Fusetools/Packages/Fuse.GeoLocation/1.2.1/$.uno
// ------------------------------------------------------------------------------------

// private abstract interface LocationTracker.BufferedCall :425
// {
uInterfaceType* LocationTracker__BufferedCall_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.GeoLocation.LocationTracker.BufferedCall", 0, 0);
    return type;
}
// }

// /Users/a/Library/Application Support/Fusetools/Packages/Fuse.GeoLocation/1.2.1/$.uno
// ------------------------------------------------------------------------------------

// public sealed class GeoCoordinates :7
// {
static void GeoCoordinates_build(uType* type)
{
    ::STRINGS[0] = uString::Const(" - ");
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::GeoLocation::GeoCoordinates, _lat), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::GeoLocation::GeoCoordinates, _long), 0);
}

uType* GeoCoordinates_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(GeoCoordinates);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.GeoLocation.GeoCoordinates", options);
    type->fp_build_ = GeoCoordinates_build;
    type->fp_ToString = (void(*)(uObject*, uString**))GeoCoordinates__ToString_fn;
    return type;
}

// public GeoCoordinates(double latitude, double longitude) :15
void GeoCoordinates__ctor__fn(GeoCoordinates* __this, double* latitude, double* longitude)
{
    __this->ctor_(*latitude, *longitude);
}

// public double get_Latitude() :12
void GeoCoordinates__get_Latitude_fn(GeoCoordinates* __this, double* __retval)
{
    *__retval = __this->Latitude();
}

// public double get_Longitude() :13
void GeoCoordinates__get_Longitude_fn(GeoCoordinates* __this, double* __retval)
{
    *__retval = __this->Longitude();
}

// public GeoCoordinates New(double latitude, double longitude) :15
void GeoCoordinates__New1_fn(double* latitude, double* longitude, GeoCoordinates** __retval)
{
    *__retval = GeoCoordinates::New1(*latitude, *longitude);
}

// public override sealed string ToString() :21
void GeoCoordinates__ToString_fn(GeoCoordinates* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition(uBox(::g::Uno::Double_typeof(), __this->Latitude()), ::STRINGS[0/*" - "*/]), uBox(::g::Uno::Double_typeof(), __this->Longitude())), void();
}

// public GeoCoordinates(double latitude, double longitude) [instance] :15
void GeoCoordinates::ctor_(double latitude, double longitude)
{
    _lat = latitude;
    _long = longitude;
}

// public double get_Latitude() [instance] :12
double GeoCoordinates::Latitude()
{
    return _lat;
}

// public double get_Longitude() [instance] :13
double GeoCoordinates::Longitude()
{
    return _long;
}

// public GeoCoordinates New(double latitude, double longitude) [static] :15
GeoCoordinates* GeoCoordinates::New1(double latitude, double longitude)
{
    GeoCoordinates* obj1 = (GeoCoordinates*)uNew(GeoCoordinates_typeof());
    obj1->ctor_(latitude, longitude);
    return obj1;
}
// }

// /Users/a/Library/Application Support/Fusetools/Packages/Fuse.GeoLocation/1.2.1/$.uno
// ------------------------------------------------------------------------------------

// public sealed class GeoLocation :136
// {
static void GeoLocation_build(uType* type)
{
    ::STRINGS[1] = uString::Const("changed");
    ::STRINGS[2] = uString::Const("FuseJS/GeoLocation");
    ::STRINGS[3] = uString::Const("onChanged");
    ::STRINGS[4] = uString::Const("onError");
    ::STRINGS[5] = uString::Const("error");
    ::STRINGS[6] = uString::Const("location");
    ::STRINGS[7] = uString::Const("getLocation");
    ::STRINGS[8] = uString::Const("authorizationRequest");
    ::STRINGS[9] = uString::Const("startListening");
    ::STRINGS[10] = uString::Const("stopListening");
    ::STRINGS[11] = uString::Const("latitude");
    ::STRINGS[12] = uString::Const("longitude");
    ::STRINGS[13] = uString::Const("accuracy");
    ::STRINGS[14] = uString::Const("altitude");
    ::STRINGS[15] = uString::Const("speed");
    ::TYPES[9] = uObject_typeof()->Array();
    ::TYPES[10] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[11] = ::g::Uno::Func_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), NULL);
    ::TYPES[12] = ::g::Fuse::Scripting::ValueConverter_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[13] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[14] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), NULL);
    ::TYPES[15] = ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[16] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof(), ::g::Uno::Int_typeof(), NULL);
    ::TYPES[17] = ::g::Uno::Func_typeof()->MakeType(::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof(), NULL);
    ::TYPES[18] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL);
    ::TYPES[19] = ::g::Fuse::Scripting::ValueConverter_typeof()->MakeType(::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof(), ::g::Uno::Int_typeof(), NULL);
    ::TYPES[20] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[21] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), NULL);
    ::TYPES[22] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[23] = ::g::Fuse::Scripting::NativeEventEmitterModule_typeof()->MakeMethod(0/*EmitFactory<Fuse.GeoLocation.Location>*/, ::g::Fuse::GeoLocation::Location_typeof(), NULL);
    ::TYPES[24] = ::g::Uno::Func2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), ::g::Fuse::GeoLocation::Location_typeof(), ::TYPES[9/*object[]*/], NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(12,
        ::g::Fuse::GeoLocation::LocationTracker_typeof(), offsetof(::g::Fuse::GeoLocation::GeoLocation, _locationTracker), 0,
        type, (uintptr_t)&::g::Fuse::GeoLocation::GeoLocation::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* GeoLocation_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeEventEmitterModule_typeof();
    options.FieldCount = 14;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(GeoLocation);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.GeoLocation.GeoLocation", options);
    type->fp_build_ = GeoLocation_build;
    type->fp_ctor_ = (void*)GeoLocation__New3_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public GeoLocation() :141
void GeoLocation__ctor_3_fn(GeoLocation* __this)
{
    __this->ctor_3();
}

// private static int AuthorizationRequestConverter(Fuse.Scripting.Context context, Fuse.GeoLocation.GeoLocationAuthorizationType type) :260
void GeoLocation__AuthorizationRequestConverter_fn(::g::Fuse::Scripting::Context* context, int* type, int* __retval)
{
    *__retval = GeoLocation::AuthorizationRequestConverter(context, *type);
}

// private static object[] ChangedArgsFactory(Fuse.Scripting.Context context, Fuse.GeoLocation.Location location) :243
void GeoLocation__ChangedArgsFactory_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::GeoLocation::Location* location, uArray** __retval)
{
    *__retval = GeoLocation::ChangedArgsFactory(context, location);
}

// private static Fuse.Scripting.Object Converter(Fuse.Scripting.Context context, Fuse.GeoLocation.Location location) :356
void GeoLocation__Converter_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::GeoLocation::Location* location, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = GeoLocation::Converter(context, location);
}

// private Fuse.GeoLocation.GeoLocationAuthorizationType GetAuthorizationRequest() :299
void GeoLocation__GetAuthorizationRequest_fn(GeoLocation* __this, int* __retval)
{
    *__retval = __this->GetAuthorizationRequest();
}

// private Fuse.GeoLocation.Location GetLocation() :322
void GeoLocation__GetLocation_fn(GeoLocation* __this, ::g::Fuse::GeoLocation::Location** __retval)
{
    *__retval = __this->GetLocation();
}

// private Uno.Threading.Future<Fuse.GeoLocation.Location> GetLocationAsync(object[] args) :350
void GeoLocation__GetLocationAsync_fn(GeoLocation* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->GetLocationAsync(args);
}

// private void LocationChanged(Fuse.GeoLocation.Location location) :238
void GeoLocation__LocationChanged_fn(GeoLocation* __this, ::g::Fuse::GeoLocation::Location* location)
{
    __this->LocationChanged(location);
}

// private void LocationError(string error) :255
void GeoLocation__LocationError_fn(GeoLocation* __this, uString* error)
{
    __this->LocationError(error);
}

// public GeoLocation New() :141
void GeoLocation__New3_fn(GeoLocation** __retval)
{
    *__retval = GeoLocation::New3();
}

// private void SetAuthorizationRequest(int value) :294
void GeoLocation__SetAuthorizationRequest_fn(GeoLocation* __this, int* value)
{
    __this->SetAuthorizationRequest(*value);
}

// private object StartListening(Fuse.Scripting.Context c, object[] args) :195
void GeoLocation__StartListening_fn(GeoLocation* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->StartListening(c, args);
}

// private object StopListening(Fuse.Scripting.Context c, object[] args) :211
void GeoLocation__StopListening_fn(GeoLocation* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->StopListening(c, args);
}

uSStrong<GeoLocation*> GeoLocation::_instance_;

// public GeoLocation() [instance] :141
void GeoLocation::ctor_3()
{
    ctor_2(false, uArray::Init<uObject*>(::TYPES[9/*object[]*/], 1, ::STRINGS[1/*"changed"*/]));

    if (GeoLocation::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(GeoLocation::_instance_ = this, ::STRINGS[2/*"FuseJS/GeoL...*/]);
    _locationTracker = ::g::Fuse::GeoLocation::LocationTracker::New1();
    ::g::Fuse::Scripting::NativeEvent* onChangedEvent = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[3/*"onChanged"*/], true);
    ::g::Fuse::Scripting::NativeEvent* onErrorEvent = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[4/*"onError"*/], true);
    On1(::STRINGS[1/*"changed"*/], onChangedEvent);
    On1(::STRINGS[5/*"error"*/], onErrorEvent);
    AddMember(onChangedEvent);
    AddMember(onErrorEvent);
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[10/*Fuse.Scripting.NativeProperty<Fuse.GeoLocation.Location, Fuse.Scripting.Object>*/], ::STRINGS[6/*"location"*/], uDelegate::New(::TYPES[11/*Uno.Func<Fuse.GeoLocation.Location>*/], (void*)GeoLocation__GetLocation_fn, this), NULL, uDelegate::New(::TYPES[12/*Fuse.Scripting.ValueConverter<Fuse.GeoLocation.Location, Fuse.Scripting.Object>*/], (void*)GeoLocation__Converter_fn)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[13/*Fuse.Scripting.NativePromise<Fuse.GeoLocation.Location, Fuse.Scripting.Object>*/], ::STRINGS[7/*"getLocation"*/], uDelegate::New(::TYPES[14/*Fuse.Scripting.FutureFactory<Fuse.GeoLocation.Location>*/], (void*)GeoLocation__GetLocationAsync_fn, this), uDelegate::New(::TYPES[15/*Fuse.Scripting.ResultConverter<Fuse.GeoLocation.Location, Fuse.Scripting.Object>*/], (void*)GeoLocation__Converter_fn)));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[16/*Fuse.Scripting.NativeProperty<Fuse.GeoLocation.GeoLocationAuthorizationType, int>*/], ::STRINGS[8/*"authorizati...*/], uDelegate::New(::TYPES[17/*Uno.Func<Fuse.GeoLocation.GeoLocationAuthorizationType>*/], (void*)GeoLocation__GetAuthorizationRequest_fn, this), uDelegate::New(::TYPES[18/*Uno.Action<int>*/], (void*)GeoLocation__SetAuthorizationRequest_fn, this), uDelegate::New(::TYPES[19/*Fuse.Scripting.ValueConverter<Fuse.GeoLocation.GeoLocationAuthorizationType, int>*/], (void*)GeoLocation__AuthorizationRequestConverter_fn)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[9/*"startListen...*/], uDelegate::New(::TYPES[20/*Fuse.Scripting.NativeCallback*/], (void*)GeoLocation__StartListening_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[10/*"stopListening"*/], uDelegate::New(::TYPES[20/*Fuse.Scripting.NativeCallback*/], (void*)GeoLocation__StopListening_fn, this)));
    uPtr(_locationTracker)->add_LocationChanged(uDelegate::New(::TYPES[21/*Uno.Action<Fuse.GeoLocation.Location>*/], (void*)GeoLocation__LocationChanged_fn, this));
    uPtr(_locationTracker)->add_LocationError(uDelegate::New(::TYPES[22/*Uno.Action<string>*/], (void*)GeoLocation__LocationError_fn, this));
}

// private Fuse.GeoLocation.GeoLocationAuthorizationType GetAuthorizationRequest() [instance] :299
int GeoLocation::GetAuthorizationRequest()
{
    return uPtr(_locationTracker)->AuthorizationType();
}

// private Fuse.GeoLocation.Location GetLocation() [instance] :322
::g::Fuse::GeoLocation::Location* GeoLocation::GetLocation()
{
    return uPtr(_locationTracker)->Location();
}

// private Uno.Threading.Future<Fuse.GeoLocation.Location> GetLocationAsync(object[] args) [instance] :350
::g::Uno::Threading::Future1* GeoLocation::GetLocationAsync(uArray* args)
{
    double timeout = (uPtr(args)->Length() > 0) ? ::g::Fuse::Marshal::ToDouble(uPtr(args)->Strong<uObject*>(0)) : 20000.0;
    return uPtr(_locationTracker)->GetLocationAsync(timeout);
}

// private void LocationChanged(Fuse.GeoLocation.Location location) [instance] :238
void GeoLocation::LocationChanged(::g::Fuse::GeoLocation::Location* location)
{
    ::g::Fuse::Scripting::NativeEventEmitterModule__EmitFactory1_fn(this, ::TYPES[23/*Fuse.Scripting.NativeEventEmitterModule.EmitFactory<Fuse.GeoLocation.Location>*/], uDelegate::New(::TYPES[24/*Uno.Func<Fuse.Scripting.Context, Fuse.GeoLocation.Location, object[]>*/], (void*)GeoLocation__ChangedArgsFactory_fn), location);
}

// private void LocationError(string error) [instance] :255
void GeoLocation::LocationError(uString* error)
{
    EmitError(error);
}

// private void SetAuthorizationRequest(int value) [instance] :294
void GeoLocation::SetAuthorizationRequest(int value)
{
    uPtr(_locationTracker)->AuthorizationType(value);
}

// private object StartListening(Fuse.Scripting.Context c, object[] args) [instance] :195
uObject* GeoLocation::StartListening(::g::Fuse::Scripting::Context* c, uArray* args)
{
    int minimumReportInterval = (uPtr(args)->Length() > 0) ? ::g::Fuse::Marshal::ToInt(uPtr(args)->Strong<uObject*>(0)) : 0;
    double desiredAccuracyInMeters = (args->Length() > 1) ? ::g::Fuse::Marshal::ToDouble(args->Strong<uObject*>(1)) : 0.0;
    uPtr(_locationTracker)->StartListening(minimumReportInterval, desiredAccuracyInMeters);
    return NULL;
}

// private object StopListening(Fuse.Scripting.Context c, object[] args) [instance] :211
uObject* GeoLocation::StopListening(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uPtr(_locationTracker)->StopListening();
    return NULL;
}

// private static int AuthorizationRequestConverter(Fuse.Scripting.Context context, Fuse.GeoLocation.GeoLocationAuthorizationType type) [static] :260
int GeoLocation::AuthorizationRequestConverter(::g::Fuse::Scripting::Context* context, int type)
{
    return type;
}

// private static object[] ChangedArgsFactory(Fuse.Scripting.Context context, Fuse.GeoLocation.Location location) [static] :243
uArray* GeoLocation::ChangedArgsFactory(::g::Fuse::Scripting::Context* context, ::g::Fuse::GeoLocation::Location* location)
{
    return uArray::Init<uObject*>(::TYPES[9/*object[]*/], 2, ::STRINGS[1/*"changed"*/], (::g::Fuse::Scripting::Object*)GeoLocation::Converter(context, location));
}

// private static Fuse.Scripting.Object Converter(Fuse.Scripting.Context context, Fuse.GeoLocation.Location location) [static] :356
::g::Fuse::Scripting::Object* GeoLocation::Converter(::g::Fuse::Scripting::Context* context, ::g::Fuse::GeoLocation::Location* location)
{
    ::g::Fuse::Scripting::Object* obj = uPtr(context)->NewObject();

    if (location != NULL)
    {
        uPtr(obj)->Item(::STRINGS[11/*"latitude"*/], uBox(::g::Uno::Double_typeof(), uPtr(uPtr(location)->Coordinates())->Latitude()));
        obj->Item(::STRINGS[12/*"longitude"*/], uBox(::g::Uno::Double_typeof(), uPtr(location->Coordinates())->Longitude()));
        obj->Item(::STRINGS[13/*"accuracy"*/], uBox(::g::Uno::Double_typeof(), location->Accuracy()));
        obj->Item(::STRINGS[14/*"altitude"*/], uBox(::g::Uno::Double_typeof(), location->Altitude()));
        obj->Item(::STRINGS[15/*"speed"*/], uBox(::g::Uno::Double_typeof(), location->Speed()));
    }

    return obj;
}

// public GeoLocation New() [static] :141
GeoLocation* GeoLocation::New3()
{
    GeoLocation* obj1 = (GeoLocation*)uNew(GeoLocation_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /Users/a/Library/Application Support/Fusetools/Packages/Fuse.GeoLocation/1.2.1/$.uno
// ------------------------------------------------------------------------------------

// public enum GeoLocationAuthorizationType :499
uEnumType* GeoLocationAuthorizationType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.GeoLocation.GeoLocationAuthorizationType", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Never", 0LL,
        "WhenInUse", 1LL,
        "Always", 2LL);
    return type;
}

// /Users/a/Library/Application Support/Fusetools/Packages/Fuse.GeoLocation/1.2.1/$.uno
// ------------------------------------------------------------------------------------

// private sealed class LocationTracker.GetLocationCall :459
// {
static void LocationTracker__GetLocationCall_build(uType* type)
{
    ::TYPES[25] = ::g::Fuse::GeoLocation::ILocationTracker_typeof();
    type->SetInterfaces(
        ::g::Fuse::GeoLocation::LocationTracker__BufferedCall_typeof(), offsetof(LocationTracker__GetLocationCall_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), NULL), offsetof(::g::Fuse::GeoLocation::LocationTracker__GetLocationCall, promise), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::GeoLocation::LocationTracker__GetLocationCall, timeout), 0);
}

LocationTracker__GetLocationCall_type* LocationTracker__GetLocationCall_typeof()
{
    static uSStrong<LocationTracker__GetLocationCall_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LocationTracker__GetLocationCall);
    options.TypeSize = sizeof(LocationTracker__GetLocationCall_type);
    type = (LocationTracker__GetLocationCall_type*)uClassType::New("Fuse.GeoLocation.LocationTracker.GetLocationCall", options);
    type->fp_build_ = LocationTracker__GetLocationCall_build;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*))LocationTracker__GetLocationCall__Apply_fn;
    return type;
}

// public GetLocationCall(Uno.Threading.Promise<Fuse.GeoLocation.Location> promise, double timeout) :462
void LocationTracker__GetLocationCall__ctor__fn(LocationTracker__GetLocationCall* __this, ::g::Uno::Threading::Promise* promise1, double* timeout1)
{
    __this->ctor_(promise1, *timeout1);
}

// public void Apply(Fuse.GeoLocation.ILocationTracker tracker) :467
void LocationTracker__GetLocationCall__Apply_fn(LocationTracker__GetLocationCall* __this, uObject* tracker)
{
    __this->Apply(tracker);
}

// public GetLocationCall New(Uno.Threading.Promise<Fuse.GeoLocation.Location> promise, double timeout) :462
void LocationTracker__GetLocationCall__New1_fn(::g::Uno::Threading::Promise* promise1, double* timeout1, LocationTracker__GetLocationCall** __retval)
{
    *__retval = LocationTracker__GetLocationCall::New1(promise1, *timeout1);
}

// public GetLocationCall(Uno.Threading.Promise<Fuse.GeoLocation.Location> promise, double timeout) [instance] :462
void LocationTracker__GetLocationCall::ctor_(::g::Uno::Threading::Promise* promise1, double timeout1)
{
    promise = promise1;
    timeout = timeout1;
}

// public void Apply(Fuse.GeoLocation.ILocationTracker tracker) [instance] :467
void LocationTracker__GetLocationCall::Apply(uObject* tracker)
{
    ::g::Fuse::GeoLocation::ILocationTracker::GetLocation(uInterface(uPtr(tracker), ::TYPES[25/*Fuse.GeoLocation.ILocationTracker*/]), promise, timeout);
}

// public GetLocationCall New(Uno.Threading.Promise<Fuse.GeoLocation.Location> promise, double timeout) [static] :462
LocationTracker__GetLocationCall* LocationTracker__GetLocationCall::New1(::g::Uno::Threading::Promise* promise1, double timeout1)
{
    LocationTracker__GetLocationCall* obj1 = (LocationTracker__GetLocationCall*)uNew(LocationTracker__GetLocationCall_typeof());
    obj1->ctor_(promise1, timeout1);
    return obj1;
}
// }

// /Users/a/Library/Application Support/Fusetools/Packages/Fuse.GeoLocation/1.2.1/$.uno
// ------------------------------------------------------------------------------------

// internal abstract interface ILocationTracker :484
// {
uInterfaceType* ILocationTracker_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.GeoLocation.ILocationTracker", 0, 0);
    return type;
}
// }

// /Users/a/Library/Application Support/Fusetools/Packages/Fuse.GeoLocation/1.2.1/$.uno
// ------------------------------------------------------------------------------------

// public sealed class Location :379
// {
static void Location_build(uType* type)
{
    ::STRINGS[16] = uString::Const(" ");
    ::STRINGS[17] = uString::Const(" (");
    ::STRINGS[18] = uString::Const("/");
    ::STRINGS[19] = uString::Const(":");
    ::STRINGS[20] = uString::Const(")");
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::GeoLocation::Location, _accuracy), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::GeoLocation::Location, _altitude), 0,
        ::g::Fuse::GeoLocation::GeoCoordinates_typeof(), offsetof(::g::Fuse::GeoLocation::Location, _coordinates), 0,
        ::g::Uno::Time::LocalDateTime_typeof(), offsetof(::g::Fuse::GeoLocation::Location, _dateTime), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::GeoLocation::Location, _speed), 0);
}

uType* Location_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Location);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.GeoLocation.Location", options);
    type->fp_build_ = Location_build;
    type->fp_ToString = (void(*)(uObject*, uString**))Location__ToString_fn;
    return type;
}

// public Location(Fuse.GeoLocation.GeoCoordinates coordinates, double accuracy, double altitude, double speed, Uno.Time.LocalDateTime dateTime) :399
void Location__ctor__fn(Location* __this, ::g::Fuse::GeoLocation::GeoCoordinates* coordinates, double* accuracy, double* altitude, double* speed, ::g::Uno::Time::LocalDateTime* dateTime)
{
    __this->ctor_(coordinates, *accuracy, *altitude, *speed, dateTime);
}

// public double get_Accuracy() :393
void Location__get_Accuracy_fn(Location* __this, double* __retval)
{
    *__retval = __this->Accuracy();
}

// public double get_Altitude() :395
void Location__get_Altitude_fn(Location* __this, double* __retval)
{
    *__retval = __this->Altitude();
}

// public Fuse.GeoLocation.GeoCoordinates get_Coordinates() :387
void Location__get_Coordinates_fn(Location* __this, ::g::Fuse::GeoLocation::GeoCoordinates** __retval)
{
    *__retval = __this->Coordinates();
}

// public Uno.Time.LocalDateTime get_DateTime() :388
void Location__get_DateTime_fn(Location* __this, ::g::Uno::Time::LocalDateTime** __retval)
{
    *__retval = __this->DateTime();
}

// public Location New(Fuse.GeoLocation.GeoCoordinates coordinates, double accuracy, double altitude, double speed, Uno.Time.LocalDateTime dateTime) :399
void Location__New1_fn(::g::Fuse::GeoLocation::GeoCoordinates* coordinates, double* accuracy, double* altitude, double* speed, ::g::Uno::Time::LocalDateTime* dateTime, Location** __retval)
{
    *__retval = Location::New1(coordinates, *accuracy, *altitude, *speed, dateTime);
}

// public double get_Speed() :397
void Location__get_Speed_fn(Location* __this, double* __retval)
{
    *__retval = __this->Speed();
}

// public override sealed string ToString() :408
void Location__ToString_fn(Location* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition(__this->Coordinates(), ::STRINGS[16/*" "*/]), uBox(::g::Uno::Double_typeof(), __this->Accuracy())), ::STRINGS[17/*" ("*/]), uBox<int>(::g::Uno::Int_typeof(), uPtr(__this->DateTime())->Month())), ::STRINGS[18/*"/"*/]), uBox<int>(::g::Uno::Int_typeof(), uPtr(__this->DateTime())->Day())), ::STRINGS[16/*" "*/]), uBox<int>(::g::Uno::Int_typeof(), uPtr(__this->DateTime())->Hour())), ::STRINGS[19/*":"*/]), uBox<int>(::g::Uno::Int_typeof(), uPtr(__this->DateTime())->Minute())), ::STRINGS[20/*")"*/]), void();
}

// public Location(Fuse.GeoLocation.GeoCoordinates coordinates, double accuracy, double altitude, double speed, Uno.Time.LocalDateTime dateTime) [instance] :399
void Location::ctor_(::g::Fuse::GeoLocation::GeoCoordinates* coordinates, double accuracy, double altitude, double speed, ::g::Uno::Time::LocalDateTime* dateTime)
{
    _coordinates = coordinates;
    _accuracy = accuracy;
    _dateTime = dateTime;
    _altitude = altitude;
    _speed = speed;
}

// public double get_Accuracy() [instance] :393
double Location::Accuracy()
{
    return _accuracy;
}

// public double get_Altitude() [instance] :395
double Location::Altitude()
{
    return _altitude;
}

// public Fuse.GeoLocation.GeoCoordinates get_Coordinates() [instance] :387
::g::Fuse::GeoLocation::GeoCoordinates* Location::Coordinates()
{
    return _coordinates;
}

// public Uno.Time.LocalDateTime get_DateTime() [instance] :388
::g::Uno::Time::LocalDateTime* Location::DateTime()
{
    return _dateTime;
}

// public double get_Speed() [instance] :397
double Location::Speed()
{
    return _speed;
}

// public Location New(Fuse.GeoLocation.GeoCoordinates coordinates, double accuracy, double altitude, double speed, Uno.Time.LocalDateTime dateTime) [static] :399
Location* Location::New1(::g::Fuse::GeoLocation::GeoCoordinates* coordinates, double accuracy, double altitude, double speed, ::g::Uno::Time::LocalDateTime* dateTime)
{
    Location* obj1 = (Location*)uNew(Location_typeof());
    obj1->ctor_(coordinates, accuracy, altitude, speed, dateTime);
    return obj1;
}
// }

// /Users/a/Library/Application Support/Fusetools/Packages/Fuse.GeoLocation/1.2.1/$.uno
// ------------------------------------------------------------------------------------

// public partial sealed class LocationTracker :423
// {
static void LocationTracker_build(uType* type)
{
    ::TYPES[26] = ::g::Uno::Collections::List_typeof()->MakeType(LocationTracker__BufferedCall_typeof(), NULL);
    ::TYPES[27] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[28] = ::g::Uno::Action_typeof();
    ::TYPES[29] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(LocationTracker__BufferedCall_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[30] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(LocationTracker__BufferedCall_typeof(), NULL);
    ::TYPES[31] = LocationTracker__BufferedCall_typeof();
    ::TYPES[32] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), NULL);
    ::TYPES[33] = ::g::Uno::Exception_typeof();
    ::TYPES[34] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[31/*Fuse.GeoLocation.LocationTracker.BufferedCall*/], NULL);
    ::TYPES[25] = ::g::Fuse::GeoLocation::ILocationTracker_typeof();
    ::TYPES[21] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Action1_typeof()->MakeType(::TYPES[33/*Uno.Exception*/], NULL);
    ::TYPES[22] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::TYPES[31/*Fuse.GeoLocation.LocationTracker.BufferedCall*/], NULL), offsetof(::g::Fuse::GeoLocation::LocationTracker, _bufferedCalls), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::GeoLocation::LocationTracker, _isReady), 0,
        ::g::Fuse::GeoLocation::Location_typeof(), offsetof(::g::Fuse::GeoLocation::LocationTracker, _lastLocation), 0,
        ::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof(), offsetof(::g::Fuse::GeoLocation::LocationTracker, _AuthorizationType), 0,
        ::TYPES[21/*Uno.Action<Fuse.GeoLocation.Location>*/], offsetof(::g::Fuse::GeoLocation::LocationTracker, LocationChanged1), 0,
        ::TYPES[22/*Uno.Action<string>*/], offsetof(::g::Fuse::GeoLocation::LocationTracker, LocationError1), 0,
        ::TYPES[25/*Fuse.GeoLocation.ILocationTracker*/], (uintptr_t)&::g::Fuse::GeoLocation::LocationTracker::_locationTracker_, uFieldFlagsStatic);
}

uType* LocationTracker_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(LocationTracker);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.GeoLocation.LocationTracker", options);
    type->fp_build_ = LocationTracker_build;
    type->fp_ctor_ = (void*)LocationTracker__New1_fn;
    return type;
}

// public LocationTracker() :510
void LocationTracker__ctor__fn(LocationTracker* __this)
{
    __this->ctor_();
}

// public generated Fuse.GeoLocation.GeoLocationAuthorizationType get_AuthorizationType() :547
void LocationTracker__get_AuthorizationType_fn(LocationTracker* __this, int* __retval)
{
    *__retval = __this->AuthorizationType();
}

// public generated void set_AuthorizationType(Fuse.GeoLocation.GeoLocationAuthorizationType value) :547
void LocationTracker__set_AuthorizationType_fn(LocationTracker* __this, int* value)
{
    __this->AuthorizationType(*value);
}

// private void FlushBufferedCalls() :531
void LocationTracker__FlushBufferedCalls_fn(LocationTracker* __this)
{
    __this->FlushBufferedCalls();
}

// public Uno.Threading.Future<Fuse.GeoLocation.Location> GetLocationAsync([double timeout]) :598
void LocationTracker__GetLocationAsync_fn(LocationTracker* __this, double* timeout, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->GetLocationAsync(*timeout);
}

// private void Init() :517
void LocationTracker__Init_fn(LocationTracker* __this)
{
    __this->Init();
}

// public Fuse.GeoLocation.Location get_Location() :551
void LocationTracker__get_Location_fn(LocationTracker* __this, ::g::Fuse::GeoLocation::Location** __retval)
{
    *__retval = __this->Location();
}

// public generated void add_LocationChanged(Uno.Action<Fuse.GeoLocation.Location> value) :539
void LocationTracker__add_LocationChanged_fn(LocationTracker* __this, uDelegate* value)
{
    __this->add_LocationChanged(value);
}

// public generated void remove_LocationChanged(Uno.Action<Fuse.GeoLocation.Location> value) :539
void LocationTracker__remove_LocationChanged_fn(LocationTracker* __this, uDelegate* value)
{
    __this->remove_LocationChanged(value);
}

// public generated void add_LocationError(Uno.Action<string> value) :541
void LocationTracker__add_LocationError_fn(LocationTracker* __this, uDelegate* value)
{
    __this->add_LocationError(value);
}

// public generated void remove_LocationError(Uno.Action<string> value) :541
void LocationTracker__remove_LocationError_fn(LocationTracker* __this, uDelegate* value)
{
    __this->remove_LocationError(value);
}

// public LocationTracker New() :510
void LocationTracker__New1_fn(LocationTracker** __retval)
{
    *__retval = LocationTracker::New1();
}

// private void OnLocationChanged(Fuse.GeoLocation.Location newLocation) :563
void LocationTracker__OnLocationChanged_fn(LocationTracker* __this, ::g::Fuse::GeoLocation::Location* newLocation)
{
    __this->OnLocationChanged(newLocation);
}

// private void OnLocationError(Uno.Exception error) :569
void LocationTracker__OnLocationError_fn(LocationTracker* __this, ::g::Uno::Exception* error)
{
    __this->OnLocationError(error);
}

// public void StartListening([int minimumReportInterval], [double desiredAccuracyInMeters]) :575
void LocationTracker__StartListening_fn(LocationTracker* __this, int* minimumReportInterval, double* desiredAccuracyInMeters)
{
    __this->StartListening(*minimumReportInterval, *desiredAccuracyInMeters);
}

// public void StopListening() :587
void LocationTracker__StopListening_fn(LocationTracker* __this)
{
    __this->StopListening();
}

uSStrong<uObject*> LocationTracker::_locationTracker_;

// public LocationTracker() [instance] :510
void LocationTracker::ctor_()
{
    _bufferedCalls = (uObject*)((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[26/*Uno.Collections.List<Fuse.GeoLocation.LocationTracker.BufferedCall>*/]));
    AuthorizationType(1);
    ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(::g::Fuse::UpdateManager::Dispatcher()), ::TYPES[27/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[28/*Uno.Action*/], (void*)LocationTracker__Init_fn, this));
}

// public generated Fuse.GeoLocation.GeoLocationAuthorizationType get_AuthorizationType() [instance] :547
int LocationTracker::AuthorizationType()
{
    return _AuthorizationType;
}

// public generated void set_AuthorizationType(Fuse.GeoLocation.GeoLocationAuthorizationType value) [instance] :547
void LocationTracker::AuthorizationType(int value)
{
    _AuthorizationType = value;
}

// private void FlushBufferedCalls() [instance] :531
void LocationTracker::FlushBufferedCalls()
{
    uObject* ret3;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_bufferedCalls), ::TYPES[29/*Uno.Collections.IEnumerable<Fuse.GeoLocation.LocationTracker.BufferedCall>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[1/*Uno.Collections.IEnumerator*/])); )
    {
        uObject* call = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[30/*Uno.Collections.IEnumerator<Fuse.GeoLocation.LocationTracker.BufferedCall>*/]), &ret3), ret3);
        LocationTracker__BufferedCall::Apply(uInterface(uPtr(call), ::TYPES[31/*Fuse.GeoLocation.LocationTracker.BufferedCall*/]), LocationTracker::_locationTracker_);
    }

    _bufferedCalls = NULL;
    _isReady = true;
}

// public Uno.Threading.Future<Fuse.GeoLocation.Location> GetLocationAsync([double timeout]) [instance] :598
::g::Uno::Threading::Future1* LocationTracker::GetLocationAsync(double timeout)
{
    ::g::Uno::Threading::Promise* promise = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[32/*Uno.Threading.Promise<Fuse.GeoLocation.Location>*/]);

    try
    {
        if (!_isReady)
        {
            ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(_bufferedCalls), ::TYPES[34/*Uno.Collections.ICollection<Fuse.GeoLocation.LocationTracker.BufferedCall>*/]), (uObject*)LocationTracker__GetLocationCall::New1(promise, timeout));
            return promise;
        }

        ::g::Fuse::GeoLocation::ILocationTracker::RequestAuthorization(uInterface(uPtr(LocationTracker::_locationTracker_), ::TYPES[25/*Fuse.GeoLocation.ILocationTracker*/]), AuthorizationType());
        ::g::Fuse::GeoLocation::ILocationTracker::GetLocation(uInterface(uPtr(LocationTracker::_locationTracker_), ::TYPES[25/*Fuse.GeoLocation.ILocationTracker*/]), promise, timeout);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        uPtr(promise)->Reject(e);
    }

    return promise;
}

// private void Init() [instance] :517
void LocationTracker::Init()
{
    if (LocationTracker::_locationTracker_ != NULL)
        return;

    LocationTracker::_locationTracker_ = (uObject*)::g::Fuse::GeoLocation::AndroidLocationProvider::New1();
    ::g::Fuse::GeoLocation::ILocationTracker::Init(uInterface(uPtr(LocationTracker::_locationTracker_), ::TYPES[25/*Fuse.GeoLocation.ILocationTracker*/]), uDelegate::New(::TYPES[28/*Uno.Action*/], (void*)LocationTracker__FlushBufferedCalls_fn, this));
}

// public Fuse.GeoLocation.Location get_Location() [instance] :551
::g::Fuse::GeoLocation::Location* LocationTracker::Location()
{
    if ((_lastLocation == NULL) && _isReady)
    {
        ::g::Fuse::GeoLocation::ILocationTracker::RequestAuthorization(uInterface(uPtr(LocationTracker::_locationTracker_), ::TYPES[25/*Fuse.GeoLocation.ILocationTracker*/]), AuthorizationType());
        _lastLocation = ::g::Fuse::GeoLocation::ILocationTracker::GetLastKnownPosition(uInterface(uPtr(LocationTracker::_locationTracker_), ::TYPES[25/*Fuse.GeoLocation.ILocationTracker*/]));
    }

    return _lastLocation;
}

// public generated void add_LocationChanged(Uno.Action<Fuse.GeoLocation.Location> value) [instance] :539
void LocationTracker::add_LocationChanged(uDelegate* value)
{
    LocationChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(LocationChanged1, value), ::TYPES[21/*Uno.Action<Fuse.GeoLocation.Location>*/]);
}

// public generated void remove_LocationChanged(Uno.Action<Fuse.GeoLocation.Location> value) [instance] :539
void LocationTracker::remove_LocationChanged(uDelegate* value)
{
    LocationChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(LocationChanged1, value), ::TYPES[21/*Uno.Action<Fuse.GeoLocation.Location>*/]);
}

// public generated void add_LocationError(Uno.Action<string> value) [instance] :541
void LocationTracker::add_LocationError(uDelegate* value)
{
    LocationError1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(LocationError1, value), ::TYPES[22/*Uno.Action<string>*/]);
}

// public generated void remove_LocationError(Uno.Action<string> value) [instance] :541
void LocationTracker::remove_LocationError(uDelegate* value)
{
    LocationError1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(LocationError1, value), ::TYPES[22/*Uno.Action<string>*/]);
}

// private void OnLocationChanged(Fuse.GeoLocation.Location newLocation) [instance] :563
void LocationTracker::OnLocationChanged(::g::Fuse::GeoLocation::Location* newLocation)
{
    if (::g::Uno::Delegate::op_Inequality(LocationChanged1, NULL))
        uPtr(LocationChanged1)->InvokeVoid(newLocation);
}

// private void OnLocationError(Uno.Exception error) [instance] :569
void LocationTracker::OnLocationError(::g::Uno::Exception* error)
{
    if (::g::Uno::Delegate::op_Inequality(LocationError1, NULL))
        uPtr(LocationError1)->InvokeVoid(uPtr(error)->Message());
}

// public void StartListening([int minimumReportInterval], [double desiredAccuracyInMeters]) [instance] :575
void LocationTracker::StartListening(int minimumReportInterval, double desiredAccuracyInMeters)
{
    if (!_isReady)
    {
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(_bufferedCalls), ::TYPES[34/*Uno.Collections.ICollection<Fuse.GeoLocation.LocationTracker.BufferedCall>*/]), (uObject*)LocationTracker__StartListeningCall::New1(uDelegate::New(::TYPES[21/*Uno.Action<Fuse.GeoLocation.Location>*/], (void*)LocationTracker__OnLocationChanged_fn, this), uDelegate::New(::TYPES[7/*Uno.Action<Uno.Exception>*/], (void*)LocationTracker__OnLocationError_fn, this), minimumReportInterval, desiredAccuracyInMeters));
        return;
    }

    ::g::Fuse::GeoLocation::ILocationTracker::RequestAuthorization(uInterface(uPtr(LocationTracker::_locationTracker_), ::TYPES[25/*Fuse.GeoLocation.ILocationTracker*/]), AuthorizationType());
    ::g::Fuse::GeoLocation::ILocationTracker::StartListening(uInterface(uPtr(LocationTracker::_locationTracker_), ::TYPES[25/*Fuse.GeoLocation.ILocationTracker*/]), uDelegate::New(::TYPES[21/*Uno.Action<Fuse.GeoLocation.Location>*/], (void*)LocationTracker__OnLocationChanged_fn, this), uDelegate::New(::TYPES[7/*Uno.Action<Uno.Exception>*/], (void*)LocationTracker__OnLocationError_fn, this), minimumReportInterval, desiredAccuracyInMeters);
}

// public void StopListening() [instance] :587
void LocationTracker::StopListening()
{
    if (!_isReady)
    {
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(_bufferedCalls), ::TYPES[34/*Uno.Collections.ICollection<Fuse.GeoLocation.LocationTracker.BufferedCall>*/]), (uObject*)LocationTracker__StopListeningCall::New1());
        return;
    }

    ::g::Fuse::GeoLocation::ILocationTracker::StopListening(uInterface(uPtr(LocationTracker::_locationTracker_), ::TYPES[25/*Fuse.GeoLocation.ILocationTracker*/]));
}

// public LocationTracker New() [static] :510
LocationTracker* LocationTracker::New1()
{
    LocationTracker* obj2 = (LocationTracker*)uNew(LocationTracker_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /Users/a/Library/Application Support/Fusetools/Packages/Fuse.GeoLocation/1.2.1/android/$.uno
// --------------------------------------------------------------------------------------------

// internal sealed extern class PromiseListener :285
// {
static void PromiseListener_build(uType* type)
{
    ::STRINGS[21] = uString::Const("Location request timed out");
    ::TYPES[8] = ::g::Uno::Action1_typeof()->MakeType(::g::Java::Object_typeof(), NULL);
    ::TYPES[28] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::GeoLocation::PromiseListener, _listener), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::GeoLocation::PromiseListener, _locationManager), 0,
        ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), NULL), offsetof(::g::Fuse::GeoLocation::PromiseListener, _promise), 0);
}

uType* PromiseListener_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(PromiseListener);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.GeoLocation.PromiseListener", options);
    type->fp_build_ = PromiseListener_build;
    return type;
}

// public PromiseListener(Java.Object locationManagerHandle, double timeout, Uno.Threading.Promise<Fuse.GeoLocation.Location> promise) :290
void PromiseListener__ctor__fn(PromiseListener* __this, ::g::Java::Object* locationManagerHandle, double* timeout, ::g::Uno::Threading::Promise* promise)
{
    __this->ctor_(locationManagerHandle, *timeout, promise);
}

// private static Java.Object CreateListener(Uno.Action<Java.Object> onLocationChanged) :325
void PromiseListener__CreateListener_fn(uDelegate* onLocationChanged, ::g::Java::Object** __retval)
{
    *__retval = PromiseListener::CreateListener(onLocationChanged);
}

// public PromiseListener New(Java.Object locationManagerHandle, double timeout, Uno.Threading.Promise<Fuse.GeoLocation.Location> promise) :290
void PromiseListener__New1_fn(::g::Java::Object* locationManagerHandle, double* timeout, ::g::Uno::Threading::Promise* promise, PromiseListener** __retval)
{
    *__retval = PromiseListener::New1(locationManagerHandle, *timeout, promise);
}

// private void OnLocationChanged(Java.Object location) :305
void PromiseListener__OnLocationChanged_fn(PromiseListener* __this, ::g::Java::Object* location)
{
    __this->OnLocationChanged(location);
}

// private void OnTimeout() :298
void PromiseListener__OnTimeout_fn(PromiseListener* __this)
{
    __this->OnTimeout();
}

// private static void StartUpdatesWithTimer(Java.Object locationManager, Java.Object listener, Uno.Action onTimeout, int timeout) :331
void PromiseListener__StartUpdatesWithTimer_fn(::g::Java::Object* locationManager, ::g::Java::Object* listener, uDelegate* onTimeout, int* timeout)
{
    PromiseListener::StartUpdatesWithTimer(locationManager, listener, onTimeout, *timeout);
}

// private static void StopUpdate(Java.Object locationManager, Java.Object listener) :313
void PromiseListener__StopUpdate_fn(::g::Java::Object* locationManager, ::g::Java::Object* listener)
{
    PromiseListener::StopUpdate(locationManager, listener);
}

// public PromiseListener(Java.Object locationManagerHandle, double timeout, Uno.Threading.Promise<Fuse.GeoLocation.Location> promise) [instance] :290
void PromiseListener::ctor_(::g::Java::Object* locationManagerHandle, double timeout, ::g::Uno::Threading::Promise* promise)
{
    _locationManager = locationManagerHandle;
    _promise = promise;
    _listener = PromiseListener::CreateListener(uDelegate::New(::TYPES[8/*Uno.Action<Java.Object>*/], (void*)PromiseListener__OnLocationChanged_fn, this));
    PromiseListener::StartUpdatesWithTimer(_locationManager, _listener, uDelegate::New(::TYPES[28/*Uno.Action*/], (void*)PromiseListener__OnTimeout_fn, this), (int)timeout);
}

// private void OnLocationChanged(Java.Object location) [instance] :305
void PromiseListener::OnLocationChanged(::g::Java::Object* location)
{
    if (uPtr(_promise)->State() != 0)
        return;

    PromiseListener::StopUpdate(_locationManager, _listener);
    ::g::Uno::Threading::Promise__Resolve_fn(uPtr(_promise), ::g::Fuse::GeoLocation::Android::LocationHelpers::ConvertLocation(location));
}

// private void OnTimeout() [instance] :298
void PromiseListener::OnTimeout()
{
    if (uPtr(_promise)->State() != 0)
        return;

    PromiseListener::StopUpdate(_locationManager, _listener);
    uPtr(_promise)->Reject(::g::Uno::Exception::New2(::STRINGS[21/*"Location re...*/]));
}

// private static Java.Object CreateListener(Uno.Action<Java.Object> onLocationChanged) [static] :325
::g::Java::Object* PromiseListener::CreateListener(uDelegate* onLocationChanged)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateListener425", "(Lcom/foreign/Uno/Action_Object;)Ljava/lang/Object;");
        uDelegate* _uonLocationChanged=onLocationChanged;
        jobject _onLocationChanged = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uonLocationChanged, "com.foreign.Uno.Action_Object");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_onLocationChanged);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_onLocationChanged!=NULL) { U_JNIVAR->DeleteLocalRef(_onLocationChanged); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public PromiseListener New(Java.Object locationManagerHandle, double timeout, Uno.Threading.Promise<Fuse.GeoLocation.Location> promise) [static] :290
PromiseListener* PromiseListener::New1(::g::Java::Object* locationManagerHandle, double timeout, ::g::Uno::Threading::Promise* promise)
{
    PromiseListener* obj1 = (PromiseListener*)uNew(PromiseListener_typeof());
    obj1->ctor_(locationManagerHandle, timeout, promise);
    return obj1;
}

// private static void StartUpdatesWithTimer(Java.Object locationManager, Java.Object listener, Uno.Action onTimeout, int timeout) [static] :331
void PromiseListener::StartUpdatesWithTimer(::g::Java::Object* locationManager, ::g::Java::Object* listener, uDelegate* onTimeout, int timeout)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "StartUpdatesWithTimer426", "(Ljava/lang/Object;Ljava/lang/Object;Lcom/foreign/Uno/Action;I)V");
        ::g::Java::Object* _ulocationManager=locationManager;
        jobject _locationManager = (_ulocationManager==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ulocationManager, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ulistener=listener;
        jobject _listener = (_ulistener==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ulistener, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uDelegate* _uonTimeout=onTimeout;
        jobject _onTimeout = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uonTimeout, "com.foreign.Uno.Action");
        int _utimeout=timeout;
        jint _timeout = (jint)_utimeout;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_locationManager,_listener,_onTimeout,_timeout);
        
        if (_locationManager!=NULL) { U_JNIVAR->DeleteLocalRef(_locationManager); }
        if (_listener!=NULL) { U_JNIVAR->DeleteLocalRef(_listener); }
        if (_onTimeout!=NULL) { U_JNIVAR->DeleteLocalRef(_onTimeout); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void StopUpdate(Java.Object locationManager, Java.Object listener) [static] :313
void PromiseListener::StopUpdate(::g::Java::Object* locationManager, ::g::Java::Object* listener)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "StopUpdate427", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _ulocationManager=locationManager;
        jobject _locationManager = (_ulocationManager==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ulocationManager, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ulistener=listener;
        jobject _listener = (_ulistener==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ulistener, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_locationManager,_listener);
        
        if (_locationManager!=NULL) { U_JNIVAR->DeleteLocalRef(_locationManager); }
        if (_listener!=NULL) { U_JNIVAR->DeleteLocalRef(_listener); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /Users/a/Library/Application Support/Fusetools/Packages/Fuse.GeoLocation/1.2.1/$.uno
// ------------------------------------------------------------------------------------

// private sealed class LocationTracker.StartListeningCall :429
// {
static void LocationTracker__StartListeningCall_build(uType* type)
{
    ::TYPES[25] = ::g::Fuse::GeoLocation::ILocationTracker_typeof();
    type->SetInterfaces(
        ::g::Fuse::GeoLocation::LocationTracker__BufferedCall_typeof(), offsetof(LocationTracker__StartListeningCall_type, interface0));
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::GeoLocation::LocationTracker__StartListeningCall, desiredAccuracyInMeters), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::GeoLocation::LocationTracker__StartListeningCall, minimumReportInterval), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof(), NULL), offsetof(::g::Fuse::GeoLocation::LocationTracker__StartListeningCall, onLocationChanged), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL), offsetof(::g::Fuse::GeoLocation::LocationTracker__StartListeningCall, onLocationError), 0);
}

LocationTracker__StartListeningCall_type* LocationTracker__StartListeningCall_typeof()
{
    static uSStrong<LocationTracker__StartListeningCall_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LocationTracker__StartListeningCall);
    options.TypeSize = sizeof(LocationTracker__StartListeningCall_type);
    type = (LocationTracker__StartListeningCall_type*)uClassType::New("Fuse.GeoLocation.LocationTracker.StartListeningCall", options);
    type->fp_build_ = LocationTracker__StartListeningCall_build;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*))LocationTracker__StartListeningCall__Apply_fn;
    return type;
}

// public StartListeningCall(Uno.Action<Fuse.GeoLocation.Location> onLocationChanged, Uno.Action<Uno.Exception> onLocationError, int minimumReportInterval, double desiredAccuracyInMeters) :435
void LocationTracker__StartListeningCall__ctor__fn(LocationTracker__StartListeningCall* __this, uDelegate* onLocationChanged1, uDelegate* onLocationError1, int* minimumReportInterval1, double* desiredAccuracyInMeters1)
{
    __this->ctor_(onLocationChanged1, onLocationError1, *minimumReportInterval1, *desiredAccuracyInMeters1);
}

// public void Apply(Fuse.GeoLocation.ILocationTracker tracker) :442
void LocationTracker__StartListeningCall__Apply_fn(LocationTracker__StartListeningCall* __this, uObject* tracker)
{
    __this->Apply(tracker);
}

// public StartListeningCall New(Uno.Action<Fuse.GeoLocation.Location> onLocationChanged, Uno.Action<Uno.Exception> onLocationError, int minimumReportInterval, double desiredAccuracyInMeters) :435
void LocationTracker__StartListeningCall__New1_fn(uDelegate* onLocationChanged1, uDelegate* onLocationError1, int* minimumReportInterval1, double* desiredAccuracyInMeters1, LocationTracker__StartListeningCall** __retval)
{
    *__retval = LocationTracker__StartListeningCall::New1(onLocationChanged1, onLocationError1, *minimumReportInterval1, *desiredAccuracyInMeters1);
}

// public StartListeningCall(Uno.Action<Fuse.GeoLocation.Location> onLocationChanged, Uno.Action<Uno.Exception> onLocationError, int minimumReportInterval, double desiredAccuracyInMeters) [instance] :435
void LocationTracker__StartListeningCall::ctor_(uDelegate* onLocationChanged1, uDelegate* onLocationError1, int minimumReportInterval1, double desiredAccuracyInMeters1)
{
    minimumReportInterval = minimumReportInterval1;
    desiredAccuracyInMeters = desiredAccuracyInMeters1;
    onLocationError = onLocationError1;
    onLocationChanged = onLocationChanged1;
}

// public void Apply(Fuse.GeoLocation.ILocationTracker tracker) [instance] :442
void LocationTracker__StartListeningCall::Apply(uObject* tracker)
{
    ::g::Fuse::GeoLocation::ILocationTracker::StartListening(uInterface(uPtr(tracker), ::TYPES[25/*Fuse.GeoLocation.ILocationTracker*/]), onLocationChanged, onLocationError, minimumReportInterval, desiredAccuracyInMeters);
}

// public StartListeningCall New(Uno.Action<Fuse.GeoLocation.Location> onLocationChanged, Uno.Action<Uno.Exception> onLocationError, int minimumReportInterval, double desiredAccuracyInMeters) [static] :435
LocationTracker__StartListeningCall* LocationTracker__StartListeningCall::New1(uDelegate* onLocationChanged1, uDelegate* onLocationError1, int minimumReportInterval1, double desiredAccuracyInMeters1)
{
    LocationTracker__StartListeningCall* obj1 = (LocationTracker__StartListeningCall*)uNew(LocationTracker__StartListeningCall_typeof());
    obj1->ctor_(onLocationChanged1, onLocationError1, minimumReportInterval1, desiredAccuracyInMeters1);
    return obj1;
}
// }

// /Users/a/Library/Application Support/Fusetools/Packages/Fuse.GeoLocation/1.2.1/$.uno
// ------------------------------------------------------------------------------------

// private sealed class LocationTracker.StopListeningCall :448
// {
static void LocationTracker__StopListeningCall_build(uType* type)
{
    ::TYPES[25] = ::g::Fuse::GeoLocation::ILocationTracker_typeof();
    type->SetInterfaces(
        ::g::Fuse::GeoLocation::LocationTracker__BufferedCall_typeof(), offsetof(LocationTracker__StopListeningCall_type, interface0));
}

LocationTracker__StopListeningCall_type* LocationTracker__StopListeningCall_typeof()
{
    static uSStrong<LocationTracker__StopListeningCall_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LocationTracker__StopListeningCall);
    options.TypeSize = sizeof(LocationTracker__StopListeningCall_type);
    type = (LocationTracker__StopListeningCall_type*)uClassType::New("Fuse.GeoLocation.LocationTracker.StopListeningCall", options);
    type->fp_build_ = LocationTracker__StopListeningCall_build;
    type->fp_ctor_ = (void*)LocationTracker__StopListeningCall__New1_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*))LocationTracker__StopListeningCall__Apply_fn;
    return type;
}

// public StopListeningCall() :450
void LocationTracker__StopListeningCall__ctor__fn(LocationTracker__StopListeningCall* __this)
{
    __this->ctor_();
}

// public void Apply(Fuse.GeoLocation.ILocationTracker tracker) :453
void LocationTracker__StopListeningCall__Apply_fn(LocationTracker__StopListeningCall* __this, uObject* tracker)
{
    __this->Apply(tracker);
}

// public StopListeningCall New() :450
void LocationTracker__StopListeningCall__New1_fn(LocationTracker__StopListeningCall** __retval)
{
    *__retval = LocationTracker__StopListeningCall::New1();
}

// public StopListeningCall() [instance] :450
void LocationTracker__StopListeningCall::ctor_()
{
}

// public void Apply(Fuse.GeoLocation.ILocationTracker tracker) [instance] :453
void LocationTracker__StopListeningCall::Apply(uObject* tracker)
{
    ::g::Fuse::GeoLocation::ILocationTracker::StopListening(uInterface(uPtr(tracker), ::TYPES[25/*Fuse.GeoLocation.ILocationTracker*/]));
}

// public StopListeningCall New() [static] :450
LocationTracker__StopListeningCall* LocationTracker__StopListeningCall::New1()
{
    LocationTracker__StopListeningCall* obj1 = (LocationTracker__StopListeningCall*)uNew(LocationTracker__StopListeningCall_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}} // ::g::Fuse::GeoLocation
