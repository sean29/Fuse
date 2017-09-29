// This file was generated based on '.uno/ux11/CameraPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.CameraPage.h>
#include <_root.emrals_bundle.h>
#include <_root.emrals_FuseCont-8db4819b.h>
#include <_root.emrals_FuseCont-b37426cf.h>
#include <_root.emrals_FuseElem-95841797.h>
#include <_root.emrals_FuseSele-a78c3f2e.h>
#include <_root.Horse.h>
#include <_root.PTBold.h>
#include <_root.PTSerif.h>
#include <_root.SelectableRectangle.h>
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
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Selection.Selection.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Trigger.h>
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
static uString* STRINGS[36];
static uType* TYPES[7];

namespace g{

// public partial sealed class CameraPage :2
// {
// static CameraPage() :21
static void CameraPage__cctor_4_fn(uType* __type)
{
    CameraPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"temp_eb9"*/], ::STRINGS[2/*"AddEmralsPo...*/], ::STRINGS[3/*"temp_eb10"*/]);
    CameraPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"File"*/]);
    CameraPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"Values"*/]);
    CameraPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"Value"*/]);
    CameraPage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"Visibility"*/]);
    CameraPage::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"AddEmralsPo...*/]);
    CameraPage::PTSerif_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::PTserif09017dd3()));
    CameraPage::PTBold_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::PTF75F3c017e53()));
    ::g::Uno::UX::Resource::SetGlobalKey(CameraPage::PTSerif_, ::STRINGS[8/*"PTSerif"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(CameraPage::PTBold_, ::STRINGS[9/*"PTBold"*/]);
}

