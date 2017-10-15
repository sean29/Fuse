// This file was generated based on '.uno/ux11/AlertsPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AlertsPage.h>
#include <_root.AlertsPage.Template.h>
#include <_root.CogWheelReload.h>
#include <_root.emrals_bundle.h>
#include <_root.emrals_FuseCont-b37426cf.h>
#include <_root.emrals_FuseCont-f08373fa.h>
#include <_root.emrals_FuseElem-82a17684.h>
#include <_root.emrals_FuseElem-95841797.h>
#include <_root.emrals_FuseReac-231c90ae.h>
#include <_root.emrals_FuseTrig-13c24fd3.h>
#include <_root.Header.h>
#include <_root.Horse.h>
#include <_root.MyLoadingIndicator.h>
#include <_root.PTreal.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Controls.BottomB-f0a90651.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.ScrollViewBase.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.StatusB-d3f2d898.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Triggers.Busy.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileBusy.h>
#include <Fuse.Triggers.WhileTrue.h>
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
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[29];
static uType* TYPES[11];

namespace g{

// public partial sealed class AlertsPage :2
// {
// static AlertsPage() :136
static void AlertsPage__cctor_4_fn(uType* __type)
{
    AlertsPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"isBusy"*/], ::STRINGS[2/*"loadingPanel"*/], ::STRINGS[3/*"alert_panel"*/], ::STRINGS[4/*"ChooseFile"*/], ::STRINGS[5/*"Revealed"*/], ::STRINGS[6/*"temp_eb13"*/], ::STRINGS[7/*"temp_eb14"*/], ::STRINGS[8/*"postcircle"*/], ::STRINGS[9/*"temp_eb15"*/]);
    AlertsPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"Opacity"*/]);
    AlertsPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"Value"*/]);
    AlertsPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[12/*"Visibility"*/]);
    AlertsPage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[13/*"Color"*/]);
    AlertsPage::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[14/*"Items"*/]);
    AlertsPage::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"isBusy"*/]);
    AlertsPage::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"loadingPanel"*/]);
    AlertsPage::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"alert_panel"*/]);
    AlertsPage::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"ChooseFile"*/]);
    AlertsPage::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"Revealed"*/]);
    AlertsPage::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"postcircle"*/]);
    AlertsPage::Header_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::PTserif96051ccc()));
    AlertsPage::PTreal_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::PTF55F5dbeddf8()));
    ::g::Uno::UX::Resource::SetGlobalKey(AlertsPage::Header_, ::STRINGS[15/*"Header"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(AlertsPage::PTreal_, ::STRINGS[16/*"PTreal"*/]);
}

