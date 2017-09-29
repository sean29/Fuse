// This file was generated based on '.uno/ux11/BuyEcanPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.BuyEcanPage.h>
#include <_root.emrals_bundle.h>
#include <_root.emrals_FuseCont-b37426cf.h>
#include <_root.emrals_FuseCont-f52b401d.h>
#include <_root.emrals_FuseElem-95841797.h>
#include <_root.Head.h>
#include <_root.Horse.h>
#include <_root.Mouse.h>
#include <_root.PTMono.h>
#include <Basic.TextInput.h>
#include <Fuse.Controls.ClientPanel.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
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
static uString* STRINGS[46];
static uType* TYPES[5];

namespace g{

// public partial sealed class BuyEcanPage :2
// {
// static BuyEcanPage() :36
static void BuyEcanPage__cctor_4_fn(uType* __type)
{
    BuyEcanPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"temp_eb5"*/], ::STRINGS[2/*"CCPage"*/], ::STRINGS[3/*"temp_eb7"*/], ::STRINGS[4/*"temp_eb6"*/], ::STRINGS[5/*"CCArea"*/], ::STRINGS[6/*"temp_eb8"*/]);
    BuyEcanPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"Value"*/]);
    BuyEcanPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"Visibility"*/]);
    BuyEcanPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"CCPage"*/]);
    BuyEcanPage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"CCArea"*/]);
    BuyEcanPage::PTMono_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::PTM55FT04e134ae()));
    ::g::Uno::UX::Resource::SetGlobalKey(BuyEcanPage::PTMono_, ::STRINGS[9/*"PTMono"*/]);
}

static void BuyEcanPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("temp_eb5");
    ::STRINGS[2] = uString::Const("CCPage");
    ::STRINGS[3] = uString::Const("temp_eb7");
    ::STRINGS[4] = uString::Const("temp_eb6");
    ::STRINGS[5] = uString::Const("CCArea");
    ::STRINGS[6] = uString::Const("temp_eb8");
    ::STRINGS[7] = uString::Const("Value");
    ::STRINGS[8] = uString::Const("Visibility");
    ::STRINGS[9] = uString::Const("PTMono");
    ::STRINGS[10] = uString::Const("back");
    ::STRINGS[11] = uString::Const("error");
    ::STRINGS[12] = uString::Const("hideError");
    ::STRINGS[13] = uString::Const("error_visibility");
    ::STRINGS[14] = uString::Const("qty");
    ::STRINGS[15] = uString::Const("$");
    ::STRINGS[16] = uString::Const("price");
    ::STRINGS[17] = uString::Const("name");
    ::STRINGS[18] = uString::Const("address");
    ::STRINGS[19] = uString::Const("city");
    ::STRINGS[20] = uString::Const("state");
    ::STRINGS[21] = uString::Const("zipcode");
    ::STRINGS[22] = uString::Const("email");
    ::STRINGS[23] = uString::Const("cardNumber");
    ::STRINGS[24] = uString::Const("expiryMonth");
    ::STRINGS[25] = uString::Const("expiryYear");
    ::STRINGS[26] = uString::Const("cvc");
    ::STRINGS[27] = uString::Const("testPay");
    ::STRINGS[28] = uString::Const("Pages/BuyEcanPage.ux");
    ::STRINGS[29] = uString::Const("<<");
    ::STRINGS[30] = uString::Const("ECAN CHECKOUT");
    ::STRINGS[31] = uString::Const("X");
    ::STRINGS[32] = uString::Const("100,150,150");
    ::STRINGS[33] = uString::Const("QUANTITY");
    ::STRINGS[34] = uString::Const("DESCRIPTION");
    ::STRINGS[35] = uString::Const("PRICE");
    ::STRINGS[36] = uString::Const("01");
    ::STRINGS[37] = uString::Const("eCan plus mobile Data Dashboard.");
    ::STRINGS[38] = uString::Const("SHIP TO");
    ::STRINGS[39] = uString::Const("NY");
    ::STRINGS[40] = uString::Const("PAYMENT INFO");
    ::STRINGS[41] = uString::Const("card number");
    ::STRINGS[42] = uString::Const("MM");
    ::STRINGS[43] = uString::Const("YY");
    ::STRINGS[44] = uString::Const("CVC");
    ::STRINGS[45] = uString::Const("CONFIRM");
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
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::BuyEcanPage, __g_nametable1), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(::g::BuyEcanPage, CCArea), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(::g::BuyEcanPage, CCPage), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::BuyEcanPage, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::BuyEcanPage, temp_eb5), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::BuyEcanPage, temp_eb6), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::BuyEcanPage, temp_eb7), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::BuyEcanPage, temp_eb8), 0,
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
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::BuyEcanPage::PTMono_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* BuyEcanPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 139;
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

