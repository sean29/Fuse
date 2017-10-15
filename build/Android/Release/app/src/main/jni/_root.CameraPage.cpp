// This file was generated based on '.uno/ux13/CameraPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.CameraPage.h>
#include <_root.emrals_bundle.h>
#include <_root.emrals_FuseCont-8db4819b.h>
#include <_root.emrals_FuseCont-b37426cf.h>
#include <_root.emrals_FuseElem-82a17684.h>
#include <_root.emrals_FuseElem-95841797.h>
#include <_root.emrals_FuseSele-a78c3f2e.h>
#include <_root.emrals_FuseTrig-85933bee.h>
#include <_root.Horse.h>
#include <_root.MyLoadingIndicator2.h>
#include <_root.PTBold.h>
#include <_root.PTSerif.h>
#include <_root.SelectableRectangle.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.TrackAnimator.h>
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
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Selection.Selection.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Busy.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBusy.h>
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
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[44];
static uType* TYPES[7];

namespace g{

// public partial class CameraPage :2
// {
// static CameraPage() :24
static void CameraPage__cctor_4_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    ::g::Uno::UX::Resource_typeof()->Init();
    CameraPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"IsActive"*/]);
    CameraPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Opacity"*/]);
    CameraPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"File"*/]);
    CameraPage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Visibility"*/]);
    CameraPage::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"Values"*/]);
    CameraPage::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"Value"*/]);
    CameraPage::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"isBusy2"*/]);
    CameraPage::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"loadingPanel"*/]);
    CameraPage::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"AddEmralsPo...*/]);
    CameraPage::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"emrals_value1"*/]);
    CameraPage::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"emrals_value5"*/]);
    CameraPage::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"emrals_valu...*/]);
    CameraPage::PTSerif_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::PTserif7f97d4b3()));
    CameraPage::PTBold_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::PTF75F3f766a33()));
    ::g::Uno::UX::Resource::SetGlobalKey(CameraPage::PTSerif_, ::STRINGS[12/*"PTSerif"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(CameraPage::PTBold_, ::STRINGS[13/*"PTBold"*/]);
}

