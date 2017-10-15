// This file was generated based on '.uno/ux13/Sidebar.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.emrals_bundle.h>
#include <_root.emrals_FuseCont-b37426cf.h>
#include <_root.emrals_FuseDraw-d3a711fd.h>
#include <_root.Horse.h>
#include <_root.MenuLabel.h>
#include <_root.Relations.h>
#include <_root.Sidebar.h>
#include <_root.Stats.h>
#include <_root.Username.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.Trans-997c8373.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StatusB-d3f2d898.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.WrapMode.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Navigation.NavigateToggle.h>
#include <Fuse.Navigation.While-89f5a828.h>
#include <Fuse.Navigation.WhileInactive.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.VisualEventHandler.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[29];
static uType* TYPES[7];

namespace g{

// public partial sealed class Sidebar :2
// {
// static Sidebar() :18
static void Sidebar__cctor_4_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    Sidebar::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Url"*/]);
    Sidebar::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Value"*/]);
    Sidebar::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"user"*/]);
    Sidebar::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"stats"*/]);
    Sidebar::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"browser"*/]);
    Sidebar::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"feed"*/]);
    Sidebar::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"chat"*/]);
}

static void Sidebar_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Url");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("user");
    ::STRINGS[3] = uString::Const("stats");
    ::STRINGS[4] = uString::Const("browser");
    ::STRINGS[5] = uString::Const("feed");
    ::STRINGS[6] = uString::Const("chat");
    ::STRINGS[7] = uString::Const("viewProfile");
    ::STRINGS[8] = uString::Const("user_avatar");
    ::STRINGS[9] = uString::Const("user_name");
    ::STRINGS[10] = uString::Const("user_emrals");
    ::STRINGS[11] = uString::Const("user_xp");
    ::STRINGS[12] = uString::Const("goToAlerts");
    ::STRINGS[13] = uString::Const("selectImage");
    ::STRINGS[14] = uString::Const("goToImpact");
    ::STRINGS[15] = uString::Const("goToEcans");
    ::STRINGS[16] = uString::Const("Emrals");
    ::STRINGS[17] = uString::Const("XP");
    ::STRINGS[18] = uString::Const("0");
    ::STRINGS[19] = uString::Const("Zones");
    ::STRINGS[20] = uString::Const("dirt alerts");
    ::STRINGS[21] = uString::Const("solutions");
    ::STRINGS[22] = uString::Const("POST");
    ::STRINGS[23] = uString::Const("UPLOAD");
    ::STRINGS[24] = uString::Const("impact zones");
    ::STRINGS[25] = uString::Const("Cooper Impact");
    ::STRINGS[26] = uString::Const("CREATE IMPACT");
    ::STRINGS[27] = uString::Const("ecans");
    ::STRINGS[28] = uString::Const("BUY ECAN");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL);
    ::TYPES[6] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::Fuse::Controls::Grid_typeof());
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
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17));
    type->SetFields(112,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(Sidebar, browser), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(Sidebar, chat), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(Sidebar, feed), 0,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(Sidebar, stats), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Sidebar, temp_eb2), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Sidebar, temp_eb3), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Sidebar, temp_eb4), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Sidebar, temp_eb5), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Sidebar, temp_eb6), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Sidebar, temp_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Sidebar, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Sidebar, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Sidebar, temp3_Value_inst), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(Sidebar, user), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Sidebar::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Sidebar::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Sidebar::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Sidebar::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Sidebar::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Sidebar::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Sidebar::__selector6_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* Sidebar_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::StackPanel_typeof();
    options.FieldCount = 133;
    options.InterfaceCount = 18;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Sidebar);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Sidebar", options);
    type->fp_build_ = Sidebar_build;
    type->fp_ctor_ = (void*)Sidebar__New5_fn;
    type->fp_cctor_ = Sidebar__cctor_4_fn;
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

