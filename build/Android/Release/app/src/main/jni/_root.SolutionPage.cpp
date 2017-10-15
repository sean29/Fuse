// This file was generated based on '.uno/ux11/SolutionPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.emrals_bundle.h>
#include <_root.emrals_FuseCont-56bc3fec.h>
#include <_root.emrals_FuseCont-8db4819b.h>
#include <_root.emrals_FuseCont-b37426cf.h>
#include <_root.emrals_FuseElem-82a17684.h>
#include <_root.emrals_FuseElem-95841797.h>
#include <_root.emrals_FuseTrig-85933bee.h>
#include <_root.Horse.h>
#include <_root.MyLoadingIndicator3.h>
#include <_root.PTreal.h>
#include <_root.PTSerif.h>
#include <_root.SolutionPage.h>
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
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.Visibility.h>
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
#include <Fuse.Reactive.JavaScript.h>
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
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[25];
static uType* TYPES[7];

namespace g{

// public partial sealed class SolutionPage :2
// {
// static SolutionPage() :26
static void SolutionPage__cctor_4_fn(uType* __type)
{
    SolutionPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"temp_eb66"*/], ::STRINGS[2/*"isBusy3"*/], ::STRINGS[3/*"loadingPanel3"*/], ::STRINGS[4/*"temp_eb67"*/], ::STRINGS[5/*"temp_eb68"*/]);
    SolutionPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"Value"*/]);
    SolutionPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"Url"*/]);
    SolutionPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"Visibility"*/]);
    SolutionPage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"IsActive"*/]);
    SolutionPage::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"Opacity"*/]);
    SolutionPage::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"File"*/]);
    SolutionPage::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"isBusy3"*/]);
    SolutionPage::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"loadingPanel3"*/]);
}

