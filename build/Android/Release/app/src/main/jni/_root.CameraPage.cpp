// This file was generated based on '.uno/ux11/CameraPage.g.uno'.
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
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[50];
static uType* TYPES[9];

namespace g{

// public partial sealed class CameraPage :2
// {
// static CameraPage() :39
static void CameraPage__cctor_4_fn(uType* __type)
{
    CameraPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"isBusy2"*/], ::STRINGS[2/*"loadingPanel"*/], ::STRINGS[3/*"temp_eb26"*/], ::STRINGS[4/*"AddEmralsPo...*/], ::STRINGS[5/*"emrals_value1"*/], ::STRINGS[6/*"temp_eb27"*/], ::STRINGS[7/*"emrals_value5"*/], ::STRINGS[8/*"temp_eb28"*/], ::STRINGS[9/*"emrals_valu...*/], ::STRINGS[10/*"temp_eb29"*/], ::STRINGS[11/*"temp_eb30"*/]);
    CameraPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[12/*"IsActive"*/]);
    CameraPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[13/*"Opacity"*/]);
    CameraPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[14/*"File"*/]);
    CameraPage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[15/*"Visibility"*/]);
    CameraPage::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[16/*"Values"*/]);
    CameraPage::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[17/*"Value"*/]);
    CameraPage::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"isBusy2"*/]);
    CameraPage::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"loadingPanel"*/]);
    CameraPage::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"AddEmralsPo...*/]);
    CameraPage::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"emrals_value1"*/]);
    CameraPage::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"emrals_value5"*/]);
    CameraPage::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"emrals_valu...*/]);
    CameraPage::PTSerif_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::PTserif96051ccc()));
    CameraPage::PTBold_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::PTF75F5dbdc4ba()));
    ::g::Uno::UX::Resource::SetGlobalKey(CameraPage::PTSerif_, ::STRINGS[18/*"PTSerif"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(CameraPage::PTBold_, ::STRINGS[19/*"PTBold"*/]);
}

