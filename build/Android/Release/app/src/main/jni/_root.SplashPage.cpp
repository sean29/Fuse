// This file was generated based on '.uno/ux13/SplashPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.emrals_bundle.h>
#include <_root.emrals_FuseCont-56bc3fec.h>
#include <_root.emrals_FuseCont-b37426cf.h>
#include <_root.emrals_FuseCont-f08373fa.h>
#include <_root.emrals_FuseElem-82a17684.h>
#include <_root.emrals_FuseElem-95841797.h>
#include <_root.Horse.h>
#include <_root.PTreal.h>
#include <_root.SplashPage.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Elements.StretchDirection.h>
#include <Fuse.Elements.StretchMode.h>
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
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[26];
static uType* TYPES[6];

namespace g{

// public partial class SplashPage :2
// {
// static SplashPage() :23
static void SplashPage__cctor_4_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    SplashPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    SplashPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Url"*/]);
    SplashPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Visibility"*/]);
    SplashPage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Opacity"*/]);
    SplashPage::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"Color"*/]);
    SplashPage::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"tagrec"*/]);
    SplashPage::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"impactrec"*/]);
    SplashPage::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"ecanrec"*/]);
    SplashPage::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"loginrec"*/]);
}

static void SplashPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("Url");
    ::STRINGS[2] = uString::Const("Visibility");
    ::STRINGS[3] = uString::Const("Opacity");
    ::STRINGS[4] = uString::Const("Color");
    ::STRINGS[5] = uString::Const("tagrec");
    ::STRINGS[6] = uString::Const("impactrec");
    ::STRINGS[7] = uString::Const("ecanrec");
    ::STRINGS[8] = uString::Const("loginrec");
    ::STRINGS[9] = uString::Const("user_emrals");
    ::STRINGS[10] = uString::Const("user_avatar");
    ::STRINGS[11] = uString::Const("widget_visible");
    ::STRINGS[12] = uString::Const("viewProfile");
    ::STRINGS[13] = uString::Const("goToAlerts");
    ::STRINGS[14] = uString::Const("goToImpact");
    ::STRINGS[15] = uString::Const("goToEcans");
    ::STRINGS[16] = uString::Const("goToLogin");
    ::STRINGS[17] = uString::Const("login_visible");
    ::STRINGS[18] = uString::Const("Version ");
    ::STRINGS[19] = uString::Const("version_num");
    ::STRINGS[20] = uString::Const(" Build ");
    ::STRINGS[21] = uString::Const("build_num");
    ::STRINGS[22] = uString::Const("Tag Dirt Alerts");
    ::STRINGS[23] = uString::Const("Fund Impact");
    ::STRINGS[24] = uString::Const("See eCans");
    ::STRINGS[25] = uString::Const("LOG IN");
    ::TYPES[0] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Controls::DockPanel_typeof());
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
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17));
    type->SetFields(117,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(SplashPage, ecanrec), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(SplashPage, ecanrec_Opacity_inst), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(SplashPage, impactrec), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(SplashPage, impactrec_Opacity_inst), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(SplashPage, loginrec), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(SplashPage, loginrec_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(SplashPage, loginrec_Visibility_inst), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(SplashPage, router), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(SplashPage, tagrec), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(SplashPage, tagrec_Opacity_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(SplashPage, temp_eb69), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(SplashPage, temp_eb70), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(SplashPage, temp_eb71), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(SplashPage, temp_eb72), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(SplashPage, temp_eb73), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SplashPage, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SplashPage, temp1_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(SplashPage, temp2_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SplashPage, temp3_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SplashPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SplashPage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SplashPage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SplashPage::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SplashPage::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SplashPage::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SplashPage::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SplashPage::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SplashPage::__selector8_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* SplashPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 145;
    options.InterfaceCount = 18;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(SplashPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("SplashPage", options);
    type->fp_build_ = SplashPage_build;
    type->fp_cctor_ = SplashPage__cctor_4_fn;
    type->interface17.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface17.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface17.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface12.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface14.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface13.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface16.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface15.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface15.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface15.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface9.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface10.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface10.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface11.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface10.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface8.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface10.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface10.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
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

// public SplashPage(Fuse.Navigation.Router router) :27
void SplashPage__ctor_8_fn(SplashPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :33
void SplashPage__InitializeUX_fn(SplashPage* __this)
{
    __this->InitializeUX();
}

::g::Uno::UX::Selector SplashPage::__selector0_;
::g::Uno::UX::Selector SplashPage::__selector1_;
::g::Uno::UX::Selector SplashPage::__selector2_;
::g::Uno::UX::Selector SplashPage::__selector3_;
::g::Uno::UX::Selector SplashPage::__selector4_;
::g::Uno::UX::Selector SplashPage::__selector5_;
::g::Uno::UX::Selector SplashPage::__selector6_;
::g::Uno::UX::Selector SplashPage::__selector7_;
::g::Uno::UX::Selector SplashPage::__selector8_;

// public SplashPage(Fuse.Navigation.Router router) [instance] :27
void SplashPage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :33
void SplashPage::InitializeUX()
{
    ::g::PTreal* temp = ::g::PTreal::New4();
    temp_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp, SplashPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[9/*"user_emrals"*/]);
    ::g::Fuse::Controls::Image* temp1 = ::g::Fuse::Controls::Image::New3();
    temp1_Url_inst = ::g::emrals_FuseControlsImage_Url_Property::New1(temp1, SplashPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[10/*"user_avatar"*/]);
    ::g::Fuse::Controls::StackPanel* temp2 = ::g::Fuse::Controls::StackPanel::New4();
    temp2_Visibility_inst = ::g::emrals_FuseElementsElement_Visibility_Property::New1(temp2, SplashPage::__selector2_);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"widget_visi...*/]);
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"viewProfile"*/]);
    tagrec = ::g::Fuse::Controls::Rectangle::New3();
    tagrec_Opacity_inst = ::g::emrals_FuseElementsElement_Opacity_Property::New1(tagrec, SplashPage::__selector3_);
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"goToAlerts"*/]);
    impactrec = ::g::Fuse::Controls::Rectangle::New3();
    impactrec_Opacity_inst = ::g::emrals_FuseElementsElement_Opacity_Property::New1(impactrec, SplashPage::__selector3_);
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"goToImpact"*/]);
    ecanrec = ::g::Fuse::Controls::Rectangle::New3();
    ecanrec_Opacity_inst = ::g::emrals_FuseElementsElement_Opacity_Property::New1(ecanrec, SplashPage::__selector3_);
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(::STRINGS[15/*"goToEcans"*/]);
    loginrec = ::g::Fuse::Controls::Rectangle::New3();
    loginrec_Color_inst = ::g::emrals_FuseControlsShape_Color_Property::New1(loginrec, SplashPage::__selector4_);
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[16/*"goToLogin"*/]);
    loginrec_Visibility_inst = ::g::emrals_FuseElementsElement_Visibility_Property::New1(loginrec, SplashPage::__selector2_);
    ::g::Fuse::Reactive::Data* temp12 = ::g::Fuse::Reactive::Data::New1(::STRINGS[17/*"login_visible"*/]);
    uString* temp13 = ::STRINGS[18/*"Version "*/];
    ::g::Fuse::Reactive::Constant* temp14 = ::g::Fuse::Reactive::Constant::New1(temp13);
    ::g::Fuse::Reactive::Data* temp15 = ::g::Fuse::Reactive::Data::New1(::STRINGS[19/*"version_num"*/]);
    uString* temp16 = ::STRINGS[20/*" Build "*/];
    ::g::Fuse::Reactive::Constant* temp17 = ::g::Fuse::Reactive::Constant::New1(temp16);
    ::g::Fuse::Reactive::Data* temp18 = ::g::Fuse::Reactive::Data::New1(::STRINGS[21/*"build_num"*/]);
    ::g::Fuse::Reactive::Add* temp19 = ::g::Fuse::Reactive::Add::New1(temp17, temp18);
    ::g::Fuse::Reactive::Add* temp20 = ::g::Fuse::Reactive::Add::New1(temp15, temp19);
    ::g::Fuse::Controls::Text* temp3 = ::g::Fuse::Controls::Text::New3();
    temp3_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp3, SplashPage::__selector0_);
    ::g::Fuse::Reactive::Add* temp21 = ::g::Fuse::Reactive::Add::New1(temp14, temp20);
    ::g::Fuse::Controls::Image* temp22 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp23 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9764706f, 0.972549f, 0.972549f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp24 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp4, 3);
    ::g::Fuse::Reactive::DataBinding* temp25 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Url_inst, (uObject*)temp5, 3);
    ::g::Fuse::Reactive::DataBinding* temp26 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Visibility_inst, (uObject*)temp6, 3);
    temp_eb69 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp7);
    ::g::Fuse::Controls::DockPanel* temp27 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Image* temp28 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp29 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::StackPanel* temp30 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp31 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp32 = ::g::Fuse::Controls::Image::New3();
    ::g::PTreal* temp33 = ::g::PTreal::New4();
    ::g::Fuse::Gestures::WhilePressed* temp34 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Change* temp35 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<float>*/], tagrec_Opacity_inst);
    temp_eb70 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp8);
    ::g::Fuse::Controls::Panel* temp36 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp37 = ::g::Fuse::Controls::Image::New3();
    ::g::PTreal* temp38 = ::g::PTreal::New4();
    ::g::Fuse::Gestures::WhilePressed* temp39 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Change* temp40 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<float>*/], impactrec_Opacity_inst);
    temp_eb71 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp9);
    ::g::Fuse::Controls::Panel* temp41 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp42 = ::g::Fuse::Controls::Image::New3();
    ::g::PTreal* temp43 = ::g::PTreal::New4();
    ::g::Fuse::Gestures::WhilePressed* temp44 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Change* temp45 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<float>*/], ecanrec_Opacity_inst);
    temp_eb72 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp10);
    ::g::Horse* temp46 = ::g::Horse::New4();
    ::g::Fuse::Gestures::WhilePressed* temp47 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Change* temp48 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float4>*/], loginrec_Color_inst);
    temp_eb73 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp11);
    ::g::Fuse::Reactive::DataBinding* temp49 = ::g::Fuse::Reactive::DataBinding::New1(loginrec_Visibility_inst, (uObject*)temp12, 3);
    ::g::Fuse::Reactive::DataBinding* temp50 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp21, 3);
    ::g::Fuse::Controls::Image* temp51 = ::g::Fuse::Controls::Image::New3();
    temp2->Orientation(0);
    temp2->Alignment(7);
    temp2->Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp2, 2);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp2, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb69)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb69);
    temp22->Color(::g::Uno::Float4__New2(0.9921569f, 0.9882353f, 0.9882353f, 1.0f));
    temp22->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp22->Height(::g::Uno::UX::Size__New1(16.0f, 1));
    temp22->Alignment(4);
    ::g::Fuse::Controls::DockPanel::SetDock(temp22, 2);
    temp22->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::greeneea7c8b83()));
    temp22->Background(temp23);
    temp->FontSize(14.0f);
    temp->Margin(::g::Uno::Float4__New2(4.0f, 0.0f, 4.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp24);
    temp1->MaxHeight(::g::Uno::UX::Size__New1(16.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp51);
    temp28->MaxHeight(::g::Uno::UX::Size__New1(110.0f, 1));
    temp28->Margin(::g::Uno::Float4__New2(0.0f, 35.0f, 0.0f, 0.0f));
    temp28->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp28, 2);
    temp28->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::emralsv2logodcad63ae()));
    temp28->Background(temp29);
    temp30->Height(::g::Uno::UX::Size__New1(0.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), loginrec);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp31->HitTestMode(5);
    temp31->Y(::g::Uno::UX::Size__New1(90.0f, 1));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp31, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb70)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), tagrec);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb70);
    temp32->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp32->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 140.0f, 0.0f));
    temp32->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::camerataga971915e()));
    temp33->Value(::STRINGS[22/*"Tag Dirt Al...*/]);
    temp33->FontSize(18.0f);
    temp33->Color(::g::Uno::Float4__New2(0.3882353f, 0.3882353f, 0.3921569f, 1.0f));
    temp33->Alignment(10);
    temp33->Margin(::g::Uno::Float4__New2(60.0f, 0.0f, 0.0f, 0.0f));
    uPtr(tagrec)->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    uPtr(tagrec)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(tagrec)->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    uPtr(tagrec)->Height(::g::Uno::UX::Size__New1(48.0f, 1));
    uPtr(tagrec)->Alignment(10);
    uPtr(tagrec)->Opacity(0.8f);
    uPtr(tagrec)->Name(SplashPage::__selector5_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(tagrec)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp35);
    ::g::Fuse::Animations::Change__set_Value_fn(temp35, uCRef(1.0f));
    temp35->Duration(0.05);
    temp35->DurationBack(0.2);
    temp36->HitTestMode(5);
    temp36->Y(::g::Uno::UX::Size__New1(100.0f, 1));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp36, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb71)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), impactrec);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb71);
    temp37->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp37->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 140.0f, 0.0f));
    temp37->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::buyicon28773aa2()));
    temp38->Value(::STRINGS[23/*"Fund Impact"*/]);
    temp38->FontSize(18.0f);
    temp38->Color(::g::Uno::Float4__New2(0.3882353f, 0.3882353f, 0.3921569f, 1.0f));
    temp38->Alignment(10);
    temp38->Margin(::g::Uno::Float4__New2(40.0f, 0.0f, 0.0f, 0.0f));
    uPtr(impactrec)->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    uPtr(impactrec)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(impactrec)->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    uPtr(impactrec)->Height(::g::Uno::UX::Size__New1(48.0f, 1));
    uPtr(impactrec)->Alignment(10);
    uPtr(impactrec)->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 20.0f));
    uPtr(impactrec)->Opacity(0.8f);
    uPtr(impactrec)->Name(SplashPage::__selector6_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(impactrec)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp40);
    ::g::Fuse::Animations::Change__set_Value_fn(temp40, uCRef(1.0f));
    temp40->Duration(0.05);
    temp40->DurationBack(0.2);
    temp41->HitTestMode(5);
    temp41->Y(::g::Uno::UX::Size__New1(110.0f, 1));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp41, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb72)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), ecanrec);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb72);
    temp42->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp42->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 140.0f, 0.0f));
    temp42->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::v2ecansiconcdda5636()));
    temp43->Value(::STRINGS[24/*"See eCans"*/]);
    temp43->FontSize(18.0f);
    temp43->Color(::g::Uno::Float4__New2(0.3882353f, 0.3882353f, 0.3921569f, 1.0f));
    temp43->Alignment(10);
    temp43->Margin(::g::Uno::Float4__New2(25.0f, 0.0f, 0.0f, 0.0f));
    uPtr(ecanrec)->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    uPtr(ecanrec)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(ecanrec)->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    uPtr(ecanrec)->Height(::g::Uno::UX::Size__New1(48.0f, 1));
    uPtr(ecanrec)->Alignment(10);
    uPtr(ecanrec)->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(ecanrec)->Opacity(0.8f);
    uPtr(ecanrec)->Name(SplashPage::__selector7_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ecanrec)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp45);
    ::g::Fuse::Animations::Change__set_Value_fn(temp45, uCRef(1.0f));
    temp45->Duration(0.05);
    temp45->DurationBack(0.2);
    uPtr(loginrec)->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    uPtr(loginrec)->Color(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    uPtr(loginrec)->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    uPtr(loginrec)->Height(::g::Uno::UX::Size__New1(48.0f, 1));
    uPtr(loginrec)->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 40.0f));
    uPtr(loginrec)->Y(::g::Uno::UX::Size__New1(140.0f, 1));
    uPtr(loginrec)->Name(SplashPage::__selector8_);
    ::g::Fuse::Gestures::Clicked::AddHandler(loginrec, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb73)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginrec)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginrec)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginrec)->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb73);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginrec)->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp49);
    temp46->Value(::STRINGS[25/*"LOG IN"*/]);
    temp46->FontSize(24.0f);
    temp46->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp48);
    ::g::Fuse::Animations::Change__set_Value_fn(temp48, uCRef(::g::Uno::Float4__New2(0.6862745f, 0.8705882f, 0.4117647f, 1.0f)));
    temp48->Duration(0.05);
    temp48->DurationBack(0.2);
    temp3->FontSize(11.0f);
    temp3->TextColor(::g::Uno::Float4__New2(0.5333334f, 0.5333334f, 0.5333334f, 1.0f));
    temp3->Alignment(10);
    temp3->Margin(::g::Uno::Float4__New2(0.0f, 140.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp50);
    temp51->StretchMode(3);
    temp51->StretchDirection(2);
    temp51->Alignment(10);
    ::g::Fuse::Controls::DockPanel::SetDock(temp51, 3);
    temp51->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::bgtrashdd892f08()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
}
// }

} // ::g
