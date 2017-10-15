// This file was generated based on '.uno/ux11/ImpactPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Curl.h>
#include <_root.emrals_bundle.h>
#include <_root.emrals_FuseCont-f08373fa.h>
#include <_root.emrals_FuseCont-f52b401d.h>
#include <_root.Horse.h>
#include <_root.ImpactPage.h>
#include <_root.PTreal.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.Trans-997c8373.h>
#include <Fuse.Controls.ClientPanel.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.StretchDirection.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.StretchSizing.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileKe-99bafeca.h>
#include <Fuse.Visual.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[30];
static uType* TYPES[7];

namespace g{

// public partial sealed class ImpactPage :2
// {
// static ImpactPage() :32
static void ImpactPage__cctor_4_fn(uType* __type)
{
    ImpactPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"outerpanel"*/], ::STRINGS[2/*"temp_eb40"*/], ::STRINGS[3/*"ZipBar"*/], ::STRINGS[4/*"fiverec"*/], ::STRINGS[5/*"temp_eb41"*/], ::STRINGS[6/*"tenrec"*/], ::STRINGS[7/*"temp_eb42"*/], ::STRINGS[8/*"twentyfiverec"*/], ::STRINGS[9/*"temp_eb43"*/]);
    ImpactPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"Value"*/]);
    ImpactPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"Color"*/]);
    ImpactPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"outerpanel"*/]);
    ImpactPage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"ZipBar"*/]);
    ImpactPage::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"fiverec"*/]);
    ImpactPage::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"tenrec"*/]);
    ImpactPage::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"twentyfiverec"*/]);
    ImpactPage::Curl_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::PTF55F5dbeddf8()));
    ::g::Uno::UX::Resource::SetGlobalKey(ImpactPage::Curl_, ::STRINGS[12/*"Curl"*/]);
}

