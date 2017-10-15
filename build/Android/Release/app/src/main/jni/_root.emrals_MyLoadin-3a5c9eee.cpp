// This file was generated based on '.uno/ux11/emrals.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.emrals_MyLoadin-3a5c9eee.h>
#include <_root.MyLoadingIndicator2.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class emrals_MyLoadingIndicator2_ThemeColor_Property :284
// {
static void emrals_MyLoadingIndicator2_ThemeColor_Property_build(uType* type)
{
    ::TYPES[0] = ::g::MyLoadingIndicator2_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*MyLoadingIndicator2*/], offsetof(::g::emrals_MyLoadingIndicator2_ThemeColor_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* emrals_MyLoadingIndicator2_ThemeColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(emrals_MyLoadingIndicator2_ThemeColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("emrals_MyLoadingIndicator2_ThemeColor_Property", options);
    type->fp_build_ = emrals_MyLoadingIndicator2_ThemeColor_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))emrals_MyLoadingIndicator2_ThemeColor_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))emrals_MyLoadingIndicator2_ThemeColor_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))emrals_MyLoadingIndicator2_ThemeColor_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))emrals_MyLoadingIndicator2_ThemeColor_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public emrals_MyLoadingIndicator2_ThemeColor_Property(MyLoadingIndicator2 obj, Uno.UX.Selector name) :287
void emrals_MyLoadingIndicator2_ThemeColor_Property__ctor_3_fn(emrals_MyLoadingIndicator2_ThemeColor_Property* __this, ::g::MyLoadingIndicator2* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :289
void emrals_MyLoadingIndicator2_ThemeColor_Property__Get1_fn(emrals_MyLoadingIndicator2_ThemeColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(uCast< ::g::MyLoadingIndicator2*>(obj, ::TYPES[0/*MyLoadingIndicator2*/]))->ThemeColor(), void();
}

// public emrals_MyLoadingIndicator2_ThemeColor_Property New(MyLoadingIndicator2 obj, Uno.UX.Selector name) :287
void emrals_MyLoadingIndicator2_ThemeColor_Property__New1_fn(::g::MyLoadingIndicator2* obj, ::g::Uno::UX::Selector* name, emrals_MyLoadingIndicator2_ThemeColor_Property** __retval)
{
    *__retval = emrals_MyLoadingIndicator2_ThemeColor_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :288
void emrals_MyLoadingIndicator2_ThemeColor_Property__get_Object_fn(emrals_MyLoadingIndicator2_ThemeColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :290
void emrals_MyLoadingIndicator2_ThemeColor_Property__Set1_fn(emrals_MyLoadingIndicator2_ThemeColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::MyLoadingIndicator2*>(obj, ::TYPES[0/*MyLoadingIndicator2*/]))->SetThemeColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :291
void emrals_MyLoadingIndicator2_ThemeColor_Property__get_SupportsOriginSetter_fn(emrals_MyLoadingIndicator2_ThemeColor_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public emrals_MyLoadingIndicator2_ThemeColor_Property(MyLoadingIndicator2 obj, Uno.UX.Selector name) [instance] :287
void emrals_MyLoadingIndicator2_ThemeColor_Property::ctor_3(::g::MyLoadingIndicator2* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public emrals_MyLoadingIndicator2_ThemeColor_Property New(MyLoadingIndicator2 obj, Uno.UX.Selector name) [static] :287
emrals_MyLoadingIndicator2_ThemeColor_Property* emrals_MyLoadingIndicator2_ThemeColor_Property::New1(::g::MyLoadingIndicator2* obj, ::g::Uno::UX::Selector name)
{
    emrals_MyLoadingIndicator2_ThemeColor_Property* obj1 = (emrals_MyLoadingIndicator2_ThemeColor_Property*)uNew(emrals_MyLoadingIndicator2_ThemeColor_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
