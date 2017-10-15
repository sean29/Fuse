// This file was generated based on '.uno/ux11/LoginPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.emrals_bundle.h>
#include <_root.emrals_FuseCont-b37426cf.h>
#include <_root.emrals_FuseCont-f08373fa.h>
#include <_root.emrals_FuseCont-f52b401d.h>
#include <_root.Horse.h>
#include <_root.LoginPage.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.Trans-997c8373.h>
#include <Fuse.Controls.Control.h>
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
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Gestures.WhilePressed.h>
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
static uType* TYPES[7];

namespace g{

// public partial sealed class LoginPage :2
// {
// static LoginPage() :27
static void LoginPage__cctor_4_fn(uType* __type)
{
    LoginPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 8, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"temp_eb47"*/], ::STRINGS[2/*"LogoFile"*/], ::STRINGS[3/*"loggedOutView"*/], ::STRINGS[4/*"loginArea"*/], ::STRINGS[5/*"temp_eb48"*/], ::STRINGS[6/*"loginprect"*/], ::STRINGS[7/*"temp_eb49"*/]);
    LoginPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"Value"*/]);
    LoginPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"Color"*/]);
    LoginPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"LogoFile"*/]);
    LoginPage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"loggedOutView"*/]);
    LoginPage::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"loginArea"*/]);
    LoginPage::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"loginprect"*/]);
}