// public BuyEcanPage(Fuse.Navigation.Router router) :42
void BuyEcanPage__ctor_8_fn(BuyEcanPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :48
void BuyEcanPage__InitializeUX_fn(BuyEcanPage* __this)
{
    __this->InitializeUX();
}

// public BuyEcanPage New(Fuse.Navigation.Router router) :42
void BuyEcanPage__New5_fn(::g::Fuse::Navigation::Router* router1, BuyEcanPage** __retval)
{
    *__retval = BuyEcanPage::New5(router1);
}

uSStrong<uArray*> BuyEcanPage::__g_static_nametable1_;
::g::Uno::UX::Selector BuyEcanPage::__selector0_;
::g::Uno::UX::Selector BuyEcanPage::__selector1_;
::g::Uno::UX::Selector BuyEcanPage::__selector2_;
::g::Uno::UX::Selector BuyEcanPage::__selector3_;
uSStrong< ::g::Fuse::Font*> BuyEcanPage::PTMono_;

// public BuyEcanPage(Fuse.Navigation.Router router) [instance] :42
void BuyEcanPage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :48
void BuyEcanPage::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, BuyEcanPage::__g_static_nametable1());
    ::g::Fuse::Reactive::Data* temp14 = ::g::Fuse::Reactive::Data::New1(::STRINGS[10/*"back"*/]);
    ::g::PTMono* temp = ::g::PTMono::New4();
    temp_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp, BuyEcanPage::__selector0());
    ::g::Fuse::Reactive::Data* temp15 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"error"*/]);
    ::g::Fuse::Reactive::Data* temp16 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"hideError"*/]);
    ::g::Fuse::Controls::Rectangle* temp1 = ::g::Fuse::Controls::Rectangle::New3();
    temp1_Visibility_inst = ::g::emrals_FuseElementsElement_Visibility_Property::New1(temp1, BuyEcanPage::__selector1());
    ::g::Fuse::Reactive::Data* temp17 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"error_visib...*/]);
    ::g::Fuse::Reactive::Data* temp18 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"hideError"*/]);
    ::g::Basic::TextInput* temp2 = ::g::Basic::TextInput::New4();
    temp2_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp2, BuyEcanPage::__selector0());
    ::g::Fuse::Reactive::Data* temp19 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"qty"*/]);
    uString* temp20 = ::STRINGS[15/*"$"*/];
    ::g::Fuse::Reactive::Constant* temp21 = ::g::Fuse::Reactive::Constant::New1(temp20);
    ::g::Fuse::Reactive::Data* temp22 = ::g::Fuse::Reactive::Data::New1(::STRINGS[16/*"price"*/]);
    ::g::Mouse* temp3 = ::g::Mouse::New4();
    temp3_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp3, BuyEcanPage::__selector0());
    ::g::Fuse::Reactive::Add* temp23 = ::g::Fuse::Reactive::Add::New1(temp21, temp22);
    ::g::Basic::TextInput* temp4 = ::g::Basic::TextInput::New4();
    temp4_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp4, BuyEcanPage::__selector0());
    ::g::Fuse::Reactive::Data* temp24 = ::g::Fuse::Reactive::Data::New1(::STRINGS[17/*"name"*/]);
    ::g::Basic::TextInput* temp5 = ::g::Basic::TextInput::New4();
    temp5_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp5, BuyEcanPage::__selector0());
    ::g::Fuse::Reactive::Data* temp25 = ::g::Fuse::Reactive::Data::New1(::STRINGS[18/*"address"*/]);
    ::g::Basic::TextInput* temp6 = ::g::Basic::TextInput::New4();
    temp6_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp6, BuyEcanPage::__selector0());
    ::g::Fuse::Reactive::Data* temp26 = ::g::Fuse::Reactive::Data::New1(::STRINGS[19/*"city"*/]);
    ::g::Basic::TextInput* temp7 = ::g::Basic::TextInput::New4();
    temp7_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp7, BuyEcanPage::__selector0());
    ::g::Fuse::Reactive::Data* temp27 = ::g::Fuse::Reactive::Data::New1(::STRINGS[20/*"state"*/]);
    ::g::Basic::TextInput* temp8 = ::g::Basic::TextInput::New4();
    temp8_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp8, BuyEcanPage::__selector0());
    ::g::Fuse::Reactive::Data* temp28 = ::g::Fuse::Reactive::Data::New1(::STRINGS[21/*"zipcode"*/]);
    ::g::Basic::TextInput* temp9 = ::g::Basic::TextInput::New4();
    temp9_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp9, BuyEcanPage::__selector0());
    ::g::Fuse::Reactive::Data* temp29 = ::g::Fuse::Reactive::Data::New1(::STRINGS[22/*"email"*/]);
    ::g::Basic::TextInput* temp10 = ::g::Basic::TextInput::New4();
    temp10_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp10, BuyEcanPage::__selector0());
    ::g::Fuse::Reactive::Data* temp30 = ::g::Fuse::Reactive::Data::New1(::STRINGS[23/*"cardNumber"*/]);
    ::g::Basic::TextInput* temp11 = ::g::Basic::TextInput::New4();
    temp11_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp11, BuyEcanPage::__selector0());
    ::g::Fuse::Reactive::Data* temp31 = ::g::Fuse::Reactive::Data::New1(::STRINGS[24/*"expiryMonth"*/]);
    ::g::Basic::TextInput* temp12 = ::g::Basic::TextInput::New4();
    temp12_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp12, BuyEcanPage::__selector0());
    ::g::Fuse::Reactive::Data* temp32 = ::g::Fuse::Reactive::Data::New1(::STRINGS[25/*"expiryYear"*/]);
    ::g::Basic::TextInput* temp13 = ::g::Basic::TextInput::New4();
    temp13_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp13, BuyEcanPage::__selector0());
    ::g::Fuse::Reactive::Data* temp33 = ::g::Fuse::Reactive::Data::New1(::STRINGS[26/*"cvc"*/]);
    ::g::Fuse::Reactive::Data* temp34 = ::g::Fuse::Reactive::Data::New1(::STRINGS[27/*"testPay"*/]);
    ::g::Fuse::Reactive::JavaScript* temp35 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Panel* temp36 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp37 = ::g::Fuse::Controls::Text::New3();
    temp_eb5 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp14, __g_nametable1);
    ::g::Fuse::Controls::Image* temp38 = ::g::Fuse::Controls::Image::New3();
    ::g::Head* temp39 = ::g::Head::New4();
    ::g::Fuse::Drawing::StaticSolidColor* temp40 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    CCPage = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::ScrollView* temp41 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::ClientPanel* temp42 = ::g::Fuse::Controls::ClientPanel::New5();
    ::g::Fuse::Controls::Panel* temp43 = ::g::Fuse::Controls::Panel::New3();
    ::g::PTMono* temp44 = ::g::PTMono::New4();
    ::g::Fuse::Reactive::DataBinding* temp45 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp15, __g_nametable1, 3);
    temp_eb7 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp16, __g_nametable1);
    ::g::Fuse::Reactive::DataBinding* temp46 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Visibility_inst, (uObject*)temp17, __g_nametable1, 3);
    temp_eb6 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp18, __g_nametable1);
    ::g::Fuse::Controls::StackPanel* temp47 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp48 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp49 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp50 = ::g::Fuse::Controls::Grid::New4();
    ::g::Horse* temp51 = ::g::Horse::New4();
    ::g::Horse* temp52 = ::g::Horse::New4();
    ::g::Horse* temp53 = ::g::Horse::New4();
    ::g::Fuse::Controls::Rectangle* temp54 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp55 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp19, __g_nametable1, 3);
    ::g::Mouse* temp56 = ::g::Mouse::New4();
    ::g::Fuse::Reactive::DataBinding* temp57 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp23, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp58 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::StackPanel* temp59 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Horse* temp60 = ::g::Horse::New4();
    ::g::Fuse::Controls::Rectangle* temp61 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp62 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Value_inst, (uObject*)temp24, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp63 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp64 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Value_inst, (uObject*)temp25, __g_nametable1, 3);
    ::g::Fuse::Controls::StackPanel* temp65 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp66 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp67 = ::g::Fuse::Reactive::DataBinding::New1(temp6_Value_inst, (uObject*)temp26, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp68 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp69 = ::g::Fuse::Reactive::DataBinding::New1(temp7_Value_inst, (uObject*)temp27, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp70 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp71 = ::g::Fuse::Reactive::DataBinding::New1(temp8_Value_inst, (uObject*)temp28, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp72 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp73 = ::g::Fuse::Reactive::DataBinding::New1(temp9_Value_inst, (uObject*)temp29, __g_nametable1, 3);
    ::g::Horse* temp74 = ::g::Horse::New4();
    CCArea = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp75 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp76 = ::g::Fuse::Reactive::DataBinding::New1(temp10_Value_inst, (uObject*)temp30, __g_nametable1, 3);
    ::g::Fuse::Controls::StackPanel* temp77 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp78 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp79 = ::g::Fuse::Reactive::DataBinding::New1(temp11_Value_inst, (uObject*)temp31, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp80 = ::g::Fuse::Reactive::DataBinding::New1(temp12_Value_inst, (uObject*)temp32, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp81 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp82 = ::g::Fuse::Reactive::DataBinding::New1(temp13_Value_inst, (uObject*)temp33, __g_nametable1, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp83 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    ::g::Fuse::Controls::DockPanel* temp84 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp85 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Horse* temp86 = ::g::Horse::New4();
    temp_eb8 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp34, __g_nametable1);
    temp35->LineNumber(3);
    temp35->FileName(::STRINGS[28/*"Pages/BuyEc...*/]);
    temp35->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::BuyEcanPage634d752e()));
    temp36->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    temp36->Alignment(4);
    temp36->Background(temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    temp37->Value(::STRINGS[29/*"<<"*/]);
    temp37->FontSize(20.0f);
    temp37->Color(::g::Uno::Float4__New2(0.3882353f, 0.3882353f, 0.3921569f, 1.0f));
    temp37->Alignment(1);
    temp37->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, 0.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp37, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb5)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb5);
    temp38->MaxWidth(::g::Uno::UX::Size__New1(120.0f, 1));
    temp38->Margin(::g::Uno::Float4__New2(0.0f, -10.0f, 0.0f, 0.0f));
    temp38->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::emralsAllgreen2017logo23bc655e()));
    temp39->Value(::STRINGS[30/*"ECAN CHECKOUT"*/]);
    temp39->Alignment(10);
    temp39->Margin(::g::Uno::Float4__New2(0.0f, 50.0f, 0.0f, 0.0f));
    uPtr(CCPage)->Y(::g::Uno::UX::Size__New1(80.0f, 1));
    uPtr(CCPage)->Name(BuyEcanPage::__selector2());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(CCPage)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(CCPage)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp84);
    temp41->Height(::g::Uno::UX::Size__New1(500.0f, 1));
    temp41->Background(temp83);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    temp1->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp1->Color(::g::Uno::Float4__New2(0.8705882f, 0.8745098f, 0.8745098f, 1.0f));
    temp1->Width(::g::Uno::UX::Size__New1(250.0f, 1));
    temp1->Alignment(10);
    temp1->Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp1->Opacity(0.9f);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp1, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb6)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb6);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp43, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb7)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb7);
    temp44->Value(::STRINGS[31/*"X"*/]);
    temp44->FontSize(16.0f);
    temp44->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp44->Alignment(7);
    temp44->Margin(::g::Uno::Float4__New2(0.0f, 4.0f, 4.0f, 0.0f));
    temp44->Opacity(1.0f);
    temp->TextWrapping(1);
    temp->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp59);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp77);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp58);
    temp50->RowCount(3);
    temp50->Columns(::STRINGS[32/*"100,150,150"*/]);
    temp50->Padding(::g::Uno::Float4__New2(40.0f, 15.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp56);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp51->Value(::STRINGS[33/*"QUANTITY"*/]);
    temp51->FontSize(14.0f);
    ::g::Fuse::Controls::Grid::SetRow(temp51, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp51, 0);
    temp52->Value(::STRINGS[34/*"DESCRIPTION"*/]);
    temp52->FontSize(14.0f);
    ::g::Fuse::Controls::Grid::SetRow(temp52, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp52, 1);
    temp53->Value(::STRINGS[35/*"PRICE"*/]);
    temp53->FontSize(14.0f);
    ::g::Fuse::Controls::Grid::SetRow(temp53, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp53, 2);
    temp54->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp54->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp54->Width(::g::Uno::UX::Size__New1(60.0f, 1));
    temp54->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp54->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 40.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp54, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp54, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp2->PlaceholderText(::STRINGS[36/*"01"*/]);
    temp2->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp2->FontSize(14.0f);
    temp2->Margin(::g::Uno::Float4__New2(10.0f, 5.0f, 10.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp55);
    temp56->Value(::STRINGS[37/*"eCan plus m...*/]);
    temp56->TextWrapping(1);
    temp56->FontSize(14.0f);
    temp56->Margin(::g::Uno::Float4__New2(0.0f, -5.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp56, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp56, 1);
    temp3->FontSize(16.0f);
    temp3->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp3, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp3, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp57);
    temp58->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp58->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp58->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    temp58->Opacity(0.1f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp60);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp61);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp63);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp65);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp72);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp74);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), CCArea);
    temp60->Value(::STRINGS[38/*"SHIP TO"*/]);
    temp60->FontSize(14.0f);
    temp60->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp60->Margin(::g::Uno::Float4__New2(40.0f, 10.0f, 0.0f, 0.0f));
    temp61->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp61->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp61->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp61->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp61->Alignment(1);
    temp61->Margin(::g::Uno::Float4__New2(40.0f, 5.0f, 40.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp61->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    temp4->PlaceholderText(::STRINGS[17/*"name"*/]);
    temp4->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp4->FontSize(14.0f);
    temp4->Margin(::g::Uno::Float4__New2(10.0f, 5.0f, 10.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp62);
    temp63->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp63->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp63->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp63->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp63->Alignment(1);
    temp63->Margin(::g::Uno::Float4__New2(40.0f, 5.0f, 40.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp63->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    temp5->PlaceholderText(::STRINGS[18/*"address"*/]);
    temp5->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp5->FontSize(14.0f);
    temp5->Margin(::g::Uno::Float4__New2(10.0f, 5.0f, 10.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp64);
    temp65->Orientation(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp66);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp68);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp70);
    temp66->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp66->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp66->Width(::g::Uno::UX::Size__New1(120.0f, 1));
    temp66->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp66->Alignment(1);
    temp66->Margin(::g::Uno::Float4__New2(40.0f, 5.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    temp6->PlaceholderText(::STRINGS[19/*"city"*/]);
    temp6->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp6->FontSize(14.0f);
    temp6->Margin(::g::Uno::Float4__New2(10.0f, 5.0f, 10.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp67);
    temp68->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp68->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp68->Width(::g::Uno::UX::Size__New1(60.0f, 1));
    temp68->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp68->Margin(::g::Uno::Float4__New2(15.0f, 5.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    temp7->PlaceholderText(::STRINGS[39/*"NY"*/]);
    temp7->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp7->FontSize(14.0f);
    temp7->Margin(::g::Uno::Float4__New2(10.0f, 5.0f, 10.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp69);
    temp70->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp70->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp70->Width(::g::Uno::UX::Size__New1(90.0f, 1));
    temp70->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp70->Margin(::g::Uno::Float4__New2(15.0f, 5.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp70->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    temp8->PlaceholderText(::STRINGS[21/*"zipcode"*/]);
    temp8->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp8->FontSize(14.0f);
    temp8->Margin(::g::Uno::Float4__New2(10.0f, 5.0f, 10.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp71);
    temp72->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp72->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp72->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp72->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp72->Alignment(1);
    temp72->Margin(::g::Uno::Float4__New2(40.0f, 10.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp72->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    temp9->PlaceholderText(::STRINGS[22/*"email"*/]);
    temp9->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp9->FontSize(14.0f);
    temp9->Margin(::g::Uno::Float4__New2(10.0f, 5.0f, 10.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp73);
    temp74->Value(::STRINGS[40/*"PAYMENT INFO"*/]);
    temp74->FontSize(14.0f);
    temp74->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp74->Margin(::g::Uno::Float4__New2(40.0f, 30.0f, 0.0f, 0.0f));
    uPtr(CCArea)->Name(BuyEcanPage::__selector3());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(CCArea)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp75);
    temp75->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp75->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp75->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp75->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp75->Alignment(1);
    temp75->Margin(::g::Uno::Float4__New2(40.0f, 10.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp75->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    temp10->PlaceholderText(::STRINGS[41/*"card number"*/]);
    temp10->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp10->Width(::g::Uno::UX::Size__New1(290.0f, 1));
    temp10->Alignment(1);
    temp10->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp76);
    temp77->Orientation(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp77->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp78);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp77->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp81);
    temp78->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp78->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp78->Width(::g::Uno::UX::Size__New1(120.0f, 1));
    temp78->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp78->Alignment(1);
    temp78->Margin(::g::Uno::Float4__New2(40.0f, 10.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp78->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp78->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    temp11->PlaceholderText(::STRINGS[42/*"MM"*/]);
    temp11->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp11->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp11->Alignment(1);
    temp11->Margin(::g::Uno::Float4__New2(33.0f, 5.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp79);
    temp12->PlaceholderText(::STRINGS[43/*"YY"*/]);
    temp12->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp12->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp12->Alignment(1);
    temp12->Margin(::g::Uno::Float4__New2(70.0f, 5.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp80);
    temp81->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp81->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp81->Width(::g::Uno::UX::Size__New1(120.0f, 1));
    temp81->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp81->Margin(::g::Uno::Float4__New2(60.0f, 10.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp81->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    temp13->PlaceholderText(::STRINGS[44/*"CVC"*/]);
    temp13->PlaceholderColor(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp13->Width(::g::Uno::UX::Size__New1(40.0f, 1));
    temp13->Margin(::g::Uno::Float4__New2(10.0f, 5.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp82);
    ::g::Fuse::Controls::DockPanel::SetDock(temp84, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp84->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp85);
    temp85->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp85->Color(::g::Uno::Float4__New2(0.9411765f, 0.3490196f, 0.3490196f, 1.0f));
    temp85->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp85->Height(::g::Uno::UX::Size__New1(44.0f, 1));
    temp85->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp85, 3);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp85, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb8)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp85->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp86);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp85->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb8);
    temp86->Value(::STRINGS[45/*"CONFIRM"*/]);
    temp86->Alignment(10);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), CCPage);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), CCArea);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), CCPage);
}

// public BuyEcanPage New(Fuse.Navigation.Router router) [static] :42
BuyEcanPage* BuyEcanPage::New5(::g::Fuse::Navigation::Router* router1)
{
    BuyEcanPage* obj1 = (BuyEcanPage*)uNew(BuyEcanPage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
