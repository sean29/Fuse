// This file was generated based on '.uno/ux11/MyLoadingIndicator.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.emrals_accessor-5ad0d9ea.h>
#include <_root.emrals_FuseCont-f08373fa.h>
#include <_root.emrals_FuseDraw-1871e65f.h>
#include <_root.emrals_FuseTrig-cd1629a8.h>
#include <_root.emrals_MyLoadin-2f92c076.h>
#include <_root.MyLoadingIndicator.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Cycle-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.Spin.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.EllipticalShape.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constan-264ec80.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Reactive.This.h>
#include <Fuse.Triggers.Timeline.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileFalse.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[5];
static uType* TYPES[8];

namespace g{

// public partial sealed class MyLoadingIndicator :2
// {
// static MyLoadingIndicator() :30
static void MyLoadingIndicator__cctor_4_fn(uType* __type)
{
    MyLoadingIndicator::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[0/*"rotatingStr...*/], ::STRINGS[1/*"myTimeline"*/]);
    MyLoadingIndicator::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Color"*/]);
    MyLoadingIndicator::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"ThemeColor"*/]);
    MyLoadingIndicator::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"TargetProgr...*/]);
    MyLoadingIndicator::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"rotatingStr...*/]);
    MyLoadingIndicator::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"myTimeline"*/]);
}

static void MyLoadingIndicator_build(uType* type)
{
    ::STRINGS[0] = uString::Const("rotatingStroke");
    ::STRINGS[1] = uString::Const("myTimeline");
    ::STRINGS[2] = uString::Const("Color");
    ::STRINGS[3] = uString::Const("ThemeColor");
    ::STRINGS[4] = uString::Const("TargetProgress");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Cycle_typeof()->MakeType(::g::Uno::Double_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL);
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
        ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16));
    type->SetFields(105,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MyLoadingIndicator, __g_nametable1), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::MyLoadingIndicator, _field_ThemeColor), 0,
        ::g::Fuse::Triggers::Timeline_typeof(), offsetof(::g::MyLoadingIndicator, myTimeline), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Double_typeof(), NULL), offsetof(::g::MyLoadingIndicator, myTimeline_TargetProgress_inst), 0,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::MyLoadingIndicator, rotatingStroke), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::MyLoadingIndicator, temp_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::MyLoadingIndicator, temp1_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::MyLoadingIndicator, this_ThemeColor_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::MyLoadingIndicator::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MyLoadingIndicator::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MyLoadingIndicator::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MyLoadingIndicator::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MyLoadingIndicator::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MyLoadingIndicator::__selector4_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* MyLoadingIndicator_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 119;
    options.InterfaceCount = 17;
    options.ObjectSize = sizeof(MyLoadingIndicator);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("MyLoadingIndicator", options);
    type->fp_build_ = MyLoadingIndicator_build;
    type->fp_ctor_ = (void*)MyLoadingIndicator__New4_fn;
    type->fp_cctor_ = MyLoadingIndicator__cctor_4_fn;
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

// public MyLoadingIndicator() :34
void MyLoadingIndicator__ctor_7_fn(MyLoadingIndicator* __this)
{
    __this->ctor_7();
}

// private void InitializeUX() :38
void MyLoadingIndicator__InitializeUX_fn(MyLoadingIndicator* __this)
{
    __this->InitializeUX();
}

// public MyLoadingIndicator New() :34
void MyLoadingIndicator__New4_fn(MyLoadingIndicator** __retval)
{
    *__retval = MyLoadingIndicator::New4();
}

// public void SetThemeColor(float4 value, Uno.UX.IPropertyListener origin) :11
void MyLoadingIndicator__SetThemeColor_fn(MyLoadingIndicator* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->SetThemeColor(*value, origin);
}

// public float4 get_ThemeColor() :8
void MyLoadingIndicator__get_ThemeColor_fn(MyLoadingIndicator* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->ThemeColor();
}

// public void set_ThemeColor(float4 value) :9
void MyLoadingIndicator__set_ThemeColor_fn(MyLoadingIndicator* __this, ::g::Uno::Float4* value)
{
    __this->ThemeColor(*value);
}

uSStrong<uArray*> MyLoadingIndicator::__g_static_nametable1_;
::g::Uno::UX::Selector MyLoadingIndicator::__selector0_;
::g::Uno::UX::Selector MyLoadingIndicator::__selector1_;
::g::Uno::UX::Selector MyLoadingIndicator::__selector2_;
::g::Uno::UX::Selector MyLoadingIndicator::__selector3_;
::g::Uno::UX::Selector MyLoadingIndicator::__selector4_;

// public MyLoadingIndicator() [instance] :34
void MyLoadingIndicator::ctor_7()
{
    ctor_6();
    InitializeUX();
}