static void LoginPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("temp_eb47");
    ::STRINGS[2] = uString::Const("LogoFile");
    ::STRINGS[3] = uString::Const("loggedOutView");
    ::STRINGS[4] = uString::Const("loginArea");
    ::STRINGS[5] = uString::Const("temp_eb48");
    ::STRINGS[6] = uString::Const("loginprect");
    ::STRINGS[7] = uString::Const("temp_eb49");
    ::STRINGS[8] = uString::Const("Value");
    ::STRINGS[9] = uString::Const("Color");
    ::STRINGS[10] = uString::Const("back");
    ::STRINGS[11] = uString::Const("username");
    ::STRINGS[12] = uString::Const("password");
    ::STRINGS[13] = uString::Const("goToSignup");
    ::STRINGS[14] = uString::Const("error");
    ::STRINGS[15] = uString::Const("doLogin");
    ::STRINGS[16] = uString::Const("Pages/LoginPage.ux");
    ::STRINGS[17] = uString::Const("<<");
    ::STRINGS[18] = uString::Const("1*,auto,1*");
    ::STRINGS[19] = uString::Const("auto, 1*");
    ::STRINGS[20] = uString::Const("Username");
    ::STRINGS[21] = uString::Const("Password");
    ::STRINGS[22] = uString::Const("Don't have an Account? Sign up!.");
    ::STRINGS[23] = uString::Const("LOG IN");
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
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::LoginPage, __g_nametable1), 0,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(::g::LoginPage, loggedOutView), 0,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(::g::LoginPage, loginArea), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::LoginPage, loginprect), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::LoginPage, loginprect_Color_inst), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::LoginPage, LogoFile), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::LoginPage, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::LoginPage, temp_eb47), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::LoginPage, temp_eb48), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::LoginPage, temp_eb49), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::LoginPage, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::LoginPage, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::LoginPage, temp2_Value_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::LoginPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::LoginPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::LoginPage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::LoginPage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::LoginPage::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::LoginPage::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::LoginPage::__selector5_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* LoginPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 131;
    options.InterfaceCount = 17;
    options.ObjectSize = sizeof(LoginPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("LoginPage", options);
    type->fp_build_ = LoginPage_build;
    type->fp_cctor_ = LoginPage__cctor_4_fn;
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

// public LoginPage(Fuse.Navigation.Router router) :31
void LoginPage__ctor_8_fn(LoginPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :37
void LoginPage__InitializeUX_fn(LoginPage* __this)
{
    __this->InitializeUX();
}

// public LoginPage New(Fuse.Navigation.Router router) :31
void LoginPage__New5_fn(::g::Fuse::Navigation::Router* router1, LoginPage** __retval)
{
    *__retval = LoginPage::New5(router1);
}

uSStrong<uArray*> LoginPage::__g_static_nametable1_;
::g::Uno::UX::Selector LoginPage::__selector0_;
::g::Uno::UX::Selector LoginPage::__selector1_;
::g::Uno::UX::Selector LoginPage::__selector2_;
::g::Uno::UX::Selector LoginPage::__selector3_;
::g::Uno::UX::Selector LoginPage::__selector4_;
::g::Uno::UX::Selector LoginPage::__selector5_;

// public LoginPage(Fuse.Navigation.Router router) [instance] :31
void LoginPage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :37
void LoginPage::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, LoginPage::__g_static_nametable1());
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[10/*"back"*/]);
    ::g::Fuse::Controls::TextInput* temp = ::g::Fuse::Controls::TextInput::New3();
    temp_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp, LoginPage::__selector0());
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"username"*/]);
    ::g::Fuse::Controls::TextInput* temp1 = ::g::Fuse::Controls::TextInput::New3();
    temp1_Value_inst = ::g::emrals_FuseControlsTextInputControl_Value_Property::New1(temp1, LoginPage::__selector0());
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"password"*/]);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"goToSignup"*/]);
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    temp2_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp2, LoginPage::__selector0());
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"error"*/]);
    loginprect = ::g::Fuse::Controls::Rectangle::New3();
    loginprect_Color_inst = ::g::emrals_FuseControlsShape_Color_Property::New1(loginprect, LoginPage::__selector1());
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[15/*"doLogin"*/]);
    ::g::Fuse::Reactive::JavaScript* temp9 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Panel* temp10 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp11 = ::g::Fuse::Controls::Text::New3();
    temp_eb47 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp3, __g_nametable1);
    ::g::Fuse::Drawing::StaticSolidColor* temp12 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::DockPanel* temp13 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Triggers::WhileKeyboardVisible* temp14 = ::g::Fuse::Triggers::WhileKeyboardVisible::New2();
    ::g::Fuse::Animations::Move* temp15 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Scale* temp16 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Animations::Move* temp17 = ::g::Fuse::Animations::Move::New2();
    LogoFile = ::g::Fuse::Controls::Image::New3();
    loggedOutView = ::g::Fuse::Controls::Grid::New4();
    loginArea = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Image* temp18 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp19 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp4, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp20 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Image* temp21 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp22 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp5, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp23 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp24 = ::g::Fuse::Controls::Text::New3();
    temp_eb48 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp6, __g_nametable1);
    ::g::Fuse::Controls::DockPanel* temp25 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp26 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp7, __g_nametable1, 3);
    ::g::Horse* temp27 = ::g::Horse::New4();
    ::g::Fuse::Gestures::WhilePressed* temp28 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Change* temp29 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float4>*/], loginprect_Color_inst);
    temp_eb49 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp8, __g_nametable1);
    temp9->LineNumber(3);
    temp9->FileName(::STRINGS[16/*"Pages/Login...*/]);
    temp9->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::LoginPagee85f33db()));
    temp10->Height(::g::Uno::UX::Size__New1(45.0f, 1));
    temp10->Y(::g::Uno::UX::Size__New1(0.0f, 1));
    temp10->Background(temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    temp11->Value(::STRINGS[17/*"<<"*/]);
    temp11->FontSize(24.0f);
    temp11->Color(::g::Uno::Float4__New2(0.3882353f, 0.3882353f, 0.3921569f, 1.0f));
    temp11->Alignment(3);
    temp11->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 15.0f, 0.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp11, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb47)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), LogoFile);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp17);
    temp15->Y(-60.0f);
    temp15->Duration(0.6);
    temp15->Target(LogoFile);
    temp15->Easing(::g::Fuse::Animations::Easing::ExponentialInOut());
    temp16->Factor(0.6f);
    temp16->Duration(0.6);
    temp16->Target(LogoFile);
    temp17->Y(-10.0f);
    temp17->Duration(0.6);
    temp17->Target(loginArea);
    temp17->Easing(::g::Fuse::Animations::Easing::ExponentialInOut());
    uPtr(LogoFile)->MaxHeight(::g::Uno::UX::Size__New1(110.0f, 1));
    uPtr(LogoFile)->Margin(::g::Uno::Float4__New2(0.0f, 50.0f, 0.0f, 0.0f));
    uPtr(LogoFile)->Name(LoginPage::__selector2());
    ::g::Fuse::Controls::DockPanel::SetDock(LogoFile, 2);
    uPtr(LogoFile)->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::emralsv2logoc8e35c00()));
    uPtr(loggedOutView)->Rows(::STRINGS[18/*"1*,auto,1*"*/]);
    uPtr(loggedOutView)->Padding(::g::Uno::Float4__New2(40.0f, 0.0f, 40.0f, 0.0f));
    uPtr(loggedOutView)->Name(LoginPage::__selector3());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loggedOutView)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), loginArea);
    uPtr(loginArea)->RowCount(2);
    uPtr(loginArea)->Columns(::STRINGS[19/*"auto, 1*"*/]);
    uPtr(loginArea)->Height(::g::Uno::UX::Size__New1(220.0f, 1));
    uPtr(loginArea)->MaxWidth(::g::Uno::UX::Size__New1(400.0f, 1));
    uPtr(loginArea)->Padding(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 20.0f));
    uPtr(loginArea)->Name(LoginPage::__selector4());
    ::g::Fuse::Controls::Grid::SetRow(loginArea, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    temp18->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp18->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp18->Alignment(1);
    temp18->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 30.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp18, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp18, 0);
    temp18->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::personicon64b5e5dd()));
    temp->PlaceholderText(::STRINGS[20/*"Username"*/]);
    temp->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp->TextColor(::g::Uno::Float4__New2(0.1333333f, 0.1333333f, 0.1333333f, 1.0f));
    temp->CaretColor(::g::Uno::Float4__New2(0.1333333f, 0.1333333f, 0.1333333f, 1.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp19);
    temp20->Color(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp20->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp20->Alignment(12);
    ::g::Fuse::Controls::Grid::SetRow(temp20, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp20, 1);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp20, 1);
    temp21->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp21->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp21->Alignment(1);
    temp21->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 30.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp21, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp21, 0);
    temp21->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::lockicon9c77e3bf()));
    temp1->IsPassword(true);
    temp1->PlaceholderText(::STRINGS[21/*"Password"*/]);
    temp1->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp1->TextColor(::g::Uno::Float4__New2(0.1333333f, 0.1333333f, 0.1333333f, 1.0f));
    temp1->CaretColor(::g::Uno::Float4__New2(0.1333333f, 0.1333333f, 0.1333333f, 1.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp1, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp1, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp22);
    temp23->Color(::g::Uno::Float4__New2(0.5843138f, 0.5960785f, 0.6039216f, 1.0f));
    temp23->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp23->Alignment(12);
    ::g::Fuse::Controls::Grid::SetRow(temp23, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp23, 1);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp23, 1);
    temp24->Value(::STRINGS[22/*"Don't have ...*/]);
    temp24->FontSize(12.0f);
    temp24->Margin(::g::Uno::Float4__New2(50.0f, 10.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp24, 2);
    ::g::Fuse::Controls::Grid::SetColumn(temp24, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp24, 2);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp24, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb48)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), loginprect);
    temp2->FontSize(42.0f);
    temp2->TextAlignment(1);
    temp2->Color(::g::Uno::Float4__New2(1.0f, 0.0f, 0.0f, 1.0f));
    temp2->Font(::g::Fuse::Font::Medium());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp26);
    uPtr(loginprect)->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    uPtr(loginprect)->Color(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    uPtr(loginprect)->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    uPtr(loginprect)->Height(::g::Uno::UX::Size__New1(48.0f, 1));
    uPtr(loginprect)->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 40.0f));
    uPtr(loginprect)->Name(LoginPage::__selector5());
    ::g::Fuse::Controls::DockPanel::SetDock(loginprect, 3);
    ::g::Fuse::Gestures::Clicked::AddHandler(loginprect, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb49)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginprect)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginprect)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginprect)->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb49);
    temp27->Value(::STRINGS[23/*"LOG IN"*/]);
    temp27->FontSize(24.0f);
    temp27->Alignment(14);
    temp27->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp29);
    ::g::Fuse::Animations::Change__set_Value_fn(temp29, uCRef(::g::Uno::Float4__New2(0.6862745f, 0.8705882f, 0.4117647f, 1.0f)));
    temp29->Duration(0.05);
    temp29->DurationBack(0.2);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), LogoFile);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), loggedOutView);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), loginArea);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), loginprect);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), loggedOutView);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
}

// public LoginPage New(Fuse.Navigation.Router router) [static] :31
LoginPage* LoginPage::New5(::g::Fuse::Navigation::Router* router1)
{
    LoginPage* obj1 = (LoginPage*)uNew(LoginPage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
