// This file was generated based on '.uno/ux11/NewsItem.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.ActionIcon.h>
#include <_root.Article.h>
#include <_root.emrals_bundle.h>
#include <_root.emrals_FuseCont-56bc3fec.h>
#include <_root.emrals_FuseCont-b37426cf.h>
#include <_root.emrals_FuseDraw-d3a711fd.h>
#include <_root.Header2.h>
#include <_root.HorizontalBar.h>
#include <_root.Name.h>
#include <_root.NewsItem.h>
#include <_root.NewsItem.Template.h>
#include <_root.Stat.h>
#include <_root.SubText.h>
#include <_root.VerticalBar.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.WrapMode.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
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
static uString* STRINGS[12];
static uType* TYPES[4];

namespace g{

// public partial sealed class NewsItem.Template :6
// {
// static Template() :28
static void NewsItem__Template__cctor__fn(uType* __type)
{
    NewsItem__Template::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 0);
    NewsItem__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Url"*/]);
    NewsItem__Template::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Value"*/]);
}

static void NewsItem__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Url");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("portrait");
    ::STRINGS[3] = uString::Const("poster_username");
    ::STRINGS[4] = uString::Const("postAge");
    ::STRINGS[5] = uString::Const("source");
    ::STRINGS[6] = uString::Const("location");
    ::STRINGS[7] = uString::Const("thumbnail");
    ::STRINGS[8] = uString::Const("title");
    ::STRINGS[9] = uString::Const("body");
    ::STRINGS[10] = uString::Const("numLikes");
    ::STRINGS[11] = uString::Const("numComments");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::NewsItem__Template, __g_nametable1), 0,
        ::g::NewsItem_typeof(), offsetof(::g::NewsItem__Template, __parent1), uFieldFlagsWeak,
        ::g::NewsItem_typeof(), offsetof(::g::NewsItem__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::NewsItem__Template, temp_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::NewsItem__Template, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::NewsItem__Template, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::NewsItem__Template, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::NewsItem__Template, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::NewsItem__Template, temp5_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::NewsItem__Template, temp6_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::NewsItem__Template, temp7_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::NewsItem__Template, temp8_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::NewsItem__Template, temp9_Value_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::NewsItem__Template::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::NewsItem__Template::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::NewsItem__Template::__selector1_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* NewsItem__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 18;
    options.ObjectSize = sizeof(NewsItem__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("NewsItem.Template", options);
    type->fp_build_ = NewsItem__Template_build;
    type->fp_cctor_ = NewsItem__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))NewsItem__Template__New1_fn;
    return type;
}