static void ImpactPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("outerpanel");
    ::STRINGS[2] = uString::Const("temp_eb40");
    ::STRINGS[3] = uString::Const("ZipBar");
    ::STRINGS[4] = uString::Const("fiverec");
    ::STRINGS[5] = uString::Const("temp_eb41");
    ::STRINGS[6] = uString::Const("tenrec");
    ::STRINGS[7] = uString::Const("temp_eb42");
    ::STRINGS[8] = uString::Const("twentyfiverec");
    ::STRINGS[9] = uString::Const("temp_eb43");
    ::STRINGS[10] = uString::Const("Value");
    ::STRINGS[11] = uString::Const("Color");
    ::STRINGS[12] = uString::Const("Curl");
    ::STRINGS[13] = uString::Const("extractzip");
    ::STRINGS[14] = uString::Const("zipcode");
    ::STRINGS[15] = uString::Const("goToPayment50");
    ::STRINGS[16] = uString::Const("goToPayment10");
    ::STRINGS[17] = uString::Const("goToPayment25");
    ::STRINGS[18] = uString::Const("Pages/ImpactPage.ux");
    ::STRINGS[19] = uString::Const("IMPACT ZONES");
    ::STRINGS[20] = uString::Const("Impact zones allow you to focus your cleanup reward power. Select a zone in an area that matters to you to be cleaned. Your subscription automatically funds the cleanup in those locations by paying the people that clean up.");
    ::STRINGS[21] = uString::Const("Enter Zipcode");
    ::STRINGS[22] = uString::Const("auto,1*,1*");
    ::STRINGS[23] = uString::Const("Fund Cleanup of");
    ::STRINGS[24] = uString::Const("89");
    ::STRINGS[25] = uString::Const("Dirt Alerts");
    ::STRINGS[26] = uString::Const("1,1,1");
    ::STRINGS[27] = uString::Const("$5/m");
    ::STRINGS[28] = uString::Const("$10/m");
    ::STRINGS[29] = uString::Const("$25/m");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16));
    type->SetFields(111,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::ImpactPage, __g_nametable1), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::ImpactPage, fiverec), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::ImpactPage, fiverec_Color_inst), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(::g::ImpactPage, outerpanel), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::ImpactPage, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::ImpactPage, temp_eb40), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::ImpactPage, temp_eb41), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::ImpactPage, temp_eb42), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::ImpactPage, temp_eb43), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::ImpactPage, temp_Value_inst), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::ImpactPage, tenrec), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::ImpactPage, tenrec_Color_inst), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::ImpactPage, twentyfiverec), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::ImpactPage, twentyfiverec_Color_inst), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::ImpactPage, ZipBar), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::ImpactPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ImpactPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ImpactPage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ImpactPage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ImpactPage::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ImpactPage::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ImpactPage::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ImpactPage::__selector6_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::ImpactPage::Curl_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* ImpactPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 135;
    options.InterfaceCount = 17;
    options.ObjectSize = sizeof(ImpactPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("ImpactPage", options);
    type->fp_build_ = ImpactPage_build;
    type->fp_cctor_ = ImpactPage__cctor_4_fn;
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

// public ImpactPage(Fuse.Navigation.Router router) :38
void ImpactPage__ctor_8_fn(ImpactPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :44
void ImpactPage__InitializeUX_fn(ImpactPage* __this)
{
    __this->InitializeUX();
}

// public ImpactPage New(Fuse.Navigation.Router router) :38
void ImpactPage__New5_fn(::g::Fuse::Navigation::Router* router1, ImpactPage** __retval)
{
    *__retval = ImpactPage::New5(router1);
}

uSStrong<uArray*> ImpactPage::__g_static_nametable1_;
::g::Uno::UX::Selector ImpactPage::__selector0_;
::g::Uno::UX::Selector ImpactPage::__selector1_;
::g::Uno::UX::Selector ImpactPage::__selector2_;
::g::Uno::UX::Selector ImpactPage::__selector3_;
::g::Uno::UX::Selector ImpactPage::__selector4_;
::g::Uno::UX::Selector ImpactPage::__selector5_;
::g::Uno::UX::Selector ImpactPage::__selector6_;
uSStrong< ::g::Fuse::Font*> ImpactPage::Curl_;

// public ImpactPage(Fuse.Navigation.Router router) [instance] :38
void ImpactPage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :44
void ImpactPage::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, ImpactPage::__g_static_nametable1());
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"extractzip"*/]);
    ::g::Fuse::Controls::TextInput* temp = ::g::Fuse::Controls::TextInput::New3();
    temp_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp, ImpactPage::__selector0());
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"zipcode"*/]);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[15/*"goToPayment50"*/]);
    fiverec = ::g::Fuse::Controls::Rectangle::New3();
    fiverec_Color_inst = ::g::emrals_FuseControlsShape_Color_Property::New1(fiverec, ImpactPage::__selector1());
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[16/*"goToPayment10"*/]);
    tenrec = ::g::Fuse::Controls::Rectangle::New3();
    tenrec_Color_inst = ::g::emrals_FuseControlsShape_Color_Property::New1(tenrec, ImpactPage::__selector1());
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[17/*"goToPayment25"*/]);
    twentyfiverec = ::g::Fuse::Controls::Rectangle::New3();
    twentyfiverec_Color_inst = ::g::emrals_FuseControlsShape_Color_Property::New1(twentyfiverec, ImpactPage::__selector1());
    ::g::Fuse::Reactive::JavaScript* temp6 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Triggers::WhileKeyboardVisible* temp7 = ::g::Fuse::Triggers::WhileKeyboardVisible::New2();
    ::g::Fuse::Animations::Move* temp8 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Controls::StackPanel* temp9 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::PTreal* temp10 = ::g::PTreal::New4();
    ::g::Fuse::Drawing::StaticSolidColor* temp11 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    outerpanel = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp12 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp13 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Curl* temp14 = ::g::Curl::New4();
    ::g::Fuse::Controls::Image* temp15 = ::g::Fuse::Controls::Image::New3();
    temp_eb40 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp1, __g_nametable1);
    ZipBar = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::ClientPanel* temp16 = ::g::Fuse::Controls::ClientPanel::New5();
    ::g::Fuse::Controls::StackPanel* temp17 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp18 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp19 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp20 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp21 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp2, __g_nametable1, 3);
    ::g::Fuse::Controls::Grid* temp22 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp23 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp24 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp25 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp26 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Grid* temp27 = ::g::Fuse::Controls::Grid::New4();
    ::g::Horse* temp28 = ::g::Horse::New4();
    temp_eb41 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp3, __g_nametable1);
    ::g::Fuse::Gestures::WhilePressed* temp29 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Change* temp30 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float4>*/], fiverec_Color_inst);
    ::g::Horse* temp31 = ::g::Horse::New4();
    temp_eb42 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp4, __g_nametable1);
    ::g::Fuse::Gestures::WhilePressed* temp32 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Change* temp33 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float4>*/], tenrec_Color_inst);
    ::g::Horse* temp34 = ::g::Horse::New4();
    temp_eb43 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp5, __g_nametable1);
    ::g::Fuse::Gestures::WhilePressed* temp35 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Change* temp36 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float4>*/], twentyfiverec_Color_inst);
    ::g::Fuse::Drawing::StaticSolidColor* temp37 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp6->LineNumber(2);
    temp6->FileName(::STRINGS[18/*"Pages/Impac...*/]);
    temp6->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::ImpactPage8e80ff68()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp8);
    temp8->Y(-200.0f);
    temp8->Target(outerpanel);
    temp8->Easing(::g::Fuse::Animations::Easing::CircularOut());
    temp9->Height(::g::Uno::UX::Size__New1(45.0f, 1));
    temp9->Alignment(4);
    temp9->Y(::g::Uno::UX::Size__New1(0.0f, 1));
    temp9->Background(temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    temp10->Value(::STRINGS[19/*"IMPACT ZONES"*/]);
    temp10->Alignment(10);
    temp10->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f));
    uPtr(outerpanel)->Alignment(4);
    uPtr(outerpanel)->Y(::g::Uno::UX::Size__New1(45.0f, 1));
    uPtr(outerpanel)->Name(ImpactPage::__selector2());
    uPtr(outerpanel)->Background(temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(outerpanel)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(outerpanel)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), ZipBar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(outerpanel)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    temp12->Height(::g::Uno::UX::Size__New1(300.0f, 1));
    temp12->Alignment(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    temp13->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp13->Alignment(12);
    temp13->Opacity(0.8f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    temp14->Value(::STRINGS[20/*"Impact zone...*/]);
    temp14->TextWrapping(1);
    temp14->FontSize(16.0f);
    temp14->Color(::g::Uno::Float4__New2(0.1686275f, 0.1686275f, 0.1686275f, 1.0f));
    temp14->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    temp15->StretchMode(6);
    temp15->StretchDirection(2);
    temp15->StretchSizing(0);
    temp15->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp15->Visibility(0);
    temp15->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp15->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp15, uDelegate::New(::TYPES[4/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb40)));
    temp15->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::cityb1f11489()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb40);
    uPtr(ZipBar)->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    uPtr(ZipBar)->Color(::g::Uno::Float4__New2(0.9607843f, 0.9607843f, 0.9607843f, 1.0f));
    uPtr(ZipBar)->Width(::g::Uno::UX::Size__New1(320.0f, 1));
    uPtr(ZipBar)->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(ZipBar)->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 20.0f));
    uPtr(ZipBar)->Name(ImpactPage::__selector3());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ZipBar)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    temp17->Margin(::g::Uno::Float4__New2(0.0f, 15.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    temp18->RowCount(1);
    temp18->ColumnCount(2);
    temp18->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 10.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    temp19->Value(::STRINGS[21/*"Enter Zipcode"*/]);
    temp19->FontSize(16.0f);
    temp19->Margin(::g::Uno::Float4__New2(20.0f, 5.0f, 0.0f, 0.0f));
    temp20->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp20->Width(::g::Uno::UX::Size__New1(80.0f, 1));
    temp20->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp20->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 100.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp->PlaceholderText(::STRINGS[14/*"zipcode"*/]);
    temp->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp->TextAlignment(1);
    temp->TextColor(::g::Uno::Float4__New2(0.1333333f, 0.1333333f, 0.1333333f, 1.0f));
    temp->CaretColor(::g::Uno::Float4__New2(0.1333333f, 0.1333333f, 0.1333333f, 1.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp21);
    temp22->RowCount(1);
    temp22->Columns(::STRINGS[22/*"auto,1*,1*"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    temp23->Value(::STRINGS[23/*"Fund Cleanu...*/]);
    temp23->FontSize(16.0f);
    temp23->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 0.0f, 0.0f));
    temp24->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp24->Width(::g::Uno::UX::Size__New1(80.0f, 1));
    temp24->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp24->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    temp25->Value(::STRINGS[24/*"89"*/]);
    temp25->FontSize(20.0f);
    temp25->TextAlignment(1);
    temp25->Color(::g::Uno::Float4__New2(0.9411765f, 0.3490196f, 0.3490196f, 1.0f));
    temp25->Margin(::g::Uno::Float4__New2(0.0f, 7.0f, 0.0f, 0.0f));
    temp26->Value(::STRINGS[25/*"Dirt Alerts"*/]);
    temp26->FontSize(16.0f);
    temp26->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    temp27->RowCount(1);
    temp27->Columns(::STRINGS[26/*"1,1,1"*/]);
    temp27->CellSpacing(120.0f);
    temp27->Width(::g::Uno::UX::Size__New1(80.0f, 4));
    temp27->Alignment(10);
    temp27->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), fiverec);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), tenrec);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), twentyfiverec);
    uPtr(fiverec)->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    uPtr(fiverec)->Color(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    uPtr(fiverec)->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    uPtr(fiverec)->Height(::g::Uno::UX::Size__New1(48.0f, 1));
    uPtr(fiverec)->Alignment(10);
    uPtr(fiverec)->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(fiverec)->Name(ImpactPage::__selector4());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(fiverec)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(fiverec)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    temp28->Value(::STRINGS[27/*"$5/m"*/]);
    temp28->FontSize(24.0f);
    temp28->Alignment(10);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp28, uDelegate::New(::TYPES[4/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb41)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp30);
    ::g::Fuse::Animations::Change__set_Value_fn(temp30, uCRef(::g::Uno::Float4__New2(0.6862745f, 0.8705882f, 0.4117647f, 1.0f)));
    temp30->Duration(0.05);
    temp30->DurationBack(0.2);
    uPtr(tenrec)->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    uPtr(tenrec)->Color(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    uPtr(tenrec)->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    uPtr(tenrec)->Height(::g::Uno::UX::Size__New1(48.0f, 1));
    uPtr(tenrec)->Alignment(10);
    uPtr(tenrec)->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(tenrec)->Name(ImpactPage::__selector5());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(tenrec)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(tenrec)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    temp31->Value(::STRINGS[28/*"$10/m"*/]);
    temp31->FontSize(24.0f);
    temp31->Alignment(10);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp31, uDelegate::New(::TYPES[4/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb42)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp33);
    ::g::Fuse::Animations::Change__set_Value_fn(temp33, uCRef(::g::Uno::Float4__New2(0.6862745f, 0.8705882f, 0.4117647f, 1.0f)));
    temp33->Duration(0.05);
    temp33->DurationBack(0.2);
    uPtr(twentyfiverec)->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    uPtr(twentyfiverec)->Color(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    uPtr(twentyfiverec)->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    uPtr(twentyfiverec)->Height(::g::Uno::UX::Size__New1(48.0f, 1));
    uPtr(twentyfiverec)->Alignment(10);
    uPtr(twentyfiverec)->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(twentyfiverec)->Name(ImpactPage::__selector6());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(twentyfiverec)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(twentyfiverec)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    temp34->Value(::STRINGS[29/*"$25/m"*/]);
    temp34->FontSize(24.0f);
    temp34->Alignment(10);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp34, uDelegate::New(::TYPES[4/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb43)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp36);
    ::g::Fuse::Animations::Change__set_Value_fn(temp36, uCRef(::g::Uno::Float4__New2(0.6862745f, 0.8705882f, 0.4117647f, 1.0f)));
    temp36->Duration(0.05);
    temp36->DurationBack(0.2);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), outerpanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), ZipBar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), fiverec);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), tenrec);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), twentyfiverec);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), outerpanel);
}

// public ImpactPage New(Fuse.Navigation.Router router) [static] :38
ImpactPage* ImpactPage::New5(::g::Fuse::Navigation::Router* router1)
{
    ImpactPage* obj1 = (ImpactPage*)uNew(ImpactPage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
