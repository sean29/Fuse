// This file was generated based on '.uno/ux11/PaymentPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.emrals_bundle.h>
#include <_root.emrals_FuseCont-b37426cf.h>
#include <_root.emrals_FuseCont-f08373fa.h>
#include <_root.emrals_FuseCont-f52b401d.h>
#include <_root.emrals_FuseElem-95841797.h>
#include <_root.Horse.h>
#include <_root.Mouse.h>
#include <_root.PaymentPage.h>
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
static uString* STRINGS[38];
static uType* TYPES[7];

namespace g{

// public partial sealed class PaymentPage :2
// {
// static PaymentPage() :30
static void PaymentPage__cctor_4_fn(uType* __type)
{
    PaymentPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"temp_eb56"*/], ::STRINGS[2/*"temp_eb58"*/], ::STRINGS[3/*"temp_eb57"*/], ::STRINGS[4/*"confirmrec"*/], ::STRINGS[5/*"temp_eb59"*/]);
    PaymentPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"Value"*/]);
    PaymentPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"Visibility"*/]);
    PaymentPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"Color"*/]);
    PaymentPage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"confirmrec"*/]);
}

static void PaymentPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("temp_eb56");
    ::STRINGS[2] = uString::Const("temp_eb58");
    ::STRINGS[3] = uString::Const("temp_eb57");
    ::STRINGS[4] = uString::Const("confirmrec");
    ::STRINGS[5] = uString::Const("temp_eb59");
    ::STRINGS[6] = uString::Const("Value");
    ::STRINGS[7] = uString::Const("Visibility");
    ::STRINGS[8] = uString::Const("Color");
    ::STRINGS[9] = uString::Const("back");
    ::STRINGS[10] = uString::Const("zipcode");
    ::STRINGS[11] = uString::Const("$");
    ::STRINGS[12] = uString::Const("subscription");
    ::STRINGS[13] = uString::Const("/m");
    ::STRINGS[14] = uString::Const("error");
    ::STRINGS[15] = uString::Const("hideError");
    ::STRINGS[16] = uString::Const("error_visibility");
    ::STRINGS[17] = uString::Const("name");
    ::STRINGS[18] = uString::Const("email");
    ::STRINGS[19] = uString::Const("cardNumber");
    ::STRINGS[20] = uString::Const("expiryMonth");
    ::STRINGS[21] = uString::Const("expiryYear");
    ::STRINGS[22] = uString::Const("cvc");
    ::STRINGS[23] = uString::Const("testPay");
    ::STRINGS[24] = uString::Const("Pages/PaymentPage.ux");
    ::STRINGS[25] = uString::Const("<<");
    ::STRINGS[26] = uString::Const("SUBSCRIPTION");
    ::STRINGS[27] = uString::Const("60,60");
    ::STRINGS[28] = uString::Const("200,100");
    ::STRINGS[29] = uString::Const("Selected Impact Zone");
    ::STRINGS[30] = uString::Const("Monthly Impact");
    ::STRINGS[31] = uString::Const("X");
    ::STRINGS[32] = uString::Const("Payment Info");
    ::STRINGS[33] = uString::Const("card number");
    ::STRINGS[34] = uString::Const("MM");
    ::STRINGS[35] = uString::Const("YY");
    ::STRINGS[36] = uString::Const("CVC");
    ::STRINGS[37] = uString::Const("CONFIRM");
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
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::PaymentPage, __g_nametable1), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::PaymentPage, confirmrec), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::PaymentPage, confirmrec_Color_inst), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::PaymentPage, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::PaymentPage, temp_eb56), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::PaymentPage, temp_eb57), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::PaymentPage, temp_eb58), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::PaymentPage, temp_eb59), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::PaymentPage, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::PaymentPage, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::PaymentPage, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::PaymentPage, temp3_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::PaymentPage, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::PaymentPage, temp5_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::PaymentPage, temp6_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::PaymentPage, temp7_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::PaymentPage, temp8_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::PaymentPage, temp9_Value_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::PaymentPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::PaymentPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::PaymentPage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::PaymentPage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::PaymentPage::__selector3_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* PaymentPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 134;
    options.InterfaceCount = 17;
    options.ObjectSize = sizeof(PaymentPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("PaymentPage", options);
    type->fp_build_ = PaymentPage_build;
    type->fp_cctor_ = PaymentPage__cctor_4_fn;
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

// public PaymentPage(Fuse.Navigation.Router router) :34
void PaymentPage__ctor_8_fn(PaymentPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :40
void PaymentPage__InitializeUX_fn(PaymentPage* __this)
{
    __this->InitializeUX();
}

// public PaymentPage New(Fuse.Navigation.Router router) :34
void PaymentPage__New5_fn(::g::Fuse::Navigation::Router* router1, PaymentPage** __retval)
{
    *__retval = PaymentPage::New5(router1);
}

uSStrong<uArray*> PaymentPage::__g_static_nametable1_;
::g::Uno::UX::Selector PaymentPage::__selector0_;
::g::Uno::UX::Selector PaymentPage::__selector1_;
::g::Uno::UX::Selector PaymentPage::__selector2_;
::g::Uno::UX::Selector PaymentPage::__selector3_;

// public PaymentPage(Fuse.Navigation.Router router) [instance] :34
void PaymentPage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :40
void PaymentPage::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, PaymentPage::__g_static_nametable1());
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(::STRINGS[9/*"back"*/]);
    ::g::Mouse* temp = ::g::Mouse::New4();
    temp_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp, PaymentPage::__selector0());
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[10/*"zipcode"*/]);
    uString* temp12 = ::STRINGS[11/*"$"*/];
    ::g::Fuse::Reactive::Constant* temp13 = ::g::Fuse::Reactive::Constant::New1(temp12);
    ::g::Fuse::Reactive::Data* temp14 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"subscription"*/]);
    uString* temp15 = ::STRINGS[13/*"/m"*/];
    ::g::Fuse::Reactive::Constant* temp16 = ::g::Fuse::Reactive::Constant::New1(temp15);
    ::g::Fuse::Reactive::Add* temp17 = ::g::Fuse::Reactive::Add::New1(temp14, temp16);
    ::g::Mouse* temp1 = ::g::Mouse::New4();
    temp1_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp1, PaymentPage::__selector0());
    ::g::Fuse::Reactive::Add* temp18 = ::g::Fuse::Reactive::Add::New1(temp13, temp17);
    ::g::PTMono* temp2 = ::g::PTMono::New4();
    temp2_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp2, PaymentPage::__selector0());
    ::g::Fuse::Reactive::Data* temp19 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"error"*/]);
    ::g::Fuse::Reactive::Data* temp20 = ::g::Fuse::Reactive::Data::New1(::STRINGS[15/*"hideError"*/]);
    ::g::Fuse::Controls::Rectangle* temp3 = ::g::Fuse::Controls::Rectangle::New3();
    temp3_Visibility_inst = ::g::emrals_FuseElementsElement_Visibility_Property::New1(temp3, PaymentPage::__selector1());
    ::g::Fuse::Reactive::Data* temp21 = ::g::Fuse::Reactive::Data::New1(::STRINGS[16/*"error_visib...*/]);
    ::g::Fuse::Reactive::Data* temp22 = ::g::Fuse::Reactive::Data::New1(::STRINGS[15/*"hideError"*/]);
    ::g::Basic::TextInput* temp4 = ::g::Basic::TextInput::New4();
    temp4_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp4, PaymentPage::__selector0());
    ::g::Fuse::Reactive::Data* temp23 = ::g::Fuse::Reactive::Data::New1(::STRINGS[17/*"name"*/]);
    ::g::Basic::TextInput* temp5 = ::g::Basic::TextInput::New4();
    temp5_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp5, PaymentPage::__selector0());
    ::g::Fuse::Reactive::Data* temp24 = ::g::Fuse::Reactive::Data::New1(::STRINGS[18/*"email"*/]);
    ::g::Basic::TextInput* temp6 = ::g::Basic::TextInput::New4();
    temp6_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp6, PaymentPage::__selector0());
    ::g::Fuse::Reactive::Data* temp25 = ::g::Fuse::Reactive::Data::New1(::STRINGS[19/*"cardNumber"*/]);
    ::g::Basic::TextInput* temp7 = ::g::Basic::TextInput::New4();
    temp7_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp7, PaymentPage::__selector0());
    ::g::Fuse::Reactive::Data* temp26 = ::g::Fuse::Reactive::Data::New1(::STRINGS[20/*"expiryMonth"*/]);
    ::g::Basic::TextInput* temp8 = ::g::Basic::TextInput::New4();
    temp8_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp8, PaymentPage::__selector0());
    ::g::Fuse::Reactive::Data* temp27 = ::g::Fuse::Reactive::Data::New1(::STRINGS[21/*"expiryYear"*/]);
    ::g::Basic::TextInput* temp9 = ::g::Basic::TextInput::New4();
    temp9_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp9, PaymentPage::__selector0());
    ::g::Fuse::Reactive::Data* temp28 = ::g::Fuse::Reactive::Data::New1(::STRINGS[22/*"cvc"*/]);
    confirmrec = ::g::Fuse::Controls::Rectangle::New3();
    confirmrec_Color_inst = ::g::emrals_FuseControlsShape_Color_Property::New1(confirmrec, PaymentPage::__selector2());
    ::g::Fuse::Reactive::Data* temp29 = ::g::Fuse::Reactive::Data::New1(::STRINGS[23/*"testPay"*/]);
    ::g::Fuse::Reactive::JavaScript* temp30 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::DockPanel* temp31 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Panel* temp32 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp33 = ::g::Fuse::Controls::Text::New3();
    temp_eb56 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp10, __g_nametable1);
    ::g::PTreal* temp34 = ::g::PTreal::New4();
    ::g::Fuse::Drawing::StaticSolidColor* temp35 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::ScrollView* temp36 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::ClientPanel* temp37 = ::g::Fuse::Controls::ClientPanel::New5();
    ::g::Fuse::Controls::StackPanel* temp38 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp39 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp40 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp41 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Grid* temp42 = ::g::Fuse::Controls::Grid::New4();
    ::g::Horse* temp43 = ::g::Horse::New4();
    ::g::Fuse::Reactive::DataBinding* temp44 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp11, __g_nametable1, 3);
    ::g::Horse* temp45 = ::g::Horse::New4();
    ::g::Fuse::Reactive::DataBinding* temp46 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp18, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp47 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Panel* temp48 = ::g::Fuse::Controls::Panel::New3();
    ::g::PTMono* temp49 = ::g::PTMono::New4();
    ::g::Fuse::Reactive::DataBinding* temp50 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp19, __g_nametable1, 3);
    temp_eb58 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp20, __g_nametable1);
    ::g::Fuse::Reactive::DataBinding* temp51 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Visibility_inst, (uObject*)temp21, __g_nametable1, 3);
    temp_eb57 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp22, __g_nametable1);
    ::g::Fuse::Controls::StackPanel* temp52 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Mouse* temp53 = ::g::Mouse::New4();
    ::g::Fuse::Controls::Rectangle* temp54 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp55 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Value_inst, (uObject*)temp23, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp56 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp57 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Value_inst, (uObject*)temp24, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp58 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp59 = ::g::Fuse::Reactive::DataBinding::New1(temp6_Value_inst, (uObject*)temp25, __g_nametable1, 3);
    ::g::Fuse::Controls::StackPanel* temp60 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp61 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp62 = ::g::Fuse::Reactive::DataBinding::New1(temp7_Value_inst, (uObject*)temp26, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp63 = ::g::Fuse::Reactive::DataBinding::New1(temp8_Value_inst, (uObject*)temp27, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp64 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp65 = ::g::Fuse::Reactive::DataBinding::New1(temp9_Value_inst, (uObject*)temp28, __g_nametable1, 3);
    ::g::Horse* temp66 = ::g::Horse::New4();
    ::g::Fuse::Gestures::WhilePressed* temp67 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Change* temp68 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float4>*/], confirmrec_Color_inst);
    temp_eb59 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp29, __g_nametable1);
    temp30->LineNumber(2);
    temp30->FileName(::STRINGS[24/*"Pages/Payme...*/]);
    temp30->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::PaymentPage49237308()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), confirmrec);
    temp32->Height(::g::Uno::UX::Size__New1(45.0f, 1));
    temp32->Y(::g::Uno::UX::Size__New1(0.0f, 1));
    temp32->Background(temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    temp33->Value(::STRINGS[25/*"<<"*/]);
    temp33->FontSize(24.0f);
    temp33->Color(::g::Uno::Float4__New2(0.3882353f, 0.3882353f, 0.3921569f, 1.0f));
    temp33->Alignment(3);
    temp33->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp33, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb56)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb56);
    temp34->Value(::STRINGS[26/*"SUBSCRIPTION"*/]);
    temp34->Alignment(10);
    temp36->Y(::g::Uno::UX::Size__New1(45.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    temp40->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp40->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp40->Height(::g::Uno::UX::Size__New1(3.0f, 1));
    temp40->Opacity(0.2f);
    temp41->Color(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp41->Height(::g::Uno::UX::Size__New1(120.0f, 1));
    temp41->Alignment(4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp42);
    temp42->Rows(::STRINGS[27/*"60,60"*/]);
    temp42->Columns(::STRINGS[28/*"200,100"*/]);
    temp42->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp43->Value(::STRINGS[29/*"Selected Im...*/]);
    temp43->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp43->Margin(::g::Uno::Float4__New2(0.0f, 15.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp43, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp43, 0);
    temp->Margin(::g::Uno::Float4__New2(0.0f, 15.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp44);
    temp45->Value(::STRINGS[30/*"Monthly Imp...*/]);
    temp45->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp45->Margin(::g::Uno::Float4__New2(0.0f, 15.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp45, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp45, 0);
    temp1->Margin(::g::Uno::Float4__New2(0.0f, 15.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp1, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp1, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp46);
    temp47->Color(::g::Uno::Float4__New2(0.9686275f, 0.9686275f, 0.9686275f, 1.0f));
    temp47->Height(::g::Uno::UX::Size__New1(320.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp52);
    temp3->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp3->Color(::g::Uno::Float4__New2(0.8705882f, 0.8745098f, 0.8745098f, 1.0f));
    temp3->Width(::g::Uno::UX::Size__New1(250.0f, 1));
    temp3->Alignment(10);
    temp3->Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp3->Opacity(0.9f);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp3, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb57)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb57);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp48, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb58)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb58);
    temp49->Value(::STRINGS[31/*"X"*/]);
    temp49->FontSize(16.0f);
    temp49->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp49->Alignment(7);
    temp49->Margin(::g::Uno::Float4__New2(0.0f, 4.0f, 4.0f, 0.0f));
    temp49->Opacity(1.0f);
    temp2->TextWrapping(1);
    temp2->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp56);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp58);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp60);
    temp53->Value(::STRINGS[32/*"Payment Info"*/]);
    temp53->TextAlignment(1);
    temp53->Color(::g::Uno::Float4__New2(0.3882353f, 0.3882353f, 0.3921569f, 1.0f));
    temp53->Alignment(10);
    temp53->Margin(::g::Uno::Float4__New2(0.0f, 30.0f, 0.0f, 0.0f));
    temp54->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp54->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp54->StrokeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp54->StrokeWidth(0.5f);
    temp54->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp54->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp54->Alignment(10);
    temp54->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    temp4->PlaceholderText(::STRINGS[17/*"name"*/]);
    temp4->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp4->Width(::g::Uno::UX::Size__New1(280.0f, 1));
    temp4->Alignment(1);
    temp4->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp55);
    temp56->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp56->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp56->StrokeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp56->StrokeWidth(0.5f);
    temp56->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp56->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp56->Alignment(10);
    temp56->Margin(::g::Uno::Float4__New2(0.0f, 15.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    temp5->PlaceholderText(::STRINGS[18/*"email"*/]);
    temp5->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp5->Width(::g::Uno::UX::Size__New1(280.0f, 1));
    temp5->Alignment(1);
    temp5->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp57);
    temp58->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp58->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp58->StrokeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp58->StrokeWidth(0.5f);
    temp58->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp58->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp58->Alignment(10);
    temp58->Margin(::g::Uno::Float4__New2(0.0f, 15.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    temp6->PlaceholderText(::STRINGS[33/*"card number"*/]);
    temp6->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp6->Width(::g::Uno::UX::Size__New1(290.0f, 1));
    temp6->Alignment(1);
    temp6->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp59);
    temp60->Orientation(0);
    temp60->Alignment(2);
    temp60->Padding(::g::Uno::Float4__New2(30.0f, 0.0f, 30.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp60->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp61);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp60->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp64);
    temp61->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp61->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp61->StrokeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp61->StrokeWidth(0.5f);
    temp61->Width(::g::Uno::UX::Size__New1(120.0f, 1));
    temp61->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp61->Margin(::g::Uno::Float4__New2(0.0f, 15.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp61->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp61->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    temp7->PlaceholderText(::STRINGS[34/*"MM"*/]);
    temp7->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp7->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp7->Alignment(1);
    temp7->Margin(::g::Uno::Float4__New2(33.0f, 5.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp62);
    temp8->PlaceholderText(::STRINGS[35/*"YY"*/]);
    temp8->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp8->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp8->Alignment(1);
    temp8->Margin(::g::Uno::Float4__New2(70.0f, 5.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp63);
    temp64->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp64->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp64->StrokeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp64->StrokeWidth(0.5f);
    temp64->Width(::g::Uno::UX::Size__New1(120.0f, 1));
    temp64->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp64->Margin(::g::Uno::Float4__New2(60.0f, 15.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp64->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    temp9->PlaceholderText(::STRINGS[36/*"CVC"*/]);
    temp9->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp9->Width(::g::Uno::UX::Size__New1(40.0f, 1));
    temp9->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp65);
    uPtr(confirmrec)->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    uPtr(confirmrec)->Color(::g::Uno::Float4__New2(0.9411765f, 0.3490196f, 0.3490196f, 1.0f));
    uPtr(confirmrec)->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    uPtr(confirmrec)->Height(::g::Uno::UX::Size__New1(44.0f, 1));
    uPtr(confirmrec)->Alignment(4);
    uPtr(confirmrec)->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 60.0f));
    uPtr(confirmrec)->Name(PaymentPage::__selector3());
    ::g::Fuse::Controls::DockPanel::SetDock(confirmrec, 3);
    ::g::Fuse::Gestures::Clicked::AddHandler(confirmrec, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb59)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(confirmrec)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp66);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(confirmrec)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp67);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(confirmrec)->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb59);
    temp66->Value(::STRINGS[37/*"CONFIRM"*/]);
    temp66->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp67->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp68);
    ::g::Fuse::Animations::Change__set_Value_fn(temp68, uCRef(::g::Uno::Float4__New2(0.9568627f, 0.1764706f, 0.1764706f, 1.0f)));
    temp68->Duration(0.05);
    temp68->DurationBack(0.2);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb56);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb58);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), confirmrec);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb59);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
}

// public PaymentPage New(Fuse.Navigation.Router router) [static] :34
PaymentPage* PaymentPage::New5(::g::Fuse::Navigation::Router* router1)
{
    PaymentPage* obj1 = (PaymentPage*)uNew(PaymentPage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