// public Template(NewsItem parent, NewsItem parentInstance) :10
void NewsItem__Template__ctor_1_fn(NewsItem__Template* __this, ::g::NewsItem* parent, ::g::NewsItem* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :31
void NewsItem__Template__New1_fn(NewsItem__Template* __this, uObject** __retval)
{
    ::g::Fuse::Controls::StackPanel* __self1 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Drawing::ImageFill* temp = ::g::Fuse::Drawing::ImageFill::New2();
    __this->temp_Url_inst = ::g::emrals_FuseDrawingImageFill_Url_Property::New1(temp, NewsItem__Template::__selector0());
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"portrait"*/]);
    __this->__g_nametable1 = ::g::Uno::UX::NameTable::New1(uPtr(__this->__parent1)->__g_nametable1, NewsItem__Template::__g_static_nametable1());
    ::g::Name* temp1 = ::g::Name::New4();
    __this->temp1_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp1, NewsItem__Template::__selector1());
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[3/*"poster_user...*/]);
    ::g::SubText* temp2 = ::g::SubText::New4();
    __this->temp2_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp2, NewsItem__Template::__selector1());
    ::g::Fuse::Reactive::Data* temp12 = ::g::Fuse::Reactive::Data::New1(::STRINGS[4/*"postAge"*/]);
    ::g::SubText* temp3 = ::g::SubText::New4();
    __this->temp3_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp3, NewsItem__Template::__selector1());
    ::g::Fuse::Reactive::Data* temp13 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"source"*/]);
    ::g::SubText* temp4 = ::g::SubText::New4();
    __this->temp4_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp4, NewsItem__Template::__selector1());
    ::g::Fuse::Reactive::Data* temp14 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"location"*/]);
    ::g::Fuse::Controls::Image* temp5 = ::g::Fuse::Controls::Image::New3();
    __this->temp5_Url_inst = ::g::emrals_FuseControlsImage_Url_Property::New1(temp5, NewsItem__Template::__selector0());
    ::g::Fuse::Reactive::Data* temp15 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"thumbnail"*/]);
    ::g::Header2* temp6 = ::g::Header2::New4();
    __this->temp6_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp6, NewsItem__Template::__selector1());
    ::g::Fuse::Reactive::Data* temp16 = ::g::Fuse::Reactive::Data::New1(::STRINGS[8/*"title"*/]);
    ::g::Article* temp7 = ::g::Article::New4();
    __this->temp7_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp7, NewsItem__Template::__selector1());
    ::g::Fuse::Reactive::Data* temp17 = ::g::Fuse::Reactive::Data::New1(::STRINGS[9/*"body"*/]);
    ::g::Stat* temp8 = ::g::Stat::New4();
    __this->temp8_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp8, NewsItem__Template::__selector1());
    ::g::Fuse::Reactive::Data* temp18 = ::g::Fuse::Reactive::Data::New1(::STRINGS[10/*"numLikes"*/]);
    ::g::Stat* temp9 = ::g::Stat::New4();
    __this->temp9_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp9, NewsItem__Template::__selector1());
    ::g::Fuse::Reactive::Data* temp19 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"numComments"*/]);
    ::g::Fuse::Controls::DockPanel* temp20 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Circle* temp21 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Reactive::DataBinding* temp22 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Url_inst, (uObject*)temp10, __this->__g_nametable1, 3);
    ::g::Fuse::Controls::DockPanel* temp23 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp24 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp25 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp1_Value_inst, (uObject*)temp11, __this->__g_nametable1, 3);
    ::g::Fuse::Controls::StackPanel* temp26 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp27 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp2_Value_inst, (uObject*)temp12, __this->__g_nametable1, 3);
    ::g::VerticalBar* temp28 = ::g::VerticalBar::New4();
    ::g::Fuse::Reactive::DataBinding* temp29 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp3_Value_inst, (uObject*)temp13, __this->__g_nametable1, 3);
    ::g::VerticalBar* temp30 = ::g::VerticalBar::New4();
    ::g::Fuse::Controls::Image* temp31 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp32 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp4_Value_inst, (uObject*)temp14, __this->__g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp33 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp5_Url_inst, (uObject*)temp15, __this->__g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp34 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp6_Value_inst, (uObject*)temp16, __this->__g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp35 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp7_Value_inst, (uObject*)temp17, __this->__g_nametable1, 3);
    ::g::Fuse::Controls::StackPanel* temp36 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::ActionIcon* temp37 = ::g::ActionIcon::New4();
    ::g::Fuse::Reactive::DataBinding* temp38 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp8_Value_inst, (uObject*)temp18, __this->__g_nametable1, 3);
    ::g::ActionIcon* temp39 = ::g::ActionIcon::New4();
    ::g::Fuse::Reactive::DataBinding* temp40 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp9_Value_inst, (uObject*)temp19, __this->__g_nametable1, 3);
    ::g::ActionIcon* temp41 = ::g::ActionIcon::New4();
    ::g::HorizontalBar* temp42 = ::g::HorizontalBar::New4();
    __self1->Margin(::g::Uno::Float4__New2(0.0f, 14.0f, 0.0f, 10.0f));
    temp20->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, 15.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    temp21->Width(::g::Uno::UX::Size__New1(45.0f, 1));
    temp21->Height(::g::Uno::UX::Size__New1(45.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp21, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Fills()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp22);
    temp->WrapMode(1);
    temp23->Margin(::g::Uno::Float4__New2(10.0f, 4.0f, 10.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    temp24->Orientation(0);
    ::g::Fuse::Controls::DockPanel::SetDock(temp24, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp25);
    temp26->Orientation(0);
    ::g::Fuse::Controls::DockPanel::SetDock(temp26, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp29);
    temp31->Color(::g::Uno::Float4__New2(0.2f, 0.2352941f, 0.282353f, 1.0f));
    temp31->Width(::g::Uno::UX::Size__New1(14.0f, 1));
    temp31->Height(::g::Uno::UX::Size__New1(14.0f, 1));
    temp31->Alignment(8);
    temp31->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 2.0f, 2.0f));
    temp31->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::Location3bc4c4cd()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp32);
    temp5->StretchMode(6);
    temp5->ContentAlignment(8);
    temp5->Height(::g::Uno::UX::Size__New1(275.0f, 1));
    temp5->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp35);
    temp36->Orientation(0);
    temp36->Margin(::g::Uno::Float4__New2(14.0f, 10.0f, 14.0f, 8.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    temp37->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::Like169dc0bf()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp38);
    temp39->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::Comment5dc2d4bb()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp40);
    temp41->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::Share0eb98cad()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp42);
    return *__retval = __self1, void();
}

// public Template New(NewsItem parent, NewsItem parentInstance) :10
void NewsItem__Template__New2_fn(::g::NewsItem* parent, ::g::NewsItem* parentInstance, NewsItem__Template** __retval)
{
    *__retval = NewsItem__Template::New2(parent, parentInstance);
}

uSStrong<uArray*> NewsItem__Template::__g_static_nametable1_;
::g::Uno::UX::Selector NewsItem__Template::__selector0_;
::g::Uno::UX::Selector NewsItem__Template::__selector1_;

// public Template(NewsItem parent, NewsItem parentInstance) [instance] :10
void NewsItem__Template::ctor_1(::g::NewsItem* parent, ::g::NewsItem* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(NewsItem parent, NewsItem parentInstance) [static] :10
NewsItem__Template* NewsItem__Template::New2(::g::NewsItem* parent, ::g::NewsItem* parentInstance)
{
    NewsItem__Template* obj1 = (NewsItem__Template*)uNew(NewsItem__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
