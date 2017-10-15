// This file was generated based on '.uno/ux13/emrals.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.emrals_accessor-5ad0d9ea.h>
#include <_root.MyLoadingIndicator.h>
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

// internal sealed class emrals_accessor_MyLoadingIndicator_ThemeColor :1
// {
// static generated emrals_accessor_MyLoadingIndicator_ThemeColor() :1
static void emrals_accessor_MyLoadingIndicator_ThemeColor__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    emrals_accessor_MyLoadingIndicator_ThemeColor::Singleton_ = emrals_accessor_MyLoadingIndicator_ThemeColor::New1();
    emrals_accessor_MyLoadingIndicator_ThemeColor::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"ThemeColor"*/]);
}

static void emrals_accessor_MyLoadingIndicator_ThemeColor_build(uType* type)
{
    ::STRINGS[0] = uString::Const("ThemeColor");
    ::TYPES[0] = ::g::MyLoadingIndicator_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&emrals_accessor_MyLoadingIndicator_ThemeColor::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&emrals_accessor_MyLoadingIndicator_ThemeColor::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* emrals_accessor_MyLoadingIndicator_ThemeColor_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(emrals_accessor_MyLoadingIndicator_ThemeColor);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("emrals_accessor_MyLoadingIndicator_ThemeColor", options);
    type->fp_build_ = emrals_accessor_MyLoadingIndicator_ThemeColor_build;
    type->fp_ctor_ = (void*)emrals_accessor_MyLoadingIndicator_ThemeColor__New1_fn;
    type->fp_cctor_ = emrals_accessor_MyLoadingIndicator_ThemeColor__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))emrals_accessor_MyLoadingIndicator_ThemeColor__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))emrals_accessor_MyLoadingIndicator_ThemeColor__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))emrals_accessor_MyLoadingIndicator_ThemeColor__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))emrals_accessor_MyLoadingIndicator_ThemeColor__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))emrals_accessor_MyLoadingIndicator_ThemeColor__get_SupportsOriginSetter_fn;
    return type;
}

// public generated emrals_accessor_MyLoadingIndicator_ThemeColor() :1
void emrals_accessor_MyLoadingIndicator_ThemeColor__ctor_1_fn(emrals_accessor_MyLoadingIndicator_ThemeColor* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :7
void emrals_accessor_MyLoadingIndicator_ThemeColor__GetAsObject_fn(emrals_accessor_MyLoadingIndicator_ThemeColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uBox(::g::Uno::Float4_typeof(), uPtr(uCast< ::g::MyLoadingIndicator*>(obj, ::TYPES[0/*MyLoadingIndicator*/]))->ThemeColor()), void();
}

// public override sealed Uno.UX.Selector get_Name() :4
void emrals_accessor_MyLoadingIndicator_ThemeColor__get_Name_fn(emrals_accessor_MyLoadingIndicator_ThemeColor* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = emrals_accessor_MyLoadingIndicator_ThemeColor::_name_, void();
}

// public generated emrals_accessor_MyLoadingIndicator_ThemeColor New() :1
void emrals_accessor_MyLoadingIndicator_ThemeColor__New1_fn(emrals_accessor_MyLoadingIndicator_ThemeColor** __retval)
{
    *__retval = emrals_accessor_MyLoadingIndicator_ThemeColor::New1();
}

// public override sealed Uno.Type get_PropertyType() :6
void emrals_accessor_MyLoadingIndicator_ThemeColor__get_PropertyType_fn(emrals_accessor_MyLoadingIndicator_ThemeColor* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Float4_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :8
void emrals_accessor_MyLoadingIndicator_ThemeColor__SetAsObject_fn(emrals_accessor_MyLoadingIndicator_ThemeColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::MyLoadingIndicator*>(obj, ::TYPES[0/*MyLoadingIndicator*/]))->SetThemeColor(uUnbox< ::g::Uno::Float4>(::g::Uno::Float4_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter() :9
void emrals_accessor_MyLoadingIndicator_ThemeColor__get_SupportsOriginSetter_fn(emrals_accessor_MyLoadingIndicator_ThemeColor* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector emrals_accessor_MyLoadingIndicator_ThemeColor::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> emrals_accessor_MyLoadingIndicator_ThemeColor::Singleton_;

// public generated emrals_accessor_MyLoadingIndicator_ThemeColor() [instance] :1
void emrals_accessor_MyLoadingIndicator_ThemeColor::ctor_1()
{
    ctor_();
}

// public generated emrals_accessor_MyLoadingIndicator_ThemeColor New() [static] :1
emrals_accessor_MyLoadingIndicator_ThemeColor* emrals_accessor_MyLoadingIndicator_ThemeColor::New1()
{
    emrals_accessor_MyLoadingIndicator_ThemeColor* obj1 = (emrals_accessor_MyLoadingIndicator_ThemeColor*)uNew(emrals_accessor_MyLoadingIndicator_ThemeColor_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
