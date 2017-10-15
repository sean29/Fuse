// This file was generated based on '.uno/ux11/SignupPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.emrals_bundle.h>
#include <_root.emrals_FuseCont-b37426cf.h>
#include <_root.emrals_FuseCont-f52b401d.h>
#include <_root.SignupPage.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.Trans-997c8373.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Scaling.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileKe-99bafeca.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
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
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[24];
static uType* TYPES[6];

namespace g{

// public partial sealed class SignupPage :2
// {
// static SignupPage() :27
static void SignupPage__cctor_4_fn(uType* __type)
{
    SignupPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"temp_eb63"*/], ::STRINGS[2/*"LogoFile2"*/], ::STRINGS[3/*"temp_eb64"*/], ::STRINGS[4/*"loginArea2"*/], ::STRINGS[5/*"signupbutton"*/], ::STRINGS[6/*"temp_eb65"*/]);
    SignupPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"Value"*/]);
    SignupPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"LogoFile2"*/]);
    SignupPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"loginArea2"*/]);
    SignupPage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"signupbutton"*/]);
}

static void SignupPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("temp_eb63");
    ::STRINGS[2] = uString::Const("LogoFile2");
    ::STRINGS[3] = uString::Const("temp_eb64");
    ::STRINGS[4] = uString::Const("loginArea2");
    ::STRINGS[5] = uString::Const("signupbutton");
    ::STRINGS[6] = uString::Const("temp_eb65");
    ::STRINGS[7] = uString::Const("Value");
    ::STRINGS[8] = uString::Const("back");
    ::STRINGS[9] = uString::Const("goHome");
    ::STRINGS[10] = uString::Const("username");
    ::STRINGS[11] = uString::Const("first_name");
    ::STRINGS[12] = uString::Const("last_name");
    ::STRINGS[13] = uString::Const("email");
    ::STRINGS[14] = uString::Const("password");
    ::STRINGS[15] = uString::Const("error");
    ::STRINGS[16] = uString::Const("doSignup");
    ::STRINGS[17] = uString::Const("Pages/SignupPage.ux");
    ::STRINGS[18] = uString::Const("<<");
    ::STRINGS[19] = uString::Const("44,44,44,44,44");
    ::STRINGS[20] = uString::Const("auto, 1*");
    ::STRINGS[21] = uString::Const("first name");
    ::STRINGS[22] = uString::Const("last name");
    ::STRINGS[23] = uString::Const("SIGN UP");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
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
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::SignupPage, __g_nametable1), 0,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(::g::SignupPage, loginArea2), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::SignupPage, LogoFile2), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::SignupPage, router), 0,
        ::g::Fuse::Controls::DockPanel_typeof(), offsetof(::g::SignupPage, signupbutton), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::SignupPage, temp_eb63), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::SignupPage, temp_eb64), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::SignupPage, temp_eb65), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::SignupPage, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::SignupPage, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::SignupPage, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::SignupPage, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::SignupPage, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::SignupPage, temp5_Value_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::SignupPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::SignupPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::SignupPage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::SignupPage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::SignupPage::__selector3_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* SignupPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 130;
    options.InterfaceCount = 17;
    options.ObjectSize = sizeof(SignupPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("SignupPage", options);
    type->fp_build_ = SignupPage_build;
    type->fp_cctor_ = SignupPage__cctor_4_fn;
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

// public SignupPage(Fuse.Navigation.Router router) :31
void SignupPage__ctor_8_fn(SignupPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :37
void SignupPage__InitializeUX_fn(SignupPage* __this)
{
    __this->InitializeUX();
}

// public SignupPage New(Fuse.Navigation.Router router) :31
void SignupPage__New5_fn(::g::Fuse::Navigation::Router* router1, SignupPage** __retval)
{
    *__retval = SignupPage::New5(router1);
}

uSStrong<uArray*> SignupPage::__g_static_nametable1_;
::g::Uno::UX::Selector SignupPage::__selector0_;
::g::Uno::UX::Selector SignupPage::__selector1_;
::g::Uno::UX::Selector SignupPage::__selector2_;
::g::Uno::UX::Selector SignupPage::__selector3_;

// public SignupPage(Fuse.Navigation.Router router) [instance] :31
void SignupPage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :37
void SignupPage::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, SignupPage::__g_static_nametable1());
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[8/*"back"*/]);
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[9/*"goHome"*/]);
    ::g::Fuse::Controls::TextInput* temp = ::g::Fuse::Controls::TextInput::New3();
    temp_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp, SignupPage::__selector0());
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[10/*"username"*/]);
    ::g::Fuse::Controls::TextInput* temp1 = ::g::Fuse::Controls::TextInput::New3();
    temp1_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp1, SignupPage::__selector0());
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"first_name"*/]);
    ::g::Fuse::Controls::TextInput* temp2 = ::g::Fuse::Controls::TextInput::New3();
    temp2_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp2, SignupPage::__selector0());
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"last_name"*/]);
    ::g::Fuse::Controls::TextInput* temp3 = ::g::Fuse::Controls::TextInput::New3();
    temp3_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp3, SignupPage::__selector0());
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"email"*/]);
    ::g::Fuse::Controls::TextInput* temp4 = ::g::Fuse::Controls::TextInput::New3();
    temp4_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp4, SignupPage::__selector0());
    ::g::Fuse::Reactive::Data* temp12 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"password"*/]);
    ::g::Fuse::Controls::Text* temp5 = ::g::Fuse::Controls::Text::New3();
    temp5_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp5, SignupPage::__selector0());
    ::g::Fuse::Reactive::Data* temp13 = ::g::Fuse::Reactive::Data::New1(::STRINGS[15/*"error"*/]);
    ::g::Fuse::Reactive::Data* temp14 = ::g::Fuse::Reactive::Data::New1(::STRINGS[16/*"doSignup"*/]);
    ::g::Fuse::Reactive::JavaScript* temp15 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::DockPanel* temp16 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Panel* temp17 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp18 = ::g::Fuse::Controls::Text::New3();
    temp_eb63 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp6, __g_nametable1);
    ::g::Fuse::Triggers::WhileKeyboardVisible* temp19 = ::g::Fuse::Triggers::WhileKeyboardVisible::New2();
    ::g::Fuse::Animations::Move* temp20 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Scale* temp21 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Animations::Move* temp22 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Move* temp23 = ::g::Fuse::Animations::Move::New2();
    LogoFile2 = ::g::Fuse::Controls::Image::New3();
    temp_eb64 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp7, __g_nametable1);
    loginArea2 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Image* temp24 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp25 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp8, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp26 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Image* temp27 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp28 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp9, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp29 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Image* temp30 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp31 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp10, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp32 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Image* temp33 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp34 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp11, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp35 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Image* temp36 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp37 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Value_inst, (uObject*)temp12, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp38 = ::g::Fuse::Controls::Rectangle::New3();
    signupbutton = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp39 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Value_inst, (uObject*)temp13, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp40 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp41 = ::g::Fuse::Controls::Text::New3();
    temp_eb65 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp14, __g_nametable1);
    temp15->LineNumber(3);
    temp15->FileName(::STRINGS[17/*"Pages/Signu...*/]);
    temp15->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::SignupPagebfc3362e()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), LogoFile2);
    temp17->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp17, 2);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp17, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb63)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb63);
    temp18->Value(::STRINGS[18/*"<<"*/]);
    temp18->FontSize(24.0f);
    temp18->Color(::g::Uno::Float4__New2(0.3882353f, 0.3882353f, 0.3921569f, 1.0f));
    temp18->Alignment(3);
    temp18->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 15.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp23);
    temp20->Y(-100.0f);
    temp20->Duration(0.6);
    temp20->Target(LogoFile2);
    temp20->Easing(::g::Fuse::Animations::Easing::ExponentialInOut());
    temp21->Factor(0.6f);
    temp21->Duration(0.6);
    temp21->Target(LogoFile2);
    temp22->Y(-10.0f);
    temp22->Duration(0.6);
    temp22->Target(loginArea2);
    temp22->Easing(::g::Fuse::Animations::Easing::ExponentialInOut());
    temp23->Y(50.0f);
    temp23->Duration(0.6);
    temp23->Target(signupbutton);
    temp23->Easing(::g::Fuse::Animations::Easing::ExponentialInOut());
    uPtr(LogoFile2)->MaxHeight(::g::Uno::UX::Size__New1(110.0f, 1));
    uPtr(LogoFile2)->Margin(::g::Uno::Float4__New2(0.0f, 50.0f, 0.0f, 0.0f));
    uPtr(LogoFile2)->Name(SignupPage::__selector1());
    ::g::Fuse::Controls::DockPanel::SetDock(LogoFile2, 2);
    ::g::Fuse::Gestures::Clicked::AddHandler(LogoFile2, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb64)));
    uPtr(LogoFile2)->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::emralsv2logoc8e35c00()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(LogoFile2)->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb64);
    uPtr(loginArea2)->Rows(::STRINGS[19/*"44,44,44,44...*/]);
    uPtr(loginArea2)->Columns(::STRINGS[20/*"auto, 1*"*/]);
    uPtr(loginArea2)->Height(::g::Uno::UX::Size__New1(230.0f, 1));
    uPtr(loginArea2)->MaxWidth(::g::Uno::UX::Size__New1(360.0f, 1));
    uPtr(loginArea2)->Padding(::g::Uno::Float4__New2(0.0f, 25.0f, 40.0f, 0.0f));
    uPtr(loginArea2)->Name(SignupPage::__selector2());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea2)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea2)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea2)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea2)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea2)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea2)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea2)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea2)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea2)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea2)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea2)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea2)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea2)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea2)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea2)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    temp24->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp24->Height(::g::Uno::UX::Size__New1(24.0f, 1));
    temp24->Alignment(1);
    temp24->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp24, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp24, 0);
    temp24->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::personicon64b5e5dd()));
    temp->PlaceholderText(::STRINGS[10/*"username"*/]);
    temp->PlaceholderColor(::g::Uno::Float4__New2(0.7764706f, 0.7764706f, 0.7764706f, 1.0f));
    temp->FontSize(14.0f);
    temp->TextColor(::g::Uno::Float4__New2(0.4196078f, 0.4235294f, 0.427451f, 1.0f));
    temp->CaretColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp25);
    temp26->Color(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp26->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp26->Alignment(12);
    ::g::Fuse::Controls::Grid::SetRow(temp26, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp26, 1);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp26, 2);
    temp27->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp27->Height(::g::Uno::UX::Size__New1(24.0f, 1));
    temp27->Alignment(1);
    temp27->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp27, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp27, 0);
    temp27->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::personicon64b5e5dd()));
    temp1->PlaceholderText(::STRINGS[21/*"first name"*/]);
    temp1->PlaceholderColor(::g::Uno::Float4__New2(0.7764706f, 0.7764706f, 0.7764706f, 1.0f));
    temp1->FontSize(14.0f);
    temp1->TextColor(::g::Uno::Float4__New2(0.4196078f, 0.4235294f, 0.427451f, 1.0f));
    temp1->CaretColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp1, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp1, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp28);
    temp29->Color(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp29->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp29->Alignment(12);
    ::g::Fuse::Controls::Grid::SetRow(temp29, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp29, 1);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp29, 2);
    temp30->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp30->Height(::g::Uno::UX::Size__New1(24.0f, 1));
    temp30->Alignment(1);
    temp30->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp30, 2);
    ::g::Fuse::Controls::Grid::SetColumn(temp30, 0);
    temp30->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::personicon64b5e5dd()));
    temp2->PlaceholderText(::STRINGS[22/*"last name"*/]);
    temp2->PlaceholderColor(::g::Uno::Float4__New2(0.7764706f, 0.7764706f, 0.7764706f, 1.0f));
    temp2->FontSize(14.0f);
    temp2->TextColor(::g::Uno::Float4__New2(0.4196078f, 0.4235294f, 0.427451f, 1.0f));
    temp2->CaretColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp2, 2);
    ::g::Fuse::Controls::Grid::SetColumn(temp2, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp31);
    temp32->Color(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp32->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp32->Alignment(12);
    ::g::Fuse::Controls::Grid::SetRow(temp32, 2);
    ::g::Fuse::Controls::Grid::SetColumn(temp32, 1);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp32, 2);
    temp33->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp33->Height(::g::Uno::UX::Size__New1(24.0f, 1));
    temp33->Alignment(1);
    temp33->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp33, 3);
    ::g::Fuse::Controls::Grid::SetColumn(temp33, 0);
    temp33->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::mailiconcb50e7a5()));
    temp3->PlaceholderText(::STRINGS[13/*"email"*/]);
    temp3->PlaceholderColor(::g::Uno::Float4__New2(0.7764706f, 0.7764706f, 0.7764706f, 1.0f));
    temp3->FontSize(14.0f);
    temp3->TextColor(::g::Uno::Float4__New2(0.4196078f, 0.4235294f, 0.427451f, 1.0f));
    temp3->CaretColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp3, 3);
    ::g::Fuse::Controls::Grid::SetColumn(temp3, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp34);
    temp35->Color(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp35->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp35->Alignment(12);
    ::g::Fuse::Controls::Grid::SetRow(temp35, 3);
    ::g::Fuse::Controls::Grid::SetColumn(temp35, 1);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp35, 2);
    temp36->Width(::g::Uno::UX::Size__New1(18.0f, 1));
    temp36->Height(::g::Uno::UX::Size__New1(24.0f, 1));
    temp36->Alignment(1);
    temp36->Margin(::g::Uno::Float4__New2(12.0f, 0.0f, 25.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp36, 4);
    ::g::Fuse::Controls::Grid::SetColumn(temp36, 0);
    temp36->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::lockicon9c77e3bf()));
    temp4->IsPassword(true);
    temp4->PlaceholderText(::STRINGS[14/*"password"*/]);
    temp4->PlaceholderColor(::g::Uno::Float4__New2(0.7764706f, 0.7764706f, 0.7764706f, 1.0f));
    temp4->FontSize(14.0f);
    temp4->TextColor(::g::Uno::Float4__New2(0.4196078f, 0.4235294f, 0.427451f, 1.0f));
    temp4->CaretColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp4, 4);
    ::g::Fuse::Controls::Grid::SetColumn(temp4, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp37);
    temp38->Color(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp38->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp38->Alignment(12);
    ::g::Fuse::Controls::Grid::SetRow(temp38, 4);
    ::g::Fuse::Controls::Grid::SetColumn(temp38, 1);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp38, 2);
    uPtr(signupbutton)->Name(SignupPage::__selector3());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(signupbutton)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(signupbutton)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    temp5->FontSize(24.0f);
    temp5->TextAlignment(1);
    temp5->Color(::g::Uno::Float4__New2(1.0f, 0.0f, 0.0f, 1.0f));
    temp5->Font(::g::Fuse::Font::Medium());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp39);
    temp40->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp40->Color(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp40->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp40->Height(::g::Uno::UX::Size__New1(48.0f, 1));
    temp40->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 20.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp40, 3);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp40, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb65)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb65);
    temp41->Value(::STRINGS[23/*"SIGN UP"*/]);
    temp41->FontSize(24.0f);
    temp41->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp41->Alignment(14);
    temp41->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 10.0f));
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb63);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), LogoFile2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb64);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), loginArea2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), signupbutton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb65);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), loginArea2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), signupbutton);
}

// public SignupPage New(Fuse.Navigation.Router router) [static] :31
SignupPage* SignupPage::New5(::g::Fuse::Navigation::Router* router1)
{
    SignupPage* obj1 = (SignupPage*)uNew(SignupPage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
