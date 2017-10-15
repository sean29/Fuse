// This file was generated based on '.uno/ux11/emrals.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.emrals_MyLoadin-aa065d93.h>
#include <_root.MyLoadingIndicator3.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class emrals_MyLoadingIndicator3_ThemeColor_Property :311
// {
static void emrals_MyLoadingIndicator3_ThemeColor_Property_build(uType* type)
{
    ::TYPES[0] = ::g::MyLoadingIndicator3_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*MyLoadingIndicator3*/], offsetof(::g::emrals_MyLoadingIndicator3_ThemeColor_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* emrals_MyLoadingIndicator3_ThemeColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(emrals_MyLoadingIndicator3_ThemeColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("emrals_MyLoadingIndicator3_ThemeColor_Property", options);
    type->fp_build_ = emrals_MyLoadingIndicator3_ThemeColor_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))emrals_MyLoadingIndicator3_ThemeColor_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))emrals_MyLoadingIndicator3_ThemeColor_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))emrals_MyLoadingIndicator3_ThemeColor_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))emrals_MyLoadingIndicator3_ThemeColor_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public emrals_MyLoadingIndicator3_ThemeColor_Property(MyLoadingIndicator3 obj, Uno.UX.Selector name) :314
void emrals_MyLoadingIndicator3_ThemeColor_Property__ctor_3_fn(emrals_MyLoadingIndicator3_ThemeColor_Property* __this, ::g::MyLoadingIndicator3* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :316
void emrals_MyLoadingIndicator3_ThemeColor_Property__Get1_fn(emrals_MyLoadingIndicator3_ThemeColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(uCast< ::g::MyLoadingIndicator3*>(obj, ::TYPES[0/*MyLoadingIndicator3*/]))->ThemeColor(), void();
}

// public emrals_MyLoadingIndicator3_ThemeColor_Property New(MyLoadingIndicator3 obj, Uno.UX.Selector name) :314
void emrals_MyLoadingIndicator3_ThemeColor_Property__New1_fn(::g::MyLoadingIndicator3* obj, ::g::Uno::UX::Selector* name, emrals_MyLoadingIndicator3_ThemeColor_Property** __retval)
{
    *__retval = emrals_MyLoadingIndicator3_ThemeColor_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :315
void emrals_MyLoadingIndicator3_ThemeColor_Property__get_Object_fn(emrals_MyLoadingIndicator3_ThemeColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :317
void emrals_MyLoadingIndicator3_ThemeColor_Property__Set1_fn(emrals_MyLoadingIndicator3_ThemeColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::MyLoadingIndicator3*>(obj, ::TYPES[0/*MyLoadingIndicator3*/]))->SetThemeColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :318
void emrals_MyLoadingIndicator3_ThemeColor_Property__get_SupportsOriginSetter_fn(emrals_MyLoadingIndicator3_ThemeColor_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public emrals_MyLoadingIndicator3_ThemeColor_Property(MyLoadingIndicator3 obj, Uno.UX.Selector name) [instance] :314
void emrals_MyLoadingIndicator3_ThemeColor_Property::ctor_3(::g::MyLoadingIndicator3* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public emrals_MyLoadingIndicator3_ThemeColor_Property New(MyLoadingIndicator3 obj, Uno.UX.Selector name) [static] :314
emrals_MyLoadingIndicator3_ThemeColor_Property* emrals_MyLoadingIndicator3_ThemeColor_Property::New1(::g::MyLoadingIndicator3* obj, ::g::Uno::UX::Selector name)
{
    emrals_MyLoadingIndicator3_ThemeColor_Property* obj1 = (emrals_MyLoadingIndicator3_ThemeColor_Property*)uNew(emrals_MyLoadingIndicator3_ThemeColor_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
