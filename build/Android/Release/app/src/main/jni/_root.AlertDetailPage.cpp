// This file was generated based on '.uno/ux13/AlertDetailPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AlertDetailPage.h>
#include <_root.Dog.h>
#include <_root.emrals_bundle.h>
#include <_root.emrals_FuseCont-56bc3fec.h>
#include <_root.emrals_FuseCont-b37426cf.h>
#include <_root.emrals_FuseElem-95841797.h>
#include <_root.Horse.h>
#include <_root.Mouse.h>
#include <_root.PTBold.h>
#include <_root.PTreal.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Controls.Control.h>
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
#include <Fuse.Triggers.Actions.Toggle.h>
#include <Fuse.Triggers.Actions-b5190bae.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileTrue.h>
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
static uString* STRINGS[43];
static uType* TYPES[8];

namespace g{

// public partial class AlertDetailPage :2
// {
// static AlertDetailPage() :41
static void AlertDetailPage__cctor_4_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    ::g::Uno::UX::Resource_typeof()->Init();
    AlertDetailPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"temp_eb7"*/], ::STRINGS[2/*"AddEmralsPo...*/], ::STRINGS[3/*"Revealed"*/], ::STRINGS[4/*"emrals_value1"*/], ::STRINGS[5/*"temp_eb8"*/], ::STRINGS[6/*"emrals_value5"*/], ::STRINGS[7/*"temp_eb9"*/], ::STRINGS[8/*"emrals_valu...*/], ::STRINGS[9/*"temp_eb10"*/], ::STRINGS[10/*"temp_eb11"*/], ::STRINGS[11/*"temp_eb12"*/]);
    AlertDetailPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[12/*"Value"*/]);
    AlertDetailPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[13/*"Url"*/]);
    AlertDetailPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[14/*"Visibility"*/]);
    AlertDetailPage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"AddEmralsPo...*/]);
    AlertDetailPage::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Revealed"*/]);
    AlertDetailPage::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"emrals_value1"*/]);
    AlertDetailPage::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"emrals_value5"*/]);
    AlertDetailPage::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"emrals_valu...*/]);
    AlertDetailPage::Head_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::PTserif7f97d4b3()));
    ::g::Uno::UX::Resource::SetGlobalKey(AlertDetailPage::Head_, ::STRINGS[15/*"Head"*/]);
}

