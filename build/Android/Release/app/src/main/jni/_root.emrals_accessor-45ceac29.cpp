// This file was generated based on '.uno/ux11/emrals.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.emrals_accessor-45ceac29.h>
#include <_root.MyLoadingIndicator3.h>
#include <Uno.Bool.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[2];

namespace g{

// internal sealed class emrals_accessor_MyLoadingIndicator3_ThemeColor :41
// {
// static emrals_accessor_MyLoadingIndicator3_ThemeColor() :41
static void emrals_accessor_MyLoadingIndicator3_ThemeColor__cctor__fn(uType* __type)
{
    emrals_accessor_MyLoadingIndicator3_ThemeColor::Singleton_ = emrals_accessor_MyLoadingIndicator3_ThemeColor::New1();
    emrals_accessor_MyLoadingIndicator3_ThemeColor::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"ThemeColor"*/]);
}

static void emrals_accessor_MyLoadingIndicator3_ThemeColor_build(uType* type)
{
    ::STRINGS[0] = uString::Const("ThemeColor");
    ::TYPES[0] = ::g::MyLoadingIndicator3_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::emrals_accessor_MyLoadingIndicator3_ThemeColor::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::emrals_accessor_MyLoadingIndicator3_ThemeColor::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* emrals_accessor_MyLoadingIndicator3_ThemeColor_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(emrals_accessor_MyLoadingIndicator3_ThemeColor);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("emrals_accessor_MyLoadingIndicator3_ThemeColor", options);
    type->fp_build_ = emrals_accessor_MyLoadingIndicator3_ThemeColor_build;
    type->fp_ctor_ = (void*)emrals_accessor_MyLoadingIndicator3_ThemeColor__New1_fn;
    type->fp_cctor_ = emrals_accessor_MyLoadingIndicator3_ThemeColor__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))emrals_accessor_MyLoadingIndicator3_ThemeColor__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))emrals_accessor_MyLoadingIndicator3_ThemeColor__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))emrals_accessor_MyLoadingIndicator3_ThemeColor__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))emrals_accessor_MyLoadingIndicator3_ThemeColor__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))emrals_accessor_MyLoadingIndicator3_ThemeColor__get_SupportsOriginSetter_fn;
    return type;
}

// public generated emrals_accessor_MyLoadingIndicator3_ThemeColor() :41
void emrals_accessor_MyLoadingIndicator3_ThemeColor__ctor_1_fn(emrals_accessor_MyLoadingIndicator3_ThemeColor* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :47
void emrals_accessor_MyLoadingIndicator3_ThemeColor__GetAsObject_fn(emrals_accessor_MyLoadingIndicator3_ThemeColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uBox(::g::Uno::Float4_typeof(), uPtr(uCast< ::g::MyLoadingIndicator3*>(obj, ::TYPES[0/*MyLoadingIndicator3*/]))->ThemeColor()), void();
}

// public override sealed Uno.UX.Selector get_Name() :44
void emrals_accessor_MyLoadingIndicator3_ThemeColor__get_Name_fn(emrals_accessor_MyLoadingIndicator3_ThemeColor* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = emrals_accessor_MyLoadingIndicator3_ThemeColor::_name(), void();
}

// public generated emrals_accessor_MyLoadingIndicator3_ThemeColor New() :41
void emrals_accessor_MyLoadingIndicator3_ThemeColor__New1_fn(emrals_accessor_MyLoadingIndicator3_ThemeColor** __retval)
{
    *__retval = emrals_accessor_MyLoadingIndicator3_ThemeColor::New1();
}

// public override sealed Uno.Type get_PropertyType() :46
void emrals_accessor_MyLoadingIndicator3_ThemeColor__get_PropertyType_fn(emrals_accessor_MyLoadingIndicator3_ThemeColor* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Float4_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :48
void emrals_accessor_MyLoadingIndicator3_ThemeColor__SetAsObject_fn(emrals_accessor_MyLoadingIndicator3_ThemeColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::MyLoadingIndicator3*>(obj, ::TYPES[0/*MyLoadingIndicator3*/]))->SetThemeColor(uUnbox< ::g::Uno::Float4>(::g::Uno::Float4_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter() :49
void emrals_accessor_MyLoadingIndicator3_ThemeColor__get_SupportsOriginSetter_fn(emrals_accessor_MyLoadingIndicator3_ThemeColor* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector emrals_accessor_MyLoadingIndicator3_ThemeColor::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> emrals_accessor_MyLoadingIndicator3_ThemeColor::Singleton_;

// public generated emrals_accessor_MyLoadingIndicator3_ThemeColor() [instance] :41
void emrals_accessor_MyLoadingIndicator3_ThemeColor::ctor_1()
{
    ctor_();
}

// public generated emrals_accessor_MyLoadingIndicator3_ThemeColor New() [static] :41
emrals_accessor_MyLoadingIndicator3_ThemeColor* emrals_accessor_MyLoadingIndicator3_ThemeColor::New1()
{
    emrals_accessor_MyLoadingIndicator3_ThemeColor* obj1 = (emrals_accessor_MyLoadingIndicator3_ThemeColor*)uNew(emrals_accessor_MyLoadingIndicator3_ThemeColor_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
