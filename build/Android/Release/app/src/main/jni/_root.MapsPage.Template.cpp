// This file was generated based on '.uno/ux11/MapsPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.emrals_bundle.h>
#include <_root.emrals_FuseCont-1e5b6e53.h>
#include <_root.emrals_FuseCont-2eba4d04.h>
#include <_root.emrals_FuseCont-b27fddc2.h>
#include <_root.MapsPage.h>
#include <_root.MapsPage.Template.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.MapMark-e0461dcf.h>
#include <Fuse.Controls.MapMarker.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[8];
static uType* TYPES[4];

namespace g{

// public partial sealed class MapsPage.Template :6
// {
// static Template() :23
static void MapsPage__Template__cctor__fn(uType* __type)
{
    MapsPage__Template::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 1, ::STRINGS[0/*"temp_eb55"*/]);
    MapsPage__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Latitude"*/]);
    MapsPage__Template::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Longitude"*/]);
    MapsPage__Template::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Label"*/]);
}

static void MapsPage__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("temp_eb55");
    ::STRINGS[1] = uString::Const("Latitude");
    ::STRINGS[2] = uString::Const("Longitude");
    ::STRINGS[3] = uString::Const("Label");
    ::STRINGS[4] = uString::Const("latitude");
    ::STRINGS[5] = uString::Const("longitude");
    ::STRINGS[6] = uString::Const("title");
    ::STRINGS[7] = uString::Const("goToAlert");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Controls::MapMarker__MarkerTappedHandler_typeof();
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MapsPage__Template, __g_nametable1), 0,
        ::g::MapsPage_typeof(), offsetof(::g::MapsPage__Template, __parent1), uFieldFlagsWeak,
        ::g::MapsPage_typeof(), offsetof(::g::MapsPage__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MapsPage__Template, __self_Label_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Double_typeof(), NULL), offsetof(::g::MapsPage__Template, __self_Latitude_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Double_typeof(), NULL), offsetof(::g::MapsPage__Template, __self_Longitude_inst1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::MapsPage__Template::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MapsPage__Template::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MapsPage__Template::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MapsPage__Template::__selector2_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* MapsPage__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 12;
    options.ObjectSize = sizeof(MapsPage__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MapsPage.Template", options);
    type->fp_build_ = MapsPage__Template_build;
    type->fp_cctor_ = MapsPage__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MapsPage__Template__New1_fn;
    return type;
}

// public Template(MapsPage parent, MapsPage parentInstance) :10
void MapsPage__Template__ctor_1_fn(MapsPage__Template* __this, ::g::MapsPage* parent, ::g::MapsPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :26
void MapsPage__Template__New1_fn(MapsPage__Template* __this, uObject** __retval)
{
    ::g::Fuse::Controls::MapMarker* __self1 = ::g::Fuse::Controls::MapMarker::New2();
    __this->__self_Latitude_inst1 = ::g::emrals_FuseControlsMapMarker_Latitude_Property::New1(__self1, MapsPage__Template::__selector0());
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[4/*"latitude"*/]);
    __this->__g_nametable1 = ::g::Uno::UX::NameTable::New1(uPtr(__this->__parent1)->__g_nametable1, MapsPage__Template::__g_static_nametable1());
    __this->__self_Longitude_inst1 = ::g::emrals_FuseControlsMapMarker_Longitude_Property::New1(__self1, MapsPage__Template::__selector1());
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"longitude"*/]);
    __this->__self_Label_inst1 = ::g::emrals_FuseControlsMapMarker_Label_Property::New1(__self1, MapsPage__Template::__selector2());
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"title"*/]);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"goToAlert"*/]);
    ::g::Fuse::Reactive::DataBinding* temp4 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Latitude_inst1, (uObject*)temp, __this->__g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp5 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Longitude_inst1, (uObject*)temp1, __this->__g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp6 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Label_inst1, (uObject*)temp2, __this->__g_nametable1, 3);
    ::g::Fuse::Reactive::EventBinding* temp_eb551 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp3, __this->__g_nametable1);
    __self1->add_Tapped(uDelegate::New(::TYPES[1/*Fuse.Controls.MapMarker.MarkerTappedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb551));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->__g_nametable1)->Objects()), ::TYPES[2/*Uno.Collections.ICollection<object>*/]), temp_eb551);
    __self1->IconFile(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::trashbin4e4884f2()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb551);
    return *__retval = __self1, void();
}

// public Template New(MapsPage parent, MapsPage parentInstance) :10
void MapsPage__Template__New2_fn(::g::MapsPage* parent, ::g::MapsPage* parentInstance, MapsPage__Template** __retval)
{
    *__retval = MapsPage__Template::New2(parent, parentInstance);
}

uSStrong<uArray*> MapsPage__Template::__g_static_nametable1_;
::g::Uno::UX::Selector MapsPage__Template::__selector0_;
::g::Uno::UX::Selector MapsPage__Template::__selector1_;
::g::Uno::UX::Selector MapsPage__Template::__selector2_;

// public Template(MapsPage parent, MapsPage parentInstance) [instance] :10
void MapsPage__Template::ctor_1(::g::MapsPage* parent, ::g::MapsPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(MapsPage parent, MapsPage parentInstance) [static] :10
MapsPage__Template* MapsPage__Template::New2(::g::MapsPage* parent, ::g::MapsPage* parentInstance)
{
    MapsPage__Template* obj1 = (MapsPage__Template*)uNew(MapsPage__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
