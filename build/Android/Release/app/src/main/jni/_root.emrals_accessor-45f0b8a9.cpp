// This file was generated based on '.uno/ux11/emrals.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.emrals_accessor-45f0b8a9.h>
#include <_root.FatButton.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[3];

namespace g{

// internal sealed class emrals_accessor_FatButton_Text :31
// {
// static emrals_accessor_FatButton_Text() :31
static void emrals_accessor_FatButton_Text__cctor__fn(uType* __type)
{
    emrals_accessor_FatButton_Text::Singleton_ = emrals_accessor_FatButton_Text::New1();
    emrals_accessor_FatButton_Text::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Text"*/]);
}

static void emrals_accessor_FatButton_Text_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Text");
    ::TYPES[0] = ::g::FatButton_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::emrals_accessor_FatButton_Text::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::emrals_accessor_FatButton_Text::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* emrals_accessor_FatButton_Text_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(emrals_accessor_FatButton_Text);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("emrals_accessor_FatButton_Text", options);
    type->fp_build_ = emrals_accessor_FatButton_Text_build;
    type->fp_ctor_ = (void*)emrals_accessor_FatButton_Text__New1_fn;
    type->fp_cctor_ = emrals_accessor_FatButton_Text__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))emrals_accessor_FatButton_Text__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))emrals_accessor_FatButton_Text__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))emrals_accessor_FatButton_Text__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))emrals_accessor_FatButton_Text__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))emrals_accessor_FatButton_Text__get_SupportsOriginSetter_fn;
    return type;
}

// public generated emrals_accessor_FatButton_Text() :31
void emrals_accessor_FatButton_Text__ctor_1_fn(emrals_accessor_FatButton_Text* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :37
void emrals_accessor_FatButton_Text__GetAsObject_fn(emrals_accessor_FatButton_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uPtr(uCast< ::g::FatButton*>(obj, ::TYPES[0/*FatButton*/]))->Text(), void();
}

// public override sealed Uno.UX.Selector get_Name() :34
void emrals_accessor_FatButton_Text__get_Name_fn(emrals_accessor_FatButton_Text* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = emrals_accessor_FatButton_Text::_name(), void();
}

// public generated emrals_accessor_FatButton_Text New() :31
void emrals_accessor_FatButton_Text__New1_fn(emrals_accessor_FatButton_Text** __retval)
{
    *__retval = emrals_accessor_FatButton_Text::New1();
}

// public override sealed Uno.Type get_PropertyType() :36
void emrals_accessor_FatButton_Text__get_PropertyType_fn(emrals_accessor_FatButton_Text* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :38
void emrals_accessor_FatButton_Text__SetAsObject_fn(emrals_accessor_FatButton_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::FatButton*>(obj, ::TYPES[0/*FatButton*/]))->SetText(uCast<uString*>(v, ::TYPES[1/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :39
void emrals_accessor_FatButton_Text__get_SupportsOriginSetter_fn(emrals_accessor_FatButton_Text* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector emrals_accessor_FatButton_Text::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> emrals_accessor_FatButton_Text::Singleton_;

// public generated emrals_accessor_FatButton_Text() [instance] :31
void emrals_accessor_FatButton_Text::ctor_1()
{
    ctor_();
}

// public generated emrals_accessor_FatButton_Text New() [static] :31
emrals_accessor_FatButton_Text* emrals_accessor_FatButton_Text::New1()
{
    emrals_accessor_FatButton_Text* obj1 = (emrals_accessor_FatButton_Text*)uNew(emrals_accessor_FatButton_Text_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
