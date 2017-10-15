// This file was generated based on '.uno/ux11/EcansPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Cat.h>
#include <_root.Dog.h>
#include <_root.EcansPage.h>
#include <_root.emrals_bundle.h>
#include <_root.emrals_FuseCont-f08373fa.h>
#include <_root.Horse.h>
#include <_root.PTreal.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollV-9171ed6c.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.ScrollViewBase.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[21];
static uType* TYPES[7];

namespace g{

// public partial sealed class EcansPage :2
// {
// static EcansPage() :14
static void EcansPage__cctor_4_fn(uType* __type)
{
    EcansPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 3, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"buyecanrec"*/], ::STRINGS[2/*"temp_eb36"*/]);
    EcansPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Color"*/]);
    EcansPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"buyecanrec"*/]);
}

static void EcansPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("buyecanrec");
    ::STRINGS[2] = uString::Const("temp_eb36");
    ::STRINGS[3] = uString::Const("Color");
    ::STRINGS[4] = uString::Const("goToBuyEcan");
    ::STRINGS[5] = uString::Const("ECANS");
    ::STRINGS[6] = uString::Const("Say Hello");
    ::STRINGS[7] = uString::Const("to eCan");
    ::STRINGS[8] = uString::Const("The smart trash bin that rewards you for cleaning up.");
    ::STRINGS[9] = uString::Const("eCans Around the World");
    ::STRINGS[10] = uString::Const("The eCan at PS 333");
    ::STRINGS[11] = uString::Const("This classroom loves recyling! The eCan helps keep track of items by showing data about what they toss. Its barcode scanner and interactive touchscreen are fun, too.");
    ::STRINGS[12] = uString::Const("Downtown Brooklyn Solar eCan");
    ::STRINGS[13] = uString::Const("Our first steel eCan designed for outdoor use on city trash cans is solar powered and awaiting installation in Downtown Brooklyn.");
    ::STRINGS[14] = uString::Const("Buildinglink Commercial Space eCan");
    ::STRINGS[15] = uString::Const("One of our first sales to a forward thinking company, the Buildinglink eCan is currently being updated to the newer model with barcode scanning capabilities.");
    ::STRINGS[16] = uString::Const("eCan at Pop Up Shop");
    ::STRINGS[17] = uString::Const("Our multicultural eCan thanked people at this holiday pop up in Soho in seven different languages. Nothing says thank you like \342\200\234thank you, merci, gracias, etc!\342\200\235");
    ::STRINGS[18] = uString::Const("eCan at Automotive HS");
    ::STRINGS[19] = uString::Const("As part of our Shuttleworth Foundation Grant, the Automotive HS will be receiving the second donated eCan.");
    ::STRINGS[20] = uString::Const("BUY ECAN");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16));
    type->SetFields(111,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::EcansPage, __g_nametable1), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::EcansPage, buyecanrec), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::EcansPage, buyecanrec_Color_inst), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::EcansPage, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::EcansPage, temp_eb36), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::EcansPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::EcansPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::EcansPage::__selector1_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* EcansPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 119;
    options.InterfaceCount = 17;
    options.ObjectSize = sizeof(EcansPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("EcansPage", options);
    type->fp_build_ = EcansPage_build;
    type->fp_cctor_ = EcansPage__cctor_4_fn;
    type->interface16.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface16.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface16.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface11.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface13.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface12.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface15.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface14.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface14.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface14.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface9.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface9.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface10.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface9.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface8.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface9.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface9.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public EcansPage(Fuse.Navigation.Router router) :18
void EcansPage__ctor_8_fn(EcansPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :24
void EcansPage__InitializeUX_fn(EcansPage* __this)
{
    __this->InitializeUX();
}

// public EcansPage New(Fuse.Navigation.Router router) :18
void EcansPage__New5_fn(::g::Fuse::Navigation::Router* router1, EcansPage** __retval)
{
    *__retval = EcansPage::New5(router1);
}

uSStrong<uArray*> EcansPage::__g_static_nametable1_;
::g::Uno::UX::Selector EcansPage::__selector0_;
::g::Uno::UX::Selector EcansPage::__selector1_;

// public EcansPage(Fuse.Navigation.Router router) [instance] :18
void EcansPage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :24
void EcansPage::InitializeUX()
{
    buyecanrec = ::g::Fuse::Controls::Rectangle::New3();
    buyecanrec_Color_inst = ::g::emrals_FuseControlsShape_Color_Property::New1(buyecanrec, EcansPage::__selector0());
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[4/*"goToBuyEcan"*/]);
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, EcansPage::__g_static_nametable1());
    ::g::Fuse::Controls::StackPanel* temp1 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::PTreal* temp2 = ::g::PTreal::New4();
    ::g::Fuse::Drawing::StaticSolidColor* temp3 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::StackPanel* temp4 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp5 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Horse* temp6 = ::g::Horse::New4();
    ::g::Horse* temp7 = ::g::Horse::New4();
    ::g::Fuse::Controls::Rectangle* temp8 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Cat* temp9 = ::g::Cat::New4();
    ::g::Fuse::Controls::Image* temp10 = ::g::Fuse::Controls::Image::New3();
    ::g::PTreal* temp11 = ::g::PTreal::New4();
    ::g::Fuse::Controls::ScrollView* temp12 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp13 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp14 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp15 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Rectangle* temp16 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Horse* temp17 = ::g::Horse::New4();
    ::g::Fuse::Controls::Rectangle* temp18 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Dog* temp19 = ::g::Dog::New4();
    ::g::Fuse::Controls::Panel* temp20 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp21 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Rectangle* temp22 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Horse* temp23 = ::g::Horse::New4();
    ::g::Fuse::Controls::Rectangle* temp24 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Dog* temp25 = ::g::Dog::New4();
    ::g::Fuse::Controls::Panel* temp26 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp27 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Rectangle* temp28 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Horse* temp29 = ::g::Horse::New4();
    ::g::Fuse::Controls::Rectangle* temp30 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Dog* temp31 = ::g::Dog::New4();
    ::g::Fuse::Controls::Panel* temp32 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp33 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Rectangle* temp34 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Horse* temp35 = ::g::Horse::New4();
    ::g::Fuse::Controls::Rectangle* temp36 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Dog* temp37 = ::g::Dog::New4();
    ::g::Fuse::Controls::Panel* temp38 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp39 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Rectangle* temp40 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Horse* temp41 = ::g::Horse::New4();
    ::g::Fuse::Controls::Rectangle* temp42 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Dog* temp43 = ::g::Dog::New4();
    ::g::Fuse::Drawing::StaticSolidColor* temp44 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9607843f, 0.9607843f, 0.9607843f, 1.0f));
    ::g::Horse* temp45 = ::g::Horse::New4();
    ::g::Fuse::Gestures::WhilePressed* temp46 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Change* temp47 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float4>*/], buyecanrec_Color_inst);
    temp_eb36 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp, __g_nametable1);
    temp1->Height(::g::Uno::UX::Size__New1(45.0f, 1));
    temp1->Y(::g::Uno::UX::Size__New1(0.0f, 1));
    temp1->Background(temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp2->Value(::STRINGS[5/*"ECANS"*/]);
    temp2->Alignment(10);
    temp2->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 0.0f));
    temp4->Y(::g::Uno::UX::Size__New1(45.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), buyecanrec);
    temp5->Color(::g::Uno::Float4__New2(0.3882353f, 0.3882353f, 0.3921569f, 1.0f));
    temp5->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp5->Height(::g::Uno::UX::Size__New1(250.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    temp6->Value(::STRINGS[6/*"Say Hello"*/]);
    temp6->FontSize(24.0f);
    temp6->Color(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp6->Alignment(12);
    temp6->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 135.0f));
    temp7->Value(::STRINGS[7/*"to eCan"*/]);
    temp7->FontSize(24.0f);
    temp7->Color(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp7->Alignment(12);
    temp7->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 110.0f));
    temp8->Width(::g::Uno::UX::Size__New1(130.0f, 1));
    temp8->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    temp8->Alignment(1);
    temp8->Margin(::g::Uno::Float4__New2(20.0f, 90.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    temp9->Value(::STRINGS[8/*"The smart t...*/]);
    temp9->TextWrapping(1);
    temp9->FontSize(14.0f);
    temp9->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp10->MaxHeight(::g::Uno::UX::Size__New1(250.0f, 1));
    temp10->Margin(::g::Uno::Float4__New2(40.0f, -10.0f, 0.0f, 0.0f));
    temp10->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::ECANnotesca913ebd()));
    temp11->Value(::STRINGS[9/*"eCans Aroun...*/]);
    temp11->Alignment(10);
    temp12->LayoutMode(1);
    temp12->MaxHeight(::g::Uno::UX::Size__New1(215.0f, 1));
    temp12->Padding(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 0.0f));
    temp12->Background(temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    temp13->ItemSpacing(20.0f);
    temp13->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    temp15->MaxHeight(::g::Uno::UX::Size__New1(92.0f, 1));
    temp15->Alignment(5);
    temp15->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::ecan13981993f()));
    temp16->Color(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp16->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp16->Height(::g::Uno::UX::Size__New1(18.0f, 1));
    temp16->Alignment(4);
    temp16->Margin(::g::Uno::Float4__New2(90.0f, 0.0f, 15.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    temp17->Value(::STRINGS[10/*"The eCan at...*/]);
    temp17->FontSize(14.0f);
    temp17->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp17->Margin(::g::Uno::Float4__New2(15.0f, 0.0f, 0.0f, 0.0f));
    temp17->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp18->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp18->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp18->Height(::g::Uno::UX::Size__New1(90.0f, 1));
    temp18->Alignment(12);
    temp18->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 15.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    temp19->Value(::STRINGS[11/*"This classr...*/]);
    temp19->TextWrapping(1);
    temp19->FontSize(12.0f);
    temp19->Color(::g::Uno::Float4__New2(0.3882353f, 0.3882353f, 0.3921569f, 1.0f));
    temp19->Margin(::g::Uno::Float4__New2(85.0f, 22.0f, 15.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    temp21->MaxHeight(::g::Uno::UX::Size__New1(92.0f, 1));
    temp21->Alignment(5);
    temp21->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::ecan23981b5c2()));
    temp22->Color(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp22->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp22->Height(::g::Uno::UX::Size__New1(18.0f, 1));
    temp22->Alignment(4);
    temp22->Margin(::g::Uno::Float4__New2(90.0f, 0.0f, 15.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    temp23->Value(::STRINGS[12/*"Downtown Br...*/]);
    temp23->FontSize(14.0f);
    temp23->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp23->Margin(::g::Uno::Float4__New2(15.0f, 0.0f, 15.0f, 0.0f));
    temp24->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp24->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp24->Height(::g::Uno::UX::Size__New1(90.0f, 1));
    temp24->Alignment(12);
    temp24->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 15.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    temp25->Value(::STRINGS[13/*"Our first s...*/]);
    temp25->TextWrapping(1);
    temp25->FontSize(12.0f);
    temp25->Color(::g::Uno::Float4__New2(0.3882353f, 0.3882353f, 0.3921569f, 1.0f));
    temp25->Margin(::g::Uno::Float4__New2(85.0f, 22.0f, 15.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    temp27->MaxHeight(::g::Uno::UX::Size__New1(92.0f, 1));
    temp27->Alignment(5);
    temp27->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::ecan33981b1c1()));
    temp28->Color(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp28->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp28->Height(::g::Uno::UX::Size__New1(18.0f, 1));
    temp28->Alignment(4);
    temp28->Margin(::g::Uno::Float4__New2(90.0f, 0.0f, 15.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    temp29->Value(::STRINGS[14/*"Buildinglin...*/]);
    temp29->FontSize(14.0f);
    temp29->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp29->Margin(::g::Uno::Float4__New2(15.0f, 0.0f, 15.0f, 0.0f));
    temp30->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp30->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp30->Height(::g::Uno::UX::Size__New1(90.0f, 1));
    temp30->Alignment(12);
    temp30->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 15.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    temp31->Value(::STRINGS[15/*"One of our ...*/]);
    temp31->TextWrapping(1);
    temp31->FontSize(12.0f);
    temp31->Color(::g::Uno::Float4__New2(0.3882353f, 0.3882353f, 0.3921569f, 1.0f));
    temp31->Margin(::g::Uno::Float4__New2(85.0f, 22.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    temp33->MaxHeight(::g::Uno::UX::Size__New1(92.0f, 1));
    temp33->Alignment(5);
    temp33->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::ecan439818c44()));
    temp34->Color(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp34->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp34->Height(::g::Uno::UX::Size__New1(18.0f, 1));
    temp34->Alignment(4);
    temp34->Margin(::g::Uno::Float4__New2(90.0f, 0.0f, 15.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    temp35->Value(::STRINGS[16/*"eCan at Pop...*/]);
    temp35->FontSize(14.0f);
    temp35->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp35->Margin(::g::Uno::Float4__New2(15.0f, 0.0f, 15.0f, 0.0f));
    temp36->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp36->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp36->Height(::g::Uno::UX::Size__New1(90.0f, 1));
    temp36->Alignment(12);
    temp36->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 15.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp37);
    temp37->Value(::STRINGS[17/*"Our multicu...*/]);
    temp37->TextWrapping(1);
    temp37->FontSize(12.0f);
    temp37->Color(::g::Uno::Float4__New2(0.3882353f, 0.3882353f, 0.3921569f, 1.0f));
    temp37->Margin(::g::Uno::Float4__New2(85.0f, 22.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp42);
    temp39->MaxHeight(::g::Uno::UX::Size__New1(92.0f, 1));
    temp39->Alignment(5);
    temp39->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::ecan539818843()));
    temp40->Color(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp40->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp40->Height(::g::Uno::UX::Size__New1(18.0f, 1));
    temp40->Alignment(4);
    temp40->Margin(::g::Uno::Float4__New2(90.0f, 0.0f, 15.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    temp41->Value(::STRINGS[18/*"eCan at Aut...*/]);
    temp41->FontSize(14.0f);
    temp41->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp41->Margin(::g::Uno::Float4__New2(15.0f, 0.0f, 15.0f, 0.0f));
    temp42->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp42->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp42->Height(::g::Uno::UX::Size__New1(90.0f, 1));
    temp42->Alignment(12);
    temp42->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 15.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    temp43->Value(::STRINGS[19/*"As part of ...*/]);
    temp43->TextWrapping(1);
    temp43->FontSize(12.0f);
    temp43->Color(::g::Uno::Float4__New2(0.3882353f, 0.3882353f, 0.3921569f, 1.0f));
    temp43->Margin(::g::Uno::Float4__New2(85.0f, 22.0f, 0.0f, 0.0f));
    uPtr(buyecanrec)->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    uPtr(buyecanrec)->Color(::g::Uno::Float4__New2(0.9411765f, 0.3490196f, 0.3490196f, 1.0f));
    uPtr(buyecanrec)->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    uPtr(buyecanrec)->Height(::g::Uno::UX::Size__New1(48.0f, 1));
    uPtr(buyecanrec)->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f));
    uPtr(buyecanrec)->Name(EcansPage::__selector1());
    ::g::Fuse::Controls::DockPanel::SetDock(buyecanrec, 3);
    ::g::Fuse::Gestures::Clicked::AddHandler(buyecanrec, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb36)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(buyecanrec)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(buyecanrec)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(buyecanrec)->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb36);
    temp45->Value(::STRINGS[20/*"BUY ECAN"*/]);
    temp45->Alignment(14);
    temp45->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp47);
    ::g::Fuse::Animations::Change__set_Value_fn(temp47, uCRef(::g::Uno::Float4__New2(0.9568627f, 0.1764706f, 0.1764706f, 1.0f)));
    temp47->Duration(0.05);
    temp47->DurationBack(0.2);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), buyecanrec);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
}

// public EcansPage New(Fuse.Navigation.Router router) [static] :18
EcansPage* EcansPage::New5(::g::Fuse::Navigation::Router* router1)
{
    EcansPage* obj1 = (EcansPage*)uNew(EcansPage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
