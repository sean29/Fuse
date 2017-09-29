// This file was generated based on '.uno/ux11/PaymentPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.emrals_bundle.h>
#include <_root.emrals_FuseCont-b37426cf.h>
#include <_root.emrals_FuseCont-f52b401d.h>
#include <_root.emrals_FuseElem-95841797.h>
#include <_root.Head.h>
#include <_root.Horse.h>
#include <_root.Mouse.h>
#include <_root.PaymentPage.h>
#include <_root.PTMono.h>
#include <Basic.TextInput.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
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
#include <Fuse.Visual.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
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
static uString* STRINGS[40];
static uType* TYPES[5];

namespace g{

// public partial sealed class PaymentPage :2
// {
// static PaymentPage() :31
static void PaymentPage__cctor_4_fn(uType* __type)
{
    PaymentPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"temp_eb27"*/], ::STRINGS[2/*"temp_eb29"*/], ::STRINGS[3/*"temp_eb28"*/], ::STRINGS[4/*"temp_eb30"*/]);
    PaymentPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"Value"*/]);
    PaymentPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"Visibility"*/]);
    PaymentPage::Cat_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::PTserif09017dd3()));
    PaymentPage::Dog_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::PTS55F711dcc48()));
    PaymentPage::Horse_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::PTS75F3c0d61be()));
    PaymentPage::Mouse_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::PTF75F3c017e53()));
    ::g::Uno::UX::Resource::SetGlobalKey(PaymentPage::Cat_, ::STRINGS[7/*"Cat"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(PaymentPage::Dog_, ::STRINGS[8/*"Dog"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(PaymentPage::Horse_, ::STRINGS[9/*"Horse"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(PaymentPage::Mouse_, ::STRINGS[10/*"Mouse"*/]);
}

static void PaymentPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("temp_eb27");
    ::STRINGS[2] = uString::Const("temp_eb29");
    ::STRINGS[3] = uString::Const("temp_eb28");
    ::STRINGS[4] = uString::Const("temp_eb30");
    ::STRINGS[5] = uString::Const("Value");
    ::STRINGS[6] = uString::Const("Visibility");
    ::STRINGS[7] = uString::Const("Cat");
    ::STRINGS[8] = uString::Const("Dog");
    ::STRINGS[9] = uString::Const("Horse");
    ::STRINGS[10] = uString::Const("Mouse");
    ::STRINGS[11] = uString::Const("back");
    ::STRINGS[12] = uString::Const("zipcode");
    ::STRINGS[13] = uString::Const("$");
    ::STRINGS[14] = uString::Const("subscription");
    ::STRINGS[15] = uString::Const("/m");
    ::STRINGS[16] = uString::Const("error");
    ::STRINGS[17] = uString::Const("hideError");
    ::STRINGS[18] = uString::Const("error_visibility");
    ::STRINGS[19] = uString::Const("name");
    ::STRINGS[20] = uString::Const("email");
    ::STRINGS[21] = uString::Const("cardNumber");
    ::STRINGS[22] = uString::Const("expiryMonth");
    ::STRINGS[23] = uString::Const("expiryYear");
    ::STRINGS[24] = uString::Const("cvc");
    ::STRINGS[25] = uString::Const("testPay");
    ::STRINGS[26] = uString::Const("Pages/PaymentPage.ux");
    ::STRINGS[27] = uString::Const("<<");
    ::STRINGS[28] = uString::Const("SUBSCRIPTION");
    ::STRINGS[29] = uString::Const("50,50");
    ::STRINGS[30] = uString::Const("200,100");
    ::STRINGS[31] = uString::Const("Selected Impact Zone");
    ::STRINGS[32] = uString::Const("Monthly Impact");
    ::STRINGS[33] = uString::Const("X");
    ::STRINGS[34] = uString::Const("Payment Info");
    ::STRINGS[35] = uString::Const("card number");
    ::STRINGS[36] = uString::Const("MM");
    ::STRINGS[37] = uString::Const("YY");
    ::STRINGS[38] = uString::Const("CVC");
    ::STRINGS[39] = uString::Const("CONFIRM");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16));
    type->SetFields(111,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::PaymentPage, __g_nametable1), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::PaymentPage, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::PaymentPage, temp_eb27), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::PaymentPage, temp_eb28), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::PaymentPage, temp_eb29), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::PaymentPage, temp_eb30), 0,
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
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::PaymentPage::Cat_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::PaymentPage::Dog_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::PaymentPage::Horse_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::PaymentPage::Mouse_, uFieldFlagsStatic);
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