// public Sidebar() :22
void Sidebar__ctor_8_fn(Sidebar* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :26
void Sidebar__InitializeUX_fn(Sidebar* __this)
{
    __this->InitializeUX();
}

// public Sidebar New() :22
void Sidebar__New5_fn(Sidebar** __retval)
{
    *__retval = Sidebar::New5();
}

::g::Uno::UX::Selector Sidebar::__selector0_;
::g::Uno::UX::Selector Sidebar::__selector1_;
::g::Uno::UX::Selector Sidebar::__selector2_;
::g::Uno::UX::Selector Sidebar::__selector3_;
::g::Uno::UX::Selector Sidebar::__selector4_;
::g::Uno::UX::Selector Sidebar::__selector5_;
::g::Uno::UX::Selector Sidebar::__selector6_;

// public Sidebar() [instance] :22
void Sidebar::ctor_8()
{
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance] :26
void Sidebar::InitializeUX()
{
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"viewProfile"*/]);
    ::g::Fuse::Drawing::ImageFill* temp = ::g::Fuse::Drawing::ImageFill::New2();
    temp_Url_inst = ::g::emrals_FuseDrawingImageFill_Url_Property::New1(temp, Sidebar::__selector0_);
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[8/*"user_avatar"*/]);
    ::g::Username* temp1 = ::g::Username::New4();
    temp1_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp1, Sidebar::__selector1_);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[9/*"user_name"*/]);
    ::g::Stats* temp2 = ::g::Stats::New4();
    temp2_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp2, Sidebar::__selector1_);
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[10/*"user_emrals"*/]);
    ::g::Stats* temp3 = ::g::Stats::New4();
    temp3_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp3, Sidebar::__selector1_);
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"user_xp"*/]);
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"goToAlerts"*/]);
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"selectImage"*/]);
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"goToImpact"*/]);
    ::g::Fuse::Reactive::Data* temp12 = ::g::Fuse::Reactive::Data::New1(::STRINGS[15/*"goToEcans"*/]);
    ::g::Fuse::Navigation::WhileInactive* temp13 = ::g::Fuse::Navigation::WhileInactive::New2();
    ::g::Fuse::Animations::Move* temp14 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Move* temp15 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Move* temp16 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Move* temp17 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Move* temp18 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Controls::StatusBarBackground* temp19 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp20 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5647059f, 0.5803922f, 0.5960785f, 1.0f));
    user = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Gestures::Clicked* temp21 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::NavigateToggle* temp22 = ::g::Fuse::Navigation::NavigateToggle::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp23 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb2 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp4);
    ::g::Fuse::Controls::Panel* temp24 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Circle* temp25 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Reactive::DataBinding* temp26 = ::g::Fuse::Reactive::DataBinding::New1(temp_Url_inst, (uObject*)temp5, 3);
    ::g::Fuse::Reactive::DataBinding* temp27 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp6, 3);
    stats = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::StackPanel* temp28 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp29 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp7, 3);
    ::g::Relations* temp30 = ::g::Relations::New4();
    ::g::Fuse::Controls::Rectangle* temp31 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::SolidColor* temp32 = ::g::Fuse::Drawing::SolidColor::New2();
    ::g::Fuse::Controls::StackPanel* temp33 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp34 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp8, 3);
    ::g::Relations* temp35 = ::g::Relations::New4();
    ::g::Fuse::Controls::Rectangle* temp36 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::SolidColor* temp37 = ::g::Fuse::Drawing::SolidColor::New2();
    ::g::Fuse::Controls::StackPanel* temp38 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Stats* temp39 = ::g::Stats::New4();
    ::g::Relations* temp40 = ::g::Relations::New4();
    ::g::Fuse::Controls::StackPanel* temp41 = ::g::Fuse::Controls::StackPanel::New4();
    browser = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Gestures::Clicked* temp42 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::NavigateToggle* temp43 = ::g::Fuse::Navigation::NavigateToggle::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp44 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb3 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp9);
    ::g::Fuse::Controls::Grid* temp45 = ::g::Fuse::Controls::Grid::New4();
    ::g::Horse* temp46 = ::g::Horse::New4();
    ::g::Horse* temp47 = ::g::Horse::New4();
    ::g::Fuse::Controls::Rectangle* temp48 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::MenuLabel* temp49 = ::g::MenuLabel::New4();
    ::g::Fuse::Controls::Rectangle* temp50 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::MenuLabel* temp51 = ::g::MenuLabel::New4();
    temp_eb4 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp10);
    feed = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Gestures::Clicked* temp52 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::NavigateToggle* temp53 = ::g::Fuse::Navigation::NavigateToggle::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp54 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb5 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp11);
    ::g::Horse* temp55 = ::g::Horse::New4();
    ::g::Fuse::Controls::Grid* temp56 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Circle* temp57 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Drawing::ImageFill* temp58 = ::g::Fuse::Drawing::ImageFill::New2();
    ::g::Fuse::Controls::Circle* temp59 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Drawing::ImageFill* temp60 = ::g::Fuse::Drawing::ImageFill::New2();
    ::g::Fuse::Controls::Text* temp61 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp62 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp63 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::MenuLabel* temp64 = ::g::MenuLabel::New4();
    chat = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Gestures::Clicked* temp65 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::NavigateToggle* temp66 = ::g::Fuse::Navigation::NavigateToggle::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp67 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb6 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp12);
    ::g::Horse* temp68 = ::g::Horse::New4();
    ::g::Fuse::Controls::Image* temp69 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Rectangle* temp70 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::MenuLabel* temp71 = ::g::MenuLabel::New4();
    ::g::Fuse::Drawing::StaticSolidColor* temp72 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.4f, 0.4f, 0.4039216f, 1.0f));
    temp13->Threshold(0.4f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Animators()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Animators()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Animators()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Animators()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Animators()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp18);
    temp14->X(-180.0f);
    temp14->Duration(0.2);
    temp14->Delay(0.3);
    temp14->Target(user);
    temp14->Easing(::g::Fuse::Animations::Easing::CircularIn_);
    temp15->X(-180.0f);
    temp15->Duration(0.2);
    temp15->Delay(0.2);
    temp15->Target(stats);
    temp15->Easing(::g::Fuse::Animations::Easing::CircularIn_);
    temp16->X(-180.0f);
    temp16->Duration(0.2);
    temp16->Delay(0.15);
    temp16->Target(browser);
    temp16->Easing(::g::Fuse::Animations::Easing::CircularIn_);
    temp17->X(-180.0f);
    temp17->Duration(0.2);
    temp17->Delay(0.1);
    temp17->Target(feed);
    temp17->Easing(::g::Fuse::Animations::Easing::CircularIn_);
    temp18->X(-180.0f);
    temp18->Duration(0.2);
    temp18->Delay(0.05);
    temp18->Target(chat);
    temp18->Easing(::g::Fuse::Animations::Easing::CircularIn_);
    temp19->Background(temp20);
    uPtr(user)->Name(Sidebar::__selector2_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(user)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(user)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(user)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(user)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Actions()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Actions()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb2);
    temp23->add_Handler(uDelegate::New(::TYPES[4/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb2)));
    temp24->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp25->StrokeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp25->StrokeWidth(2.0f);
    temp25->Width(::g::Uno::UX::Size__New1(85.0f, 1));
    temp25->Height(::g::Uno::UX::Size__New1(85.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Fills()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp26);
    temp->WrapMode(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp27);
    uPtr(stats)->ColumnCount(5);
    uPtr(stats)->Alignment(2);
    uPtr(stats)->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 30.0f));
    uPtr(stats)->Name(Sidebar::__selector3_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(stats)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(stats)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(stats)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(stats)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(stats)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    temp28->Width(::g::Uno::UX::Size__New1(50.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp29);
    temp30->Value(::STRINGS[16/*"Emrals"*/]);
    temp31->Width(::g::Uno::UX::Size__New1(1.0f, 1));
    temp31->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Fills()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp32);
    temp32->Color(::g::Uno::Float4__New2(0.254902f, 0.3098039f, 0.3686275f, 1.0f));
    temp33->Width(::g::Uno::UX::Size__New1(50.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp34);
    temp35->Value(::STRINGS[17/*"XP"*/]);
    temp36->Width(::g::Uno::UX::Size__New1(1.0f, 1));
    temp36->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Fills()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp37);
    temp37->Color(::g::Uno::Float4__New2(0.254902f, 0.3098039f, 0.3686275f, 1.0f));
    temp38->Width(::g::Uno::UX::Size__New1(50.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    temp39->Value(::STRINGS[18/*"0"*/]);
    temp40->Value(::STRINGS[19/*"Zones"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), browser);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), feed);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), chat);
    uPtr(browser)->Name(Sidebar::__selector4_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(browser)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(browser)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Actions()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Actions()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb3);
    temp44->add_Handler(uDelegate::New(::TYPES[4/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb3)));
    temp45->RowCount(2);
    temp45->ColumnCount(2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp50);
    temp46->Value(::STRINGS[20/*"dirt alerts"*/]);
    temp46->FontSize(16.0f);
    temp46->Margin(::g::Uno::Float4__New2(18.0f, 0.0f, 0.0f, 2.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp46, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp46, 0);
    temp47->Value(::STRINGS[21/*"solutions"*/]);
    temp47->FontSize(16.0f);
    temp47->Margin(::g::Uno::Float4__New2(18.0f, 0.0f, 0.0f, 2.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp47, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp47, 1);
    temp48->StrokeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp48->StrokeWidth(1.0f);
    temp48->MaxWidth(::g::Uno::UX::Size__New1(90.0f, 1));
    ::g::Fuse::Controls::Grid::SetRow(temp48, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp48, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp49);
    temp49->Value(::STRINGS[22/*"POST"*/]);
    temp50->StrokeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp50->StrokeWidth(1.0f);
    temp50->MaxWidth(::g::Uno::UX::Size__New1(90.0f, 1));
    ::g::Fuse::Controls::Grid::SetRow(temp50, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp50, 1);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp50, uDelegate::New(::TYPES[6/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb4)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb4);
    temp51->Value(::STRINGS[23/*"UPLOAD"*/]);
    uPtr(feed)->Name(Sidebar::__selector5_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(feed)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(feed)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp55);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(feed)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp56);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(feed)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp63);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Actions()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Actions()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb5);
    temp54->add_Handler(uDelegate::New(::TYPES[4/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb5)));
    temp55->Value(::STRINGS[24/*"impact zones"*/]);
    temp55->FontSize(16.0f);
    temp55->Alignment(10);
    temp55->Margin(::g::Uno::Float4__New2(5.0f, 40.0f, 0.0f, 10.0f));
    temp56->RowCount(2);
    temp56->ColumnCount(2);
    temp56->Margin(::g::Uno::Float4__New2(5.0f, 10.0f, 0.0f, -10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp59);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp61);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp62);
    temp57->StrokeColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp57->StrokeWidth(1.0f);
    temp57->Width(::g::Uno::UX::Size__New1(90.0f, 1));
    temp57->Height(::g::Uno::UX::Size__New1(90.0f, 1));
    ::g::Fuse::Controls::Grid::SetRow(temp57, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp57, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp57->Fills()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp58);
    temp58->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::mapdummy129618c1()));
    temp59->StrokeColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp59->StrokeWidth(1.0f);
    temp59->Width(::g::Uno::UX::Size__New1(90.0f, 1));
    temp59->Height(::g::Uno::UX::Size__New1(90.0f, 1));
    ::g::Fuse::Controls::Grid::SetRow(temp59, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp59, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Fills()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp60);
    temp60->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::mapdummy129618c1()));
    temp61->Value(::STRINGS[25/*"Cooper Impact"*/]);
    temp61->FontSize(12.0f);
    temp61->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp61->Margin(::g::Uno::Float4__New2(5.0f, 20.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp61, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp61, 0);
    temp62->Value(::STRINGS[25/*"Cooper Impact"*/]);
    temp62->FontSize(12.0f);
    temp62->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp62->Margin(::g::Uno::Float4__New2(5.0f, 20.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp62, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp62, 1);
    temp63->StrokeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp63->StrokeWidth(1.0f);
    temp63->Width(::g::Uno::UX::Size__New1(140.0f, 1));
    temp63->Margin(::g::Uno::Float4__New2(0.0f, -10.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp63->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp64);
    temp64->Value(::STRINGS[26/*"CREATE IMPACT"*/]);
    uPtr(chat)->Name(Sidebar::__selector6_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(chat)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp65);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(chat)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp68);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(chat)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp69);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(chat)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp70);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->Actions()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp66);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->Actions()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp67);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb6);
    temp67->add_Handler(uDelegate::New(::TYPES[4/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb6)));
    temp68->Value(::STRINGS[27/*"ecans"*/]);
    temp68->FontSize(16.0f);
    temp68->Alignment(10);
    temp68->Margin(::g::Uno::Float4__New2(0.0f, 40.0f, 0.0f, 0.0f));
    temp69->MaxHeight(::g::Uno::UX::Size__New1(90.0f, 1));
    temp69->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::ecan460557fce()));
    temp70->StrokeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp70->StrokeWidth(1.0f);
    temp70->Width(::g::Uno::UX::Size__New1(140.0f, 1));
    temp70->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp70->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp71);
    temp71->Value(::STRINGS[28/*"BUY ECAN"*/]);
    Background(temp72);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), user);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), stats);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
}

// public Sidebar New() [static] :22
Sidebar* Sidebar::New5()
{
    Sidebar* obj1 = (Sidebar*)uNew(Sidebar_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