static void SolutionPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("temp_eb66");
    ::STRINGS[2] = uString::Const("isBusy3");
    ::STRINGS[3] = uString::Const("loadingPanel3");
    ::STRINGS[4] = uString::Const("temp_eb67");
    ::STRINGS[5] = uString::Const("temp_eb68");
    ::STRINGS[6] = uString::Const("Value");
    ::STRINGS[7] = uString::Const("Url");
    ::STRINGS[8] = uString::Const("Visibility");
    ::STRINGS[9] = uString::Const("IsActive");
    ::STRINGS[10] = uString::Const("Opacity");
    ::STRINGS[11] = uString::Const("File");
    ::STRINGS[12] = uString::Const("user_emrals");
    ::STRINGS[13] = uString::Const("user_avatar");
    ::STRINGS[14] = uString::Const("widget_visible");
    ::STRINGS[15] = uString::Const("viewProfile");
    ::STRINGS[16] = uString::Const("loading_visible");
    ::STRINGS[17] = uString::Const("back");
    ::STRINGS[18] = uString::Const("imagePath");
    ::STRINGS[19] = uString::Const("emrals");
    ::STRINGS[20] = uString::Const("uploadSolution");
    ::STRINGS[21] = uString::Const("Pages/SolutionPage.ux");
    ::STRINGS[22] = uString::Const("<<");
    ::STRINGS[23] = uString::Const("PREVIEW SOLUTION");
    ::STRINGS[24] = uString::Const("UPLOAD CLEAN PIC");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
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
        ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16));
    type->SetFields(111,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::SolutionPage, __g_nametable1), 0,
        ::g::Fuse::Triggers::Busy_typeof(), offsetof(::g::SolutionPage, isBusy3), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::SolutionPage, isBusy3_IsActive_inst), 0,
        ::g::MyLoadingIndicator3_typeof(), offsetof(::g::SolutionPage, loadingPanel3), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::SolutionPage, loadingPanel3_Opacity_inst), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::SolutionPage, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::SolutionPage, temp_eb66), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::SolutionPage, temp_eb67), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::SolutionPage, temp_eb68), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::SolutionPage, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::SolutionPage, temp1_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::SolutionPage, temp2_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(::g::SolutionPage, temp3_File_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::SolutionPage, temp4_Value_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::SolutionPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::SolutionPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::SolutionPage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::SolutionPage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::SolutionPage::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::SolutionPage::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::SolutionPage::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::SolutionPage::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::SolutionPage::__selector7_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* SolutionPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 134;
    options.InterfaceCount = 17;
    options.ObjectSize = sizeof(SolutionPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("SolutionPage", options);
    type->fp_build_ = SolutionPage_build;
    type->fp_cctor_ = SolutionPage__cctor_4_fn;
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

// public SolutionPage(Fuse.Navigation.Router router) :30
void SolutionPage__ctor_8_fn(SolutionPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :36
void SolutionPage__InitializeUX_fn(SolutionPage* __this)
{
    __this->InitializeUX();
}

// public SolutionPage New(Fuse.Navigation.Router router) :30
void SolutionPage__New5_fn(::g::Fuse::Navigation::Router* router1, SolutionPage** __retval)
{
    *__retval = SolutionPage::New5(router1);
}

uSStrong<uArray*> SolutionPage::__g_static_nametable1_;
::g::Uno::UX::Selector SolutionPage::__selector0_;
::g::Uno::UX::Selector SolutionPage::__selector1_;
::g::Uno::UX::Selector SolutionPage::__selector2_;
::g::Uno::UX::Selector SolutionPage::__selector3_;
::g::Uno::UX::Selector SolutionPage::__selector4_;
::g::Uno::UX::Selector SolutionPage::__selector5_;
::g::Uno::UX::Selector SolutionPage::__selector6_;
::g::Uno::UX::Selector SolutionPage::__selector7_;

// public SolutionPage(Fuse.Navigation.Router router) [instance] :30
void SolutionPage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :36
void SolutionPage::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, SolutionPage::__g_static_nametable1());
    ::g::PTSerif* temp = ::g::PTSerif::New4();
    temp_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp, SolutionPage::__selector0());
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"user_emrals"*/]);
    ::g::Fuse::Controls::Image* temp1 = ::g::Fuse::Controls::Image::New3();
    temp1_Url_inst = ::g::emrals_FuseControlsImage_Url_Property::New1(temp1, SolutionPage::__selector1());
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"user_avatar"*/]);
    ::g::Fuse::Controls::StackPanel* temp2 = ::g::Fuse::Controls::StackPanel::New4();
    temp2_Visibility_inst = ::g::emrals_FuseElementsElement_Visibility_Property::New1(temp2, SolutionPage::__selector2());
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"widget_visi...*/]);
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[15/*"viewProfile"*/]);
    isBusy3 = ::g::Fuse::Triggers::Busy::New2();
    isBusy3_IsActive_inst = ::g::emrals_FuseTriggersBusy_IsActive_Property::New1(isBusy3, SolutionPage::__selector3());
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[16/*"loading_vis...*/]);
    loadingPanel3 = ::g::MyLoadingIndicator3::New4();
    loadingPanel3_Opacity_inst = ::g::emrals_FuseElementsElement_Opacity_Property::New1(loadingPanel3, SolutionPage::__selector4());
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(::STRINGS[17/*"back"*/]);
    ::g::Fuse::Controls::Image* temp3 = ::g::Fuse::Controls::Image::New3();
    temp3_File_inst = ::g::emrals_FuseControlsImage_File_Property::New1(temp3, SolutionPage::__selector5());
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[18/*"imagePath"*/]);
    ::g::PTreal* temp4 = ::g::PTreal::New4();
    temp4_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp4, SolutionPage::__selector0());
    ::g::Fuse::Reactive::Data* temp12 = ::g::Fuse::Reactive::Data::New1(::STRINGS[19/*"emrals"*/]);
    ::g::Fuse::Reactive::Data* temp13 = ::g::Fuse::Reactive::Data::New1(::STRINGS[20/*"uploadSolut...*/]);
    ::g::Fuse::Reactive::JavaScript* temp14 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Image* temp15 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp16 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp5, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp17 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Url_inst, (uObject*)temp6, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp18 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Visibility_inst, (uObject*)temp7, __g_nametable1, 3);
    temp_eb66 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp8, __g_nametable1);
    ::g::Fuse::Reactive::DataBinding* temp19 = ::g::Fuse::Reactive::DataBinding::New1(isBusy3_IsActive_inst, (uObject*)temp9, __g_nametable1, 3);
    ::g::Fuse::Triggers::WhileBusy* temp20 = ::g::Fuse::Triggers::WhileBusy::New2();
    ::g::Fuse::Animations::Change* temp21 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], loadingPanel3_Opacity_inst);
    ::g::Fuse::Controls::DockPanel* temp22 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Panel* temp23 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Panel* temp24 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp25 = ::g::Fuse::Controls::Text::New3();
    temp_eb67 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp10, __g_nametable1);
    ::g::PTSerif* temp26 = ::g::PTSerif::New4();
    ::g::Fuse::Drawing::StaticSolidColor* temp27 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::StackPanel* temp28 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::DockPanel* temp29 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp30 = ::g::Fuse::Reactive::DataBinding::New1(temp3_File_inst, (uObject*)temp11, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp31 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::StackPanel* temp32 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp33 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp34 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Value_inst, (uObject*)temp12, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp35 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Horse* temp36 = ::g::Horse::New4();
    temp_eb68 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp13, __g_nametable1);
    temp14->LineNumber(3);
    temp14->FileName(::STRINGS[21/*"Pages/Solut...*/]);
    temp14->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::SolutionPageb926e749()));
    temp2->Orientation(0);
    temp2->Alignment(7);
    temp2->Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp2, 2);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp2, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb66)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb66);
    temp15->Height(::g::Uno::UX::Size__New1(16.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp15, 2);
    temp15->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::greene8340a685()));
    temp->FontSize(14.0f);
    temp->Margin(::g::Uno::Float4__New2(4.0f, 0.0f, 4.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp16);
    temp1->MaxHeight(::g::Uno::UX::Size__New1(16.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp17);
    uPtr(isBusy3)->Name(SolutionPage::__selector6());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(isBusy3)->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp21);
    ::g::Fuse::Animations::Change__set_Value_fn(temp21, uCRef(1.0f));
    temp21->Duration(0.4);
    uPtr(loadingPanel3)->Opacity(0.0f);
    uPtr(loadingPanel3)->Name(SolutionPage::__selector7());
    uPtr(loadingPanel3)->ThemeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    temp23->Height(::g::Uno::UX::Size__New1(45.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp23, 2);
    temp23->Background(temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    temp24->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp24, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    temp25->Value(::STRINGS[22/*"<<"*/]);
    temp25->FontSize(30.0f);
    temp25->Color(::g::Uno::Float4__New2(0.3882353f, 0.3882353f, 0.3921569f, 1.0f));
    temp25->Alignment(3);
    temp25->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 10.0f, 0.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp25, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb67)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb67);
    temp26->Value(::STRINGS[23/*"PREVIEW SOL...*/]);
    temp26->Alignment(10);
    temp26->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp28, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    ::g::Fuse::Controls::DockPanel::SetDock(temp29, 4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp3->StretchMode(5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp30);
    temp31->Color(::g::Uno::Float4__New2(0.9607843f, 0.9607843f, 0.9607843f, 1.0f));
    temp31->Width(::g::Uno::UX::Size__New1(375.0f, 1));
    temp31->Height(::g::Uno::UX::Size__New1(140.0f, 1));
    temp31->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    temp32->Orientation(0);
    temp32->Padding(::g::Uno::Float4__New2(80.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    temp33->Height(::g::Uno::UX::Size__New1(75.0f, 1));
    temp33->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::greene8340a685()));
    temp4->FontSize(75.0f);
    temp4->Margin(::g::Uno::Float4__New2(0.0f, 15.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp34);
    temp35->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp35->Color(::g::Uno::Float4__New2(0.9411765f, 0.3490196f, 0.3490196f, 1.0f));
    temp35->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp35->Height(::g::Uno::UX::Size__New1(43.0f, 1));
    temp35->Alignment(12);
    temp35->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 20.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp35, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb68)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb68);
    temp36->Value(::STRINGS[24/*"UPLOAD CLEA...*/]);
    temp36->FontSize(24.0f);
    temp36->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp36->Alignment(10);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb66);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), isBusy3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), loadingPanel3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb67);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb68);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), isBusy3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), loadingPanel3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
}

// public SolutionPage New(Fuse.Navigation.Router router) [static] :30
SolutionPage* SolutionPage::New5(::g::Fuse::Navigation::Router* router1)
{
    SolutionPage* obj1 = (SolutionPage*)uNew(SolutionPage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