static void AlertsPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("isBusy");
    ::STRINGS[2] = uString::Const("loadingPanel");
    ::STRINGS[3] = uString::Const("alert_panel");
    ::STRINGS[4] = uString::Const("ChooseFile");
    ::STRINGS[5] = uString::Const("Revealed");
    ::STRINGS[6] = uString::Const("temp_eb13");
    ::STRINGS[7] = uString::Const("temp_eb14");
    ::STRINGS[8] = uString::Const("postcircle");
    ::STRINGS[9] = uString::Const("temp_eb15");
    ::STRINGS[10] = uString::Const("Opacity");
    ::STRINGS[11] = uString::Const("Value");
    ::STRINGS[12] = uString::Const("Visibility");
    ::STRINGS[13] = uString::Const("Color");
    ::STRINGS[14] = uString::Const("Items");
    ::STRINGS[15] = uString::Const("Header");
    ::STRINGS[16] = uString::Const("PTreal");
    ::STRINGS[17] = uString::Const("poster_username");
    ::STRINGS[18] = uString::Const("posted_item");
    ::STRINGS[19] = uString::Const("show_message");
    ::STRINGS[20] = uString::Const("fade_out");
    ::STRINGS[21] = uString::Const("selectImage");
    ::STRINGS[22] = uString::Const("takePicture");
    ::STRINGS[23] = uString::Const("data");
    ::STRINGS[24] = uString::Const("Pages/AlertsPage.ux");
    ::STRINGS[25] = uString::Const("DIRT ALERTS");
    ::STRINGS[26] = uString::Const("Thank you,");
    ::STRINGS[27] = uString::Const("for posting");
    ::STRINGS[28] = uString::Const("POST");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[10] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16));
    type->SetFields(111,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::AlertsPage, __g_nametable1), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::AlertsPage, alert_panel), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::AlertsPage, alert_panel_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::AlertsPage, alert_panel_Visibility_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::AlertsPage, ChooseFile), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::AlertsPage, ChooseFile_Visibility_inst), 0,
        ::g::Fuse::Triggers::Busy_typeof(), offsetof(::g::AlertsPage, isBusy), 0,
        ::g::MyLoadingIndicator_typeof(), offsetof(::g::AlertsPage, loadingPanel), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::AlertsPage, loadingPanel_Opacity_inst), 0,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::AlertsPage, postcircle), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::AlertsPage, postcircle_Color_inst), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::AlertsPage, Revealed), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::AlertsPage, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::AlertsPage, temp_eb13), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::AlertsPage, temp_eb14), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::AlertsPage, temp_eb15), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::AlertsPage, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::AlertsPage, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::AlertsPage, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::AlertsPage, temp3_Items_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::AlertsPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::AlertsPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::AlertsPage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::AlertsPage::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::AlertsPage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::AlertsPage::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::AlertsPage::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::AlertsPage::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::AlertsPage::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::AlertsPage::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::AlertsPage::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::AlertsPage::__selector9_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::AlertsPage::Header_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::AlertsPage::PTreal_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* AlertsPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 145;
    options.InterfaceCount = 17;
    options.ObjectSize = sizeof(AlertsPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("AlertsPage", options);
    type->fp_build_ = AlertsPage_build;
    type->fp_cctor_ = AlertsPage__cctor_4_fn;
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

// public AlertsPage(Fuse.Navigation.Router router) :144
void AlertsPage__ctor_8_fn(AlertsPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :150
void AlertsPage__InitializeUX_fn(AlertsPage* __this)
{
    __this->InitializeUX();
}

// public AlertsPage New(Fuse.Navigation.Router router) :144
void AlertsPage__New5_fn(::g::Fuse::Navigation::Router* router1, AlertsPage** __retval)
{
    *__retval = AlertsPage::New5(router1);
}

uSStrong<uArray*> AlertsPage::__g_static_nametable1_;
::g::Uno::UX::Selector AlertsPage::__selector0_;
::g::Uno::UX::Selector AlertsPage::__selector1_;
::g::Uno::UX::Selector AlertsPage::__selector10_;
::g::Uno::UX::Selector AlertsPage::__selector2_;
::g::Uno::UX::Selector AlertsPage::__selector3_;
::g::Uno::UX::Selector AlertsPage::__selector4_;
::g::Uno::UX::Selector AlertsPage::__selector5_;
::g::Uno::UX::Selector AlertsPage::__selector6_;
::g::Uno::UX::Selector AlertsPage::__selector7_;
::g::Uno::UX::Selector AlertsPage::__selector8_;
::g::Uno::UX::Selector AlertsPage::__selector9_;
uSStrong< ::g::Fuse::Font*> AlertsPage::Header_;
uSStrong< ::g::Fuse::Font*> AlertsPage::PTreal_;

// public AlertsPage(Fuse.Navigation.Router router) [instance] :144
void AlertsPage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :150
void AlertsPage::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, AlertsPage::__g_static_nametable1());
    loadingPanel = ::g::MyLoadingIndicator::New4();
    loadingPanel_Opacity_inst = ::g::emrals_FuseElementsElement_Opacity_Property::New1(loadingPanel, AlertsPage::__selector0());
    ::g::Header* temp = ::g::Header::New4();
    temp_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp, AlertsPage::__selector1());
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[17/*"poster_user...*/]);
    ::g::Header* temp1 = ::g::Header::New4();
    temp1_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp1, AlertsPage::__selector1());
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[18/*"posted_item"*/]);
    alert_panel = ::g::Fuse::Controls::Rectangle::New3();
    alert_panel_Visibility_inst = ::g::emrals_FuseElementsElement_Visibility_Property::New1(alert_panel, AlertsPage::__selector2());
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[19/*"show_message"*/]);
    alert_panel_Opacity_inst = ::g::emrals_FuseElementsElement_Opacity_Property::New1(alert_panel, AlertsPage::__selector0());
    ::g::Fuse::Triggers::WhileTrue* temp2 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp2_Value_inst = ::g::emrals_FuseTriggersWhileBool_Value_Property::New1(temp2, AlertsPage::__selector1());
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[20/*"fade_out"*/]);
    ChooseFile = ::g::Fuse::Controls::Panel::New3();
    ChooseFile_Visibility_inst = ::g::emrals_FuseElementsElement_Visibility_Property::New1(ChooseFile, AlertsPage::__selector2());
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[21/*"selectImage"*/]);
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[22/*"takePicture"*/]);
    postcircle = ::g::Fuse::Controls::Circle::New3();
    postcircle_Color_inst = ::g::emrals_FuseControlsShape_Color_Property::New1(postcircle, AlertsPage::__selector3());
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(::STRINGS[22/*"takePicture"*/]);
    ::g::Fuse::Reactive::Each* temp3 = ::g::Fuse::Reactive::Each::New4();
    temp3_Items_inst = ::g::emrals_FuseReactiveEach_Items_Property::New1(temp3, AlertsPage::__selector4());
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[23/*"data"*/]);
    ::g::Fuse::Reactive::JavaScript* temp12 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    isBusy = ::g::Fuse::Triggers::Busy::New2();
    ::g::Fuse::Triggers::WhileBusy* temp13 = ::g::Fuse::Triggers::WhileBusy::New2();
    ::g::Fuse::Animations::Change* temp14 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], loadingPanel_Opacity_inst);
    ::g::Fuse::Controls::DockPanel* temp15 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp16 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::PTreal* temp17 = ::g::PTreal::New4();
    ::g::Fuse::Drawing::StaticSolidColor* temp18 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::DockPanel* temp19 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Header* temp20 = ::g::Header::New4();
    ::g::Fuse::Reactive::DataBinding* temp21 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp4, __g_nametable1, 3);
    ::g::Header* temp22 = ::g::Header::New4();
    ::g::Fuse::Reactive::DataBinding* temp23 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp5, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp24 = ::g::Fuse::Reactive::DataBinding::New1(alert_panel_Visibility_inst, (uObject*)temp6, __g_nametable1, 3);
    ::g::Fuse::Animations::Change* temp25 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], alert_panel_Opacity_inst);
    ::g::Fuse::Reactive::DataBinding* temp26 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp7, __g_nametable1, 3);
    Revealed = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Animations::Change* temp27 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<Fuse.Elements.Visibility>*/], ChooseFile_Visibility_inst);
    ::g::Fuse::Controls::Image* temp28 = ::g::Fuse::Controls::Image::New3();
    temp_eb13 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp8, __g_nametable1);
    ::g::Fuse::Controls::Image* temp29 = ::g::Fuse::Controls::Image::New3();
    temp_eb14 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp9, __g_nametable1);
    ::g::Fuse::Controls::Image* temp30 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Drawing::Stroke* temp31 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::SolidColor* temp32 = ::g::Fuse::Drawing::SolidColor::New2();
    ::g::Horse* temp33 = ::g::Horse::New4();
    ::g::Fuse::Controls::Image* temp34 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Gestures::WhilePressed* temp35 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Change* temp36 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[3/*Fuse.Animations.Change<float4>*/], postcircle_Color_inst);
    temp_eb15 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp10, __g_nametable1);
    ::g::Fuse::Controls::DockPanel* temp37 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StatusBarBackground* temp38 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::Controls::BottomBarBackground* temp39 = ::g::Fuse::Controls::BottomBarBackground::New3();
    ::g::Fuse::Controls::ScrollView* temp40 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::DockPanel* temp41 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::CogWheelReload* temp42 = ::g::CogWheelReload::New4();
    ::g::Fuse::Controls::Grid* temp43 = ::g::Fuse::Controls::Grid::New4();
    AlertsPage__Template* temp44 = AlertsPage__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp45 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Items_inst, (uObject*)temp11, __g_nametable1, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp46 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9568627f, 0.9568627f, 0.9568627f, 1.0f));
    temp12->LineNumber(2);
    temp12->FileName(::STRINGS[24/*"Pages/Alert...*/]);
    temp12->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::AlertsPaged5b1ccbd()));
    uPtr(isBusy)->IsActive(false);
    uPtr(isBusy)->Name(AlertsPage::__selector5());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp14);
    ::g::Fuse::Animations::Change__set_Value_fn(temp14, uCRef(1.0f));
    temp14->Duration(0.4);
    uPtr(loadingPanel)->Opacity(0.0f);
    uPtr(loadingPanel)->Name(AlertsPage::__selector6());
    uPtr(loadingPanel)->ThemeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    temp16->Height(::g::Uno::UX::Size__New1(45.0f, 1));
    temp16->Y(::g::Uno::UX::Size__New1(0.0f, 1));
    temp16->Background(temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    temp17->Value(::STRINGS[25/*"DIRT ALERTS"*/]);
    temp17->Alignment(10);
    temp17->Margin(::g::Uno::Float4__New2(0.0f, 8.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), alert_panel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), ChooseFile);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), postcircle);
    uPtr(alert_panel)->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    uPtr(alert_panel)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(alert_panel)->Width(::g::Uno::UX::Size__New1(148.0f, 1));
    uPtr(alert_panel)->Height(::g::Uno::UX::Size__New1(130.0f, 1));
    uPtr(alert_panel)->Opacity(0.8f);
    uPtr(alert_panel)->Name(AlertsPage::__selector7());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(alert_panel)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(alert_panel)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(alert_panel)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(alert_panel)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(alert_panel)->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp24);
    temp20->Value(::STRINGS[26/*"Thank you,"*/]);
    temp20->Alignment(10);
    temp20->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 80.0f));
    temp->Color(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp->Alignment(10);
    temp->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 30.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp21);
    temp22->Value(::STRINGS[27/*"for posting"*/]);
    temp22->Alignment(10);
    temp22->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    temp1->Alignment(10);
    temp1->Margin(::g::Uno::Float4__New2(0.0f, 70.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp26);
    ::g::Fuse::Animations::Change__set_Value_fn(temp25, uCRef(0.0f));
    temp25->Duration(1.0);
    uPtr(ChooseFile)->Visibility(2);
    uPtr(ChooseFile)->Name(AlertsPage::__selector8());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ChooseFile)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), Revealed);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ChooseFile)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ChooseFile)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ChooseFile)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    uPtr(Revealed)->Name(AlertsPage::__selector9());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Revealed)->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp27);
    ::g::Fuse::Animations::Change__set_Value_fn(temp27, uCRef<int>(0));
    temp28->MaxHeight(::g::Uno::UX::Size__New1(72.0f, 1));
    temp28->Alignment(12);
    temp28->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 120.0f, -30.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp28, uDelegate::New(::TYPES[7/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb13)));
    temp28->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::ChooseFile35e48aaa()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb13);
    temp29->MaxHeight(::g::Uno::UX::Size__New1(72.0f, 1));
    temp29->Alignment(12);
    temp29->Margin(::g::Uno::Float4__New2(120.0f, 0.0f, 0.0f, -30.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp29, uDelegate::New(::TYPES[7/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb14)));
    temp29->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::LaunchCameraIcon557f9f50()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb14);
    temp30->Width(::g::Uno::UX::Size__New1(230.0f, 1));
    temp30->Alignment(12);
    temp30->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, -70.0f));
    temp30->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::EllipseClearGrey8ad4ae79()));
    uPtr(postcircle)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(postcircle)->Width(::g::Uno::UX::Size__New1(21.0f, 4));
    uPtr(postcircle)->Height(::g::Uno::UX::Size__New1(21.0f, 4));
    uPtr(postcircle)->ZOffset(5.0f);
    uPtr(postcircle)->Name(AlertsPage::__selector10());
    ::g::Fuse::Controls::DockPanel::SetDock(postcircle, 3);
    ::g::Fuse::Gestures::Clicked::AddHandler(postcircle, uDelegate::New(::TYPES[7/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb15)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(postcircle)->Strokes()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(postcircle)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(postcircle)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(postcircle)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(postcircle)->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb15);
    temp31->Width(2.0f);
    temp31->Brush(temp32);
    temp32->Color(::g::Uno::Float4__New2(0.9411765f, 0.3490196f, 0.3490196f, 1.0f));
    temp33->Value(::STRINGS[28/*"POST"*/]);
    temp33->FontSize(14.0f);
    temp33->TextAlignment(1);
    temp33->Color(::g::Uno::Float4__New2(0.9411765f, 0.3490196f, 0.3490196f, 1.0f));
    temp33->Alignment(8);
    temp33->Margin(::g::Uno::Float4__New2(0.0f, 55.0f, 0.0f, 0.0f));
    temp34->MaxHeight(::g::Uno::UX::Size__New1(53.0f, 1));
    temp34->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 12.0f));
    temp34->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::cameratag5415edcc()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp36);
    ::g::Fuse::Animations::Change__set_Value_fn(temp36, uCRef(::g::Uno::Float4__New2(0.9372549f, 0.9372549f, 0.9372549f, 1.0f)));
    temp36->Duration(0.05);
    temp36->DurationBack(0.2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    ::g::Fuse::Controls::DockPanel::SetDock(temp38, 2);
    ::g::Fuse::Controls::DockPanel::SetDock(temp39, 3);
    temp40->SnapMinTransform(false);
    temp40->Background(temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    temp42->Y(::g::Uno::UX::Size__New1(10.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp42, 2);
    temp43->ColumnCount(2);
    temp43->Y(::g::Uno::UX::Size__New1(20.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Templates()), ::TYPES[9/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp45);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), isBusy);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), loadingPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), alert_panel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), ChooseFile);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), Revealed);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), temp_eb13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), temp_eb14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), postcircle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), temp_eb15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), isBusy);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), loadingPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp37);
}

// public AlertsPage New(Fuse.Navigation.Router router) [static] :144
AlertsPage* AlertsPage::New5(::g::Fuse::Navigation::Router* router1)
{
    AlertsPage* obj1 = (AlertsPage*)uNew(AlertsPage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
