// This file was generated based on '.uno/ux11/BuyEcanPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.BuyEcanPage.h>
#include <_root.emrals_bundle.h>
#include <_root.emrals_FuseCont-b37426cf.h>
#include <_root.emrals_FuseCont-f08373fa.h>
#include <_root.emrals_FuseCont-f52b401d.h>
#include <_root.emrals_FuseElem-95841797.h>
#include <_root.Horse.h>
#include <_root.Mouse.h>
#include <_root.PTMono.h>
#include <_root.PTreal.h>
#include <Basic.TextInput.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Controls.ClientPanel.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.Add.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Triggers.Trigger.h>
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
static uString* STRINGS[48];
static uType* TYPES[7];

namespace g{

// public partial sealed class BuyEcanPage :2
// {
// static BuyEcanPage() :39
static void BuyEcanPage__cctor_4_fn(uType* __type)
{
    BuyEcanPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 8, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"temp_eb18"*/], ::STRINGS[2/*"CCPage"*/], ::STRINGS[3/*"temp_eb20"*/], ::STRINGS[4/*"temp_eb19"*/], ::STRINGS[5/*"CCArea"*/], ::STRINGS[6/*"buyecanrec"*/], ::STRINGS[7/*"temp_eb21"*/]);
    BuyEcanPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"Value"*/]);
    BuyEcanPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"Visibility"*/]);
    BuyEcanPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"Color"*/]);
    BuyEcanPage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"CCPage"*/]);
    BuyEcanPage::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"CCArea"*/]);
    BuyEcanPage::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"buyecanrec"*/]);
    BuyEcanPage::PTMono_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::PTM55FT66544efb()));
    ::g::Uno::UX::Resource::SetGlobalKey(BuyEcanPage::PTMono_, ::STRINGS[11/*"PTMono"*/]);
}

