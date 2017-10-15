// This file was generated based on '.uno/ux13/emrals.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.emrals_FuseCont-2eba4d04.h>
#include <Fuse.Controls.MapMarker.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class emrals_FuseControlsMapMarker_Latitude_Property :251
// {
static void emrals_FuseControlsMapMarker_Latitude_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::MapMarker_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Double_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.MapMarker*/], offsetof(emrals_FuseControlsMapMarker_Latitude_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* emrals_FuseControlsMapMarker_Latitude_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(emrals_FuseControlsMapMarker_Latitude_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("emrals_FuseControlsMapMarker_Latitude_Property", options);
    type->fp_build_ = emrals_FuseControlsMapMarker_Latitude_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))emrals_FuseControlsMapMarker_Latitude_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))emrals_FuseControlsMapMarker_Latitude_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))emrals_FuseControlsMapMarker_Latitude_Property__Set1_fn;
    return type;
}

// public emrals_FuseControlsMapMarker_Latitude_Property(Fuse.Controls.MapMarker obj, Uno.UX.Selector name) :254
void emrals_FuseControlsMapMarker_Latitude_Property__ctor_3_fn(emrals_FuseControlsMapMarker_Latitude_Property* __this, ::g::Fuse::Controls::MapMarker* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed double Get(Uno.UX.PropertyObject obj) :256
void emrals_FuseControlsMapMarker_Latitude_Property__Get1_fn(emrals_FuseControlsMapMarker_Latitude_Property* __this, ::g::Uno::UX::PropertyObject* obj, double* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::MapMarker*>(obj, ::TYPES[0/*Fuse.Controls.MapMarker*/]))->Latitude(), void();
}

// public emrals_FuseControlsMapMarker_Latitude_Property New(Fuse.Controls.MapMarker obj, Uno.UX.Selector name) :254
void emrals_FuseControlsMapMarker_Latitude_Property__New1_fn(::g::Fuse::Controls::MapMarker* obj, ::g::Uno::UX::Selector* name, emrals_FuseControlsMapMarker_Latitude_Property** __retval)
{
    *__retval = emrals_FuseControlsMapMarker_Latitude_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :255
void emrals_FuseControlsMapMarker_Latitude_Property__get_Object_fn(emrals_FuseControlsMapMarker_Latitude_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, double v, Uno.UX.IPropertyListener origin) :257
void emrals_FuseControlsMapMarker_Latitude_Property__Set1_fn(emrals_FuseControlsMapMarker_Latitude_Property* __this, ::g::Uno::UX::PropertyObject* obj, double* v, uObject* origin)
{
    double v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::MapMarker*>(obj, ::TYPES[0/*Fuse.Controls.MapMarker*/]))->Latitude(v_);
}

// public emrals_FuseControlsMapMarker_Latitude_Property(Fuse.Controls.MapMarker obj, Uno.UX.Selector name) [instance] :254
void emrals_FuseControlsMapMarker_Latitude_Property::ctor_3(::g::Fuse::Controls::MapMarker* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public emrals_FuseControlsMapMarker_Latitude_Property New(Fuse.Controls.MapMarker obj, Uno.UX.Selector name) [static] :254
emrals_FuseControlsMapMarker_Latitude_Property* emrals_FuseControlsMapMarker_Latitude_Property::New1(::g::Fuse::Controls::MapMarker* obj, ::g::Uno::UX::Selector name)
{
    emrals_FuseControlsMapMarker_Latitude_Property* obj1 = (emrals_FuseControlsMapMarker_Latitude_Property*)uNew(emrals_FuseControlsMapMarker_Latitude_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