// private void InitializeUX() [instance] :38
void MyLoadingIndicator::InitializeUX()
{
    ::g::Fuse::Reactive::This* temp2 = ::g::Fuse::Reactive::This::New1();
    ::g::Fuse::Drawing::Stroke* temp = ::g::Fuse::Drawing::Stroke::New2();
    temp_Color_inst = ::g::emrals_FuseDrawingStroke_Color_Property::New1(temp, MyLoadingIndicator::__selector0());
    ::g::Fuse::Reactive::Property* temp3 = ::g::Fuse::Reactive::Property::New1(temp2, ::g::emrals_accessor_MyLoadingIndicator_ThemeColor::Singleton());
    this_ThemeColor_inst = ::g::emrals_MyLoadingIndicator_ThemeColor_Property::New1(this, MyLoadingIndicator::__selector1());
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MyLoadingIndicator::__g_static_nametable1());
    ::g::Fuse::Reactive::This* temp4 = ::g::Fuse::Reactive::This::New1();
    ::g::Fuse::Controls::Circle* temp1 = ::g::Fuse::Controls::Circle::New3();
    temp1_Color_inst = ::g::emrals_FuseControlsShape_Color_Property::New1(temp1, MyLoadingIndicator::__selector0());
    ::g::Fuse::Reactive::Property* temp5 = ::g::Fuse::Reactive::Property::New1(temp4, ::g::emrals_accessor_MyLoadingIndicator_ThemeColor::Singleton());
    myTimeline = ::g::Fuse::Triggers::Timeline::New2();
    myTimeline_TargetProgress_inst = ::g::emrals_FuseTriggersTimeline_TargetProgress_Property::New1(myTimeline, MyLoadingIndicator::__selector2());
    rotatingStroke = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Reactive::DataBinding* temp6 = ::g::Fuse::Reactive::DataBinding::New1(temp_Color_inst, (uObject*)temp3, __g_nametable1, 1);
    ::g::Fuse::Animations::Scale* temp7 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Animations::Scale* temp8 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Reactive::DataBinding* temp9 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Color_inst, (uObject*)temp5, __g_nametable1, 1);
    ::g::Fuse::Triggers::WhileFalse* temp10 = ::g::Fuse::Triggers::WhileFalse::New2();
    ::g::Fuse::Animations::Cycle* temp11 = (::g::Fuse::Animations::Cycle*)::g::Fuse::Animations::Cycle::New2(::TYPES[1/*Fuse.Animations.Cycle<double>*/], myTimeline_TargetProgress_inst);
    ::g::Fuse::Animations::Spin* temp12 = ::g::Fuse::Animations::Spin::New2();
    ThemeColor(::g::Uno::Float4__New2(0.5411765f, 0.7215686f, 0.2784314f, 1.0f));
    uPtr(rotatingStroke)->StartAngleDegrees(-45.0f);
    uPtr(rotatingStroke)->EndAngleDegrees(45.0f);
    uPtr(rotatingStroke)->Width(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(rotatingStroke)->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(rotatingStroke)->Name(MyLoadingIndicator::__selector3());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(rotatingStroke)->Strokes()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(rotatingStroke)->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp6);
    temp->Width(2.0f);
    temp1->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp1->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), myTimeline);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp9);
    uPtr(myTimeline)->Name(MyLoadingIndicator::__selector4());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(myTimeline)->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(myTimeline)->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp8);
    temp7->Factor(0.5f);
    temp7->Duration(0.25);
    temp7->Easing(::g::Fuse::Animations::Easing::CircularOut());
    temp7->EasingBack(::g::Fuse::Animations::Easing::CircularIn());
    temp8->Factor(2.0f);
    temp8->Duration(0.25);
    temp8->Delay(0.25);
    temp8->Easing(::g::Fuse::Animations::Easing::BounceOut());
    temp8->EasingBack(::g::Fuse::Animations::Easing::BounceIn());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp12);
    temp11->Low(0.0f);
    temp11->High(1.0f);
    temp11->Frequency(0.5);
    temp12->Frequency(1.0);
    temp12->Target(rotatingStroke);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), rotatingStroke);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), myTimeline);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[7/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_ThemeColor_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), rotatingStroke);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
}

// public void SetThemeColor(float4 value, Uno.UX.IPropertyListener origin) [instance] :11
void MyLoadingIndicator::SetThemeColor(::g::Uno::Float4 value, uObject* origin)
{
    if (::g::Uno::Float4__op_Inequality(value, _field_ThemeColor))
    {
        _field_ThemeColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"ThemeColor"*/]), origin);
    }
}

// public float4 get_ThemeColor() [instance] :8
::g::Uno::Float4 MyLoadingIndicator::ThemeColor()
{
    return _field_ThemeColor;
}

// public void set_ThemeColor(float4 value) [instance] :9
void MyLoadingIndicator::ThemeColor(::g::Uno::Float4 value)
{
    SetThemeColor(value, NULL);
}

// public MyLoadingIndicator New() [static] :34
MyLoadingIndicator* MyLoadingIndicator::New4()
{
    MyLoadingIndicator* obj1 = (MyLoadingIndicator*)uNew(MyLoadingIndicator_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

} // ::g