static void CameraPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("temp_eb9");
    ::STRINGS[2] = uString::Const("AddEmralsPopUp");
    ::STRINGS[3] = uString::Const("temp_eb10");
    ::STRINGS[4] = uString::Const("File");
    ::STRINGS[5] = uString::Const("Values");
    ::STRINGS[6] = uString::Const("Value");
    ::STRINGS[7] = uString::Const("Visibility");
    ::STRINGS[8] = uString::Const("PTSerif");
    ::STRINGS[9] = uString::Const("PTBold");
    ::STRINGS[10] = uString::Const("back");
    ::STRINGS[11] = uString::Const("imagePath");
    ::STRINGS[12] = uString::Const("sel");
    ::STRINGS[13] = uString::Const("total_emrals");
    ::STRINGS[14] = uString::Const("uploadAlert");
    ::STRINGS[15] = uString::Const("Pages/CameraPage.ux");
    ::STRINGS[16] = uString::Const("<<");
    ::STRINGS[17] = uString::Const("PREVIEW DIRT ALERT");
    ::STRINGS[18] = uString::Const("ADD EMRALS");
    ::STRINGS[19] = uString::Const("$1");
    ::STRINGS[20] = uString::Const("$5");
    ::STRINGS[21] = uString::Const("$10");
    ::STRINGS[22] = uString::Const("tag");
    ::STRINGS[23] = uString::Const("trash");
    ::STRINGS[24] = uString::Const("1");
    ::STRINGS[25] = uString::Const("poop");
    ::STRINGS[26] = uString::Const("2");
    ::STRINGS[27] = uString::Const("bike");
    ::STRINGS[28] = uString::Const("3");
    ::STRINGS[29] = uString::Const("drain");
    ::STRINGS[30] = uString::Const("4");
    ::STRINGS[31] = uString::Const("tree");
    ::STRINGS[32] = uString::Const("5");
    ::STRINGS[33] = uString::Const("100, 100, 24");
    ::STRINGS[34] = uString::Const("emrals");
    ::STRINGS[35] = uString::Const("POST DIRT ALERT");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
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
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::CameraPage, __g_nametable1), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::CameraPage, AddEmralsPopUp), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::CameraPage, AddEmralsPopUp_Visibility_inst), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::CameraPage, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::CameraPage, temp_eb10), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::CameraPage, temp_eb9), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(::g::CameraPage, temp_File_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::CameraPage, temp1_Values_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::CameraPage, temp2_Value_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::CameraPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CameraPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CameraPage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CameraPage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CameraPage::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CameraPage::__selector4_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::CameraPage::PTBold_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::CameraPage::PTSerif_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* CameraPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 128;
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

// public CameraPage(Fuse.Navigation.Router router) :29
void CameraPage__ctor_8_fn(CameraPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :35
void CameraPage__InitializeUX_fn(CameraPage* __this)
{
    __this->InitializeUX();
}

// public CameraPage New(Fuse.Navigation.Router router) :29
void CameraPage__New5_fn(::g::Fuse::Navigation::Router* router1, CameraPage** __retval)
{
    *__retval = CameraPage::New5(router1);
}

uSStrong<uArray*> CameraPage::__g_static_nametable1_;
::g::Uno::UX::Selector CameraPage::__selector0_;
::g::Uno::UX::Selector CameraPage::__selector1_;
::g::Uno::UX::Selector CameraPage::__selector2_;
::g::Uno::UX::Selector CameraPage::__selector3_;
::g::Uno::UX::Selector CameraPage::__selector4_;
uSStrong< ::g::Fuse::Font*> CameraPage::PTBold_;
uSStrong< ::g::Fuse::Font*> CameraPage::PTSerif_;

// public CameraPage(Fuse.Navigation.Router router) [instance] :29
void CameraPage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :35
void CameraPage::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, CameraPage::__g_static_nametable1());
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[10/*"back"*/]);
    ::g::Fuse::Controls::Image* temp = ::g::Fuse::Controls::Image::New3();
    temp_File_inst = ::g::emrals_FuseControlsImage_File_Property::New1(temp, CameraPage::__selector0());
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"imagePath"*/]);
    ::g::Fuse::Selection::Selection* temp1 = ::g::Fuse::Selection::Selection::New2();
    temp1_Values_inst = ::g::emrals_FuseSelectionSelection_Values_Property::New1(temp1, CameraPage::__selector1());
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"sel"*/]);
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    temp2_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp2, CameraPage::__selector2());
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"total_emrals"*/]);
    AddEmralsPopUp = ::g::Fuse::Controls::Panel::New3();
    AddEmralsPopUp_Visibility_inst = ::g::emrals_FuseElementsElement_Visibility_Property::New1(AddEmralsPopUp, CameraPage::__selector3());
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"uploadAlert"*/]);
    ::g::Fuse::Reactive::JavaScript* temp8 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::DockPanel* temp9 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Panel* temp10 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Panel* temp11 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp12 = ::g::Fuse::Controls::Text::New3();
    temp_eb9 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp3, __g_nametable1);
    ::g::Fuse::Controls::Image* temp13 = ::g::Fuse::Controls::Image::New3();
    ::g::PTSerif* temp14 = ::g::PTSerif::New4();
    ::g::Fuse::Drawing::StaticSolidColor* temp15 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::StackPanel* temp16 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::DockPanel* temp17 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp18 = ::g::Fuse::Reactive::DataBinding::New1(temp_File_inst, (uObject*)temp4, __g_nametable1, 3);
    ::g::Horse* temp19 = ::g::Horse::New4();
    ::g::Fuse::Controls::StackPanel* temp20 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp21 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::PTBold* temp22 = ::g::PTBold::New4();
    ::g::Fuse::Controls::Rectangle* temp23 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::PTBold* temp24 = ::g::PTBold::New4();
    ::g::Fuse::Controls::Rectangle* temp25 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::PTBold* temp26 = ::g::PTBold::New4();
    ::g::Fuse::Controls::Rectangle* temp27 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp28 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::StackPanel* temp29 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp30 = ::g::Fuse::Controls::Grid::New4();
    ::g::PTBold* temp31 = ::g::PTBold::New4();
    ::g::Fuse::Controls::Text* temp32 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp33 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Values_inst, (uObject*)temp5, __g_nametable1, 3);
    ::g::SelectableRectangle* temp34 = ::g::SelectableRectangle::New4();
    ::g::Fuse::Controls::Image* temp35 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Text* temp36 = ::g::Fuse::Controls::Text::New3();
    ::g::SelectableRectangle* temp37 = ::g::SelectableRectangle::New4();
    ::g::Fuse::Controls::Image* temp38 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Text* temp39 = ::g::Fuse::Controls::Text::New3();
    ::g::SelectableRectangle* temp40 = ::g::SelectableRectangle::New4();
    ::g::Fuse::Controls::Image* temp41 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Text* temp42 = ::g::Fuse::Controls::Text::New3();
    ::g::SelectableRectangle* temp43 = ::g::SelectableRectangle::New4();
    ::g::Fuse::Controls::Image* temp44 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Text* temp45 = ::g::Fuse::Controls::Text::New3();
    ::g::SelectableRectangle* temp46 = ::g::SelectableRectangle::New4();
    ::g::Fuse::Controls::Image* temp47 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Grid* temp48 = ::g::Fuse::Controls::Grid::New4();
    ::g::PTBold* temp49 = ::g::PTBold::New4();
    ::g::Fuse::Controls::Rectangle* temp50 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp51 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp6, __g_nametable1, 3);
    ::g::Fuse::Controls::Panel* temp52 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp53 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Gestures::Clicked* temp54 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp55 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], AddEmralsPopUp_Visibility_inst);
    ::g::Fuse::Controls::Rectangle* temp56 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Horse* temp57 = ::g::Horse::New4();
    temp_eb10 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp7, __g_nametable1);
    temp8->LineNumber(3);
    temp8->FileName(::STRINGS[15/*"Pages/Camer...*/]);
    temp8->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::CameraPagec8d8e140()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Fuse::Controls::DockPanel::SetDock(temp10, 2);
    temp10->Background(temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    temp11->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp11, 2);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp11, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb9)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb9);
    temp12->Value(::STRINGS[16/*"<<"*/]);
    temp12->FontSize(30.0f);
    temp12->Color(::g::Uno::Float4__New2(0.3882353f, 0.3882353f, 0.3921569f, 1.0f));
    temp12->Alignment(1);
    temp13->MaxWidth(::g::Uno::UX::Size__New1(120.0f, 1));
    temp13->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::emralsAllgreen2017logo23bc655e()));
    temp14->Value(::STRINGS[17/*"PREVIEW DIR...*/]);
    temp14->Alignment(10);
    temp14->Margin(::g::Uno::Float4__New2(0.0f, 54.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp16, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), AddEmralsPopUp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp56);
    ::g::Fuse::Controls::DockPanel::SetDock(temp17, 4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp->StretchMode(5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp18);
    uPtr(AddEmralsPopUp)->Visibility(2);
    uPtr(AddEmralsPopUp)->Name(CameraPage::__selector4());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(AddEmralsPopUp)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(AddEmralsPopUp)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(AddEmralsPopUp)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    temp19->Value(::STRINGS[18/*"ADD EMRALS"*/]);
    temp19->Color(::g::Uno::Float4__New2(0.2666667f, 0.2666667f, 0.2666667f, 1.0f));
    temp19->Alignment(10);
    temp19->Margin(::g::Uno::Float4__New2(190.0f, 10.0f, 0.0f, 0.0f));
    temp19->Opacity(1.0f);
    temp20->Orientation(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    temp21->CornerRadius(::g::Uno::Float4__New2(3.0f, 3.0f, 3.0f, 3.0f));
    temp21->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp21->StrokeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp21->StrokeWidth(1.0f);
    temp21->Width(::g::Uno::UX::Size__New1(44.0f, 1));
    temp21->Height(::g::Uno::UX::Size__New1(44.0f, 1));
    temp21->Margin(::g::Uno::Float4__New2(210.0f, 0.0f, 0.0f, -110.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    temp22->Value(::STRINGS[19/*"$1"*/]);
    temp22->FontSize(24.0f);
    temp22->Alignment(10);
    temp23->CornerRadius(::g::Uno::Float4__New2(3.0f, 3.0f, 3.0f, 3.0f));
    temp23->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp23->StrokeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp23->StrokeWidth(1.0f);
    temp23->Width(::g::Uno::UX::Size__New1(44.0f, 1));
    temp23->Height(::g::Uno::UX::Size__New1(44.0f, 1));
    temp23->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, -110.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    temp24->Value(::STRINGS[20/*"$5"*/]);
    temp24->FontSize(24.0f);
    temp24->Alignment(10);
    temp25->CornerRadius(::g::Uno::Float4__New2(3.0f, 3.0f, 3.0f, 3.0f));
    temp25->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp25->StrokeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp25->StrokeWidth(1.0f);
    temp25->Width(::g::Uno::UX::Size__New1(44.0f, 1));
    temp25->Height(::g::Uno::UX::Size__New1(44.0f, 1));
    temp25->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, -110.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    temp26->Value(::STRINGS[21/*"$10"*/]);
    temp26->FontSize(24.0f);
    temp26->Alignment(10);
    temp27->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp27->Color(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp27->Width(::g::Uno::UX::Size__New1(175.0f, 1));
    temp27->Height(::g::Uno::UX::Size__New1(125.0f, 1));
    temp27->Margin(::g::Uno::Float4__New2(190.0f, 0.0f, 0.0f, -100.0f));
    temp27->Opacity(0.7f);
    temp28->Color(::g::Uno::Float4__New2(0.9607843f, 0.9607843f, 0.9607843f, 1.0f));
    temp28->Width(::g::Uno::UX::Size__New1(375.0f, 1));
    temp28->Height(::g::Uno::UX::Size__New1(140.0f, 1));
    temp28->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    temp30->RowCount(0);
    temp30->ColumnCount(6);
    temp30->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    temp31->Value(::STRINGS[22/*"tag"*/]);
    temp31->Margin(::g::Uno::Float4__New2(5.0f, 15.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetColumn(temp31, 0);
    temp32->Value(::STRINGS[23/*"trash"*/]);
    temp32->FontSize(12.0f);
    temp32->Alignment(12);
    temp32->Margin(::g::Uno::Float4__New2(-5.0f, 0.0f, 0.0f, -20.0f));
    temp1->MinCount(1);
    temp1->MaxCount(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp33);
    temp34->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp34->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp34->Width(::g::Uno::UX::Size__New1(55.0f, 1));
    temp34->Height(::g::Uno::UX::Size__New1(55.0f, 1));
    temp34->Margin(::g::Uno::Float4__New2(2.0f, 0.0f, 40.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetColumn(temp34, 1);
    temp34->ID(::STRINGS[24/*"1"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    temp35->MaxHeight(::g::Uno::UX::Size__New1(46.0f, 1));
    temp35->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::trashbin460ea3c8()));
    temp36->Value(::STRINGS[25/*"poop"*/]);
    temp36->FontSize(12.0f);
    temp36->Alignment(12);
    temp36->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, -20.0f));
    temp37->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp37->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp37->Width(::g::Uno::UX::Size__New1(55.0f, 1));
    temp37->Height(::g::Uno::UX::Size__New1(55.0f, 1));
    temp37->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 30.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetColumn(temp37, 2);
    temp37->ID(::STRINGS[26/*"2"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    temp38->MaxHeight(::g::Uno::UX::Size__New1(49.0f, 1));
    temp38->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::poopbagc7774e69()));
    temp39->Value(::STRINGS[27/*"bike"*/]);
    temp39->FontSize(12.0f);
    temp39->Alignment(12);
    temp39->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, -20.0f));
    temp40->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp40->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp40->Width(::g::Uno::UX::Size__New1(55.0f, 1));
    temp40->Height(::g::Uno::UX::Size__New1(55.0f, 1));
    temp40->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 20.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetColumn(temp40, 3);
    temp40->ID(::STRINGS[28/*"3"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    temp41->MaxWidth(::g::Uno::UX::Size__New1(49.0f, 1));
    temp41->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::bikec3551972()));
    temp42->Value(::STRINGS[29/*"drain"*/]);
    temp42->FontSize(12.0f);
    temp42->Alignment(12);
    temp42->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, -20.0f));
    temp43->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp43->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp43->Width(::g::Uno::UX::Size__New1(55.0f, 1));
    temp43->Height(::g::Uno::UX::Size__New1(55.0f, 1));
    temp43->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 10.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetColumn(temp43, 4);
    temp43->ID(::STRINGS[30/*"4"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp44);
    temp44->MaxWidth(::g::Uno::UX::Size__New1(49.0f, 1));
    temp44->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::draind0d261b1()));
    temp45->Value(::STRINGS[31/*"tree"*/]);
    temp45->FontSize(12.0f);
    temp45->Alignment(12);
    temp45->Margin(::g::Uno::Float4__New2(18.0f, 0.0f, 0.0f, -20.0f));
    temp46->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp46->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp46->Width(::g::Uno::UX::Size__New1(55.0f, 1));
    temp46->Height(::g::Uno::UX::Size__New1(55.0f, 1));
    ::g::Fuse::Controls::Grid::SetColumn(temp46, 5);
    temp46->ID(::STRINGS[32/*"5"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    temp47->MaxHeight(::g::Uno::UX::Size__New1(49.0f, 1));
    temp47->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::tree539dbf1b()));
    temp48->Columns(::STRINGS[33/*"100, 100, 24"*/]);
    temp48->Width(::g::Uno::UX::Size__New1(355.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp52);
    temp49->Value(::STRINGS[34/*"emrals"*/]);
    temp49->Color(::g::Uno::Float4__New2(0.2235294f, 0.2235294f, 0.2235294f, 1.0f));
    temp49->Margin(::g::Uno::Float4__New2(10.0f, 20.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetColumn(temp49, 0);
    temp50->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp50->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp50->Height(::g::Uno::UX::Size__New1(38.0f, 1));
    temp50->Margin(::g::Uno::Float4__New2(0.0f, 15.0f, 10.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetColumn(temp50, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp2->FontSize(18.0f);
    temp2->Color(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp2->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp54);
    temp53->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::plus5cc62aab()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp55);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp55, uCRef<int>(0));
    temp56->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp56->Color(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp56->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp56->Height(::g::Uno::UX::Size__New1(43.0f, 1));
    temp56->Alignment(12);
    temp56->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 20.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp56, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb10)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb10);
    temp57->Value(::STRINGS[35/*"POST DIRT A...*/]);
    temp57->FontSize(24.0f);
    temp57->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp57->Alignment(10);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), AddEmralsPopUp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), temp_eb10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
}

// public CameraPage New(Fuse.Navigation.Router router) [static] :29
CameraPage* CameraPage::New5(::g::Fuse::Navigation::Router* router1)
{
    CameraPage* obj1 = (CameraPage*)uNew(CameraPage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