static void CameraPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("isBusy2");
    ::STRINGS[2] = uString::Const("loadingPanel");
    ::STRINGS[3] = uString::Const("temp_eb26");
    ::STRINGS[4] = uString::Const("AddEmralsPopUp");
    ::STRINGS[5] = uString::Const("emrals_value1");
    ::STRINGS[6] = uString::Const("temp_eb27");
    ::STRINGS[7] = uString::Const("emrals_value5");
    ::STRINGS[8] = uString::Const("temp_eb28");
    ::STRINGS[9] = uString::Const("emrals_value10");
    ::STRINGS[10] = uString::Const("temp_eb29");
    ::STRINGS[11] = uString::Const("temp_eb30");
    ::STRINGS[12] = uString::Const("IsActive");
    ::STRINGS[13] = uString::Const("Opacity");
    ::STRINGS[14] = uString::Const("File");
    ::STRINGS[15] = uString::Const("Visibility");
    ::STRINGS[16] = uString::Const("Values");
    ::STRINGS[17] = uString::Const("Value");
    ::STRINGS[18] = uString::Const("PTSerif");
    ::STRINGS[19] = uString::Const("PTBold");
    ::STRINGS[20] = uString::Const("loading_visible");
    ::STRINGS[21] = uString::Const("goToAlerts");
    ::STRINGS[22] = uString::Const("imagePath");
    ::STRINGS[23] = uString::Const("add_emrals_1");
    ::STRINGS[24] = uString::Const("add_emrals_5");
    ::STRINGS[25] = uString::Const("add_emrals_10");
    ::STRINGS[26] = uString::Const("emrals_popup_visibility");
    ::STRINGS[27] = uString::Const("sel");
    ::STRINGS[28] = uString::Const("total_emrals");
    ::STRINGS[29] = uString::Const("uploadAlert");
    ::STRINGS[30] = uString::Const("<<");
    ::STRINGS[31] = uString::Const("PREVIEW DIRT ALERT");
    ::STRINGS[32] = uString::Const("ADD EMRALS");
    ::STRINGS[33] = uString::Const("$1");
    ::STRINGS[34] = uString::Const("$5");
    ::STRINGS[35] = uString::Const("$10");
    ::STRINGS[36] = uString::Const("tag");
    ::STRINGS[37] = uString::Const("trash");
    ::STRINGS[38] = uString::Const("1");
    ::STRINGS[39] = uString::Const("poop");
    ::STRINGS[40] = uString::Const("2");
    ::STRINGS[41] = uString::Const("bike");
    ::STRINGS[42] = uString::Const("3");
    ::STRINGS[43] = uString::Const("drain");
    ::STRINGS[44] = uString::Const("4");
    ::STRINGS[45] = uString::Const("tree");
    ::STRINGS[46] = uString::Const("5");
    ::STRINGS[47] = uString::Const("100, 100, 24");
    ::STRINGS[48] = uString::Const("emrals");
    ::STRINGS[49] = uString::Const("POST DIRT ALERT");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[6] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
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
        ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16));
    type->SetFields(111,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::CameraPage, __g_nametable1), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::CameraPage, AddEmralsPopUp), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::CameraPage, AddEmralsPopUp_Visibility_inst), 0,
        ::g::PTBold_typeof(), offsetof(::g::CameraPage, emrals_value1), 0,
        ::g::PTBold_typeof(), offsetof(::g::CameraPage, emrals_value10), 0,
        ::g::PTBold_typeof(), offsetof(::g::CameraPage, emrals_value5), 0,
        ::g::Fuse::Triggers::Busy_typeof(), offsetof(::g::CameraPage, isBusy2), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::CameraPage, isBusy2_IsActive_inst), 0,
        ::g::MyLoadingIndicator2_typeof(), offsetof(::g::CameraPage, loadingPanel), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::CameraPage, loadingPanel_Opacity_inst), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::CameraPage, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::CameraPage, temp_eb26), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::CameraPage, temp_eb27), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::CameraPage, temp_eb28), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::CameraPage, temp_eb29), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::CameraPage, temp_eb30), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(::g::CameraPage, temp_File_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::CameraPage, temp1_Values_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::CameraPage, temp2_Value_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::CameraPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CameraPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CameraPage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CameraPage::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CameraPage::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CameraPage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CameraPage::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CameraPage::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CameraPage::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CameraPage::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CameraPage::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CameraPage::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CameraPage::__selector9_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::CameraPage::PTBold_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::CameraPage::PTSerif_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* CameraPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 145;
    options.InterfaceCount = 17;
    options.ObjectSize = sizeof(CameraPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("CameraPage", options);
    type->fp_build_ = CameraPage_build;
    type->fp_cctor_ = CameraPage__cctor_4_fn;
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

// public CameraPage(Fuse.Navigation.Router router) :47
void CameraPage__ctor_8_fn(CameraPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :53
void CameraPage__InitializeUX_fn(CameraPage* __this)
{
    __this->InitializeUX();
}

// public CameraPage New(Fuse.Navigation.Router router) :47
void CameraPage__New5_fn(::g::Fuse::Navigation::Router* router1, CameraPage** __retval)
{
    *__retval = CameraPage::New5(router1);
}

uSStrong<uArray*> CameraPage::__g_static_nametable1_;
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

// public CameraPage(Fuse.Navigation.Router router) [instance] :47
void CameraPage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :53
void CameraPage::InitializeUX()
{
    isBusy2 = ::g::Fuse::Triggers::Busy::New2();
    isBusy2_IsActive_inst = ::g::emrals_FuseTriggersBusy_IsActive_Property::New1(isBusy2, CameraPage::__selector0());
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[20/*"loading_vis...*/]);
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, CameraPage::__g_static_nametable1());
    loadingPanel = ::g::MyLoadingIndicator2::New4();
    loadingPanel_Opacity_inst = ::g::emrals_FuseElementsElement_Opacity_Property::New1(loadingPanel, CameraPage::__selector1());
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[21/*"goToAlerts"*/]);
    ::g::Fuse::Controls::Image* temp = ::g::Fuse::Controls::Image::New3();
    temp_File_inst = ::g::emrals_FuseControlsImage_File_Property::New1(temp, CameraPage::__selector2());
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[22/*"imagePath"*/]);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[23/*"add_emrals_1"*/]);
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[24/*"add_emrals_5"*/]);
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[25/*"add_emrals_10"*/]);
    AddEmralsPopUp = ::g::Fuse::Controls::Panel::New3();
    AddEmralsPopUp_Visibility_inst = ::g::emrals_FuseElementsElement_Visibility_Property::New1(AddEmralsPopUp, CameraPage::__selector3());
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[26/*"emrals_popu...*/]);
    ::g::Fuse::Selection::Selection* temp1 = ::g::Fuse::Selection::Selection::New2();
    temp1_Values_inst = ::g::emrals_FuseSelectionSelection_Values_Property::New1(temp1, CameraPage::__selector4());
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(::STRINGS[27/*"sel"*/]);
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    temp2_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp2, CameraPage::__selector5());
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[28/*"total_emrals"*/]);
    ::g::Fuse::Reactive::Data* temp12 = ::g::Fuse::Reactive::Data::New1(::STRINGS[29/*"uploadAlert"*/]);
    ::g::Fuse::Reactive::DataBinding* temp13 = ::g::Fuse::Reactive::DataBinding::New1(isBusy2_IsActive_inst, (uObject*)temp3, __g_nametable1, 3);
    ::g::Fuse::Triggers::WhileBusy* temp14 = ::g::Fuse::Triggers::WhileBusy::New2();
    ::g::Fuse::Animations::Change* temp15 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], loadingPanel_Opacity_inst);
    ::g::Fuse::Controls::DockPanel* temp16 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Panel* temp17 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Panel* temp18 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp19 = ::g::Fuse::Controls::Text::New3();
    temp_eb26 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp4, __g_nametable1);
    ::g::PTSerif* temp20 = ::g::PTSerif::New4();
    ::g::Fuse::Drawing::StaticSolidColor* temp21 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::StackPanel* temp22 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::DockPanel* temp23 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp24 = ::g::Fuse::Reactive::DataBinding::New1(temp_File_inst, (uObject*)temp5, __g_nametable1, 3);
    ::g::Horse* temp25 = ::g::Horse::New4();
    ::g::Fuse::Controls::StackPanel* temp26 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp27 = ::g::Fuse::Controls::Rectangle::New3();
    emrals_value1 = ::g::PTBold::New4();
    temp_eb27 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp6, __g_nametable1);
    ::g::Fuse::Controls::Rectangle* temp28 = ::g::Fuse::Controls::Rectangle::New3();
    emrals_value5 = ::g::PTBold::New4();
    temp_eb28 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp7, __g_nametable1);
    ::g::Fuse::Controls::Rectangle* temp29 = ::g::Fuse::Controls::Rectangle::New3();
    emrals_value10 = ::g::PTBold::New4();
    temp_eb29 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp8, __g_nametable1);
    ::g::Fuse::Controls::Rectangle* temp30 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp31 = ::g::Fuse::Reactive::DataBinding::New1(AddEmralsPopUp_Visibility_inst, (uObject*)temp9, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp32 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::StackPanel* temp33 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp34 = ::g::Fuse::Controls::Grid::New4();
    ::g::PTBold* temp35 = ::g::PTBold::New4();
    ::g::Fuse::Controls::Text* temp36 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp37 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Values_inst, (uObject*)temp10, __g_nametable1, 3);
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
    ::g::Fuse::Reactive::DataBinding* temp55 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp11, __g_nametable1, 3);
    ::g::Fuse::Controls::Panel* temp56 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp57 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Gestures::Clicked* temp58 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp59 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[2/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], AddEmralsPopUp_Visibility_inst);
    ::g::Fuse::Controls::Rectangle* temp60 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Horse* temp61 = ::g::Horse::New4();
    temp_eb30 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp12, __g_nametable1);
    uPtr(isBusy2)->Name(CameraPage::__selector6());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(isBusy2)->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp15);
    ::g::Fuse::Animations::Change__set_Value_fn(temp15, uCRef(1.0f));
    temp15->Duration(0.4);
    uPtr(loadingPanel)->Opacity(0.0f);
    uPtr(loadingPanel)->Name(CameraPage::__selector7());
    uPtr(loadingPanel)->ThemeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    temp17->Height(::g::Uno::UX::Size__New1(45.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp17, 2);
    temp17->Background(temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    temp18->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp18, 2);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp18, uDelegate::New(::TYPES[6/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb26)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb26);
    temp19->Value(::STRINGS[30/*"<<"*/]);
    temp19->FontSize(30.0f);
    temp19->Color(::g::Uno::Float4__New2(0.3882353f, 0.3882353f, 0.3921569f, 1.0f));
    temp19->Alignment(3);
    temp19->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 10.0f, 0.0f));
    temp20->Value(::STRINGS[31/*"PREVIEW DIR...*/]);
    temp20->Alignment(10);
    temp20->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp22, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), AddEmralsPopUp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp60);
    ::g::Fuse::Controls::DockPanel::SetDock(temp23, 4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp->StretchMode(5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp24);
    uPtr(AddEmralsPopUp)->Name(CameraPage::__selector8());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(AddEmralsPopUp)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(AddEmralsPopUp)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(AddEmralsPopUp)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(AddEmralsPopUp)->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp31);
    temp25->Value(::STRINGS[32/*"ADD EMRALS"*/]);
    temp25->Color(::g::Uno::Float4__New2(0.2666667f, 0.2666667f, 0.2666667f, 1.0f));
    temp25->Alignment(10);
    temp25->Margin(::g::Uno::Float4__New2(190.0f, 10.0f, 0.0f, 0.0f));
    temp25->Opacity(1.0f);
    temp26->Orientation(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    temp27->CornerRadius(::g::Uno::Float4__New2(3.0f, 3.0f, 3.0f, 3.0f));
    temp27->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp27->StrokeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp27->StrokeWidth(1.0f);
    temp27->Width(::g::Uno::UX::Size__New1(44.0f, 1));
    temp27->Height(::g::Uno::UX::Size__New1(44.0f, 1));
    temp27->Margin(::g::Uno::Float4__New2(210.0f, 0.0f, 0.0f, -110.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp27, uDelegate::New(::TYPES[6/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb27)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), emrals_value1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb27);
    uPtr(emrals_value1)->Value(::STRINGS[33/*"$1"*/]);
    uPtr(emrals_value1)->FontSize(24.0f);
    uPtr(emrals_value1)->Alignment(10);
    uPtr(emrals_value1)->Name(CameraPage::__selector9());
    temp28->CornerRadius(::g::Uno::Float4__New2(3.0f, 3.0f, 3.0f, 3.0f));
    temp28->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp28->StrokeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp28->StrokeWidth(1.0f);
    temp28->Width(::g::Uno::UX::Size__New1(44.0f, 1));
    temp28->Height(::g::Uno::UX::Size__New1(44.0f, 1));
    temp28->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, -110.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp28, uDelegate::New(::TYPES[6/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb28)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), emrals_value5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb28);
    uPtr(emrals_value5)->Value(::STRINGS[34/*"$5"*/]);
    uPtr(emrals_value5)->FontSize(24.0f);
    uPtr(emrals_value5)->Alignment(10);
    uPtr(emrals_value5)->Name(CameraPage::__selector10());
    temp29->CornerRadius(::g::Uno::Float4__New2(3.0f, 3.0f, 3.0f, 3.0f));
    temp29->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp29->StrokeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp29->StrokeWidth(1.0f);
    temp29->Width(::g::Uno::UX::Size__New1(44.0f, 1));
    temp29->Height(::g::Uno::UX::Size__New1(44.0f, 1));
    temp29->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, -110.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp29, uDelegate::New(::TYPES[6/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb29)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), emrals_value10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb29);
    uPtr(emrals_value10)->Value(::STRINGS[35/*"$10"*/]);
    uPtr(emrals_value10)->FontSize(24.0f);
    uPtr(emrals_value10)->Alignment(10);
    uPtr(emrals_value10)->Name(CameraPage::__selector11());
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
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp52);
    temp34->RowCount(0);
    temp34->ColumnCount(6);
    temp34->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp50);
    temp35->Value(::STRINGS[36/*"tag"*/]);
    temp35->Margin(::g::Uno::Float4__New2(5.0f, 15.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetColumn(temp35, 0);
    temp36->Value(::STRINGS[37/*"trash"*/]);
    temp36->FontSize(12.0f);
    temp36->Alignment(12);
    temp36->Margin(::g::Uno::Float4__New2(-5.0f, 0.0f, 0.0f, -20.0f));
    temp1->MinCount(1);
    temp1->MaxCount(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp37);
    temp38->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp38->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp38->Width(::g::Uno::UX::Size__New1(55.0f, 1));
    temp38->Height(::g::Uno::UX::Size__New1(55.0f, 1));
    temp38->Margin(::g::Uno::Float4__New2(2.0f, 0.0f, 40.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetColumn(temp38, 1);
    temp38->ID(::STRINGS[38/*"1"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    temp39->MaxHeight(::g::Uno::UX::Size__New1(46.0f, 1));
    temp39->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::trashbin4e4884f2()));
    temp40->Value(::STRINGS[39/*"poop"*/]);
    temp40->FontSize(12.0f);
    temp40->Alignment(12);
    temp40->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, -20.0f));
    temp41->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp41->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp41->Width(::g::Uno::UX::Size__New1(55.0f, 1));
    temp41->Height(::g::Uno::UX::Size__New1(55.0f, 1));
    temp41->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 30.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetColumn(temp41, 2);
    temp41->ID(::STRINGS[40/*"2"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp42);
    temp42->MaxHeight(::g::Uno::UX::Size__New1(49.0f, 1));
    temp42->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::poopbag3ea7dc4f()));
    temp43->Value(::STRINGS[41/*"bike"*/]);
    temp43->FontSize(12.0f);
    temp43->Alignment(12);
    temp43->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, -20.0f));
    temp44->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp44->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp44->Width(::g::Uno::UX::Size__New1(55.0f, 1));
    temp44->Height(::g::Uno::UX::Size__New1(55.0f, 1));
    temp44->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 20.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetColumn(temp44, 3);
    temp44->ID(::STRINGS[42/*"3"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp45);
    temp45->MaxWidth(::g::Uno::UX::Size__New1(49.0f, 1));
    temp45->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::bike5613f778()));
    temp46->Value(::STRINGS[43/*"drain"*/]);
    temp46->FontSize(12.0f);
    temp46->Alignment(12);
    temp46->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, -20.0f));
    temp47->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp47->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp47->Width(::g::Uno::UX::Size__New1(55.0f, 1));
    temp47->Height(::g::Uno::UX::Size__New1(55.0f, 1));
    temp47->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 10.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetColumn(temp47, 4);
    temp47->ID(::STRINGS[44/*"4"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    temp48->MaxWidth(::g::Uno::UX::Size__New1(49.0f, 1));
    temp48->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::drain7d3612cf()));
    temp49->Value(::STRINGS[45/*"tree"*/]);
    temp49->FontSize(12.0f);
    temp49->Alignment(12);
    temp49->Margin(::g::Uno::Float4__New2(18.0f, 0.0f, 0.0f, -20.0f));
    temp50->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp50->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp50->Width(::g::Uno::UX::Size__New1(55.0f, 1));
    temp50->Height(::g::Uno::UX::Size__New1(55.0f, 1));
    ::g::Fuse::Controls::Grid::SetColumn(temp50, 5);
    temp50->ID(::STRINGS[46/*"5"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp51);
    temp51->MaxHeight(::g::Uno::UX::Size__New1(49.0f, 1));
    temp51->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::treeb47094f9()));
    temp52->Columns(::STRINGS[47/*"100, 100, 24"*/]);
    temp52->Width(::g::Uno::UX::Size__New1(355.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp56);
    temp53->Value(::STRINGS[48/*"emrals"*/]);
    temp53->Color(::g::Uno::Float4__New2(0.2235294f, 0.2235294f, 0.2235294f, 1.0f));
    temp53->Margin(::g::Uno::Float4__New2(10.0f, 20.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetColumn(temp53, 0);
    temp54->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp54->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp54->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp54->Margin(::g::Uno::Float4__New2(0.0f, 15.0f, 10.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetColumn(temp54, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp2->FontSize(18.0f);
    temp2->Color(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp2->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp55);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp58);
    temp57->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::pluseb063ee5()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Actions()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp59);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp59, uCRef<int>(0));
    temp60->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp60->Color(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp60->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp60->Height(::g::Uno::UX::Size__New1(43.0f, 1));
    temp60->Alignment(12);
    temp60->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 20.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp60, uDelegate::New(::TYPES[6/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb30)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp60->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp61);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp60->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb30);
    temp61->Value(::STRINGS[49/*"POST DIRT A...*/]);
    temp61->FontSize(24.0f);
    temp61->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp61->Alignment(10);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), isBusy2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), loadingPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), temp_eb26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), AddEmralsPopUp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), emrals_value1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), temp_eb27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), emrals_value5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), temp_eb28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), emrals_value10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), temp_eb29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), temp_eb30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), isBusy2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), loadingPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
}

// public CameraPage New(Fuse.Navigation.Router router) [static] :47
CameraPage* CameraPage::New5(::g::Fuse::Navigation::Router* router1)
{
    CameraPage* obj1 = (CameraPage*)uNew(CameraPage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
