// This file was generated based on '.uno/ux11/MapsPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.emrals_bundle.h>
#include <_root.emrals_FuseCont-56bc3fec.h>
#include <_root.emrals_FuseCont-b37426cf.h>
#include <_root.emrals_FuseElem-95841797.h>
#include <_root.emrals_FuseReac-231c90ae.h>
#include <_root.MapsPage.h>
#include <_root.MapsPage.Template.h>
#include <_root.PTreal.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.MapView.h>
#include <Fuse.Controls.NativeViewHost.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Visibility.h>
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
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Triggers.Busy.h>
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
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[24];
static uType* TYPES[6];

namespace g{

// public partial sealed class MapsPage :2
// {
// static MapsPage() :75
static void MapsPage__cctor_4_fn(uType* __type)
{
    MapsPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"temp_eb50"*/], ::STRINGS[2/*"temp_eb51"*/], ::STRINGS[3/*"temp_eb52"*/], ::STRINGS[4/*"temp_eb53"*/], ::STRINGS[5/*"temp_eb54"*/], ::STRINGS[6/*"isBusy"*/]);
    MapsPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"Value"*/]);
    MapsPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"Url"*/]);
    MapsPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"Visibility"*/]);
    MapsPage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"Items"*/]);
    MapsPage::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"isBusy"*/]);
}

