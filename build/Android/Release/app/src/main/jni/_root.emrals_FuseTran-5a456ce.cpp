// This file was generated based on '.uno/ux11/emrals.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.emrals_FuseTran-5a456ce.h>
#include <Fuse.Translation.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class emrals_FuseTranslation_Y_Property :183
// {
static void emrals_FuseTranslation_Y_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Translation_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Translation*/], offsetof(::g::emrals_FuseTranslation_Y_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* emrals_FuseTranslation_Y_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(emrals_FuseTranslation_Y_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("emrals_FuseTranslation_Y_Property", options);
    type->fp_build_ = emrals_FuseTranslation_Y_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))emrals_FuseTranslation_Y_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))emrals_FuseTranslation_Y_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))emrals_FuseTranslation_Y_Property__Set1_fn;
    return type;
}

// public emrals_FuseTranslation_Y_Property(Fuse.Translation obj, Uno.UX.Selector name) :186
void emrals_FuseTranslation_Y_Property__ctor_3_fn(emrals_FuseTranslation_Y_Property* __this, ::g::Fuse::Translation* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :188
void emrals_FuseTranslation_Y_Property__Get1_fn(emrals_FuseTranslation_Y_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Translation*>(obj, ::TYPES[0/*Fuse.Translation*/]))->Y(), void();
}

// public emrals_FuseTranslation_Y_Property New(Fuse.Translation obj, Uno.UX.Selector name) :186
void emrals_FuseTranslation_Y_Property__New1_fn(::g::Fuse::Translation* obj, ::g::Uno::UX::Selector* name, emrals_FuseTranslation_Y_Property** __retval)
{
    *__retval = emrals_FuseTranslation_Y_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :187
void emrals_FuseTranslation_Y_Property__get_Object_fn(emrals_FuseTranslation_Y_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :189
void emrals_FuseTranslation_Y_Property__Set1_fn(emrals_FuseTranslation_Y_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Translation*>(obj, ::TYPES[0/*Fuse.Translation*/]))->Y(v_);
}

// public emrals_FuseTranslation_Y_Property(Fuse.Translation obj, Uno.UX.Selector name) [instance] :186
void emrals_FuseTranslation_Y_Property::ctor_3(::g::Fuse::Translation* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public emrals_FuseTranslation_Y_Property New(Fuse.Translation obj, Uno.UX.Selector name) [static] :186
emrals_FuseTranslation_Y_Property* emrals_FuseTranslation_Y_Property::New1(::g::Fuse::Translation* obj, ::g::Uno::UX::Selector name)
{
    emrals_FuseTranslation_Y_Property* obj1 = (emrals_FuseTranslation_Y_Property*)uNew(emrals_FuseTranslation_Y_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g