static void AlertDetailPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("temp_eb7");
    ::STRINGS[2] = uString::Const("AddEmralsPopUp2");
    ::STRINGS[3] = uString::Const("Revealed");
    ::STRINGS[4] = uString::Const("emrals_value1");
    ::STRINGS[5] = uString::Const("temp_eb8");
    ::STRINGS[6] = uString::Const("emrals_value5");
    ::STRINGS[7] = uString::Const("temp_eb9");
    ::STRINGS[8] = uString::Const("emrals_value10");
    ::STRINGS[9] = uString::Const("temp_eb10");
    ::STRINGS[10] = uString::Const("temp_eb11");
    ::STRINGS[11] = uString::Const("temp_eb12");
    ::STRINGS[12] = uString::Const("Value");
    ::STRINGS[13] = uString::Const("Url");
    ::STRINGS[14] = uString::Const("Visibility");
    ::STRINGS[15] = uString::Const("Head");
    ::STRINGS[16] = uString::Const("back");
    ::STRINGS[17] = uString::Const("DIRT ALERT ");
    ::STRINGS[18] = uString::Const("id");
    ::STRINGS[19] = uString::Const("title");
    ::STRINGS[20] = uString::Const("thumbnail");
    ::STRINGS[21] = uString::Const("emrals");
    ::STRINGS[22] = uString::Const("detail_add_emrals_1");
    ::STRINGS[23] = uString::Const("detail_add_emrals_5");
    ::STRINGS[24] = uString::Const("detail_add_emrals_10");
    ::STRINGS[25] = uString::Const("emrals_popup_visibility");
    ::STRINGS[26] = uString::Const("views");
    ::STRINGS[27] = uString::Const("poster_username");
    ::STRINGS[28] = uString::Const("created_naturaltime");
    ::STRINGS[29] = uString::Const("google_url");
    ::STRINGS[30] = uString::Const("load_map");
    ::STRINGS[31] = uString::Const("takePictureSolution");
    ::STRINGS[32] = uString::Const("Pages/AlertDetailPage.ux");
    ::STRINGS[33] = uString::Const("<<");
    ::STRINGS[34] = uString::Const("delete");
    ::STRINGS[35] = uString::Const("ADD EMRALS");
    ::STRINGS[36] = uString::Const("$1");
    ::STRINGS[37] = uString::Const("$5");
    ::STRINGS[38] = uString::Const("$10");
    ::STRINGS[39] = uString::Const("1*,2*");
    ::STRINGS[40] = uString::Const("poster");
    ::STRINGS[41] = uString::Const("time");
    ::STRINGS[42] = uString::Const("POST CLEAN PIC");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Controls::Grid_typeof());
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
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17));
    type->SetFields(117,
        ::g::Uno::UX::NameTable_typeof(), offsetof(AlertDetailPage, __g_nametable1), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(AlertDetailPage, AddEmralsPopUp2), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(AlertDetailPage, AddEmralsPopUp2_Visibility_inst), 0,
        ::g::PTBold_typeof(), offsetof(AlertDetailPage, emrals_value1), 0,
        ::g::PTBold_typeof(), offsetof(AlertDetailPage, emrals_value10), 0,
        ::g::PTBold_typeof(), offsetof(AlertDetailPage, emrals_value5), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(AlertDetailPage, Revealed), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(AlertDetailPage, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(AlertDetailPage, temp_eb10), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(AlertDetailPage, temp_eb11), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(AlertDetailPage, temp_eb12), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(AlertDetailPage, temp_eb7), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(AlertDetailPage, temp_eb8), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(AlertDetailPage, temp_eb9), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(AlertDetailPage, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(AlertDetailPage, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(AlertDetailPage, temp2_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(AlertDetailPage, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(AlertDetailPage, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(AlertDetailPage, temp5_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(AlertDetailPage, temp6_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(AlertDetailPage, temp7_Url_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&AlertDetailPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&AlertDetailPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&AlertDetailPage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&AlertDetailPage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&AlertDetailPage::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&AlertDetailPage::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&AlertDetailPage::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&AlertDetailPage::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&AlertDetailPage::__selector7_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&AlertDetailPage::Head_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* AlertDetailPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 149;
    options.InterfaceCount = 18;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(AlertDetailPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("AlertDetailPage", options);
    type->fp_build_ = AlertDetailPage_build;
    type->fp_cctor_ = AlertDetailPage__cctor_4_fn;
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

// public AlertDetailPage(Fuse.Navigation.Router router) :47
void AlertDetailPage__ctor_8_fn(AlertDetailPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :53
void AlertDetailPage__InitializeUX_fn(AlertDetailPage* __this)
{
    __this->InitializeUX();
}

uSStrong<uArray*> AlertDetailPage::__g_static_nametable1_;
::g::Uno::UX::Selector AlertDetailPage::__selector0_;
::g::Uno::UX::Selector AlertDetailPage::__selector1_;
::g::Uno::UX::Selector AlertDetailPage::__selector2_;
::g::Uno::UX::Selector AlertDetailPage::__selector3_;
::g::Uno::UX::Selector AlertDetailPage::__selector4_;
::g::Uno::UX::Selector AlertDetailPage::__selector5_;
::g::Uno::UX::Selector AlertDetailPage::__selector6_;
::g::Uno::UX::Selector AlertDetailPage::__selector7_;
uSStrong< ::g::Fuse::Font*> AlertDetailPage::Head_;

// public AlertDetailPage(Fuse.Navigation.Router router) [instance] :47
void AlertDetailPage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :53
void AlertDetailPage::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, AlertDetailPage::__g_static_nametable1_);
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[16/*"back"*/]);
    uString* temp9 = ::STRINGS[17/*"DIRT ALERT "*/];
    ::g::Fuse::Reactive::Constant* temp10 = ::g::Fuse::Reactive::Constant::New1(temp9);
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[18/*"id"*/]);
    ::g::PTreal* temp = ::g::PTreal::New4();
    temp_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp, AlertDetailPage::__selector0_);
    ::g::Fuse::Reactive::Add* temp12 = ::g::Fuse::Reactive::Add::New1(temp10, temp11);
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    temp1_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp1, AlertDetailPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp13 = ::g::Fuse::Reactive::Data::New1(::STRINGS[19/*"title"*/]);
    ::g::Fuse::Controls::Image* temp2 = ::g::Fuse::Controls::Image::New3();
    temp2_Url_inst = ::g::emrals_FuseControlsImage_Url_Property::New1(temp2, AlertDetailPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp14 = ::g::Fuse::Reactive::Data::New1(::STRINGS[20/*"thumbnail"*/]);
    ::g::PTreal* temp3 = ::g::PTreal::New4();
    temp3_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp3, AlertDetailPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp15 = ::g::Fuse::Reactive::Data::New1(::STRINGS[21/*"emrals"*/]);
    AddEmralsPopUp2 = ::g::Fuse::Controls::Panel::New3();
    AddEmralsPopUp2_Visibility_inst = ::g::emrals_FuseElementsElement_Visibility_Property::New1(AddEmralsPopUp2, AlertDetailPage::__selector2_);
    ::g::Fuse::Reactive::Data* temp16 = ::g::Fuse::Reactive::Data::New1(::STRINGS[22/*"detail_add_...*/]);
    ::g::Fuse::Reactive::Data* temp17 = ::g::Fuse::Reactive::Data::New1(::STRINGS[23/*"detail_add_...*/]);
    ::g::Fuse::Reactive::Data* temp18 = ::g::Fuse::Reactive::Data::New1(::STRINGS[24/*"detail_add_...*/]);
    ::g::Fuse::Reactive::Data* temp19 = ::g::Fuse::Reactive::Data::New1(::STRINGS[25/*"emrals_popu...*/]);
    ::g::Dog* temp4 = ::g::Dog::New4();
    temp4_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp4, AlertDetailPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp20 = ::g::Fuse::Reactive::Data::New1(::STRINGS[26/*"views"*/]);
    ::g::Dog* temp5 = ::g::Dog::New4();
    temp5_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp5, AlertDetailPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp21 = ::g::Fuse::Reactive::Data::New1(::STRINGS[27/*"poster_user...*/]);
    ::g::Dog* temp6 = ::g::Dog::New4();
    temp6_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp6, AlertDetailPage::__selector0_);
    ::g::Fuse::Reactive::Data* temp22 = ::g::Fuse::Reactive::Data::New1(::STRINGS[28/*"created_nat...*/]);
    ::g::Fuse::Controls::Image* temp7 = ::g::Fuse::Controls::Image::New3();
    temp7_Url_inst = ::g::emrals_FuseControlsImage_Url_Property::New1(temp7, AlertDetailPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp23 = ::g::Fuse::Reactive::Data::New1(::STRINGS[29/*"google_url"*/]);
    ::g::Fuse::Reactive::Data* temp24 = ::g::Fuse::Reactive::Data::New1(::STRINGS[30/*"load_map"*/]);
    ::g::Fuse::Reactive::Data* temp25 = ::g::Fuse::Reactive::Data::New1(::STRINGS[31/*"takePicture...*/]);
    ::g::Fuse::Reactive::JavaScript* temp26 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::StackPanel* temp27 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp28 = ::g::Fuse::Controls::Text::New3();
    temp_eb7 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp8);
    ::g::Fuse::Reactive::DataBinding* temp29 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp12, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp30 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::StackPanel* temp31 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp32 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp33 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp34 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp13, 3);
    ::g::Fuse::Controls::Rectangle* temp35 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Horse* temp36 = ::g::Horse::New4();
    ::g::Fuse::Controls::Rectangle* temp37 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp38 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Url_inst, (uObject*)temp14, 3);
    ::g::Fuse::Controls::StackPanel* temp39 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp40 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp41 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp15, 3);
    ::g::Fuse::Controls::Image* temp42 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Gestures::Clicked* temp43 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp44 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    Revealed = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Animations::Change* temp45 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<Fuse.Elements.Visibility>*/], AddEmralsPopUp2_Visibility_inst);
    ::g::Horse* temp46 = ::g::Horse::New4();
    ::g::Fuse::Controls::StackPanel* temp47 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp48 = ::g::Fuse::Controls::Rectangle::New3();
    emrals_value1 = ::g::PTBold::New4();
    temp_eb8 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp16);
    ::g::Fuse::Controls::Rectangle* temp49 = ::g::Fuse::Controls::Rectangle::New3();
    emrals_value5 = ::g::PTBold::New4();
    temp_eb9 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp17);
    ::g::Fuse::Controls::Rectangle* temp50 = ::g::Fuse::Controls::Rectangle::New3();
    emrals_value10 = ::g::PTBold::New4();
    temp_eb10 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp18);
    ::g::Fuse::Controls::Rectangle* temp51 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp52 = ::g::Fuse::Reactive::DataBinding::New1(AddEmralsPopUp2_Visibility_inst, (uObject*)temp19, 3);
    ::g::Fuse::Controls::Panel* temp53 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp54 = ::g::Fuse::Controls::Grid::New4();
    ::g::Mouse* temp55 = ::g::Mouse::New4();
    ::g::Fuse::Reactive::DataBinding* temp56 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Value_inst, (uObject*)temp20, 3);
    ::g::Mouse* temp57 = ::g::Mouse::New4();
    ::g::Fuse::Reactive::DataBinding* temp58 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Value_inst, (uObject*)temp21, 3);
    ::g::Mouse* temp59 = ::g::Mouse::New4();
    ::g::Fuse::Reactive::DataBinding* temp60 = ::g::Fuse::Reactive::DataBinding::New1(temp6_Value_inst, (uObject*)temp22, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp61 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9607843f, 0.9607843f, 0.9607843f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp62 = ::g::Fuse::Reactive::DataBinding::New1(temp7_Url_inst, (uObject*)temp23, 3);
    temp_eb11 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp24);
    ::g::Fuse::Controls::Rectangle* temp63 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp64 = ::g::Fuse::Controls::Text::New3();
    temp_eb12 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp25);
    temp26->LineNumber(3);
    temp26->FileName(::STRINGS[32/*"Pages/Alert...*/]);
    temp26->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::AlertDetailPage99914a56()));
    temp27->Height(::g::Uno::UX::Size__New1(45.0f, 1));
    temp27->Y(::g::Uno::UX::Size__New1(0.0f, 1));
    temp27->Background(temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp28->Value(::STRINGS[33/*"<<"*/]);
    temp28->FontSize(24.0f);
    temp28->Color(::g::Uno::Float4__New2(0.3882353f, 0.3882353f, 0.3921569f, 1.0f));
    temp28->Alignment(3);
    temp28->Margin(::g::Uno::Float4__New2(10.0f, -20.0f, 10.0f, 0.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp28, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb7)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb7);
    temp->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), AddEmralsPopUp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp37);
    temp33->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp33->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp33->Width(::g::Uno::UX::Size__New1(90.0f, 4));
    temp33->Height(::g::Uno::UX::Size__New1(42.0f, 1));
    temp33->Alignment(4);
    temp33->Margin(::g::Uno::Float4__New2(0.0f, 65.0f, 0.0f, 0.0f));
    temp33->Opacity(0.8f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp1->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp34);
    temp35->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp35->Color(::g::Uno::Float4__New2(0.9411765f, 0.3490196f, 0.3490196f, 1.0f));
    temp35->Width(::g::Uno::UX::Size__New1(42.0f, 1));
    temp35->Height(::g::Uno::UX::Size__New1(15.0f, 1));
    temp35->Alignment(15);
    temp35->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp35->Opacity(0.75f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    temp36->Value(::STRINGS[34/*"delete"*/]);
    temp36->FontSize(12.0f);
    temp36->Alignment(10);
    temp36->Margin(::g::Uno::Float4__New2(0.0f, -3.0f, 0.0f, 0.0f));
    temp37->MaxHeight(::g::Uno::UX::Size__New1(375.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp2->StretchMode(3);
    temp2->Alignment(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp38);
    temp39->Orientation(0);
    temp39->Height(::g::Uno::UX::Size__New1(26.0f, 1));
    temp39->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp42);
    temp40->Height(::g::Uno::UX::Size__New1(24.0f, 1));
    temp40->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 5.0f, 0.0f));
    temp40->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::greeneea7c8b83()));
    temp3->FontSize(22.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp41);
    temp42->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    temp42->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::plusdc5300cb()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp44);
    temp44->Target((uObject*)Revealed);
    uPtr(AddEmralsPopUp2)->Name(AlertDetailPage::__selector3_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(AddEmralsPopUp2)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), Revealed);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(AddEmralsPopUp2)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(AddEmralsPopUp2)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(AddEmralsPopUp2)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(AddEmralsPopUp2)->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp52);
    uPtr(Revealed)->Name(AlertDetailPage::__selector4_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Revealed)->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp45);
    ::g::Fuse::Animations::Change__set_Value_fn(temp45, uCRef<int>(0));
    temp46->Value(::STRINGS[35/*"ADD EMRALS"*/]);
    temp46->Color(::g::Uno::Float4__New2(0.2666667f, 0.2666667f, 0.2666667f, 1.0f));
    temp46->Alignment(10);
    temp46->Margin(::g::Uno::Float4__New2(190.0f, 10.0f, 0.0f, 0.0f));
    temp46->Opacity(1.0f);
    temp47->Orientation(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp50);
    temp48->CornerRadius(::g::Uno::Float4__New2(3.0f, 3.0f, 3.0f, 3.0f));
    temp48->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp48->StrokeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp48->StrokeWidth(1.0f);
    temp48->Width(::g::Uno::UX::Size__New1(44.0f, 1));
    temp48->Height(::g::Uno::UX::Size__New1(44.0f, 1));
    temp48->Margin(::g::Uno::Float4__New2(210.0f, 0.0f, 0.0f, -110.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp48, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb8)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), emrals_value1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb8);
    uPtr(emrals_value1)->Value(::STRINGS[36/*"$1"*/]);
    uPtr(emrals_value1)->FontSize(24.0f);
    uPtr(emrals_value1)->Alignment(10);
    uPtr(emrals_value1)->Name(AlertDetailPage::__selector5_);
    temp49->CornerRadius(::g::Uno::Float4__New2(3.0f, 3.0f, 3.0f, 3.0f));
    temp49->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp49->StrokeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp49->StrokeWidth(1.0f);
    temp49->Width(::g::Uno::UX::Size__New1(44.0f, 1));
    temp49->Height(::g::Uno::UX::Size__New1(44.0f, 1));
    temp49->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, -110.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp49, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb9)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), emrals_value5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb9);
    uPtr(emrals_value5)->Value(::STRINGS[37/*"$5"*/]);
    uPtr(emrals_value5)->FontSize(24.0f);
    uPtr(emrals_value5)->Alignment(10);
    uPtr(emrals_value5)->Name(AlertDetailPage::__selector6_);
    temp50->CornerRadius(::g::Uno::Float4__New2(3.0f, 3.0f, 3.0f, 3.0f));
    temp50->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp50->StrokeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp50->StrokeWidth(1.0f);
    temp50->Width(::g::Uno::UX::Size__New1(44.0f, 1));
    temp50->Height(::g::Uno::UX::Size__New1(44.0f, 1));
    temp50->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, -110.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp50, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb10)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), emrals_value10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb10);
    uPtr(emrals_value10)->Value(::STRINGS[38/*"$10"*/]);
    uPtr(emrals_value10)->FontSize(24.0f);
    uPtr(emrals_value10)->Alignment(10);
    uPtr(emrals_value10)->Name(AlertDetailPage::__selector7_);
    temp51->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp51->Color(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp51->Width(::g::Uno::UX::Size__New1(175.0f, 1));
    temp51->Height(::g::Uno::UX::Size__New1(125.0f, 1));
    temp51->Margin(::g::Uno::Float4__New2(190.0f, 0.0f, 0.0f, -100.0f));
    temp51->Opacity(0.7f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp63);
    temp54->RowCount(3);
    temp54->Columns(::STRINGS[39/*"1*,2*"*/]);
    temp54->ColumnCount(2);
    temp54->Width(::g::Uno::UX::Size__New1(230.0f, 1));
    temp54->Height(::g::Uno::UX::Size__New1(145.0f, 1));
    temp54->Alignment(12);
    temp54->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 146.0f, 80.0f));
    temp54->Background(temp61);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp55);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp59);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    temp55->Value(::STRINGS[26/*"views"*/]);
    temp55->FontSize(16.0f);
    temp55->Color(::g::Uno::Float4__New2(0.3882353f, 0.3882353f, 0.3921569f, 1.0f));
    temp55->Margin(::g::Uno::Float4__New2(16.0f, 30.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp55, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp55, 0);
    temp4->FontSize(14.0f);
    temp4->Color(::g::Uno::Float4__New2(0.3882353f, 0.3882353f, 0.3921569f, 1.0f));
    temp4->Margin(::g::Uno::Float4__New2(2.0f, 32.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp4, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp4, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp56);
    temp57->Value(::STRINGS[40/*"poster"*/]);
    temp57->FontSize(16.0f);
    temp57->Color(::g::Uno::Float4__New2(0.3882353f, 0.3882353f, 0.3921569f, 1.0f));
    temp57->Margin(::g::Uno::Float4__New2(14.0f, 18.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp57, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp57, 0);
    temp5->FontSize(14.0f);
    temp5->Margin(::g::Uno::Float4__New2(2.0f, 19.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp5, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp5, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp58);
    temp59->Value(::STRINGS[41/*"time"*/]);
    temp59->FontSize(16.0f);
    temp59->Color(::g::Uno::Float4__New2(0.3882353f, 0.3882353f, 0.3921569f, 1.0f));
    temp59->Margin(::g::Uno::Float4__New2(14.0f, 5.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp59, 2);
    ::g::Fuse::Controls::Grid::SetColumn(temp59, 0);
    temp6->FontSize(14.0f);
    temp6->Margin(::g::Uno::Float4__New2(2.0f, 7.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp6, 2);
    ::g::Fuse::Controls::Grid::SetColumn(temp6, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp60);
    temp7->Alignment(15);
    temp7->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 80.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp7, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb11)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp62);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb11);
    temp63->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp63->Color(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp63->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp63->Height(::g::Uno::UX::Size__New1(43.0f, 1));
    temp63->Alignment(12);
    temp63->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 20.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp63, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb12)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp63->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp64);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp63->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb12);
    temp64->Value(::STRINGS[42/*"POST CLEAN ...*/]);
    temp64->FontSize(24.0f);
    temp64->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp64->Alignment(10);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), temp_eb7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), AddEmralsPopUp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), Revealed);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), emrals_value1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), temp_eb8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), emrals_value5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), temp_eb9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), emrals_value10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), temp_eb10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), temp_eb11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), temp_eb12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
}
// }

} // ::g