static void MapsPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("temp_eb50");
    ::STRINGS[2] = uString::Const("temp_eb51");
    ::STRINGS[3] = uString::Const("temp_eb52");
    ::STRINGS[4] = uString::Const("temp_eb53");
    ::STRINGS[5] = uString::Const("temp_eb54");
    ::STRINGS[6] = uString::Const("isBusy");
    ::STRINGS[7] = uString::Const("Value");
    ::STRINGS[8] = uString::Const("Url");
    ::STRINGS[9] = uString::Const("Visibility");
    ::STRINGS[10] = uString::Const("Items");
    ::STRINGS[11] = uString::Const("user_emrals");
    ::STRINGS[12] = uString::Const("user_avatar");
    ::STRINGS[13] = uString::Const("widget_visible");
    ::STRINGS[14] = uString::Const("viewProfile");
    ::STRINGS[15] = uString::Const("back");
    ::STRINGS[16] = uString::Const("DIRT ALERT MAP ");
    ::STRINGS[17] = uString::Const("Global_Latitude");
    ::STRINGS[18] = uString::Const("goToAlerts");
    ::STRINGS[19] = uString::Const("goToImpact");
    ::STRINGS[20] = uString::Const("goToEcans");
    ::STRINGS[21] = uString::Const("data");
    ::STRINGS[22] = uString::Const("Pages/MapsPage.ux");
    ::STRINGS[23] = uString::Const("<<");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
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
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MapsPage, __g_nametable1), 0,
        ::g::Fuse::Triggers::Busy_typeof(), offsetof(::g::MapsPage, isBusy), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::MapsPage, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MapsPage, temp_eb50), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MapsPage, temp_eb51), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MapsPage, temp_eb52), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MapsPage, temp_eb53), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MapsPage, temp_eb54), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MapsPage, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MapsPage, temp1_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::MapsPage, temp2_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MapsPage, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MapsPage, temp4_Items_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::MapsPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MapsPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MapsPage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MapsPage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MapsPage::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MapsPage::__selector4_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* MapsPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 130;
    options.InterfaceCount = 17;
    options.ObjectSize = sizeof(MapsPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("MapsPage", options);
    type->fp_build_ = MapsPage_build;
    type->fp_cctor_ = MapsPage__cctor_4_fn;
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

// public MapsPage(Fuse.Navigation.Router router) :79
void MapsPage__ctor_8_fn(MapsPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :85
void MapsPage__InitializeUX_fn(MapsPage* __this)
{
    __this->InitializeUX();
}

// public MapsPage New(Fuse.Navigation.Router router) :79
void MapsPage__New5_fn(::g::Fuse::Navigation::Router* router1, MapsPage** __retval)
{
    *__retval = MapsPage::New5(router1);
}

uSStrong<uArray*> MapsPage::__g_static_nametable1_;
::g::Uno::UX::Selector MapsPage::__selector0_;
::g::Uno::UX::Selector MapsPage::__selector1_;
::g::Uno::UX::Selector MapsPage::__selector2_;
::g::Uno::UX::Selector MapsPage::__selector3_;
::g::Uno::UX::Selector MapsPage::__selector4_;

// public MapsPage(Fuse.Navigation.Router router) [instance] :79
void MapsPage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :85
void MapsPage::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MapsPage::__g_static_nametable1());
    ::g::PTreal* temp = ::g::PTreal::New4();
    temp_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp, MapsPage::__selector0());
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"user_emrals"*/]);
    ::g::Fuse::Controls::Image* temp1 = ::g::Fuse::Controls::Image::New3();
    temp1_Url_inst = ::g::emrals_FuseControlsImage_Url_Property::New1(temp1, MapsPage::__selector1());
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"user_avatar"*/]);
    ::g::Fuse::Controls::StackPanel* temp2 = ::g::Fuse::Controls::StackPanel::New4();
    temp2_Visibility_inst = ::g::emrals_FuseElementsElement_Visibility_Property::New1(temp2, MapsPage::__selector2());
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"widget_visi...*/]);
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"viewProfile"*/]);
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[15/*"back"*/]);
    uString* temp10 = ::STRINGS[16/*"DIRT ALERT ...*/];
    ::g::Fuse::Reactive::Constant* temp11 = ::g::Fuse::Reactive::Constant::New1(temp10);
    ::g::Fuse::Reactive::Data* temp12 = ::g::Fuse::Reactive::Data::New1(::STRINGS[17/*"Global_Lati...*/]);
    ::g::PTreal* temp3 = ::g::PTreal::New4();
    temp3_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp3, MapsPage::__selector0());
    ::g::Fuse::Reactive::Add* temp13 = ::g::Fuse::Reactive::Add::New1(temp11, temp12);
    ::g::Fuse::Reactive::Data* temp14 = ::g::Fuse::Reactive::Data::New1(::STRINGS[18/*"goToAlerts"*/]);
    ::g::Fuse::Reactive::Data* temp15 = ::g::Fuse::Reactive::Data::New1(::STRINGS[19/*"goToImpact"*/]);
    ::g::Fuse::Reactive::Data* temp16 = ::g::Fuse::Reactive::Data::New1(::STRINGS[20/*"goToEcans"*/]);
    ::g::Fuse::Reactive::Each* temp4 = ::g::Fuse::Reactive::Each::New4();
    temp4_Items_inst = ::g::emrals_FuseReactiveEach_Items_Property::New1(temp4, MapsPage::__selector3());
    ::g::Fuse::Reactive::Data* temp17 = ::g::Fuse::Reactive::Data::New1(::STRINGS[21/*"data"*/]);
    ::g::Fuse::Reactive::JavaScript* temp18 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::NativeViewHost* temp19 = ::g::Fuse::Controls::NativeViewHost::New3();
    ::g::Fuse::Controls::Image* temp20 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp21 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp5, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp22 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Url_inst, (uObject*)temp6, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp23 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Visibility_inst, (uObject*)temp7, __g_nametable1, 3);
    temp_eb50 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp8, __g_nametable1);
    ::g::Fuse::Controls::StackPanel* temp24 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp25 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Text* temp26 = ::g::Fuse::Controls::Text::New3();
    temp_eb51 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp9, __g_nametable1);
    ::g::Fuse::Reactive::DataBinding* temp27 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp13, __g_nametable1, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp28 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::StackPanel* temp29 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp30 = ::g::Fuse::Controls::Image::New3();
    temp_eb52 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp14, __g_nametable1);
    ::g::Fuse::Controls::Image* temp31 = ::g::Fuse::Controls::Image::New3();
    temp_eb53 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp15, __g_nametable1);
    ::g::Fuse::Controls::Image* temp32 = ::g::Fuse::Controls::Image::New3();
    temp_eb54 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp16, __g_nametable1);
    isBusy = ::g::Fuse::Triggers::Busy::New2();
    ::g::Fuse::Controls::MapView* temp33 = ::g::Fuse::Controls::MapView::New4();
    MapsPage__Template* temp34 = MapsPage__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp35 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Items_inst, (uObject*)temp17, __g_nametable1, 3);
    temp18->LineNumber(5);
    temp18->FileName(::STRINGS[22/*"Pages/MapsP...*/]);
    temp18->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::AlertsPaged5b1ccbd()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), isBusy);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    temp2->Orientation(0);
    temp2->Alignment(7);
    temp2->Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp2, 2);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp2, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb50)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb50);
    temp20->Height(::g::Uno::UX::Size__New1(16.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp20, 2);
    temp20->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::greene8340a685()));
    temp->FontSize(14.0f);
    temp->Margin(::g::Uno::Float4__New2(4.0f, 0.0f, 4.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp21);
    temp1->MaxHeight(::g::Uno::UX::Size__New1(16.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp22);
    temp24->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    temp24->Y(::g::Uno::UX::Size__New1(0.0f, 1));
    temp24->Background(temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp25->Width(::g::Uno::UX::Size__New1(120.0f, 1));
    temp25->Margin(::g::Uno::Float4__New2(0.0f, 2.0f, 0.0f, 0.0f));
    temp25->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::emralsAllgreen2017logo99edd694()));
    temp26->Value(::STRINGS[23/*"<<"*/]);
    temp26->FontSize(24.0f);
    temp26->Color(::g::Uno::Float4__New2(0.3882353f, 0.3882353f, 0.3921569f, 1.0f));
    temp26->Alignment(1);
    temp26->Margin(::g::Uno::Float4__New2(10.0f, -30.0f, 0.0f, 0.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp26, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb51)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb51);
    temp3->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp27);
    temp29->Orientation(0);
    temp29->ItemSpacing(80.0f);
    temp29->Alignment(14);
    temp29->Padding(::g::Uno::Float4__New2(40.0f, 40.0f, 40.0f, 40.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    temp30->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp30, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb52)));
    temp30->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::cameratag5415edcc()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb52);
    temp31->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp31, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb53)));
    temp31->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::buyicona8a87298()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb53);
    temp32->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp32, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb54)));
    temp32->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::v2ecansicon81d4c260()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb54);
    uPtr(isBusy)->IsActive(false);
    uPtr(isBusy)->Name(MapsPage::__selector4());
    temp33->Zoom(11.0);
    temp33->Latitude(40.73061);
    temp33->Longitude(-73.935242);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Templates()), ::TYPES[4/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp35);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), isBusy);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
}

// public MapsPage New(Fuse.Navigation.Router router) [static] :79
MapsPage* MapsPage::New5(::g::Fuse::Navigation::Router* router1)
{
    MapsPage* obj1 = (MapsPage*)uNew(MapsPage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