// public PaymentPage(Fuse.Navigation.Router router) :43
void PaymentPage__ctor_8_fn(PaymentPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :49
void PaymentPage__InitializeUX_fn(PaymentPage* __this)
{
    __this->InitializeUX();
}

// public PaymentPage New(Fuse.Navigation.Router router) :43
void PaymentPage__New5_fn(::g::Fuse::Navigation::Router* router1, PaymentPage** __retval)
{
    *__retval = PaymentPage::New5(router1);
}

uSStrong<uArray*> PaymentPage::__g_static_nametable1_;
::g::Uno::UX::Selector PaymentPage::__selector0_;
::g::Uno::UX::Selector PaymentPage::__selector1_;
uSStrong< ::g::Fuse::Font*> PaymentPage::Cat_;
uSStrong< ::g::Fuse::Font*> PaymentPage::Dog_;
uSStrong< ::g::Fuse::Font*> PaymentPage::Horse_;
uSStrong< ::g::Fuse::Font*> PaymentPage::Mouse_;

// public PaymentPage(Fuse.Navigation.Router router) [instance] :43
void PaymentPage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :49
void PaymentPage::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, PaymentPage::__g_static_nametable1());
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"back"*/]);
    ::g::Mouse* temp = ::g::Mouse::New4();
    temp_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp, PaymentPage::__selector0());
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"zipcode"*/]);
    uString* temp12 = ::STRINGS[13/*"$"*/];
    ::g::Fuse::Reactive::Constant* temp13 = ::g::Fuse::Reactive::Constant::New1(temp12);
    ::g::Fuse::Reactive::Data* temp14 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"subscription"*/]);
    uString* temp15 = ::STRINGS[15/*"/m"*/];
    ::g::Fuse::Reactive::Constant* temp16 = ::g::Fuse::Reactive::Constant::New1(temp15);
    ::g::Fuse::Reactive::Add* temp17 = ::g::Fuse::Reactive::Add::New1(temp14, temp16);
    ::g::Mouse* temp1 = ::g::Mouse::New4();
    temp1_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp1, PaymentPage::__selector0());
    ::g::Fuse::Reactive::Add* temp18 = ::g::Fuse::Reactive::Add::New1(temp13, temp17);
    ::g::PTMono* temp2 = ::g::PTMono::New4();
    temp2_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp2, PaymentPage::__selector0());
    ::g::Fuse::Reactive::Data* temp19 = ::g::Fuse::Reactive::Data::New1(::STRINGS[16/*"error"*/]);
    ::g::Fuse::Reactive::Data* temp20 = ::g::Fuse::Reactive::Data::New1(::STRINGS[17/*"hideError"*/]);
    ::g::Fuse::Controls::Rectangle* temp3 = ::g::Fuse::Controls::Rectangle::New3();
    temp3_Visibility_inst = ::g::emrals_FuseElementsElement_Visibility_Property::New1(temp3, PaymentPage::__selector1());
    ::g::Fuse::Reactive::Data* temp21 = ::g::Fuse::Reactive::Data::New1(::STRINGS[18/*"error_visib...*/]);
    ::g::Fuse::Reactive::Data* temp22 = ::g::Fuse::Reactive::Data::New1(::STRINGS[17/*"hideError"*/]);
    ::g::Basic::TextInput* temp4 = ::g::Basic::TextInput::New4();
    temp4_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp4, PaymentPage::__selector0());
    ::g::Fuse::Reactive::Data* temp23 = ::g::Fuse::Reactive::Data::New1(::STRINGS[19/*"name"*/]);
    ::g::Basic::TextInput* temp5 = ::g::Basic::TextInput::New4();
    temp5_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp5, PaymentPage::__selector0());
    ::g::Fuse::Reactive::Data* temp24 = ::g::Fuse::Reactive::Data::New1(::STRINGS[20/*"email"*/]);
    ::g::Basic::TextInput* temp6 = ::g::Basic::TextInput::New4();
    temp6_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp6, PaymentPage::__selector0());
    ::g::Fuse::Reactive::Data* temp25 = ::g::Fuse::Reactive::Data::New1(::STRINGS[21/*"cardNumber"*/]);
    ::g::Basic::TextInput* temp7 = ::g::Basic::TextInput::New4();
    temp7_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp7, PaymentPage::__selector0());
    ::g::Fuse::Reactive::Data* temp26 = ::g::Fuse::Reactive::Data::New1(::STRINGS[22/*"expiryMonth"*/]);
    ::g::Basic::TextInput* temp8 = ::g::Basic::TextInput::New4();
    temp8_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp8, PaymentPage::__selector0());
    ::g::Fuse::Reactive::Data* temp27 = ::g::Fuse::Reactive::Data::New1(::STRINGS[23/*"expiryYear"*/]);
    ::g::Basic::TextInput* temp9 = ::g::Basic::TextInput::New4();
    temp9_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp9, PaymentPage::__selector0());
    ::g::Fuse::Reactive::Data* temp28 = ::g::Fuse::Reactive::Data::New1(::STRINGS[24/*"cvc"*/]);
    ::g::Fuse::Reactive::Data* temp29 = ::g::Fuse::Reactive::Data::New1(::STRINGS[25/*"testPay"*/]);
    ::g::Fuse::Reactive::JavaScript* temp30 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::DockPanel* temp31 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Reactive::JavaScript* temp32 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Panel* temp33 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp34 = ::g::Fuse::Controls::Text::New3();
    temp_eb27 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp10, __g_nametable1);
    ::g::Fuse::Controls::Image* temp35 = ::g::Fuse::Controls::Image::New3();
    ::g::Head* temp36 = ::g::Head::New4();
    ::g::Fuse::Drawing::StaticSolidColor* temp37 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
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
    temp_eb29 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp20, __g_nametable1);
    ::g::Fuse::Reactive::DataBinding* temp51 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Visibility_inst, (uObject*)temp21, __g_nametable1, 3);
    temp_eb28 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp22, __g_nametable1);
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
    ::g::Fuse::Controls::Rectangle* temp66 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Horse* temp67 = ::g::Horse::New4();
    temp_eb30 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp29, __g_nametable1);
    temp30->LineNumber(2);
    temp30->FileName(::STRINGS[26/*"Pages/Payme...*/]);
    temp30->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::PaymentPage7475814f()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp66);
    temp32->LineNumber(5);
    temp32->FileName(::STRINGS[26/*"Pages/Payme...*/]);
    temp32->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::PaymentPage7475814f()));
    temp33->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    temp33->Alignment(4);
    temp33->Background(temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    temp34->Value(::STRINGS[27/*"<<"*/]);
    temp34->FontSize(20.0f);
    temp34->Color(::g::Uno::Float4__New2(0.3882353f, 0.3882353f, 0.3921569f, 1.0f));
    temp34->Alignment(1);
    temp34->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, 0.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp34, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb27)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb27);
    temp35->MaxWidth(::g::Uno::UX::Size__New1(120.0f, 1));
    temp35->Margin(::g::Uno::Float4__New2(0.0f, -10.0f, 0.0f, 0.0f));
    temp35->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::emralsAllgreen2017logo23bc655e()));
    temp36->Value(::STRINGS[28/*"SUBSCRIPTION"*/]);
    temp36->Alignment(10);
    temp36->Margin(::g::Uno::Float4__New2(0.0f, 50.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    temp40->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp40->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp40->Height(::g::Uno::UX::Size__New1(3.0f, 1));
    temp40->Margin(::g::Uno::Float4__New2(0.0f, 80.0f, 0.0f, 0.0f));
    temp40->Opacity(0.2f);
    temp41->Color(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp41->Height(::g::Uno::UX::Size__New1(120.0f, 1));
    temp41->Alignment(4);
    temp41->Margin(::g::Uno::Float4__New2(0.0f, 80.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp42);
    temp42->Rows(::STRINGS[29/*"50,50"*/]);
    temp42->Columns(::STRINGS[30/*"200,100"*/]);
    temp42->Alignment(10);
    temp42->Margin(::g::Uno::Float4__New2(0.0f, 25.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp43->Value(::STRINGS[31/*"Selected Im...*/]);
    temp43->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp43, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp43, 0);
    ::g::Fuse::Controls::Grid::SetRow(temp, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp44);
    temp45->Value(::STRINGS[32/*"Monthly Imp...*/]);
    temp45->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp45, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp45, 0);
    ::g::Fuse::Controls::Grid::SetRow(temp1, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp1, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp46);
    temp47->Color(::g::Uno::Float4__New2(0.9686275f, 0.9686275f, 0.9686275f, 1.0f));
    temp47->Height(::g::Uno::UX::Size__New1(333.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp52);
    temp3->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp3->Color(::g::Uno::Float4__New2(0.8705882f, 0.8745098f, 0.8745098f, 1.0f));
    temp3->Width(::g::Uno::UX::Size__New1(250.0f, 1));
    temp3->Alignment(10);
    temp3->Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp3->Opacity(0.9f);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp3, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb28)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb28);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp48, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb29)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb29);
    temp49->Value(::STRINGS[33/*"X"*/]);
    temp49->FontSize(16.0f);
    temp49->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp49->Alignment(7);
    temp49->Margin(::g::Uno::Float4__New2(0.0f, 4.0f, 4.0f, 0.0f));
    temp49->Opacity(1.0f);
    temp2->TextWrapping(1);
    temp2->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp56);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp58);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp60);
    temp53->Value(::STRINGS[34/*"Payment Info"*/]);
    temp53->Color(::g::Uno::Float4__New2(0.3882353f, 0.3882353f, 0.3921569f, 1.0f));
    temp53->Alignment(1);
    temp53->Margin(::g::Uno::Float4__New2(40.0f, 40.0f, 0.0f, 0.0f));
    temp54->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp54->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp54->StrokeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp54->StrokeWidth(0.5f);
    temp54->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp54->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp54->Alignment(10);
    temp54->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    temp4->PlaceholderText(::STRINGS[19/*"name"*/]);
    temp4->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp4->Width(::g::Uno::UX::Size__New1(280.0f, 1));
    temp4->Alignment(1);
    temp4->Margin(::g::Uno::Float4__New2(10.0f, 5.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp55);
    temp56->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp56->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp56->StrokeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp56->StrokeWidth(0.5f);
    temp56->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp56->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp56->Alignment(10);
    temp56->Margin(::g::Uno::Float4__New2(0.0f, 15.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    temp5->PlaceholderText(::STRINGS[20/*"email"*/]);
    temp5->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp5->Width(::g::Uno::UX::Size__New1(280.0f, 1));
    temp5->Alignment(1);
    temp5->Margin(::g::Uno::Float4__New2(10.0f, 5.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp57);
    temp58->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp58->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp58->StrokeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp58->StrokeWidth(0.5f);
    temp58->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp58->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp58->Alignment(10);
    temp58->Margin(::g::Uno::Float4__New2(0.0f, 15.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    temp6->PlaceholderText(::STRINGS[35/*"card number"*/]);
    temp6->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp6->Width(::g::Uno::UX::Size__New1(290.0f, 1));
    temp6->Alignment(1);
    temp6->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp59);
    temp60->Orientation(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp60->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp61);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp60->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp64);
    temp61->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp61->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp61->StrokeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp61->StrokeWidth(0.5f);
    temp61->Width(::g::Uno::UX::Size__New1(120.0f, 1));
    temp61->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp61->Alignment(1);
    temp61->Margin(::g::Uno::Float4__New2(38.0f, 15.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp61->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp61->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    temp7->PlaceholderText(::STRINGS[36/*"MM"*/]);
    temp7->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp7->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp7->Alignment(1);
    temp7->Margin(::g::Uno::Float4__New2(33.0f, 5.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp62);
    temp8->PlaceholderText(::STRINGS[37/*"YY"*/]);
    temp8->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp8->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp8->Alignment(1);
    temp8->Margin(::g::Uno::Float4__New2(70.0f, 5.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp63);
    temp64->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp64->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp64->StrokeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp64->StrokeWidth(0.5f);
    temp64->Width(::g::Uno::UX::Size__New1(120.0f, 1));
    temp64->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp64->Margin(::g::Uno::Float4__New2(60.0f, 15.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp64->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    temp9->PlaceholderText(::STRINGS[38/*"CVC"*/]);
    temp9->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp9->Width(::g::Uno::UX::Size__New1(40.0f, 1));
    temp9->Margin(::g::Uno::Float4__New2(10.0f, 5.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp65);
    temp66->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp66->Color(::g::Uno::Float4__New2(0.9411765f, 0.3490196f, 0.3490196f, 1.0f));
    temp66->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp66->Height(::g::Uno::UX::Size__New1(44.0f, 1));
    temp66->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 40.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp66, 3);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp66, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb30)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp67);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb30);
    temp67->Value(::STRINGS[39/*"CONFIRM"*/]);
    temp67->Alignment(10);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
}

// public PaymentPage New(Fuse.Navigation.Router router) [static] :43
PaymentPage* PaymentPage::New5(::g::Fuse::Navigation::Router* router1)
{
    PaymentPage* obj1 = (PaymentPage*)uNew(PaymentPage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