static void BuyEcanPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("temp_eb18");
    ::STRINGS[2] = uString::Const("CCPage");
    ::STRINGS[3] = uString::Const("temp_eb20");
    ::STRINGS[4] = uString::Const("temp_eb19");
    ::STRINGS[5] = uString::Const("CCArea");
    ::STRINGS[6] = uString::Const("buyecanrec");
    ::STRINGS[7] = uString::Const("temp_eb21");
    ::STRINGS[8] = uString::Const("Value");
    ::STRINGS[9] = uString::Const("Visibility");
    ::STRINGS[10] = uString::Const("Color");
    ::STRINGS[11] = uString::Const("PTMono");
    ::STRINGS[12] = uString::Const("back");
    ::STRINGS[13] = uString::Const("error");
    ::STRINGS[14] = uString::Const("hideError");
    ::STRINGS[15] = uString::Const("error_visibility");
    ::STRINGS[16] = uString::Const("qty");
    ::STRINGS[17] = uString::Const("$");
    ::STRINGS[18] = uString::Const("price");
    ::STRINGS[19] = uString::Const("name");
    ::STRINGS[20] = uString::Const("address");
    ::STRINGS[21] = uString::Const("city");
    ::STRINGS[22] = uString::Const("state");
    ::STRINGS[23] = uString::Const("zipcode");
    ::STRINGS[24] = uString::Const("email");
    ::STRINGS[25] = uString::Const("cardNumber");
    ::STRINGS[26] = uString::Const("expiryMonth");
    ::STRINGS[27] = uString::Const("expiryYear");
    ::STRINGS[28] = uString::Const("cvc");
    ::STRINGS[29] = uString::Const("testPay");
    ::STRINGS[30] = uString::Const("Pages/BuyEcanPage.ux");
    ::STRINGS[31] = uString::Const("<<");
    ::STRINGS[32] = uString::Const("ECAN CHECKOUT");
    ::STRINGS[33] = uString::Const("X");
    ::STRINGS[34] = uString::Const("100,150,150");
    ::STRINGS[35] = uString::Const("QUANTITY");
    ::STRINGS[36] = uString::Const("DESCRIPTION");
    ::STRINGS[37] = uString::Const("PRICE");
    ::STRINGS[38] = uString::Const("01");
    ::STRINGS[39] = uString::Const("eCan plus mobile Data Dashboard.");
    ::STRINGS[40] = uString::Const("SHIP TO");
    ::STRINGS[41] = uString::Const("NY");
    ::STRINGS[42] = uString::Const("PAYMENT INFO");
    ::STRINGS[43] = uString::Const("card number");
    ::STRINGS[44] = uString::Const("MM");
    ::STRINGS[45] = uString::Const("YY");
    ::STRINGS[46] = uString::Const("CVC");
    ::STRINGS[47] = uString::Const("CONFIRM");
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
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::BuyEcanPage, __g_nametable1), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::BuyEcanPage, buyecanrec), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::BuyEcanPage, buyecanrec_Color_inst), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(::g::BuyEcanPage, CCArea), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(::g::BuyEcanPage, CCPage), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::BuyEcanPage, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::BuyEcanPage, temp_eb18), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::BuyEcanPage, temp_eb19), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::BuyEcanPage, temp_eb20), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::BuyEcanPage, temp_eb21), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::BuyEcanPage, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::BuyEcanPage, temp1_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::BuyEcanPage, temp10_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::BuyEcanPage, temp11_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::BuyEcanPage, temp12_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::BuyEcanPage, temp13_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::BuyEcanPage, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::BuyEcanPage, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::BuyEcanPage, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::BuyEcanPage, temp5_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::BuyEcanPage, temp6_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::BuyEcanPage, temp7_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::BuyEcanPage, temp8_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::BuyEcanPage, temp9_Value_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::BuyEcanPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::BuyEcanPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::BuyEcanPage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::BuyEcanPage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::BuyEcanPage::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::BuyEcanPage::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::BuyEcanPage::__selector5_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::BuyEcanPage::PTMono_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* BuyEcanPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 143;
    options.InterfaceCount = 17;
    options.ObjectSize = sizeof(BuyEcanPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("BuyEcanPage", options);
    type->fp_build_ = BuyEcanPage_build;
    type->fp_cctor_ = BuyEcanPage__cctor_4_fn;
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

// public BuyEcanPage(Fuse.Navigation.Router router) :45
void BuyEcanPage__ctor_8_fn(BuyEcanPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :51
void BuyEcanPage__InitializeUX_fn(BuyEcanPage* __this)
{
    __this->InitializeUX();
}

// public BuyEcanPage New(Fuse.Navigation.Router router) :45
void BuyEcanPage__New5_fn(::g::Fuse::Navigation::Router* router1, BuyEcanPage** __retval)
{
    *__retval = BuyEcanPage::New5(router1);
}

uSStrong<uArray*> BuyEcanPage::__g_static_nametable1_;
::g::Uno::UX::Selector BuyEcanPage::__selector0_;
::g::Uno::UX::Selector BuyEcanPage::__selector1_;
::g::Uno::UX::Selector BuyEcanPage::__selector2_;
::g::Uno::UX::Selector BuyEcanPage::__selector3_;
::g::Uno::UX::Selector BuyEcanPage::__selector4_;
::g::Uno::UX::Selector BuyEcanPage::__selector5_;
uSStrong< ::g::Fuse::Font*> BuyEcanPage::PTMono_;

// public BuyEcanPage(Fuse.Navigation.Router router) [instance] :45
void BuyEcanPage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :51
void BuyEcanPage::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, BuyEcanPage::__g_static_nametable1());
    ::g::Fuse::Reactive::Data* temp14 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"back"*/]);
    ::g::PTMono* temp = ::g::PTMono::New4();
    temp_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp, BuyEcanPage::__selector0());
    ::g::Fuse::Reactive::Data* temp15 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"error"*/]);
    ::g::Fuse::Reactive::Data* temp16 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"hideError"*/]);
    ::g::Fuse::Controls::Rectangle* temp1 = ::g::Fuse::Controls::Rectangle::New3();
    temp1_Visibility_inst = ::g::emrals_FuseElementsElement_Visibility_Property::New1(temp1, BuyEcanPage::__selector1());
    ::g::Fuse::Reactive::Data* temp17 = ::g::Fuse::Reactive::Data::New1(::STRINGS[15/*"error_visib...*/]);
    ::g::Fuse::Reactive::Data* temp18 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"hideError"*/]);
    ::g::Basic::TextInput* temp2 = ::g::Basic::TextInput::New4();
    temp2_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp2, BuyEcanPage::__selector0());
    ::g::Fuse::Reactive::Data* temp19 = ::g::Fuse::Reactive::Data::New1(::STRINGS[16/*"qty"*/]);
    uString* temp20 = ::STRINGS[17/*"$"*/];
    ::g::Fuse::Reactive::Constant* temp21 = ::g::Fuse::Reactive::Constant::New1(temp20);
    ::g::Fuse::Reactive::Data* temp22 = ::g::Fuse::Reactive::Data::New1(::STRINGS[18/*"price"*/]);
    ::g::Mouse* temp3 = ::g::Mouse::New4();
    temp3_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp3, BuyEcanPage::__selector0());
    ::g::Fuse::Reactive::Add* temp23 = ::g::Fuse::Reactive::Add::New1(temp21, temp22);
    ::g::Basic::TextInput* temp4 = ::g::Basic::TextInput::New4();
    temp4_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp4, BuyEcanPage::__selector0());
    ::g::Fuse::Reactive::Data* temp24 = ::g::Fuse::Reactive::Data::New1(::STRINGS[19/*"name"*/]);
    ::g::Basic::TextInput* temp5 = ::g::Basic::TextInput::New4();
    temp5_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp5, BuyEcanPage::__selector0());
    ::g::Fuse::Reactive::Data* temp25 = ::g::Fuse::Reactive::Data::New1(::STRINGS[20/*"address"*/]);
    ::g::Basic::TextInput* temp6 = ::g::Basic::TextInput::New4();
    temp6_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp6, BuyEcanPage::__selector0());
    ::g::Fuse::Reactive::Data* temp26 = ::g::Fuse::Reactive::Data::New1(::STRINGS[21/*"city"*/]);
    ::g::Basic::TextInput* temp7 = ::g::Basic::TextInput::New4();
    temp7_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp7, BuyEcanPage::__selector0());
    ::g::Fuse::Reactive::Data* temp27 = ::g::Fuse::Reactive::Data::New1(::STRINGS[22/*"state"*/]);
    ::g::Basic::TextInput* temp8 = ::g::Basic::TextInput::New4();
    temp8_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp8, BuyEcanPage::__selector0());
    ::g::Fuse::Reactive::Data* temp28 = ::g::Fuse::Reactive::Data::New1(::STRINGS[23/*"zipcode"*/]);
    ::g::Basic::TextInput* temp9 = ::g::Basic::TextInput::New4();
    temp9_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp9, BuyEcanPage::__selector0());
    ::g::Fuse::Reactive::Data* temp29 = ::g::Fuse::Reactive::Data::New1(::STRINGS[24/*"email"*/]);
    ::g::Basic::TextInput* temp10 = ::g::Basic::TextInput::New4();
    temp10_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp10, BuyEcanPage::__selector0());
    ::g::Fuse::Reactive::Data* temp30 = ::g::Fuse::Reactive::Data::New1(::STRINGS[25/*"cardNumber"*/]);
    ::g::Basic::TextInput* temp11 = ::g::Basic::TextInput::New4();
    temp11_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp11, BuyEcanPage::__selector0());
    ::g::Fuse::Reactive::Data* temp31 = ::g::Fuse::Reactive::Data::New1(::STRINGS[26/*"expiryMonth"*/]);
    ::g::Basic::TextInput* temp12 = ::g::Basic::TextInput::New4();
    temp12_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp12, BuyEcanPage::__selector0());
    ::g::Fuse::Reactive::Data* temp32 = ::g::Fuse::Reactive::Data::New1(::STRINGS[27/*"expiryYear"*/]);
    ::g::Basic::TextInput* temp13 = ::g::Basic::TextInput::New4();
    temp13_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp13, BuyEcanPage::__selector0());
    ::g::Fuse::Reactive::Data* temp33 = ::g::Fuse::Reactive::Data::New1(::STRINGS[28/*"cvc"*/]);
    buyecanrec = ::g::Fuse::Controls::Rectangle::New3();
    buyecanrec_Color_inst = ::g::emrals_FuseControlsShape_Color_Property::New1(buyecanrec, BuyEcanPage::__selector2());
    ::g::Fuse::Reactive::Data* temp34 = ::g::Fuse::Reactive::Data::New1(::STRINGS[29/*"testPay"*/]);
    ::g::Fuse::Reactive::JavaScript* temp35 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Panel* temp36 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp37 = ::g::Fuse::Controls::Text::New3();
    temp_eb18 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp14, __g_nametable1);
    ::g::PTreal* temp38 = ::g::PTreal::New4();
    ::g::Fuse::Drawing::StaticSolidColor* temp39 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    CCPage = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::ScrollView* temp40 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::ClientPanel* temp41 = ::g::Fuse::Controls::ClientPanel::New5();
    ::g::Fuse::Controls::Panel* temp42 = ::g::Fuse::Controls::Panel::New3();
    ::g::PTMono* temp43 = ::g::PTMono::New4();
    ::g::Fuse::Reactive::DataBinding* temp44 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp15, __g_nametable1, 3);
    temp_eb20 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp16, __g_nametable1);
    ::g::Fuse::Reactive::DataBinding* temp45 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Visibility_inst, (uObject*)temp17, __g_nametable1, 3);
    temp_eb19 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp18, __g_nametable1);
    ::g::Fuse::Controls::StackPanel* temp46 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp47 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp48 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp49 = ::g::Fuse::Controls::Grid::New4();
    ::g::Horse* temp50 = ::g::Horse::New4();
    ::g::Horse* temp51 = ::g::Horse::New4();
    ::g::Horse* temp52 = ::g::Horse::New4();
    ::g::Fuse::Controls::Rectangle* temp53 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp54 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp19, __g_nametable1, 3);
    ::g::Mouse* temp55 = ::g::Mouse::New4();
    ::g::Fuse::Reactive::DataBinding* temp56 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp23, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp57 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::StackPanel* temp58 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Horse* temp59 = ::g::Horse::New4();
    ::g::Fuse::Controls::Rectangle* temp60 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp61 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Value_inst, (uObject*)temp24, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp62 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp63 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Value_inst, (uObject*)temp25, __g_nametable1, 3);
    ::g::Fuse::Controls::StackPanel* temp64 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp65 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp66 = ::g::Fuse::Reactive::DataBinding::New1(temp6_Value_inst, (uObject*)temp26, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp67 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp68 = ::g::Fuse::Reactive::DataBinding::New1(temp7_Value_inst, (uObject*)temp27, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp69 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp70 = ::g::Fuse::Reactive::DataBinding::New1(temp8_Value_inst, (uObject*)temp28, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp71 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp72 = ::g::Fuse::Reactive::DataBinding::New1(temp9_Value_inst, (uObject*)temp29, __g_nametable1, 3);
    ::g::Horse* temp73 = ::g::Horse::New4();
    CCArea = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp74 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp75 = ::g::Fuse::Reactive::DataBinding::New1(temp10_Value_inst, (uObject*)temp30, __g_nametable1, 3);
    ::g::Fuse::Controls::StackPanel* temp76 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp77 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp78 = ::g::Fuse::Reactive::DataBinding::New1(temp11_Value_inst, (uObject*)temp31, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp79 = ::g::Fuse::Reactive::DataBinding::New1(temp12_Value_inst, (uObject*)temp32, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp80 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp81 = ::g::Fuse::Reactive::DataBinding::New1(temp13_Value_inst, (uObject*)temp33, __g_nametable1, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp82 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    ::g::Fuse::Controls::DockPanel* temp83 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Horse* temp84 = ::g::Horse::New4();
    ::g::Fuse::Gestures::WhilePressed* temp85 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Change* temp86 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float4>*/], buyecanrec_Color_inst);
    temp_eb21 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp34, __g_nametable1);
    temp35->LineNumber(3);
    temp35->FileName(::STRINGS[30/*"Pages/BuyEc...*/]);
    temp35->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::BuyEcanPage33e0483b()));
    temp36->Height(::g::Uno::UX::Size__New1(45.0f, 1));
    temp36->Y(::g::Uno::UX::Size__New1(0.0f, 1));
    temp36->Background(temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    temp37->Value(::STRINGS[31/*"<<"*/]);
    temp37->FontSize(24.0f);
    temp37->Color(::g::Uno::Float4__New2(0.3882353f, 0.3882353f, 0.3921569f, 1.0f));
    temp37->Alignment(3);
    temp37->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 30.0f, 0.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp37, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb18)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb18);
    temp38->Value(::STRINGS[32/*"ECAN CHECKOUT"*/]);
    temp38->Alignment(10);
    uPtr(CCPage)->Y(::g::Uno::UX::Size__New1(45.0f, 1));
    uPtr(CCPage)->Name(BuyEcanPage::__selector3());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(CCPage)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(CCPage)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp83);
    temp40->Height(::g::Uno::UX::Size__New1(475.0f, 1));
    temp40->Background(temp82);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    temp1->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp1->Color(::g::Uno::Float4__New2(0.8705882f, 0.8745098f, 0.8745098f, 1.0f));
    temp1->Width(::g::Uno::UX::Size__New1(250.0f, 1));
    temp1->Alignment(10);
    temp1->Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp1->Opacity(0.9f);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp1, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb19)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb19);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp42, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb20)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb20);
    temp43->Value(::STRINGS[33/*"X"*/]);
    temp43->FontSize(16.0f);
    temp43->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp43->Alignment(7);
    temp43->Margin(::g::Uno::Float4__New2(0.0f, 4.0f, 4.0f, 0.0f));
    temp43->Opacity(1.0f);
    temp->TextWrapping(1);
    temp->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp58);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp76);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp57);
    temp49->RowCount(3);
    temp49->Columns(::STRINGS[34/*"100,150,150"*/]);
    temp49->Padding(::g::Uno::Float4__New2(40.0f, -10.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp55);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp50->Value(::STRINGS[35/*"QUANTITY"*/]);
    temp50->FontSize(14.0f);
    ::g::Fuse::Controls::Grid::SetRow(temp50, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp50, 0);
    temp51->Value(::STRINGS[36/*"DESCRIPTION"*/]);
    temp51->FontSize(14.0f);
    ::g::Fuse::Controls::Grid::SetRow(temp51, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp51, 1);
    temp52->Value(::STRINGS[37/*"PRICE"*/]);
    temp52->FontSize(14.0f);
    ::g::Fuse::Controls::Grid::SetRow(temp52, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp52, 2);
    temp53->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp53->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp53->Width(::g::Uno::UX::Size__New1(60.0f, 1));
    temp53->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp53->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 40.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp53, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp53, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp2->PlaceholderText(::STRINGS[38/*"01"*/]);
    temp2->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp2->FontSize(14.0f);
    temp2->Margin(::g::Uno::Float4__New2(10.0f, 5.0f, 10.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp54);
    temp55->Value(::STRINGS[39/*"eCan plus m...*/]);
    temp55->TextWrapping(1);
    temp55->FontSize(14.0f);
    temp55->Margin(::g::Uno::Float4__New2(0.0f, -5.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp55, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp55, 1);
    temp3->FontSize(16.0f);
    temp3->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp3, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp3, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp56);
    temp57->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp57->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp57->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    temp57->Margin(::g::Uno::Float4__New2(0.0f, -30.0f, 0.0f, 0.0f));
    temp57->Opacity(0.1f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp59);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp60);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp62);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp64);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp71);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp73);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), CCArea);
    temp59->Value(::STRINGS[40/*"SHIP TO"*/]);
    temp59->FontSize(14.0f);
    temp59->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp59->Margin(::g::Uno::Float4__New2(40.0f, 10.0f, 0.0f, 0.0f));
    temp60->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp60->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp60->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp60->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp60->Alignment(1);
    temp60->Margin(::g::Uno::Float4__New2(40.0f, 5.0f, 40.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp60->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    temp4->PlaceholderText(::STRINGS[19/*"name"*/]);
    temp4->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp4->FontSize(14.0f);
    temp4->Margin(::g::Uno::Float4__New2(10.0f, 5.0f, 10.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp61);
    temp62->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp62->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp62->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp62->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp62->Alignment(1);
    temp62->Margin(::g::Uno::Float4__New2(40.0f, 5.0f, 40.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    temp5->PlaceholderText(::STRINGS[20/*"address"*/]);
    temp5->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp5->FontSize(14.0f);
    temp5->Margin(::g::Uno::Float4__New2(10.0f, 5.0f, 10.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp63);
    temp64->Orientation(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp64->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp65);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp64->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp67);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp64->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp69);
    temp65->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp65->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp65->Width(::g::Uno::UX::Size__New1(120.0f, 1));
    temp65->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp65->Alignment(1);
    temp65->Margin(::g::Uno::Float4__New2(40.0f, 5.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    temp6->PlaceholderText(::STRINGS[21/*"city"*/]);
    temp6->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp6->FontSize(14.0f);
    temp6->Margin(::g::Uno::Float4__New2(10.0f, 5.0f, 10.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp66);
    temp67->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp67->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp67->Width(::g::Uno::UX::Size__New1(60.0f, 1));
    temp67->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp67->Margin(::g::Uno::Float4__New2(15.0f, 5.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp67->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    temp7->PlaceholderText(::STRINGS[41/*"NY"*/]);
    temp7->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp7->FontSize(14.0f);
    temp7->Margin(::g::Uno::Float4__New2(10.0f, 5.0f, 10.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp68);
    temp69->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp69->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp69->Width(::g::Uno::UX::Size__New1(90.0f, 1));
    temp69->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp69->Margin(::g::Uno::Float4__New2(15.0f, 5.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp69->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    temp8->PlaceholderText(::STRINGS[23/*"zipcode"*/]);
    temp8->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp8->FontSize(14.0f);
    temp8->Margin(::g::Uno::Float4__New2(10.0f, 5.0f, 10.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp70);
    temp71->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp71->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp71->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp71->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp71->Alignment(1);
    temp71->Margin(::g::Uno::Float4__New2(40.0f, 10.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp71->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    temp9->PlaceholderText(::STRINGS[24/*"email"*/]);
    temp9->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp9->FontSize(14.0f);
    temp9->Margin(::g::Uno::Float4__New2(10.0f, 5.0f, 10.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp72);
    temp73->Value(::STRINGS[42/*"PAYMENT INFO"*/]);
    temp73->FontSize(14.0f);
    temp73->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp73->Margin(::g::Uno::Float4__New2(40.0f, 30.0f, 0.0f, 0.0f));
    uPtr(CCArea)->Name(BuyEcanPage::__selector4());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(CCArea)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp74);
    temp74->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp74->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp74->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp74->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp74->Alignment(1);
    temp74->Margin(::g::Uno::Float4__New2(40.0f, 10.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp74->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    temp10->PlaceholderText(::STRINGS[43/*"card number"*/]);
    temp10->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp10->Width(::g::Uno::UX::Size__New1(290.0f, 1));
    temp10->Alignment(1);
    temp10->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp75);
    temp76->Orientation(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp76->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp77);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp76->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp80);
    temp77->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp77->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp77->Width(::g::Uno::UX::Size__New1(120.0f, 1));
    temp77->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp77->Alignment(1);
    temp77->Margin(::g::Uno::Float4__New2(40.0f, 10.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp77->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp77->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    temp11->PlaceholderText(::STRINGS[44/*"MM"*/]);
    temp11->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp11->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp11->Alignment(1);
    temp11->Margin(::g::Uno::Float4__New2(33.0f, 5.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp78);
    temp12->PlaceholderText(::STRINGS[45/*"YY"*/]);
    temp12->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp12->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp12->Alignment(1);
    temp12->Margin(::g::Uno::Float4__New2(70.0f, 5.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp79);
    temp80->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp80->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp80->Width(::g::Uno::UX::Size__New1(120.0f, 1));
    temp80->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp80->Margin(::g::Uno::Float4__New2(60.0f, 10.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp80->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    temp13->PlaceholderText(::STRINGS[46/*"CVC"*/]);
    temp13->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp13->Width(::g::Uno::UX::Size__New1(40.0f, 1));
    temp13->Margin(::g::Uno::Float4__New2(10.0f, 5.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp81);
    ::g::Fuse::Controls::DockPanel::SetDock(temp83, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp83->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), buyecanrec);
    uPtr(buyecanrec)->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    uPtr(buyecanrec)->Color(::g::Uno::Float4__New2(0.9411765f, 0.3490196f, 0.3490196f, 1.0f));
    uPtr(buyecanrec)->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    uPtr(buyecanrec)->Height(::g::Uno::UX::Size__New1(44.0f, 1));
    uPtr(buyecanrec)->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f));
    uPtr(buyecanrec)->Name(BuyEcanPage::__selector5());
    ::g::Fuse::Controls::DockPanel::SetDock(buyecanrec, 3);
    ::g::Fuse::Gestures::Clicked::AddHandler(buyecanrec, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb21)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(buyecanrec)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp84);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(buyecanrec)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp85);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(buyecanrec)->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb21);
    temp84->Value(::STRINGS[47/*"CONFIRM"*/]);
    temp84->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp85->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp86);
    ::g::Fuse::Animations::Change__set_Value_fn(temp86, uCRef(::g::Uno::Float4__New2(0.9568627f, 0.1764706f, 0.1764706f, 1.0f)));
    temp86->Duration(0.05);
    temp86->DurationBack(0.2);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), CCPage);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), CCArea);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), buyecanrec);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), CCPage);
}

// public BuyEcanPage New(Fuse.Navigation.Router router) [static] :45
BuyEcanPage* BuyEcanPage::New5(::g::Fuse::Navigation::Router* router1)
{
    BuyEcanPage* obj1 = (BuyEcanPage*)uNew(BuyEcanPage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
