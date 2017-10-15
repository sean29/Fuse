// This file was generated based on '.uno/ux11/BuyEmralsPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.BuyEmralsPage.h>
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
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Visibility.h>
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
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[39];
static uType* TYPES[7];

namespace g{

// public partial sealed class BuyEmralsPage :2
// {
// static BuyEmralsPage() :31
static void BuyEmralsPage__cctor_4_fn(uType* __type)
{
    BuyEmralsPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"temp_eb22"*/], ::STRINGS[2/*"temp_eb24"*/], ::STRINGS[3/*"temp_eb23"*/], ::STRINGS[4/*"confirmrec"*/], ::STRINGS[5/*"temp_eb25"*/]);
    BuyEmralsPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"Value"*/]);
    BuyEmralsPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"Visibility"*/]);
    BuyEmralsPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"Color"*/]);
    BuyEmralsPage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"confirmrec"*/]);
}

static void BuyEmralsPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("temp_eb22");
    ::STRINGS[2] = uString::Const("temp_eb24");
    ::STRINGS[3] = uString::Const("temp_eb23");
    ::STRINGS[4] = uString::Const("confirmrec");
    ::STRINGS[5] = uString::Const("temp_eb25");
    ::STRINGS[6] = uString::Const("Value");
    ::STRINGS[7] = uString::Const("Visibility");
    ::STRINGS[8] = uString::Const("Color");
    ::STRINGS[9] = uString::Const("back");
    ::STRINGS[10] = uString::Const("id");
    ::STRINGS[11] = uString::Const("emrals");
    ::STRINGS[12] = uString::Const("  ($");
    ::STRINGS[13] = uString::Const("dollar_value");
    ::STRINGS[14] = uString::Const(")");
    ::STRINGS[15] = uString::Const("error");
    ::STRINGS[16] = uString::Const("hideError");
    ::STRINGS[17] = uString::Const("error_visibility");
    ::STRINGS[18] = uString::Const("username");
    ::STRINGS[19] = uString::Const("email");
    ::STRINGS[20] = uString::Const("cardNumber");
    ::STRINGS[21] = uString::Const("expiryMonth");
    ::STRINGS[22] = uString::Const("expiryYear");
    ::STRINGS[23] = uString::Const("cvc");
    ::STRINGS[24] = uString::Const("PAY $");
    ::STRINGS[25] = uString::Const("testPay");
    ::STRINGS[26] = uString::Const("Pages/BuyEmralsPage.ux");
    ::STRINGS[27] = uString::Const("<<");
    ::STRINGS[28] = uString::Const("ADD EMRALS");
    ::STRINGS[29] = uString::Const("60,60");
    ::STRINGS[30] = uString::Const("200,100");
    ::STRINGS[31] = uString::Const("Dirt Alert #");
    ::STRINGS[32] = uString::Const("Emrals");
    ::STRINGS[33] = uString::Const("X");
    ::STRINGS[34] = uString::Const("Payment Info");
    ::STRINGS[35] = uString::Const("card number");
    ::STRINGS[36] = uString::Const("MM");
    ::STRINGS[37] = uString::Const("YY");
    ::STRINGS[38] = uString::Const("CVC");
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
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::BuyEmralsPage, __g_nametable1), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::BuyEmralsPage, confirmrec), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::BuyEmralsPage, confirmrec_Color_inst), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::BuyEmralsPage, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::BuyEmralsPage, temp_eb22), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::BuyEmralsPage, temp_eb23), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::BuyEmralsPage, temp_eb24), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::BuyEmralsPage, temp_eb25), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::BuyEmralsPage, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::BuyEmralsPage, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::BuyEmralsPage, temp10_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::BuyEmralsPage, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::BuyEmralsPage, temp3_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::BuyEmralsPage, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::BuyEmralsPage, temp5_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::BuyEmralsPage, temp6_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::BuyEmralsPage, temp7_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::BuyEmralsPage, temp8_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::BuyEmralsPage, temp9_Value_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::BuyEmralsPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::BuyEmralsPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::BuyEmralsPage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::BuyEmralsPage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::BuyEmralsPage::__selector3_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* BuyEmralsPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 135;
    options.InterfaceCount = 17;
    options.ObjectSize = sizeof(BuyEmralsPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("BuyEmralsPage", options);
    type->fp_build_ = BuyEmralsPage_build;
    type->fp_cctor_ = BuyEmralsPage__cctor_4_fn;
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

// public BuyEmralsPage(Fuse.Navigation.Router router) :35
void BuyEmralsPage__ctor_8_fn(BuyEmralsPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :41
void BuyEmralsPage__InitializeUX_fn(BuyEmralsPage* __this)
{
    __this->InitializeUX();
}

// public BuyEmralsPage New(Fuse.Navigation.Router router) :35
void BuyEmralsPage__New5_fn(::g::Fuse::Navigation::Router* router1, BuyEmralsPage** __retval)
{
    *__retval = BuyEmralsPage::New5(router1);
}

uSStrong<uArray*> BuyEmralsPage::__g_static_nametable1_;
::g::Uno::UX::Selector BuyEmralsPage::__selector0_;
::g::Uno::UX::Selector BuyEmralsPage::__selector1_;
::g::Uno::UX::Selector BuyEmralsPage::__selector2_;
::g::Uno::UX::Selector BuyEmralsPage::__selector3_;

// public BuyEmralsPage(Fuse.Navigation.Router router) [instance] :35
void BuyEmralsPage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :41
void BuyEmralsPage::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, BuyEmralsPage::__g_static_nametable1());
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[9/*"back"*/]);
    ::g::Mouse* temp = ::g::Mouse::New4();
    temp_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp, BuyEmralsPage::__selector0());
    ::g::Fuse::Reactive::Data* temp12 = ::g::Fuse::Reactive::Data::New1(::STRINGS[10/*"id"*/]);
    ::g::Fuse::Reactive::Data* temp13 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"emrals"*/]);
    uString* temp14 = ::STRINGS[12/*"  ($"*/];
    ::g::Fuse::Reactive::Constant* temp15 = ::g::Fuse::Reactive::Constant::New1(temp14);
    ::g::Fuse::Reactive::Data* temp16 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"dollar_value"*/]);
    uString* temp17 = ::STRINGS[14/*")"*/];
    ::g::Fuse::Reactive::Constant* temp18 = ::g::Fuse::Reactive::Constant::New1(temp17);
    ::g::Fuse::Reactive::Add* temp19 = ::g::Fuse::Reactive::Add::New1(temp16, temp18);
    ::g::Fuse::Reactive::Add* temp20 = ::g::Fuse::Reactive::Add::New1(temp15, temp19);
    ::g::Mouse* temp1 = ::g::Mouse::New4();
    temp1_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp1, BuyEmralsPage::__selector0());
    ::g::Fuse::Reactive::Add* temp21 = ::g::Fuse::Reactive::Add::New1(temp13, temp20);
    ::g::PTMono* temp2 = ::g::PTMono::New4();
    temp2_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp2, BuyEmralsPage::__selector0());
    ::g::Fuse::Reactive::Data* temp22 = ::g::Fuse::Reactive::Data::New1(::STRINGS[15/*"error"*/]);
    ::g::Fuse::Reactive::Data* temp23 = ::g::Fuse::Reactive::Data::New1(::STRINGS[16/*"hideError"*/]);
    ::g::Fuse::Controls::Rectangle* temp3 = ::g::Fuse::Controls::Rectangle::New3();
    temp3_Visibility_inst = ::g::emrals_FuseElementsElement_Visibility_Property::New1(temp3, BuyEmralsPage::__selector1());
    ::g::Fuse::Reactive::Data* temp24 = ::g::Fuse::Reactive::Data::New1(::STRINGS[17/*"error_visib...*/]);
    ::g::Fuse::Reactive::Data* temp25 = ::g::Fuse::Reactive::Data::New1(::STRINGS[16/*"hideError"*/]);
    ::g::Basic::TextInput* temp4 = ::g::Basic::TextInput::New4();
    temp4_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp4, BuyEmralsPage::__selector0());
    ::g::Fuse::Reactive::Data* temp26 = ::g::Fuse::Reactive::Data::New1(::STRINGS[18/*"username"*/]);
    ::g::Basic::TextInput* temp5 = ::g::Basic::TextInput::New4();
    temp5_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp5, BuyEmralsPage::__selector0());
    ::g::Fuse::Reactive::Data* temp27 = ::g::Fuse::Reactive::Data::New1(::STRINGS[19/*"email"*/]);
    ::g::Basic::TextInput* temp6 = ::g::Basic::TextInput::New4();
    temp6_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp6, BuyEmralsPage::__selector0());
    ::g::Fuse::Reactive::Data* temp28 = ::g::Fuse::Reactive::Data::New1(::STRINGS[20/*"cardNumber"*/]);
    ::g::Basic::TextInput* temp7 = ::g::Basic::TextInput::New4();
    temp7_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp7, BuyEmralsPage::__selector0());
    ::g::Fuse::Reactive::Data* temp29 = ::g::Fuse::Reactive::Data::New1(::STRINGS[21/*"expiryMonth"*/]);
    ::g::Basic::TextInput* temp8 = ::g::Basic::TextInput::New4();
    temp8_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp8, BuyEmralsPage::__selector0());
    ::g::Fuse::Reactive::Data* temp30 = ::g::Fuse::Reactive::Data::New1(::STRINGS[22/*"expiryYear"*/]);
    ::g::Basic::TextInput* temp9 = ::g::Basic::TextInput::New4();
    temp9_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp9, BuyEmralsPage::__selector0());
    ::g::Fuse::Reactive::Data* temp31 = ::g::Fuse::Reactive::Data::New1(::STRINGS[23/*"cvc"*/]);
    uString* temp32 = ::STRINGS[24/*"PAY $"*/];
    ::g::Fuse::Reactive::Constant* temp33 = ::g::Fuse::Reactive::Constant::New1(temp32);
    ::g::Fuse::Reactive::Data* temp34 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"dollar_value"*/]);
    ::g::Horse* temp10 = ::g::Horse::New4();
    temp10_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp10, BuyEmralsPage::__selector0());
    ::g::Fuse::Reactive::Add* temp35 = ::g::Fuse::Reactive::Add::New1(temp33, temp34);
    confirmrec = ::g::Fuse::Controls::Rectangle::New3();
    confirmrec_Color_inst = ::g::emrals_FuseControlsShape_Color_Property::New1(confirmrec, BuyEmralsPage::__selector2());
    ::g::Fuse::Reactive::Data* temp36 = ::g::Fuse::Reactive::Data::New1(::STRINGS[25/*"testPay"*/]);
    ::g::Fuse::Reactive::JavaScript* temp37 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::DockPanel* temp38 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Panel* temp39 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp40 = ::g::Fuse::Controls::Text::New3();
    temp_eb22 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp11, __g_nametable1);
    ::g::PTreal* temp41 = ::g::PTreal::New4();
    ::g::Fuse::Drawing::StaticSolidColor* temp42 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::ScrollView* temp43 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::ClientPanel* temp44 = ::g::Fuse::Controls::ClientPanel::New5();
    ::g::Fuse::Controls::StackPanel* temp45 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp46 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp47 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp48 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Grid* temp49 = ::g::Fuse::Controls::Grid::New4();
    ::g::Horse* temp50 = ::g::Horse::New4();
    ::g::Fuse::Reactive::DataBinding* temp51 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp12, __g_nametable1, 3);
    ::g::Horse* temp52 = ::g::Horse::New4();
    ::g::Fuse::Reactive::DataBinding* temp53 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp21, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp54 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Panel* temp55 = ::g::Fuse::Controls::Panel::New3();
    ::g::PTMono* temp56 = ::g::PTMono::New4();
    ::g::Fuse::Reactive::DataBinding* temp57 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp22, __g_nametable1, 3);
    temp_eb24 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp23, __g_nametable1);
    ::g::Fuse::Reactive::DataBinding* temp58 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Visibility_inst, (uObject*)temp24, __g_nametable1, 3);
    temp_eb23 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp25, __g_nametable1);
    ::g::Fuse::Controls::StackPanel* temp59 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Mouse* temp60 = ::g::Mouse::New4();
    ::g::Fuse::Controls::Rectangle* temp61 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp62 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Value_inst, (uObject*)temp26, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp63 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp64 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Value_inst, (uObject*)temp27, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp65 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp66 = ::g::Fuse::Reactive::DataBinding::New1(temp6_Value_inst, (uObject*)temp28, __g_nametable1, 3);
    ::g::Fuse::Controls::StackPanel* temp67 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp68 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp69 = ::g::Fuse::Reactive::DataBinding::New1(temp7_Value_inst, (uObject*)temp29, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp70 = ::g::Fuse::Reactive::DataBinding::New1(temp8_Value_inst, (uObject*)temp30, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp71 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp72 = ::g::Fuse::Reactive::DataBinding::New1(temp9_Value_inst, (uObject*)temp31, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp73 = ::g::Fuse::Reactive::DataBinding::New1(temp10_Value_inst, (uObject*)temp35, __g_nametable1, 3);
    ::g::Fuse::Gestures::WhilePressed* temp74 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Change* temp75 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float4>*/], confirmrec_Color_inst);
    temp_eb25 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp36, __g_nametable1);
    temp37->LineNumber(2);
    temp37->FileName(::STRINGS[26/*"Pages/BuyEm...*/]);
    temp37->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::BuyEmralscf53b7c9()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), confirmrec);
    temp39->Height(::g::Uno::UX::Size__New1(45.0f, 1));
    temp39->Y(::g::Uno::UX::Size__New1(0.0f, 1));
    temp39->Background(temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    temp40->Value(::STRINGS[27/*"<<"*/]);
    temp40->FontSize(24.0f);
    temp40->Color(::g::Uno::Float4__New2(0.3882353f, 0.3882353f, 0.3921569f, 1.0f));
    temp40->Alignment(3);
    temp40->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 0.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp40, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb22)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb22);
    temp41->Value(::STRINGS[28/*"ADD EMRALS"*/]);
    temp41->Alignment(10);
    temp43->Y(::g::Uno::UX::Size__New1(45.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    temp47->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp47->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp47->Height(::g::Uno::UX::Size__New1(3.0f, 1));
    temp47->Opacity(0.2f);
    temp48->Color(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp48->Height(::g::Uno::UX::Size__New1(120.0f, 1));
    temp48->Alignment(4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp49);
    temp49->Rows(::STRINGS[29/*"60,60"*/]);
    temp49->Columns(::STRINGS[30/*"200,100"*/]);
    temp49->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp50->Value(::STRINGS[31/*"Dirt Alert #"*/]);
    temp50->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp50->Margin(::g::Uno::Float4__New2(0.0f, 15.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp50, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp50, 0);
    temp->Margin(::g::Uno::Float4__New2(0.0f, 15.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp51);
    temp52->Value(::STRINGS[32/*"Emrals"*/]);
    temp52->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp52->Margin(::g::Uno::Float4__New2(0.0f, 15.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp52, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp52, 0);
    temp1->Margin(::g::Uno::Float4__New2(0.0f, 15.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp1, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp1, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp53);
    temp54->Color(::g::Uno::Float4__New2(0.9686275f, 0.9686275f, 0.9686275f, 1.0f));
    temp54->Height(::g::Uno::UX::Size__New1(320.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp59);
    temp3->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp3->Color(::g::Uno::Float4__New2(0.8705882f, 0.8745098f, 0.8745098f, 1.0f));
    temp3->Width(::g::Uno::UX::Size__New1(250.0f, 1));
    temp3->Alignment(10);
    temp3->Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp3->Opacity(0.9f);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp3, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb23)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp55);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp58);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb23);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp55, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb24)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp55->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp56);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp55->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp55->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb24);
    temp56->Value(::STRINGS[33/*"X"*/]);
    temp56->FontSize(16.0f);
    temp56->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp56->Alignment(7);
    temp56->Margin(::g::Uno::Float4__New2(0.0f, 4.0f, 4.0f, 0.0f));
    temp56->Opacity(1.0f);
    temp2->TextWrapping(1);
    temp2->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp60);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp61);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp63);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp65);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp67);
    temp60->Value(::STRINGS[34/*"Payment Info"*/]);
    temp60->TextAlignment(1);
    temp60->Color(::g::Uno::Float4__New2(0.3882353f, 0.3882353f, 0.3921569f, 1.0f));
    temp60->Alignment(10);
    temp60->Margin(::g::Uno::Float4__New2(0.0f, 30.0f, 0.0f, 0.0f));
    temp61->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp61->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp61->StrokeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp61->StrokeWidth(0.5f);
    temp61->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp61->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp61->Alignment(10);
    temp61->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp61->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    temp4->PlaceholderText(::STRINGS[18/*"username"*/]);
    temp4->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp4->Width(::g::Uno::UX::Size__New1(280.0f, 1));
    temp4->Alignment(1);
    temp4->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp62);
    temp63->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp63->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp63->StrokeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp63->StrokeWidth(0.5f);
    temp63->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp63->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp63->Alignment(10);
    temp63->Margin(::g::Uno::Float4__New2(0.0f, 15.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp63->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    temp5->PlaceholderText(::STRINGS[19/*"email"*/]);
    temp5->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp5->Width(::g::Uno::UX::Size__New1(280.0f, 1));
    temp5->Alignment(1);
    temp5->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp64);
    temp65->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp65->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp65->StrokeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp65->StrokeWidth(0.5f);
    temp65->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp65->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp65->Alignment(10);
    temp65->Margin(::g::Uno::Float4__New2(0.0f, 15.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    temp6->PlaceholderText(::STRINGS[35/*"card number"*/]);
    temp6->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp6->Width(::g::Uno::UX::Size__New1(290.0f, 1));
    temp6->Alignment(1);
    temp6->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp66);
    temp67->Orientation(0);
    temp67->Alignment(2);
    temp67->Padding(::g::Uno::Float4__New2(30.0f, 0.0f, 30.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp67->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp68);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp67->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp71);
    temp68->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp68->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp68->StrokeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp68->StrokeWidth(0.5f);
    temp68->Width(::g::Uno::UX::Size__New1(120.0f, 1));
    temp68->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp68->Margin(::g::Uno::Float4__New2(0.0f, 15.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    temp7->PlaceholderText(::STRINGS[36/*"MM"*/]);
    temp7->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp7->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp7->Alignment(1);
    temp7->Margin(::g::Uno::Float4__New2(33.0f, 5.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp69);
    temp8->PlaceholderText(::STRINGS[37/*"YY"*/]);
    temp8->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp8->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp8->Alignment(1);
    temp8->Margin(::g::Uno::Float4__New2(70.0f, 5.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp70);
    temp71->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp71->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp71->StrokeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp71->StrokeWidth(0.5f);
    temp71->Width(::g::Uno::UX::Size__New1(120.0f, 1));
    temp71->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp71->Margin(::g::Uno::Float4__New2(60.0f, 15.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp71->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    temp9->PlaceholderText(::STRINGS[38/*"CVC"*/]);
    temp9->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp9->Width(::g::Uno::UX::Size__New1(40.0f, 1));
    temp9->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp72);
    uPtr(confirmrec)->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    uPtr(confirmrec)->Color(::g::Uno::Float4__New2(0.9411765f, 0.3490196f, 0.3490196f, 1.0f));
    uPtr(confirmrec)->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    uPtr(confirmrec)->Height(::g::Uno::UX::Size__New1(44.0f, 1));
    uPtr(confirmrec)->Alignment(4);
    uPtr(confirmrec)->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 60.0f));
    uPtr(confirmrec)->Name(BuyEmralsPage::__selector3());
    ::g::Fuse::Controls::DockPanel::SetDock(confirmrec, 3);
    ::g::Fuse::Gestures::Clicked::AddHandler(confirmrec, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb25)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(confirmrec)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(confirmrec)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp74);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(confirmrec)->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb25);
    temp10->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp73);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp74->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp75);
    ::g::Fuse::Animations::Change__set_Value_fn(temp75, uCRef(::g::Uno::Float4__New2(0.9568627f, 0.1764706f, 0.1764706f, 1.0f)));
    temp75->Duration(0.05);
    temp75->DurationBack(0.2);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), confirmrec);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
}

// public BuyEmralsPage New(Fuse.Navigation.Router router) [static] :35
BuyEmralsPage* BuyEmralsPage::New5(::g::Fuse::Navigation::Router* router1)
{
    BuyEmralsPage* obj1 = (BuyEmralsPage*)uNew(BuyEmralsPage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
