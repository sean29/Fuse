// This file was generated based on '.uno/ux13/emrals.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.emrals_FuseDraw-d3a711fd.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class emrals_FuseDrawingImageFill_Url_Property :117
// {
static void emrals_FuseDrawingImageFill_Url_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Drawing::ImageFill_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Drawing.ImageFill*/], offsetof(emrals_FuseDrawingImageFill_Url_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* emrals_FuseDrawingImageFill_Url_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(emrals_FuseDrawingImageFill_Url_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("emrals_FuseDrawingImageFill_Url_Property", options);
    type->fp_build_ = emrals_FuseDrawingImageFill_Url_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))emrals_FuseDrawingImageFill_Url_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))emrals_FuseDrawingImageFill_Url_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))emrals_FuseDrawingImageFill_Url_Property__Set1_fn;
    return type;
}

// public emrals_FuseDrawingImageFill_Url_Property(Fuse.Drawing.ImageFill obj, Uno.UX.Selector name) :120
void emrals_FuseDrawingImageFill_Url_Property__ctor_3_fn(emrals_FuseDrawingImageFill_Url_Property* __this, ::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :122
void emrals_FuseDrawingImageFill_Url_Property__Get1_fn(emrals_FuseDrawingImageFill_Url_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Drawing::ImageFill*>(obj, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))->Url(), void();
}

// public emrals_FuseDrawingImageFill_Url_Property New(Fuse.Drawing.ImageFill obj, Uno.UX.Selector name) :120
void emrals_FuseDrawingImageFill_Url_Property__New1_fn(::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector* name, emrals_FuseDrawingImageFill_Url_Property** __retval)
{
    *__retval = emrals_FuseDrawingImageFill_Url_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :121
void emrals_FuseDrawingImageFill_Url_Property__get_Object_fn(emrals_FuseDrawingImageFill_Url_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :123
void emrals_FuseDrawingImageFill_Url_Property__Set1_fn(emrals_FuseDrawingImageFill_Url_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Drawing::ImageFill*>(obj, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))->Url(v);
}

// public emrals_FuseDrawingImageFill_Url_Property(Fuse.Drawing.ImageFill obj, Uno.UX.Selector name) [instance] :120
void emrals_FuseDrawingImageFill_Url_Property::ctor_3(::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public emrals_FuseDrawingImageFill_Url_Property New(Fuse.Drawing.ImageFill obj, Uno.UX.Selector name) [static] :120
emrals_FuseDrawingImageFill_Url_Property* emrals_FuseDrawingImageFill_Url_Property::New1(::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector name)
{
    emrals_FuseDrawingImageFill_Url_Property* obj1 = (emrals_FuseDrawingImageFill_Url_Property*)uNew(emrals_FuseDrawingImageFill_Url_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
