// This file was generated based on '.uno/ux11/AlertsPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AlertsPage.h>
#include <_root.AlertsPage.Template.h>
#include <_root.emrals_bundle.h>
#include <_root.emrals_FuseCont-b37426cf.h>
#include <_root.emrals_FuseDraw-d3a711fd.h>
#include <_root.Header.h>
#include <_root.Horse.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[7];
static uType* TYPES[6];

namespace g{

// public partial sealed class AlertsPage.Template :6
// {
// static Template() :23
static void AlertsPage__Template__cctor__fn(uType* __type)
{
    AlertsPage__Template::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 1, ::STRINGS[0/*"temp_eb4"*/]);
    AlertsPage__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Value"*/]);
    AlertsPage__Template::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Url"*/]);
}

static void AlertsPage__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("temp_eb4");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("Url");
    ::STRINGS[3] = uString::Const("title");
    ::STRINGS[4] = uString::Const("thumbnail");
    ::STRINGS[5] = uString::Const("emrals");
    ::STRINGS[6] = uString::Const("goToAlert");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::AlertsPage__Template, __g_nametable1), 0,
        ::g::AlertsPage_typeof(), offsetof(::g::AlertsPage__Template, __parent1), uFieldFlagsWeak,
        ::g::AlertsPage_typeof(), offsetof(::g::AlertsPage__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::AlertsPage__Template, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::AlertsPage__Template, temp1_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::AlertsPage__Template, temp2_Value_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::AlertsPage__Template::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::AlertsPage__Template::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::AlertsPage__Template::__selector1_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* AlertsPage__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 11;
    options.ObjectSize = sizeof(AlertsPage__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("AlertsPage.Template", options);
    type->fp_build_ = AlertsPage__Template_build;
    type->fp_cctor_ = AlertsPage__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))AlertsPage__Template__New1_fn;
    return type;
}

// public Template(AlertsPage parent, AlertsPage parentInstance) :10
void AlertsPage__Template__ctor_1_fn(AlertsPage__Template* __this, ::g::AlertsPage* parent, ::g::AlertsPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :26
void AlertsPage__Template__New1_fn(AlertsPage__Template* __this, uObject** __retval)
{
    ::g::Fuse::Controls::DockPanel* __self1 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Horse* temp = ::g::Horse::New4();
    __this->temp_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp, AlertsPage__Template::__selector0());
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[3/*"title"*/]);
    __this->__g_nametable1 = ::g::Uno::UX::NameTable::New1(uPtr(__this->__parent1)->__g_nametable1, AlertsPage__Template::__g_static_nametable1());
    ::g::Fuse::Drawing::ImageFill* temp1 = ::g::Fuse::Drawing::ImageFill::New2();
    __this->temp1_Url_inst = ::g::emrals_FuseDrawingImageFill_Url_Property::New1(temp1, AlertsPage__Template::__selector1());
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[4/*"thumbnail"*/]);
    ::g::Header* temp2 = ::g::Header::New4();
    __this->temp2_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp2, AlertsPage__Template::__selector0());
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"emrals"*/]);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"goToAlert"*/]);
    ::g::Fuse::Controls::Panel* temp7 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp8 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp9 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Value_inst, (uObject*)temp3, __this->__g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp10 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp11 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp1_Url_inst, (uObject*)temp4, __this->__g_nametable1, 3);
    ::g::Fuse::Controls::Image* temp12 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp13 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp2_Value_inst, (uObject*)temp5, __this->__g_nametable1, 3);
    ::g::Fuse::Reactive::EventBinding* temp_eb41 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp6, __this->__g_nametable1);
    __self1->Height(::g::Uno::UX::Size__New1(147.0f, 1));
    __self1->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(__self1, uDelegate::New(::TYPES[1/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb41));
    temp7->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp7->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp7, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    temp8->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp8->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp8->Width(::g::Uno::UX::Size__New1(130.0f, 1));
    temp8->Height(::g::Uno::UX::Size__New1(18.0f, 1));
    temp8->Opacity(0.8f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp->FontSize(12.0f);
    temp->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp->Alignment(10);
    temp->Margin(::g::Uno::Float4__New2(4.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp9);
    temp10->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp10->Color(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp10->Layer(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Fills()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp11);
    temp12->Height(::g::Uno::UX::Size__New1(22.0f, 1));
    temp12->Alignment(12);
    temp12->Margin(::g::Uno::Float4__New2(-30.0f, 0.0f, 0.0f, -24.0f));
    temp12->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::greene7950afa3()));
    temp2->FontSize(18.0f);
    temp2->TextColor(::g::Uno::Float4__New2(0.3882353f, 0.3882353f, 0.3921569f, 1.0f));
    temp2->Alignment(12);
    temp2->Margin(::g::Uno::Float4__New2(74.0f, 0.0f, 0.0f, -24.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb41);
    return *__retval = __self1, void();
}

// public Template New(AlertsPage parent, AlertsPage parentInstance) :10
void AlertsPage__Template__New2_fn(::g::AlertsPage* parent, ::g::AlertsPage* parentInstance, AlertsPage__Template** __retval)
{
    *__retval = AlertsPage__Template::New2(parent, parentInstance);
}

uSStrong<uArray*> AlertsPage__Template::__g_static_nametable1_;
::g::Uno::UX::Selector AlertsPage__Template::__selector0_;
::g::Uno::UX::Selector AlertsPage__Template::__selector1_;

// public Template(AlertsPage parent, AlertsPage parentInstance) [instance] :10
void AlertsPage__Template::ctor_1(::g::AlertsPage* parent, ::g::AlertsPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(AlertsPage parent, AlertsPage parentInstance) [static] :10
AlertsPage__Template* AlertsPage__Template::New2(::g::AlertsPage* parent, ::g::AlertsPage* parentInstance)
{
    AlertsPage__Template* obj1 = (AlertsPage__Template*)uNew(AlertsPage__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
