// This file was generated based on '.uno/ux11/emrals.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.emrals_Selectab-cc0c4a39.h>
#include <_root.SelectableRectangle.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class emrals_SelectableRectangle_ID_Property :293
// {
static void emrals_SelectableRectangle_ID_Property_build(uType* type)
{
    ::TYPES[0] = ::g::SelectableRectangle_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*SelectableRectangle*/], offsetof(::g::emrals_SelectableRectangle_ID_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* emrals_SelectableRectangle_ID_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(emrals_SelectableRectangle_ID_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("emrals_SelectableRectangle_ID_Property", options);
    type->fp_build_ = emrals_SelectableRectangle_ID_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))emrals_SelectableRectangle_ID_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))emrals_SelectableRectangle_ID_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))emrals_SelectableRectangle_ID_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))emrals_SelectableRectangle_ID_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public emrals_SelectableRectangle_ID_Property(SelectableRectangle obj, Uno.UX.Selector name) :296
void emrals_SelectableRectangle_ID_Property__ctor_3_fn(emrals_SelectableRectangle_ID_Property* __this, ::g::SelectableRectangle* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :298
void emrals_SelectableRectangle_ID_Property__Get1_fn(emrals_SelectableRectangle_ID_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    return *__retval = uPtr(uCast< ::g::SelectableRectangle*>(obj, ::TYPES[0/*SelectableRectangle*/]))->ID(), void();
}

// public emrals_SelectableRectangle_ID_Property New(SelectableRectangle obj, Uno.UX.Selector name) :296
void emrals_SelectableRectangle_ID_Property__New1_fn(::g::SelectableRectangle* obj, ::g::Uno::UX::Selector* name, emrals_SelectableRectangle_ID_Property** __retval)
{
    *__retval = emrals_SelectableRectangle_ID_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :297
void emrals_SelectableRectangle_ID_Property__get_Object_fn(emrals_SelectableRectangle_ID_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :299
void emrals_SelectableRectangle_ID_Property__Set1_fn(emrals_SelectableRectangle_ID_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uPtr(uCast< ::g::SelectableRectangle*>(obj, ::TYPES[0/*SelectableRectangle*/]))->SetID(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :300
void emrals_SelectableRectangle_ID_Property__get_SupportsOriginSetter_fn(emrals_SelectableRectangle_ID_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public emrals_SelectableRectangle_ID_Property(SelectableRectangle obj, Uno.UX.Selector name) [instance] :296
void emrals_SelectableRectangle_ID_Property::ctor_3(::g::SelectableRectangle* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public emrals_SelectableRectangle_ID_Property New(SelectableRectangle obj, Uno.UX.Selector name) [static] :296
emrals_SelectableRectangle_ID_Property* emrals_SelectableRectangle_ID_Property::New1(::g::SelectableRectangle* obj, ::g::Uno::UX::Selector name)
{
    emrals_SelectableRectangle_ID_Property* obj1 = (emrals_SelectableRectangle_ID_Property*)uNew(emrals_SelectableRectangle_ID_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
