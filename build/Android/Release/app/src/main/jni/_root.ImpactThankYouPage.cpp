// This file was generated based on '.uno/ux11/ImpactThankYouPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.emrals_bundle.h>
#include <_root.emrals_FuseCont-b37426cf.h>
#include <_root.Horse.h>
#include <_root.ImpactThankYouPage.h>
#include <_root.Mouse.h>
#include <_root.PTreal.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
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
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[22];
static uType* TYPES[5];

namespace g{

// public partial sealed class ImpactThankYouPage :2
// {
// static ImpactThankYouPage() :18
static void ImpactThankYouPage__cctor_4_fn(uType* __type)
{
    ImpactThankYouPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"temp_eb44"*/], ::STRINGS[2/*"temp_eb45"*/], ::STRINGS[3/*"temp_eb46"*/]);
    ImpactThankYouPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"Value"*/]);
}

static void ImpactThankYouPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("temp_eb44");
    ::STRINGS[2] = uString::Const("temp_eb45");
    ::STRINGS[3] = uString::Const("temp_eb46");
    ::STRINGS[4] = uString::Const("Value");
    ::STRINGS[5] = uString::Const("zipcode");
    ::STRINGS[6] = uString::Const("$");
    ::STRINGS[7] = uString::Const("subscription");
    ::STRINGS[8] = uString::Const("/m");
    ::STRINGS[9] = uString::Const("Thank you for your subscription!\n"
        "$");
    ::STRINGS[10] = uString::Const("/month has been added to \n"
        "the cleaning up of dirt alerts in\n"
        "");
    ::STRINGS[11] = uString::Const(".\n"
        "\n"
        "An email confirmation has been \n"
        "sent to ");
    ::STRINGS[12] = uString::Const("email");
    ::STRINGS[13] = uString::Const("goToAlerts");
    ::STRINGS[14] = uString::Const("goToImpact");
    ::STRINGS[15] = uString::Const("goToEcans");
    ::STRINGS[16] = uString::Const("Pages/ImpactThankYouPage.ux");
    ::STRINGS[17] = uString::Const("SUBSCRIPTION CONFIRMATION");
    ::STRINGS[18] = uString::Const("50,50");
    ::STRINGS[19] = uString::Const("200,100");
    ::STRINGS[20] = uString::Const("Selected Impact Zone");
    ::STRINGS[21] = uString::Const("Monthly Impact");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
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
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16));
    type->SetFields(111,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::ImpactThankYouPage, __g_nametable1), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::ImpactThankYouPage, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::ImpactThankYouPage, temp_eb44), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::ImpactThankYouPage, temp_eb45), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::ImpactThankYouPage, temp_eb46), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::ImpactThankYouPage, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::ImpactThankYouPage, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::ImpactThankYouPage, temp2_Value_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::ImpactThankYouPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ImpactThankYouPage::__selector0_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* ImpactThankYouPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 121;
    options.InterfaceCount = 17;
    options.ObjectSize = sizeof(ImpactThankYouPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("ImpactThankYouPage", options);
    type->fp_build_ = ImpactThankYouPage_build;
    type->fp_cctor_ = ImpactThankYouPage__cctor_4_fn;
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

// public ImpactThankYouPage(Fuse.Navigation.Router router) :22
void ImpactThankYouPage__ctor_8_fn(ImpactThankYouPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :28
void ImpactThankYouPage__InitializeUX_fn(ImpactThankYouPage* __this)
{
    __this->InitializeUX();
}

// public ImpactThankYouPage New(Fuse.Navigation.Router router) :22
void ImpactThankYouPage__New5_fn(::g::Fuse::Navigation::Router* router1, ImpactThankYouPage** __retval)
{
    *__retval = ImpactThankYouPage::New5(router1);
}

uSStrong<uArray*> ImpactThankYouPage::__g_static_nametable1_;
::g::Uno::UX::Selector ImpactThankYouPage::__selector0_;

// public ImpactThankYouPage(Fuse.Navigation.Router router) [instance] :22
void ImpactThankYouPage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :28
void ImpactThankYouPage::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, ImpactThankYouPage::__g_static_nametable1());
    ::g::Mouse* temp = ::g::Mouse::New4();
    temp_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp, ImpactThankYouPage::__selector0());
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"zipcode"*/]);
    uString* temp4 = ::STRINGS[6/*"$"*/];
    ::g::Fuse::Reactive::Constant* temp5 = ::g::Fuse::Reactive::Constant::New1(temp4);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"subscription"*/]);
    uString* temp7 = ::STRINGS[8/*"/m"*/];
    ::g::Fuse::Reactive::Constant* temp8 = ::g::Fuse::Reactive::Constant::New1(temp7);
    ::g::Fuse::Reactive::Add* temp9 = ::g::Fuse::Reactive::Add::New1(temp6, temp8);
    ::g::Mouse* temp1 = ::g::Mouse::New4();
    temp1_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp1, ImpactThankYouPage::__selector0());
    ::g::Fuse::Reactive::Add* temp10 = ::g::Fuse::Reactive::Add::New1(temp5, temp9);
    uString* temp11 = ::STRINGS[9/*"Thank you f...*/];
    ::g::Fuse::Reactive::Constant* temp12 = ::g::Fuse::Reactive::Constant::New1(temp11);
    ::g::Fuse::Reactive::Data* temp13 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"subscription"*/]);
    uString* temp14 = ::STRINGS[10/*"/month has ...*/];
    ::g::Fuse::Reactive::Constant* temp15 = ::g::Fuse::Reactive::Constant::New1(temp14);
    ::g::Fuse::Reactive::Data* temp16 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"zipcode"*/]);
    uString* temp17 = ::STRINGS[11/*".\n\nAn ema...*/];
    ::g::Fuse::Reactive::Constant* temp18 = ::g::Fuse::Reactive::Constant::New1(temp17);
    ::g::Fuse::Reactive::Data* temp19 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"email"*/]);
    ::g::Fuse::Reactive::Add* temp20 = ::g::Fuse::Reactive::Add::New1(temp18, temp19);
    ::g::Fuse::Reactive::Add* temp21 = ::g::Fuse::Reactive::Add::New1(temp16, temp20);
    ::g::Fuse::Reactive::Add* temp22 = ::g::Fuse::Reactive::Add::New1(temp15, temp21);
    ::g::Fuse::Reactive::Add* temp23 = ::g::Fuse::Reactive::Add::New1(temp13, temp22);
    ::g::PTreal* temp2 = ::g::PTreal::New4();
    temp2_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp2, ImpactThankYouPage::__selector0());
    ::g::Fuse::Reactive::Add* temp24 = ::g::Fuse::Reactive::Add::New1(temp12, temp23);
    ::g::Fuse::Reactive::Data* temp25 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"goToAlerts"*/]);
    ::g::Fuse::Reactive::Data* temp26 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"goToImpact"*/]);
    ::g::Fuse::Reactive::Data* temp27 = ::g::Fuse::Reactive::Data::New1(::STRINGS[15/*"goToEcans"*/]);
    ::g::Fuse::Reactive::JavaScript* temp28 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Panel* temp29 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp30 = ::g::Fuse::Controls::Image::New3();
    ::g::PTreal* temp31 = ::g::PTreal::New4();
    ::g::Fuse::Drawing::StaticSolidColor* temp32 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::StackPanel* temp33 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp34 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp35 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp36 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Grid* temp37 = ::g::Fuse::Controls::Grid::New4();
    ::g::Horse* temp38 = ::g::Horse::New4();
    ::g::Fuse::Reactive::DataBinding* temp39 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp3, __g_nametable1, 3);
    ::g::Horse* temp40 = ::g::Horse::New4();
    ::g::Fuse::Reactive::DataBinding* temp41 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp10, __g_nametable1, 3);
    ::g::Fuse::Controls::Panel* temp42 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp43 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp44 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp24, __g_nametable1, 3);
    ::g::Fuse::Controls::Image* temp45 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::StackPanel* temp46 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Image* temp47 = ::g::Fuse::Controls::Image::New3();
    temp_eb44 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp25, __g_nametable1);
    ::g::Fuse::Controls::Image* temp48 = ::g::Fuse::Controls::Image::New3();
    temp_eb45 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp26, __g_nametable1);
    ::g::Fuse::Controls::Image* temp49 = ::g::Fuse::Controls::Image::New3();
    temp_eb46 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp27, __g_nametable1);
    temp28->LineNumber(3);
    temp28->FileName(::STRINGS[16/*"Pages/Impac...*/]);
    temp28->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::ImpactThankYouPage9fc5a329()));
    temp29->Height(::g::Uno::UX::Size__New1(45.0f, 1));
    temp29->Y(::g::Uno::UX::Size__New1(0.0f, 1));
    temp29->Background(temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    temp30->Width(::g::Uno::UX::Size__New1(120.0f, 1));
    temp30->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 10.0f, 0.0f));
    temp30->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::emralsAllgreen2017logo99edd694()));
    temp31->Value(::STRINGS[17/*"SUBSCRIPTIO...*/]);
    temp31->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    temp35->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp35->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp35->Height(::g::Uno::UX::Size__New1(3.0f, 1));
    temp35->Margin(::g::Uno::Float4__New2(0.0f, 60.0f, 0.0f, 0.0f));
    temp35->Opacity(0.2f);
    temp36->Color(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp36->Height(::g::Uno::UX::Size__New1(120.0f, 1));
    temp36->Alignment(4);
    temp36->Margin(::g::Uno::Float4__New2(0.0f, 60.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp37);
    temp37->Rows(::STRINGS[18/*"50,50"*/]);
    temp37->Columns(::STRINGS[19/*"200,100"*/]);
    temp37->Alignment(10);
    temp37->Margin(::g::Uno::Float4__New2(0.0f, 25.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp38->Value(::STRINGS[20/*"Selected Im...*/]);
    temp38->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp38, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp38, 0);
    ::g::Fuse::Controls::Grid::SetRow(temp, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp39);
    temp40->Value(::STRINGS[21/*"Monthly Imp...*/]);
    temp40->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp40, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp40, 0);
    ::g::Fuse::Controls::Grid::SetRow(temp1, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp1, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp45);
    temp43->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp43->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp43->StrokeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    temp43->StrokeWidth(2.0f);
    temp43->Width(::g::Uno::UX::Size__New1(320.0f, 1));
    temp43->Height(::g::Uno::UX::Size__New1(200.0f, 1));
    temp43->Alignment(10);
    temp43->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 70.0f));
    temp43->Opacity(0.8f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp2->TextWrapping(1);
    temp2->FontSize(18.0f);
    temp2->TextAlignment(1);
    temp2->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp2->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp44);
    temp45->MaxHeight(::g::Uno::UX::Size__New1(375.0f, 1));
    temp45->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::eastriver13eb9c10()));
    temp46->Orientation(0);
    temp46->ItemSpacing(80.0f);
    temp46->Alignment(14);
    temp46->Padding(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp49);
    temp47->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp47, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb44)));
    temp47->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::cameratag5415edcc()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb44);
    temp48->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp48, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb45)));
    temp48->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::buyicona8a87298()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb45);
    temp49->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp49, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb46)));
    temp49->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::v2ecansicon81d4c260()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb46);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
}

// public ImpactThankYouPage New(Fuse.Navigation.Router router) [static] :22
ImpactThankYouPage* ImpactThankYouPage::New5(::g::Fuse::Navigation::Router* router1)
{
    ImpactThankYouPage* obj1 = (ImpactThankYouPage*)uNew(ImpactThankYouPage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
