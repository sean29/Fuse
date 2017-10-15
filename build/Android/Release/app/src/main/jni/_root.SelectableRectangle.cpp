// This file was generated based on '.uno/ux13/SelectableRectangle.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.emrals_accessor-79d007e7.h>
#include <_root.emrals_FuseDraw-73f734e7.h>
#include <_root.emrals_FuseSele-1c17eb9b.h>
#include <_root.SelectableRectangle.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Drawing.StrokeAlignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constan-264ec80.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Selection.Selectable.h>
#include <Fuse.Selection.ToggleSelection.h>
#include <Fuse.Selection.WhileSelected.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[3];
static uType* TYPES[6];

namespace g{

// public partial sealed class SelectableRectangle :2
// {
// static SelectableRectangle() :23
static void SelectableRectangle__cctor_5_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    SelectableRectangle::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    SelectableRectangle::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Color"*/]);
}

static void SelectableRectangle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("Color");
    ::STRINGS[2] = uString::Const("ID");
    ::TYPES[0] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetDependencies(
        ::g::emrals_accessor_SelectableRectangle_ID_typeof(),
        ::g::Uno::UX::Selector_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface3),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Shape_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface9),
        ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Shape_type, interface10),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Shape_type, interface11),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface12),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface13),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface14),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface15),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface16),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface17),
        ::g::Fuse::Drawing::IDrawObjectWatcherFeedback_typeof(), offsetof(::g::Fuse::Controls::Shape_type, interface18));
    type->SetFields(113,
        ::g::Uno::String_typeof(), offsetof(SelectableRectangle, _field_ID), 0,
        ::g::Fuse::Drawing::Stroke_typeof(), offsetof(SelectableRectangle, rectStroke), 0,
        ::g::Fuse::Drawing::SolidColor_typeof(), offsetof(SelectableRectangle, rectStrokeColor), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(SelectableRectangle, rectStrokeColor_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SelectableRectangle, temp_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SelectableRectangle::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SelectableRectangle::__selector1_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Shape_type* SelectableRectangle_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Shape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Rectangle_typeof();
    options.FieldCount = 120;
    options.InterfaceCount = 19;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(SelectableRectangle);
    options.TypeSize = sizeof(::g::Fuse::Controls::Shape_type);
    type = (::g::Fuse::Controls::Shape_type*)uClassType::New("SelectableRectangle", options);
    type->fp_build_ = SelectableRectangle_build;
    type->fp_ctor_ = (void*)SelectableRectangle__New4_fn;
    type->fp_cctor_ = SelectableRectangle__cctor_5_fn;
    type->interface18.fp_Changed = (void(*)(uObject*, uObject*))::g::Fuse::Controls::Shape__FuseDrawingIDrawObjectWatcherFeedbackChanged_fn;
    type->interface18.fp_Prepare = (void(*)(uObject*, uObject*))::g::Fuse::Controls::Shape__FuseDrawingIDrawObjectWatcherFeedbackPrepare_fn;
    type->interface18.fp_Unprepare = (void(*)(uObject*, uObject*))::g::Fuse::Controls::Shape__FuseDrawingIDrawObjectWatcherFeedbackUnprepare_fn;
    type->interface17.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Shape__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface17.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Shape__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface17.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Shape__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Shape__OnPropertyChanged2_fn;
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

// public SelectableRectangle() :27
void SelectableRectangle__ctor_8_fn(SelectableRectangle* __this)
{
    __this->ctor_8();
}

// public string get_ID() :8
void SelectableRectangle__get_ID_fn(SelectableRectangle* __this, uString** __retval)
{
    *__retval = __this->ID();
}

// public void set_ID(string value) :9
void SelectableRectangle__set_ID_fn(SelectableRectangle* __this, uString* value)
{
    __this->ID(value);
}

// private void InitializeUX() :31
void SelectableRectangle__InitializeUX_fn(SelectableRectangle* __this)
{
    __this->InitializeUX();
}

// public SelectableRectangle New() :27
void SelectableRectangle__New4_fn(SelectableRectangle** __retval)
{
    *__retval = SelectableRectangle::New4();
}

// public void SetID(string value, Uno.UX.IPropertyListener origin) :11
void SelectableRectangle__SetID_fn(SelectableRectangle* __this, uString* value, uObject* origin)
{
    __this->SetID(value, origin);
}

::g::Uno::UX::Selector SelectableRectangle::__selector0_;
::g::Uno::UX::Selector SelectableRectangle::__selector1_;

// public SelectableRectangle() [instance] :27
void SelectableRectangle::ctor_8()
{
    ctor_7();
    InitializeUX();
}

// public string get_ID() [instance] :8
uString* SelectableRectangle::ID()
{
    return _field_ID;
}

// public void set_ID(string value) [instance] :9
void SelectableRectangle::ID(uString* value)
{
    SetID(value, NULL);
}

// private void InitializeUX() [instance] :31
void SelectableRectangle::InitializeUX()
{
    ::g::Fuse::Reactive::Constant* temp1 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Selection::Selectable* temp = ::g::Fuse::Selection::Selectable::New2();
    temp_Value_inst = ::g::emrals_FuseSelectionSelectable_Value_Property::New1(temp, SelectableRectangle::__selector0_);
    ::g::Fuse::Reactive::Property* temp2 = ::g::Fuse::Reactive::Property::New1(temp1, ::g::emrals_accessor_SelectableRectangle_ID::Singleton_);
    rectStrokeColor = ::g::Fuse::Drawing::SolidColor::New2();
    rectStrokeColor_Color_inst = ::g::emrals_FuseDrawingSolidColor_Color_Property::New1(rectStrokeColor, SelectableRectangle::__selector1_);
    rectStroke = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Reactive::DataBinding* temp3 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp2, 1);
    ::g::Fuse::Selection::WhileSelected* temp4 = ::g::Fuse::Selection::WhileSelected::New2();
    ::g::Fuse::Animations::Change* temp5 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<float4>*/], rectStrokeColor_Color_inst);
    ::g::Fuse::Gestures::Clicked* temp6 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Selection::ToggleSelection* temp7 = ::g::Fuse::Selection::ToggleSelection::New2();
    CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    Width(::g::Uno::UX::Size__New1(35.0f, 1));
    Height(::g::Uno::UX::Size__New1(35.0f, 1));
    uPtr(rectStroke)->Width(2.0f);
    uPtr(rectStroke)->Alignment(0);
    uPtr(rectStroke)->Brush(rectStrokeColor);
    uPtr(rectStrokeColor)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp5);
    ::g::Fuse::Animations::Change__set_Value_fn(temp5, uCRef(::g::Uno::Float4__New2(0.9411765f, 0.3490196f, 0.3490196f, 1.0f)));
    temp5->Duration(0.3);
    temp5->DurationBack(0.0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Actions()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Strokes()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), rectStroke);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
}

// public void SetID(string value, Uno.UX.IPropertyListener origin) [instance] :11
void SelectableRectangle::SetID(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_ID))
    {
        _field_ID = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"ID"*/]), origin);
    }
}

// public SelectableRectangle New() [static] :27
SelectableRectangle* SelectableRectangle::New4()
{
    SelectableRectangle* obj1 = (SelectableRectangle*)uNew(SelectableRectangle_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