static void CameraPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("IsActive");
    ::STRINGS[1] = uString::Const("Opacity");
    ::STRINGS[2] = uString::Const("File");
    ::STRINGS[3] = uString::Const("Visibility");
    ::STRINGS[4] = uString::Const("Values");
    ::STRINGS[5] = uString::Const("Value");
    ::STRINGS[6] = uString::Const("isBusy2");
    ::STRINGS[7] = uString::Const("loadingPanel");
    ::STRINGS[8] = uString::Const("AddEmralsPopUp");
    ::STRINGS[9] = uString::Const("emrals_value1");
    ::STRINGS[10] = uString::Const("emrals_value5");
    ::STRINGS[11] = uString::Const("emrals_value10");
    ::STRINGS[12] = uString::Const("PTSerif");
    ::STRINGS[13] = uString::Const("PTBold");
    ::STRINGS[14] = uString::Const("loading_visible");
    ::STRINGS[15] = uString::Const("goToAlerts");
    ::STRINGS[16] = uString::Const("imagePath");
    ::STRINGS[17] = uString::Const("add_emrals_1");
    ::STRINGS[18] = uString::Const("add_emrals_5");
    ::STRINGS[19] = uString::Const("add_emrals_10");
    ::STRINGS[20] = uString::Const("emrals_popup_visibility");
    ::STRINGS[21] = uString::Const("sel");
    ::STRINGS[22] = uString::Const("total_emrals");
    ::STRINGS[23] = uString::Const("uploadAlert");
    ::STRINGS[24] = uString::Const("<<");
    ::STRINGS[25] = uString::Const("PREVIEW DIRT ALERT");
    ::STRINGS[26] = uString::Const("ADD EMRALS");
    ::STRINGS[27] = uString::Const("$1");
    ::STRINGS[28] = uString::Const("$5");
    ::STRINGS[29] = uString::Const("$10");
    ::STRINGS[30] = uString::Const("tag");
    ::STRINGS[31] = uString::Const("trash");
    ::STRINGS[32] = uString::Const("1");
    ::STRINGS[33] = uString::Const("poop");
    ::STRINGS[34] = uString::Const("2");
    ::STRINGS[35] = uString::Const("bike");
    ::STRINGS[36] = uString::Const("3");
    ::STRINGS[37] = uString::Const("drain");
    ::STRINGS[38] = uString::Const("4");
    ::STRINGS[39] = uString::Const("tree");
    ::STRINGS[40] = uString::Const("5");
    ::STRINGS[41] = uString::Const("100, 100, 24");
    ::STRINGS[42] = uString::Const("emrals");
    ::STRINGS[43] = uString::Const("POST DIRT ALERT");
    ::TYPES[0] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Controls::DockPanel_typeof(),
        ::g::Fuse::Controls::Grid_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17));
    type->SetFields(117,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(CameraPage, AddEmralsPopUp), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(CameraPage, AddEmralsPopUp_Visibility_inst), 0,
        ::g::PTBold_typeof(), offsetof(CameraPage, emrals_value1), 0,
        ::g::PTBold_typeof(), offsetof(CameraPage, emrals_value10), 0,
        ::g::PTBold_typeof(), offsetof(CameraPage, emrals_value5), 0,
        ::g::Fuse::Triggers::Busy_typeof(), offsetof(CameraPage, isBusy2), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(CameraPage, isBusy2_IsActive_inst), 0,
        ::g::MyLoadingIndicator2_typeof(), offsetof(CameraPage, loadingPanel), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(CameraPage, loadingPanel_Opacity_inst), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(CameraPage, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(CameraPage, temp_eb26), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(CameraPage, temp_eb27), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(CameraPage, temp_eb28), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(CameraPage, temp_eb29), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(CameraPage, temp_eb30), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(CameraPage, temp_File_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(CameraPage, temp1_Values_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(CameraPage, temp2_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CameraPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CameraPage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CameraPage::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CameraPage::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CameraPage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CameraPage::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CameraPage::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CameraPage::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CameraPage::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CameraPage::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CameraPage::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CameraPage::__selector9_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&CameraPage::PTBold_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&CameraPage::PTSerif_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* CameraPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 149;
    options.InterfaceCount = 18;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(CameraPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("CameraPage", options);
    type->fp_build_ = CameraPage_build;
    type->fp_cctor_ = CameraPage__cctor_4_fn;
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

// public CameraPage(Fuse.Navigation.Router router) :32
void CameraPage__ctor_8_fn(CameraPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :38
void CameraPage__InitializeUX_fn(CameraPage* __this)
{
    __this->InitializeUX();
}

::g::Uno::UX::Selector CameraPage::__selector0_;
::g::Uno::UX::Selector CameraPage::__selector1_;
::g::Uno::UX::Selector CameraPage::__selector10_;
::g::Uno::UX::Selector CameraPage::__selector11_;
::g::Uno::UX::Selector CameraPage::__selector2_;
::g::Uno::UX::Selector CameraPage::__selector3_;
::g::Uno::UX::Selector CameraPage::__selector4_;
::g::Uno::UX::Selector CameraPage::__selector5_;
::g::Uno::UX::Selector CameraPage::__selector6_;
::g::Uno::UX::Selector CameraPage::__selector7_;
::g::Uno::UX::Selector CameraPage::__selector8_;
::g::Uno::UX::Selector CameraPage::__selector9_;
uSStrong< ::g::Fuse::Font*> CameraPage::PTBold_;
uSStrong< ::g::Fuse::Font*> CameraPage::PTSerif_;

// public CameraPage(Fuse.Navigation.Router router) [instance] :32
void CameraPage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :38
void CameraPage::InitializeUX()
{
    isBusy2 = ::g::Fuse::Triggers::Busy::New2();
    isBusy2_IsActive_inst = ::g::emrals_FuseTriggersBusy_IsActive_Property::New1(isBusy2, CameraPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"loading_vis...*/]);
    loadingPanel = ::g::MyLoadingIndicator2::New4();
    loadingPanel_Opacity_inst = ::g::emrals_FuseElementsElement_Opacity_Property::New1(loadingPanel, CameraPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[15/*"goToAlerts"*/]);
    ::g::Fuse::Controls::Image* temp = ::g::Fuse::Controls::Image::New3();
    temp_File_inst = ::g::emrals_FuseControlsImage_File_Property::New1(temp, CameraPage::__selector2_);
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[16/*"imagePath"*/]);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[17/*"add_emrals_1"*/]);
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[18/*"add_emrals_5"*/]);
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[19/*"add_emrals_10"*/]);
    AddEmralsPopUp = ::g::Fuse::Controls::Panel::New3();
    AddEmralsPopUp_Visibility_inst = ::g::emrals_FuseElementsElement_Visibility_Property::New1(AddEmralsPopUp, CameraPage::__selector3_);
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[20/*"emrals_popu...*/]);
    ::g::Fuse::Selection::Selection* temp1 = ::g::Fuse::Selection::Selection::New2();
    temp1_Values_inst = ::g::emrals_FuseSelectionSelection_Values_Property::New1(temp1, CameraPage::__selector4_);
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(::STRINGS[21/*"sel"*/]);
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    temp2_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp2, CameraPage::__selector5_);
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[22/*"total_emrals"*/]);
    ::g::Fuse::Reactive::Data* temp12 = ::g::Fuse::Reactive::Data::New1(::STRINGS[23/*"uploadAlert"*/]);
    ::g::Fuse::Reactive::DataBinding* temp13 = ::g::Fuse::Reactive::DataBinding::New1(isBusy2_IsActive_inst, (uObject*)temp3, 3);
    ::g::Fuse::Triggers::WhileBusy* temp14 = ::g::Fuse::Triggers::WhileBusy::New2();
    ::g::Fuse::Animations::Change* temp15 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<float>*/], loadingPanel_Opacity_inst);
    ::g::Fuse::Controls::DockPanel* temp16 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Panel* temp17 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Panel* temp18 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp19 = ::g::Fuse::Controls::Text::New3();
    temp_eb26 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp4);
    ::g::PTSerif* temp20 = ::g::PTSerif::New4();
    ::g::Fuse::Drawing::StaticSolidColor* temp21 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::StackPanel* temp22 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::DockPanel* temp23 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp24 = ::g::Fuse::Reactive::DataBinding::New1(temp_File_inst, (uObject*)temp5, 3);
    ::g::Horse* temp25 = ::g::Horse::New4();
    ::g::Fuse::Controls::StackPanel* temp26 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp27 = ::g::Fuse::Controls::Rectangle::New3();
    emrals_value1 = ::g::PTBold::New4();
    temp_eb27 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp6);
    ::g::Fuse::Controls::Rectangle* temp28 = ::g::Fuse::Controls::Rectangle::New3();
    emrals_value5 = ::g::PTBold::New4();
    temp_eb28 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp7);
    ::g::Fuse::Controls::Rectangle* temp29 = ::g::Fuse::Controls::Rectangle::New3();
    emrals_value10 = ::g::PTBold::New4();
    temp_eb29 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp8);
    ::g::Fuse::Controls::Rectangle* temp30 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp31 = ::g::Fuse::Reactive::DataBinding::New1(AddEmralsPopUp_Visibility_inst, (uObject*)temp9, 3);
    ::g::Fuse::Controls::Rectangle* temp32 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::StackPanel* temp33 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp34 = ::g::Fuse::Controls::Grid::New4();
    ::g::PTBold* temp35 = ::g::PTBold::New4();
    ::g::Fuse::Controls::Text* temp36 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp37 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Values_inst, (uObject*)temp10, 3);
    ::g::SelectableRectangle* temp38 = ::g::SelectableRectangle::New4();
    ::g::Fuse::Controls::Image* temp39 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Text* temp40 = ::g::Fuse::Controls::Text::New3();
    ::g::SelectableRectangle* temp41 = ::g::SelectableRectangle::New4();
    ::g::Fuse::Controls::Image* temp42 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Text* temp43 = ::g::Fuse::Controls::Text::New3();
    ::g::SelectableRectangle* temp44 = ::g::SelectableRectangle::New4();
    ::g::Fuse::Controls::Image* temp45 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Text* temp46 = ::g::Fuse::Controls::Text::New3();
    ::g::SelectableRectangle* temp47 = ::g::SelectableRectangle::New4();
    ::g::Fuse::Controls::Image* temp48 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Text* temp49 = ::g::Fuse::Controls::Text::New3();
    ::g::SelectableRectangle* temp50 = ::g::SelectableRectangle::New4();
    ::g::Fuse::Controls::Image* temp51 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Grid* temp52 = ::g::Fuse::Controls::Grid::New4();
    ::g::PTBold* temp53 = ::g::PTBold::New4();
    ::g::Fuse::Controls::Rectangle* temp54 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp55 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp11, 3);
    ::g::Fuse::Controls::Panel* temp56 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp57 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Gestures::Clicked* temp58 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp59 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], AddEmralsPopUp_Visibility_inst);
    ::g::Fuse::Controls::Rectangle* temp60 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Horse* temp61 = ::g::Horse::New4();
    temp_eb30 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp12);
    uPtr(isBusy2)->Name(CameraPage::__selector6_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(isBusy2)->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Animators()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp15);
    ::g::Fuse::Animations::Change__set_Value_fn(temp15, uCRef(1.0f));
    temp15->Duration(0.4);
    uPtr(loadingPanel)->Opacity(0.0f);
    uPtr(loadingPanel)->Name(CameraPage::__selector7_);
    uPtr(loadingPanel)->ThemeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    temp17->Height(::g::Uno::UX::Size__New1(45.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp17, 2);
    temp17->Background(temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    temp18->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp18, 2);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp18, uDelegate::New(::TYPES[5/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb26)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb26);
    temp19->Value(::STRINGS[24/*"<<"*/]);
    temp19->FontSize(30.0f);
    temp19->Color(::g::Uno::Float4__New2(0.3882353f, 0.3882353f, 0.3921569f, 1.0f));
    temp19->Alignment(3);
    temp19->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 10.0f, 0.0f));
    temp20->Value(::STRINGS[25/*"PREVIEW DIR...*/]);
    temp20->Alignment(10);
    temp20->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp22, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), AddEmralsPopUp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp60);
    ::g::Fuse::Controls::DockPanel::SetDock(temp23, 4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp->StretchMode(5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp24);
    uPtr(AddEmralsPopUp)->Name(CameraPage::__selector8_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(AddEmralsPopUp)->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(AddEmralsPopUp)->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(AddEmralsPopUp)->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(AddEmralsPopUp)->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp31);
    temp25->Value(::STRINGS[26/*"ADD EMRALS"*/]);
    temp25->Color(::g::Uno::Float4__New2(0.2666667f, 0.2666667f, 0.2666667f, 1.0f));
    temp25->Alignment(10);
    temp25->Margin(::g::Uno::Float4__New2(190.0f, 10.0f, 0.0f, 0.0f));
    temp25->Opacity(1.0f);
    temp26->Orientation(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    temp27->CornerRadius(::g::Uno::Float4__New2(3.0f, 3.0f, 3.0f, 3.0f));
    temp27->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp27->StrokeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp27->StrokeWidth(1.0f);
    temp27->Width(::g::Uno::UX::Size__New1(44.0f, 1));
    temp27->Height(::g::Uno::UX::Size__New1(44.0f, 1));
    temp27->Margin(::g::Uno::Float4__New2(210.0f, 0.0f, 0.0f, -110.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp27, uDelegate::New(::TYPES[5/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb27)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), emrals_value1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb27);
    uPtr(emrals_value1)->Value(::STRINGS[27/*"$1"*/]);
    uPtr(emrals_value1)->FontSize(24.0f);
    uPtr(emrals_value1)->Alignment(10);
    uPtr(emrals_value1)->Name(CameraPage::__selector9_);
    temp28->CornerRadius(::g::Uno::Float4__New2(3.0f, 3.0f, 3.0f, 3.0f));
    temp28->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp28->StrokeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp28->StrokeWidth(1.0f);
    temp28->Width(::g::Uno::UX::Size__New1(44.0f, 1));
    temp28->Height(::g::Uno::UX::Size__New1(44.0f, 1));
    temp28->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, -110.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp28, uDelegate::New(::TYPES[5/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb28)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), emrals_value5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb28);
    uPtr(emrals_value5)->Value(::STRINGS[28/*"$5"*/]);
    uPtr(emrals_value5)->FontSize(24.0f);
    uPtr(emrals_value5)->Alignment(10);
    uPtr(emrals_value5)->Name(CameraPage::__selector10_);
    temp29->CornerRadius(::g::Uno::Float4__New2(3.0f, 3.0f, 3.0f, 3.0f));
    temp29->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp29->StrokeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp29->StrokeWidth(1.0f);
    temp29->Width(::g::Uno::UX::Size__New1(44.0f, 1));
    temp29->Height(::g::Uno::UX::Size__New1(44.0f, 1));
    temp29->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, -110.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp29, uDelegate::New(::TYPES[5/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb29)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), emrals_value10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb29);
    uPtr(emrals_value10)->Value(::STRINGS[29/*"$10"*/]);
    uPtr(emrals_value10)->FontSize(24.0f);
    uPtr(emrals_value10)->Alignment(10);
    uPtr(emrals_value10)->Name(CameraPage::__selector11_);
    temp30->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp30->Color(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp30->Width(::g::Uno::UX::Size__New1(175.0f, 1));
    temp30->Height(::g::Uno::UX::Size__New1(125.0f, 1));
    temp30->Margin(::g::Uno::Float4__New2(190.0f, 0.0f, 0.0f, -100.0f));
    temp30->Opacity(0.7f);
    temp32->Color(::g::Uno::Float4__New2(0.9607843f, 0.9607843f, 0.9607843f, 1.0f));
    temp32->Width(::g::Uno::UX::Size__New1(375.0f, 1));
    temp32->Height(::g::Uno::UX::Size__New1(140.0f, 1));
    temp32->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp52);
    temp34->RowCount(0);
    temp34->ColumnCount(6);
    temp34->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp50);
    temp35->Value(::STRINGS[30/*"tag"*/]);
    temp35->Margin(::g::Uno::Float4__New2(5.0f, 15.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetColumn(temp35, 0);
    temp36->Value(::STRINGS[31/*"trash"*/]);
    temp36->FontSize(12.0f);
    temp36->Alignment(12);
    temp36->Margin(::g::Uno::Float4__New2(-5.0f, 0.0f, 0.0f, -20.0f));
    temp1->MinCount(1);
    temp1->MaxCount(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp37);
    temp38->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp38->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp38->Width(::g::Uno::UX::Size__New1(55.0f, 1));
    temp38->Height(::g::Uno::UX::Size__New1(55.0f, 1));
    temp38->Margin(::g::Uno::Float4__New2(2.0f, 0.0f, 40.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetColumn(temp38, 1);
    temp38->ID(::STRINGS[32/*"1"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    temp39->MaxHeight(::g::Uno::UX::Size__New1(46.0f, 1));
    temp39->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::trashbindc299ae8()));
    temp40->Value(::STRINGS[33/*"poop"*/]);
    temp40->FontSize(12.0f);
    temp40->Alignment(12);
    temp40->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, -20.0f));
    temp41->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp41->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp41->Width(::g::Uno::UX::Size__New1(55.0f, 1));
    temp41->Height(::g::Uno::UX::Size__New1(55.0f, 1));
    temp41->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 30.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetColumn(temp41, 2);
    temp41->ID(::STRINGS[34/*"2"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp42);
    temp42->MaxHeight(::g::Uno::UX::Size__New1(49.0f, 1));
    temp42->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::poopbag38128749()));
    temp43->Value(::STRINGS[35/*"bike"*/]);
    temp43->FontSize(12.0f);
    temp43->Alignment(12);
    temp43->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, -20.0f));
    temp44->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp44->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp44->Width(::g::Uno::UX::Size__New1(55.0f, 1));
    temp44->Height(::g::Uno::UX::Size__New1(55.0f, 1));
    temp44->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 20.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetColumn(temp44, 3);
    temp44->ID(::STRINGS[36/*"3"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp45);
    temp45->MaxWidth(::g::Uno::UX::Size__New1(49.0f, 1));
    temp45->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::bike42e1ef92()));
    temp46->Value(::STRINGS[37/*"drain"*/]);
    temp46->FontSize(12.0f);
    temp46->Alignment(12);
    temp46->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, -20.0f));
    temp47->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp47->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp47->Width(::g::Uno::UX::Size__New1(55.0f, 1));
    temp47->Height(::g::Uno::UX::Size__New1(55.0f, 1));
    temp47->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 10.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetColumn(temp47, 4);
    temp47->ID(::STRINGS[38/*"4"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    temp48->MaxWidth(::g::Uno::UX::Size__New1(49.0f, 1));
    temp48->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::drain505f4851()));
    temp49->Value(::STRINGS[39/*"tree"*/]);
    temp49->FontSize(12.0f);
    temp49->Alignment(12);
    temp49->Margin(::g::Uno::Float4__New2(18.0f, 0.0f, 0.0f, -20.0f));
    temp50->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp50->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp50->Width(::g::Uno::UX::Size__New1(55.0f, 1));
    temp50->Height(::g::Uno::UX::Size__New1(55.0f, 1));
    ::g::Fuse::Controls::Grid::SetColumn(temp50, 5);
    temp50->ID(::STRINGS[40/*"5"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp51);
    temp51->MaxHeight(::g::Uno::UX::Size__New1(49.0f, 1));
    temp51->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::treed32ab63b()));
    temp52->Columns(::STRINGS[41/*"100, 100, 24"*/]);
    temp52->Width(::g::Uno::UX::Size__New1(355.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp56);
    temp53->Value(::STRINGS[42/*"emrals"*/]);
    temp53->Color(::g::Uno::Float4__New2(0.2235294f, 0.2235294f, 0.2235294f, 1.0f));
    temp53->Margin(::g::Uno::Float4__New2(10.0f, 20.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetColumn(temp53, 0);
    temp54->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp54->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp54->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp54->Margin(::g::Uno::Float4__New2(0.0f, 15.0f, 10.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetColumn(temp54, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp2->FontSize(18.0f);
    temp2->Color(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp2->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp55);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp58);
    temp57->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::plusdc5300cb()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Actions()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp59);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp59, uCRef<int>(0));
    temp60->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp60->Color(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp60->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp60->Height(::g::Uno::UX::Size__New1(43.0f, 1));
    temp60->Alignment(12);
    temp60->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 20.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp60, uDelegate::New(::TYPES[5/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb30)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp60->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp61);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp60->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb30);
    temp61->Value(::STRINGS[43/*"POST DIRT A...*/]);
    temp61->FontSize(24.0f);
    temp61->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp61->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), isBusy2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), loadingPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
}
// }

} // ::g
