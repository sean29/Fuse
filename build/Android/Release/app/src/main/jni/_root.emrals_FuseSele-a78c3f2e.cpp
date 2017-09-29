// This file was generated based on '.uno/ux11/emrals.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.emrals_FuseSele-a78c3f2e.h>
#include <Fuse.Selection.Selection.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class emrals_FuseSelectionSelection_Values_Property :142
// {
static void emrals_FuseSelectionSelection_Values_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Selection::Selection_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Selection.Selection*/], offsetof(::g::emrals_FuseSelectionSelection_Values_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* emrals_FuseSelectionSelection_Values_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(emrals_FuseSelectionSelection_Values_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("emrals_FuseSelectionSelection_Values_Property", options);
    type->fp_build_ = emrals_FuseSelectionSelection_Values_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))emrals_FuseSelectionSelection_Values_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))emrals_FuseSelectionSelection_Values_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))emrals_FuseSelectionSelection_Values_Property__Set1_fn;
    return type;
}

// public emrals_FuseSelectionSelection_Values_Property(Fuse.Selection.Selection obj, Uno.UX.Selector name) :145
void emrals_FuseSelectionSelection_Values_Property__ctor_3_fn(emrals_FuseSelectionSelection_Values_Property* __this, ::g::Fuse::Selection::Selection* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed object Get(Uno.UX.PropertyObject obj) :147
void emrals_FuseSelectionSelection_Values_Property__Get1_fn(emrals_FuseSelectionSelection_Values_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Selection::Selection*>(obj, ::TYPES[0/*Fuse.Selection.Selection*/]))->Values(), void();
}

// public emrals_FuseSelectionSelection_Values_Property New(Fuse.Selection.Selection obj, Uno.UX.Selector name) :145
void emrals_FuseSelectionSelection_Values_Property__New1_fn(::g::Fuse::Selection::Selection* obj, ::g::Uno::UX::Selector* name, emrals_FuseSelectionSelection_Values_Property** __retval)
{
    *__retval = emrals_FuseSelectionSelection_Values_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :146
void emrals_FuseSelectionSelection_Values_Property__get_Object_fn(emrals_FuseSelectionSelection_Values_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :148
void emrals_FuseSelectionSelection_Values_Property__Set1_fn(emrals_FuseSelectionSelection_Values_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Selection::Selection*>(obj, ::TYPES[0/*Fuse.Selection.Selection*/]))->Values(v);
}

// public emrals_FuseSelectionSelection_Values_Property(Fuse.Selection.Selection obj, Uno.UX.Selector name) [instance] :145
void emrals_FuseSelectionSelection_Values_Property::ctor_3(::g::Fuse::Selection::Selection* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public emrals_FuseSelectionSelection_Values_Property New(Fuse.Selection.Selection obj, Uno.UX.Selector name) [static] :145
emrals_FuseSelectionSelection_Values_Property* emrals_FuseSelectionSelection_Values_Property::New1(::g::Fuse::Selection::Selection* obj, ::g::Uno::UX::Selector name)
{
    emrals_FuseSelectionSelection_Values_Property* obj1 = (emrals_FuseSelectionSelection_Values_Property*)uNew(emrals_FuseSelectionSelection_Values_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
