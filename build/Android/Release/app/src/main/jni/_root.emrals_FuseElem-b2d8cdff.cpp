// This file was generated based on '.uno/ux13/emrals.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.emrals_FuseElem-b2d8cdff.h>
#include <Fuse.Elements.Element.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class emrals_FuseElementsElement_Width_Property :93
// {
static void emrals_FuseElementsElement_Width_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Elements.Element*/], offsetof(emrals_FuseElementsElement_Width_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* emrals_FuseElementsElement_Width_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(emrals_FuseElementsElement_Width_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("emrals_FuseElementsElement_Width_Property", options);
    type->fp_build_ = emrals_FuseElementsElement_Width_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))emrals_FuseElementsElement_Width_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))emrals_FuseElementsElement_Width_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))emrals_FuseElementsElement_Width_Property__Set1_fn;
    return type;
}

// public emrals_FuseElementsElement_Width_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) :96
void emrals_FuseElementsElement_Width_Property__ctor_3_fn(emrals_FuseElementsElement_Width_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Uno.UX.Size Get(Uno.UX.PropertyObject obj) :98
void emrals_FuseElementsElement_Width_Property__Get1_fn(emrals_FuseElementsElement_Width_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Size* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[0/*Fuse.Elements.Element*/]))->Width(), void();
}

// public emrals_FuseElementsElement_Width_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) :96
void emrals_FuseElementsElement_Width_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, emrals_FuseElementsElement_Width_Property** __retval)
{
    *__retval = emrals_FuseElementsElement_Width_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :97
void emrals_FuseElementsElement_Width_Property__get_Object_fn(emrals_FuseElementsElement_Width_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Uno.UX.Size v, Uno.UX.IPropertyListener origin) :99
void emrals_FuseElementsElement_Width_Property__Set1_fn(emrals_FuseElementsElement_Width_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Size* v, uObject* origin)
{
    ::g::Uno::UX::Size v_ = *v;
    uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[0/*Fuse.Elements.Element*/]))->Width(v_);
}

// public emrals_FuseElementsElement_Width_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) [instance] :96
void emrals_FuseElementsElement_Width_Property::ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public emrals_FuseElementsElement_Width_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) [static] :96
emrals_FuseElementsElement_Width_Property* emrals_FuseElementsElement_Width_Property::New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    emrals_FuseElementsElement_Width_Property* obj1 = (emrals_FuseElementsElement_Width_Property*)uNew(emrals_FuseElementsElement_Width_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
