// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseAndroidText-9d82b652.h>
#include <_root.FuseBasicTheme_-4bfcf6e8.h>
#include <_root.FuseBasicTheme_-545f3ab0.h>
#include <_root.FuseBasicTheme_-6a3d03e2.h>
#include <_root.FuseBasicTheme_-712330e4.h>
#include <_root.FuseBasicTheme_-7dc64d4d.h>
#include <_root.FuseBasicTheme_-ae1fe842.h>
#include <_root.FuseBasicTheme_-b6cc75cc.h>
#include <_root.FuseBasicTheme_-bf75500b.h>
#include <_root.FuseBasicTheme_bundle.h>
#include <_root.FuseBasicTheme_-cdff12e0.h>
#include <_root.FuseBasicTheme_-d24b53f1.h>
#include <_root.FuseBasicTheme_-de8e1e6f.h>
#include <_root.FuseBasicTheme_-df476f2d.h>
#include <_root.FuseBasicTheme_-fefe1cf2.h>
#include <_root.FuseControls_bundle.h>
#include <_root.FuseControlsNat-fa0facbc.h>
#include <_root.FuseControlsNav-a8c01cdb.h>
#include <_root.FuseControlsNav-bfeb1093.h>
#include <_root.FuseControlsPan-1146454c.h>
#include <_root.FuseControlsPri-3832896e.h>
#include <_root.FuseControlsPri-38e137c8.h>
#include <_root.FuseControlsPri-3bbae333.h>
#include <_root.FuseControlsPri-5e35c2db.h>
#include <_root.FuseControlsPri-6b573bdb.h>
#include <_root.FuseControlsPri-7b4ecfe6.h>
#include <_root.FuseControlsPri-8507d6ea.h>
#include <_root.FuseControlsPri-accbb5bd.h>
#include <_root.FuseControlsPri-ca138e33.h>
#include <_root.FuseControlsPri-ce42971.h>
#include <_root.FuseControlsPri-d52a5a11.h>
#include <_root.FuseControlsPri-d9ada289.h>
#include <_root.FuseControlsPri-e9d2ee5b.h>
#include <_root.FuseControlsScr-48813899.h>
#include <_root.FuseControlsScr-f1bcb258.h>
#include <_root.FuseControlsVideo_bundle.h>
#include <_root.FuseDrawing_bundle.h>
#include <_root.FuseDrawingPrim-c6713933.h>
#include <_root.FuseDrawingSurf-41037ecc.h>
#include <_root.FuseEffects_bundle.h>
#include <_root.FuseElements_bundle.h>
#include <_root.FuseNodes_bundle.h>
#include <_root.FuseReactiveJav-1015c09d.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.ScrollViewBase.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.ToggleControl.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Effects.DropShadow.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.SwipeGesture.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implement-6e9df330.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[162];
static uType* TYPES[19];

namespace g{

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.Android.TextRenderer\1.3.0-rc2\.uno\package
// --------------------------------------------------------------------------------------------

// public static generated class FuseAndroidTextRenderer_bundle :0
// {
// static FuseAndroidTextRenderer_bundle() :0
static void FuseAndroidTextRenderer_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof()->Init();
    FuseAndroidTextRenderer_bundle::Blitter83cfc6f0_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[0/*"uniform vec...*/], ::STRINGS[1/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"f"*/]));
}

static void FuseAndroidTextRenderer_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("uniform vec2 c,b;uniform mat4 d;attribute vec2 a;varying vec2 e;void main(){e=a;gl_Position=d*vec4(c+(a*b),0.,1.);}");
    ::STRINGS[1] = uString::Const("uniform sampler2D f;varying vec2 e;void main(){gl_FragColor=texture2D(f,e);}");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("f");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseAndroidTextRenderer_bundle::Blitter83cfc6f0_, uFieldFlagsStatic);
}

uClassType* FuseAndroidTextRenderer_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseAndroidTextRenderer_bundle", options);
    type->fp_build_ = FuseAndroidTextRenderer_bundle_build;
    type->fp_cctor_ = FuseAndroidTextRenderer_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseAndroidTextRenderer_bundle::Blitter83cfc6f0_;
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.BasicTheme\1.3.0-rc2\.uno\ux13\Fuse.BasicTheme.unoproj.g.uno
// -------------------------------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text :1
// {
// static generated FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text() :1
static void FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text::Singleton_ = FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text::New1();
    FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"Text"*/]);
}

static void FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text_build(uType* type)
{
    ::STRINGS[7] = uString::Const("Text");
    ::TYPES[1] = ::g::Fuse::Controls::ButtonBase_typeof();
    ::TYPES[2] = ::g::Uno::String_typeof();
    ::TYPES[3] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text", options);
    type->fp_build_ = FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text_build;
    type->fp_ctor_ = (void*)FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text__New1_fn;
    type->fp_cctor_ = FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text__get_SupportsOriginSetter_fn;
    return type;
}

// public generated FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text() :1
void FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text__ctor_1_fn(FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :7
void FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text__GetAsObject_fn(FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::ButtonBase*>(obj, ::TYPES[1/*Fuse.Controls.ButtonBase*/]))->Text(), void();
}

// public override sealed Uno.UX.Selector get_Name() :4
void FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text__get_Name_fn(FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text::_name_, void();
}

// public generated FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text New() :1
void FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text__New1_fn(FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text** __retval)
{
    *__retval = FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text::New1();
}

// public override sealed Uno.Type get_PropertyType() :6
void FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text__get_PropertyType_fn(FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text* __this, uType** __retval)
{
    return *__retval = ::TYPES[2/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :8
void FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text__SetAsObject_fn(FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::ButtonBase*>(obj, ::TYPES[1/*Fuse.Controls.ButtonBase*/]))->SetText(uCast<uString*>(v, ::TYPES[2/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :9
void FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text__get_SupportsOriginSetter_fn(FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text::Singleton_;

// public generated FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text() [instance] :1
void FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text::ctor_1()
{
    ctor_();
}

// public generated FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text New() [static] :1
FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text* FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text::New1()
{
    FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text* obj1 = (FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text*)uNew(FuseBasicTheme_accessor_Fuse_Controls_ButtonBase_Text_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.BasicTheme\1.3.0-rc2\.uno\package
// ----------------------------------------------------------------------------------

// public static generated class FuseBasicTheme_bundle :0
// {
// static FuseBasicTheme_bundle() :0
static void FuseBasicTheme_bundle__cctor__fn(uType* __type)
{
    FuseBasicTheme_bundle::RobotoLight94e9481d_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[8/*"Fuse.BasicT...*/]))->GetFile(::STRINGS[9/*"roboto-ligh...*/]);
    FuseBasicTheme_bundle::RobotoMedium02e91c82_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[8/*"Fuse.BasicT...*/]))->GetFile(::STRINGS[10/*"roboto-medi...*/]);
    FuseBasicTheme_bundle::RobotoRegularbce30049_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[8/*"Fuse.BasicT...*/]))->GetFile(::STRINGS[11/*"roboto-regu...*/]);
}

static void FuseBasicTheme_bundle_build(uType* type)
{
    ::STRINGS[8] = uString::Const("Fuse.BasicTheme");
    ::STRINGS[9] = uString::Const("roboto-light-f7d7928c.ttf");
    ::STRINGS[10] = uString::Const("roboto-medium-56c78dbb.ttf");
    ::STRINGS[11] = uString::Const("roboto-regular-355447e0.ttf");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&FuseBasicTheme_bundle::RobotoLight94e9481d_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&FuseBasicTheme_bundle::RobotoMedium02e91c82_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&FuseBasicTheme_bundle::RobotoRegularbce30049_, uFieldFlagsStatic);
}

uClassType* FuseBasicTheme_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseBasicTheme_bundle", options);
    type->fp_build_ = FuseBasicTheme_bundle_build;
    type->fp_cctor_ = FuseBasicTheme_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> FuseBasicTheme_bundle::RobotoLight94e9481d_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseBasicTheme_bundle::RobotoMedium02e91c82_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseBasicTheme_bundle::RobotoRegularbce30049_;
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.BasicTheme\1.3.0-rc2\.uno\ux13\Fuse.BasicTheme.unoproj.g.uno
// -------------------------------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property :53
// {
static void FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property_build(uType* type)
{
    ::TYPES[4] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[4/*Fuse.Animations.Change<float4>*/], offsetof(FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property", options);
    type->fp_build_ = FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__Set1_fn;
    return type;
}

// public FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property(Fuse.Animations.Change<float4> obj, Uno.UX.Selector name) :56
void FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__ctor_3_fn(FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property* __this, ::g::Fuse::Animations::Change* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :58
void FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__Get1_fn(FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 ret2;
    return *__retval = (::g::Fuse::Animations::Change__get_Value_fn(uPtr(uCast< ::g::Fuse::Animations::Change*>(obj, ::TYPES[4/*Fuse.Animations.Change<float4>*/])), &ret2), ret2), void();
}

// public FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property New(Fuse.Animations.Change<float4> obj, Uno.UX.Selector name) :56
void FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__New1_fn(::g::Fuse::Animations::Change* obj, ::g::Uno::UX::Selector* name, FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :57
void FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__get_Object_fn(FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :59
void FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__Set1_fn(FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    ::g::Fuse::Animations::Change__set_Value_fn(uPtr(uCast< ::g::Fuse::Animations::Change*>(obj, ::TYPES[4/*Fuse.Animations.Change<float4>*/])), uCRef(v_));
}

// public FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property(Fuse.Animations.Change<float4> obj, Uno.UX.Selector name) [instance] :56
void FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property::ctor_3(::g::Fuse::Animations::Change* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property New(Fuse.Animations.Change<float4> obj, Uno.UX.Selector name) [static] :56
FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property* FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property::New1(::g::Fuse::Animations::Change* obj, ::g::Uno::UX::Selector name)
{
    FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property* obj1 = (FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property*)uNew(FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.BasicTheme\1.3.0-rc2\.uno\ux13\Fuse.BasicTheme.unoproj.g.uno
// -------------------------------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsTextControl_TextColor_Property :20
// {
static void FuseBasicTheme_FuseControlsTextControl_TextColor_Property_build(uType* type)
{
    ::TYPES[5] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[5/*Fuse.Controls.TextControl*/], offsetof(FuseBasicTheme_FuseControlsTextControl_TextColor_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_FuseControlsTextControl_TextColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsTextControl_TextColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_FuseControlsTextControl_TextColor_Property", options);
    type->fp_build_ = FuseBasicTheme_FuseControlsTextControl_TextColor_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseBasicTheme_FuseControlsTextControl_TextColor_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseControlsTextControl_TextColor_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseBasicTheme_FuseControlsTextControl_TextColor_Property__Set1_fn;
    return type;
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :25
void FuseBasicTheme_FuseControlsTextControl_TextColor_Property__Get1_fn(FuseBasicTheme_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[5/*Fuse.Controls.TextControl*/]))->TextColor(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :24
void FuseBasicTheme_FuseControlsTextControl_TextColor_Property__get_Object_fn(FuseBasicTheme_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :26
void FuseBasicTheme_FuseControlsTextControl_TextColor_Property__Set1_fn(FuseBasicTheme_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[5/*Fuse.Controls.TextControl*/]))->TextColor(v_);
}
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.BasicTheme\1.3.0-rc2\.uno\ux13\Fuse.BasicTheme.unoproj.g.uno
// -------------------------------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsTextControl_Value_Property :11
// {
static void FuseBasicTheme_FuseControlsTextControl_Value_Property_build(uType* type)
{
    ::TYPES[5] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[5/*Fuse.Controls.TextControl*/], offsetof(FuseBasicTheme_FuseControlsTextControl_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_FuseControlsTextControl_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsTextControl_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_FuseControlsTextControl_Value_Property", options);
    type->fp_build_ = FuseBasicTheme_FuseControlsTextControl_Value_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseBasicTheme_FuseControlsTextControl_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseControlsTextControl_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseBasicTheme_FuseControlsTextControl_Value_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseBasicTheme_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :16
void FuseBasicTheme_FuseControlsTextControl_Value_Property__Get1_fn(FuseBasicTheme_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[5/*Fuse.Controls.TextControl*/]))->Value(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :15
void FuseBasicTheme_FuseControlsTextControl_Value_Property__get_Object_fn(FuseBasicTheme_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :17
void FuseBasicTheme_FuseControlsTextControl_Value_Property__Set1_fn(FuseBasicTheme_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[5/*Fuse.Controls.TextControl*/]))->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :18
void FuseBasicTheme_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseControlsTextControl_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.BasicTheme\1.3.0-rc2\.uno\ux13\Fuse.BasicTheme.unoproj.g.uno
// -------------------------------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property :94
// {
static void FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property_build(uType* type)
{
    ::TYPES[6] = ::g::Fuse::Controls::TextInputControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[6/*Fuse.Controls.TextInputControl*/], offsetof(FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property", options);
    type->fp_build_ = FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property__Set1_fn;
    return type;
}

// public FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property(Fuse.Controls.TextInputControl obj, Uno.UX.Selector name) :97
void FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property__ctor_3_fn(FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property* __this, ::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :99
void FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property__Get1_fn(FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::TextInputControl*>(obj, ::TYPES[6/*Fuse.Controls.TextInputControl*/]))->TextColor(), void();
}

// public FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property New(Fuse.Controls.TextInputControl obj, Uno.UX.Selector name) :97
void FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property__New1_fn(::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector* name, FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :98
void FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property__get_Object_fn(FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :100
void FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property__Set1_fn(FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::TextInputControl*>(obj, ::TYPES[6/*Fuse.Controls.TextInputControl*/]))->TextColor(v_);
}

// public FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property(Fuse.Controls.TextInputControl obj, Uno.UX.Selector name) [instance] :97
void FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property::ctor_3(::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property New(Fuse.Controls.TextInputControl obj, Uno.UX.Selector name) [static] :97
FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property* FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property::New1(::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector name)
{
    FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property* obj1 = (FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property*)uNew(FuseBasicTheme_FuseControlsTextInputControl_TextColor_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.BasicTheme\1.3.0-rc2\.uno\ux13\Fuse.BasicTheme.unoproj.g.uno
// -------------------------------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseDrawingSolidColor_Color_Property :28
// {
static void FuseBasicTheme_FuseDrawingSolidColor_Color_Property_build(uType* type)
{
    ::TYPES[7] = ::g::Fuse::Drawing::SolidColor_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[7/*Fuse.Drawing.SolidColor*/], offsetof(FuseBasicTheme_FuseDrawingSolidColor_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_FuseDrawingSolidColor_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseDrawingSolidColor_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_FuseDrawingSolidColor_Color_Property", options);
    type->fp_build_ = FuseBasicTheme_FuseDrawingSolidColor_Color_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseBasicTheme_FuseDrawingSolidColor_Color_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseDrawingSolidColor_Color_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseBasicTheme_FuseDrawingSolidColor_Color_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseBasicTheme_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseBasicTheme_FuseDrawingSolidColor_Color_Property(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) :31
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property__ctor_3_fn(FuseBasicTheme_FuseDrawingSolidColor_Color_Property* __this, ::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :33
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property__Get1_fn(FuseBasicTheme_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Drawing::SolidColor*>(obj, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color(), void();
}

// public FuseBasicTheme_FuseDrawingSolidColor_Color_Property New(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) :31
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property__New1_fn(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector* name, FuseBasicTheme_FuseDrawingSolidColor_Color_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseDrawingSolidColor_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :32
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property__get_Object_fn(FuseBasicTheme_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :34
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property__Set1_fn(FuseBasicTheme_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Drawing::SolidColor*>(obj, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->SetColor1(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :35
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseDrawingSolidColor_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseBasicTheme_FuseDrawingSolidColor_Color_Property(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) [instance] :31
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property::ctor_3(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseBasicTheme_FuseDrawingSolidColor_Color_Property New(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) [static] :31
FuseBasicTheme_FuseDrawingSolidColor_Color_Property* FuseBasicTheme_FuseDrawingSolidColor_Color_Property::New1(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector name)
{
    FuseBasicTheme_FuseDrawingSolidColor_Color_Property* obj1 = (FuseBasicTheme_FuseDrawingSolidColor_Color_Property*)uNew(FuseBasicTheme_FuseDrawingSolidColor_Color_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.BasicTheme\1.3.0-rc2\.uno\ux13\Fuse.BasicTheme.unoproj.g.uno
// -------------------------------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseDrawingStroke_Width_Property :86
// {
static void FuseBasicTheme_FuseDrawingStroke_Width_Property_build(uType* type)
{
    ::TYPES[8] = ::g::Fuse::Drawing::Stroke_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[8/*Fuse.Drawing.Stroke*/], offsetof(FuseBasicTheme_FuseDrawingStroke_Width_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_FuseDrawingStroke_Width_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseDrawingStroke_Width_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_FuseDrawingStroke_Width_Property", options);
    type->fp_build_ = FuseBasicTheme_FuseDrawingStroke_Width_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseBasicTheme_FuseDrawingStroke_Width_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseDrawingStroke_Width_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseBasicTheme_FuseDrawingStroke_Width_Property__Set1_fn;
    return type;
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :91
void FuseBasicTheme_FuseDrawingStroke_Width_Property__Get1_fn(FuseBasicTheme_FuseDrawingStroke_Width_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[8/*Fuse.Drawing.Stroke*/]))->Width(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :90
void FuseBasicTheme_FuseDrawingStroke_Width_Property__get_Object_fn(FuseBasicTheme_FuseDrawingStroke_Width_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :92
void FuseBasicTheme_FuseDrawingStroke_Width_Property__Set1_fn(FuseBasicTheme_FuseDrawingStroke_Width_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[8/*Fuse.Drawing.Stroke*/]))->Width(v_);
}
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.BasicTheme\1.3.0-rc2\.uno\ux13\Fuse.BasicTheme.unoproj.g.uno
// -------------------------------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseEffectsDropShadow_Color_Property :45
// {
static void FuseBasicTheme_FuseEffectsDropShadow_Color_Property_build(uType* type)
{
    ::TYPES[9] = ::g::Fuse::Effects::DropShadow_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[9/*Fuse.Effects.DropShadow*/], offsetof(FuseBasicTheme_FuseEffectsDropShadow_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_FuseEffectsDropShadow_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseEffectsDropShadow_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_FuseEffectsDropShadow_Color_Property", options);
    type->fp_build_ = FuseBasicTheme_FuseEffectsDropShadow_Color_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseBasicTheme_FuseEffectsDropShadow_Color_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseEffectsDropShadow_Color_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseBasicTheme_FuseEffectsDropShadow_Color_Property__Set1_fn;
    return type;
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :50
void FuseBasicTheme_FuseEffectsDropShadow_Color_Property__Get1_fn(FuseBasicTheme_FuseEffectsDropShadow_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Effects::DropShadow*>(obj, ::TYPES[9/*Fuse.Effects.DropShadow*/]))->Color(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :49
void FuseBasicTheme_FuseEffectsDropShadow_Color_Property__get_Object_fn(FuseBasicTheme_FuseEffectsDropShadow_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :51
void FuseBasicTheme_FuseEffectsDropShadow_Color_Property__Set1_fn(FuseBasicTheme_FuseEffectsDropShadow_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Effects::DropShadow*>(obj, ::TYPES[9/*Fuse.Effects.DropShadow*/]))->Color(v_);
}
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.BasicTheme\1.3.0-rc2\.uno\ux13\Fuse.BasicTheme.unoproj.g.uno
// -------------------------------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseElementsElement_Height_Property :102
// {
static void FuseBasicTheme_FuseElementsElement_Height_Property_build(uType* type)
{
    ::TYPES[10] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[10/*Fuse.Elements.Element*/], offsetof(FuseBasicTheme_FuseElementsElement_Height_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_FuseElementsElement_Height_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseElementsElement_Height_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_FuseElementsElement_Height_Property", options);
    type->fp_build_ = FuseBasicTheme_FuseElementsElement_Height_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseBasicTheme_FuseElementsElement_Height_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseElementsElement_Height_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseBasicTheme_FuseElementsElement_Height_Property__Set1_fn;
    return type;
}

// public FuseBasicTheme_FuseElementsElement_Height_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) :105
void FuseBasicTheme_FuseElementsElement_Height_Property__ctor_3_fn(FuseBasicTheme_FuseElementsElement_Height_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Uno.UX.Size Get(Uno.UX.PropertyObject obj) :107
void FuseBasicTheme_FuseElementsElement_Height_Property__Get1_fn(FuseBasicTheme_FuseElementsElement_Height_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Size* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[10/*Fuse.Elements.Element*/]))->Height(), void();
}

// public FuseBasicTheme_FuseElementsElement_Height_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) :105
void FuseBasicTheme_FuseElementsElement_Height_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, FuseBasicTheme_FuseElementsElement_Height_Property** __retval)
{
    *__retval = FuseBasicTheme_FuseElementsElement_Height_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :106
void FuseBasicTheme_FuseElementsElement_Height_Property__get_Object_fn(FuseBasicTheme_FuseElementsElement_Height_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Uno.UX.Size v, Uno.UX.IPropertyListener origin) :108
void FuseBasicTheme_FuseElementsElement_Height_Property__Set1_fn(FuseBasicTheme_FuseElementsElement_Height_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Size* v, uObject* origin)
{
    ::g::Uno::UX::Size v_ = *v;
    uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[10/*Fuse.Elements.Element*/]))->Height(v_);
}

// public FuseBasicTheme_FuseElementsElement_Height_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) [instance] :105
void FuseBasicTheme_FuseElementsElement_Height_Property::ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseBasicTheme_FuseElementsElement_Height_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) [static] :105
FuseBasicTheme_FuseElementsElement_Height_Property* FuseBasicTheme_FuseElementsElement_Height_Property::New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    FuseBasicTheme_FuseElementsElement_Height_Property* obj1 = (FuseBasicTheme_FuseElementsElement_Height_Property*)uNew(FuseBasicTheme_FuseElementsElement_Height_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.BasicTheme\1.3.0-rc2\.uno\ux13\Fuse.BasicTheme.unoproj.g.uno
// -------------------------------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseElementsElement_Opacity_Property :61
// {
static void FuseBasicTheme_FuseElementsElement_Opacity_Property_build(uType* type)
{
    ::TYPES[10] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[10/*Fuse.Elements.Element*/], offsetof(FuseBasicTheme_FuseElementsElement_Opacity_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_FuseElementsElement_Opacity_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseElementsElement_Opacity_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_FuseElementsElement_Opacity_Property", options);
    type->fp_build_ = FuseBasicTheme_FuseElementsElement_Opacity_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseBasicTheme_FuseElementsElement_Opacity_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseElementsElement_Opacity_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseBasicTheme_FuseElementsElement_Opacity_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseBasicTheme_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :66
void FuseBasicTheme_FuseElementsElement_Opacity_Property__Get1_fn(FuseBasicTheme_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[10/*Fuse.Elements.Element*/]))->Opacity(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :65
void FuseBasicTheme_FuseElementsElement_Opacity_Property__get_Object_fn(FuseBasicTheme_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :67
void FuseBasicTheme_FuseElementsElement_Opacity_Property__Set1_fn(FuseBasicTheme_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[10/*Fuse.Elements.Element*/]))->SetOpacity(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :68
void FuseBasicTheme_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseElementsElement_Opacity_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.BasicTheme\1.3.0-rc2\.uno\ux13\Fuse.BasicTheme.unoproj.g.uno
// -------------------------------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseElementsElement_Width_Property :70
// {
static void FuseBasicTheme_FuseElementsElement_Width_Property_build(uType* type)
{
    ::TYPES[10] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[10/*Fuse.Elements.Element*/], offsetof(FuseBasicTheme_FuseElementsElement_Width_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_FuseElementsElement_Width_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseElementsElement_Width_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_FuseElementsElement_Width_Property", options);
    type->fp_build_ = FuseBasicTheme_FuseElementsElement_Width_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseBasicTheme_FuseElementsElement_Width_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseElementsElement_Width_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseBasicTheme_FuseElementsElement_Width_Property__Set1_fn;
    return type;
}

// public override sealed Uno.UX.Size Get(Uno.UX.PropertyObject obj) :75
void FuseBasicTheme_FuseElementsElement_Width_Property__Get1_fn(FuseBasicTheme_FuseElementsElement_Width_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Size* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[10/*Fuse.Elements.Element*/]))->Width(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :74
void FuseBasicTheme_FuseElementsElement_Width_Property__get_Object_fn(FuseBasicTheme_FuseElementsElement_Width_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Uno.UX.Size v, Uno.UX.IPropertyListener origin) :76
void FuseBasicTheme_FuseElementsElement_Width_Property__Set1_fn(FuseBasicTheme_FuseElementsElement_Width_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Size* v, uObject* origin)
{
    ::g::Uno::UX::Size v_ = *v;
    uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[10/*Fuse.Elements.Element*/]))->Width(v_);
}
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.BasicTheme\1.3.0-rc2\.uno\ux13\Fuse.BasicTheme.unoproj.g.uno
// -------------------------------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseTranslation_X_Property :78
// {
static void FuseBasicTheme_FuseTranslation_X_Property_build(uType* type)
{
    ::TYPES[11] = ::g::Fuse::Translation_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[11/*Fuse.Translation*/], offsetof(FuseBasicTheme_FuseTranslation_X_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_FuseTranslation_X_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseTranslation_X_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_FuseTranslation_X_Property", options);
    type->fp_build_ = FuseBasicTheme_FuseTranslation_X_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseBasicTheme_FuseTranslation_X_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseTranslation_X_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseBasicTheme_FuseTranslation_X_Property__Set1_fn;
    return type;
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :83
void FuseBasicTheme_FuseTranslation_X_Property__Get1_fn(FuseBasicTheme_FuseTranslation_X_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Translation*>(obj, ::TYPES[11/*Fuse.Translation*/]))->X(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :82
void FuseBasicTheme_FuseTranslation_X_Property__get_Object_fn(FuseBasicTheme_FuseTranslation_X_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :84
void FuseBasicTheme_FuseTranslation_X_Property__Set1_fn(FuseBasicTheme_FuseTranslation_X_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Translation*>(obj, ::TYPES[11/*Fuse.Translation*/]))->X(v_);
}
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.BasicTheme\1.3.0-rc2\.uno\ux13\Fuse.BasicTheme.unoproj.g.uno
// -------------------------------------------------------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseVisual_IsEnabled_Property :37
// {
static void FuseBasicTheme_FuseVisual_IsEnabled_Property_build(uType* type)
{
    ::TYPES[12] = ::g::Fuse::Visual_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[12/*Fuse.Visual*/], offsetof(FuseBasicTheme_FuseVisual_IsEnabled_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_FuseVisual_IsEnabled_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseVisual_IsEnabled_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_FuseVisual_IsEnabled_Property", options);
    type->fp_build_ = FuseBasicTheme_FuseVisual_IsEnabled_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseBasicTheme_FuseVisual_IsEnabled_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseVisual_IsEnabled_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseBasicTheme_FuseVisual_IsEnabled_Property__Set1_fn;
    return type;
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :42
void FuseBasicTheme_FuseVisual_IsEnabled_Property__Get1_fn(FuseBasicTheme_FuseVisual_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Visual*>(obj, ::TYPES[12/*Fuse.Visual*/]))->IsEnabled(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :41
void FuseBasicTheme_FuseVisual_IsEnabled_Property__get_Object_fn(FuseBasicTheme_FuseVisual_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :43
void FuseBasicTheme_FuseVisual_IsEnabled_Property__Set1_fn(FuseBasicTheme_FuseVisual_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::Visual*>(obj, ::TYPES[12/*Fuse.Visual*/]))->IsEnabled(v_);
}
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.Controls\1.3.0-rc2\.uno\package
// --------------------------------------------------------------------------------

// public static generated class FuseControls_bundle :0
// {
// static FuseControls_bundle() :0
static void FuseControls_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof()->Init();
    FuseControls_bundle::SolidRectangle2f148815_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[12/*"uniform mat...*/], ::STRINGS[13/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[23/*"o"*/], ::STRINGS[24/*"p"*/], ::STRINGS[25/*"q"*/], ::STRINGS[26/*"t"*/]));
    FuseControls_bundle::SolidRectangle7463714b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[27/*"uniform mat...*/], ::STRINGS[28/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[20/*"l"*/]));
    FuseControls_bundle::SolidRectangled1bbfcb0_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[29/*"uniform mat...*/], ::STRINGS[30/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/]));
    FuseControls_bundle::Viewportd3ce851b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[31/*"uniform mat...*/], ::STRINGS[32/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[14/*"e"*/]));
}

static void FuseControls_bundle_build(uType* type)
{
    ::STRINGS[12] = uString::Const("uniform mat4 q,d;uniform vec2 e,f,g,h,i,k,j;attribute vec2 a;varying vec2 r,s;void main(){vec2 u=((((e*(false?vec2(a.x,float(1)-a.y):a))-f)/g)*h)+i;r=k+(u*j);s=u;gl_Position=d*(q*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[13] = uString::Const("uniform vec2 m,l;uniform vec4 n;uniform float o,p;uniform sampler2D t;varying vec2 r,s;void main(){vec4 u=(c?vec4(float(0)):texture2D(t,b?(m+(fract(r)*l)):s))*n;gl_FragColor=(vec4(u.xyz*u.w,u.w)*o)*p;}");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[14] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[15] = uString::Const("g");
    ::STRINGS[16] = uString::Const("h");
    ::STRINGS[17] = uString::Const("i");
    ::STRINGS[18] = uString::Const("j");
    ::STRINGS[19] = uString::Const("k");
    ::STRINGS[20] = uString::Const("l");
    ::STRINGS[21] = uString::Const("m");
    ::STRINGS[22] = uString::Const("n");
    ::STRINGS[23] = uString::Const("o");
    ::STRINGS[24] = uString::Const("p");
    ::STRINGS[25] = uString::Const("q");
    ::STRINGS[26] = uString::Const("t");
    ::STRINGS[27] = uString::Const("uniform mat4 g,b;uniform vec2 c,d,i;uniform vec4 h;uniform float j;attribute vec2 a;varying float k;float m(vec2 n,vec2 o,vec2 p,float q){vec2 r=(n*c)-o;float s=dot(r,p)/q;return (s-d.x)/d.y;}void main(){k=m(false?vec2(a.x,float(1)-a.y):a,h.xy,i,j);gl_Position=b*(g*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[28] = uString::Const("uniform float e,f;uniform sampler2D l;varying float k;void main(){gl_FragColor=(texture2D(l,vec2(k,.5))*e)*f;}");
    ::STRINGS[29] = uString::Const("uniform mat4 d,b;attribute vec2 a;void main(){gl_Position=b*(d*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[30] = uString::Const("uniform vec4 c;void main(){gl_FragColor=c;}");
    ::STRINGS[31] = uString::Const("uniform mat4 c,b;attribute vec2 a;varying vec2 d;void main(){d=true?vec2(a.x,float(1)-a.y):a;gl_Position=b*(c*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[32] = uString::Const("uniform sampler2D e;varying vec2 d;void main(){gl_FragColor=texture2D(e,d);}");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseControls_bundle::SolidRectangle2f148815_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseControls_bundle::SolidRectangle7463714b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseControls_bundle::SolidRectangled1bbfcb0_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseControls_bundle::Viewportd3ce851b_, uFieldFlagsStatic);
}

uClassType* FuseControls_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControls_bundle", options);
    type->fp_build_ = FuseControls_bundle_build;
    type->fp_cctor_ = FuseControls_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangle2f148815_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangle7463714b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangled1bbfcb0_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::Viewportd3ce851b_;
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.3.0-rc2\.uno\package
// ---------------------------------------------------------------------------------------

// public static generated class FuseControlsNative_bundle :0
// {
// static FuseControlsNative_bundle() :0
static void FuseControlsNative_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof()->Init();
    FuseControlsNative_bundle::Blitter65ac1d08_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[33/*"uniform vec...*/], ::STRINGS[34/*"uniform sam...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[16/*"h"*/]));
}

static void FuseControlsNative_bundle_build(uType* type)
{
    ::STRINGS[33] = uString::Const("uniform vec2 d,c;uniform mat4 e;attribute vec2 a;varying vec2 f,g;void main(){f=vec2(a.x,1.-a.y);g=a;gl_Position=e*vec4(d+(a*c),0.,1.);}");
    ::STRINGS[34] = uString::Const("uniform sampler2D h;varying vec2 f,g;void main(){gl_FragColor=b?texture2D(h,f):texture2D(h,g);}");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[14] = uString::Const("e");
    ::STRINGS[16] = uString::Const("h");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseControlsNative_bundle::Blitter65ac1d08_, uFieldFlagsStatic);
}

uClassType* FuseControlsNative_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControlsNative_bundle", options);
    type->fp_build_ = FuseControlsNative_bundle_build;
    type->fp_cctor_ = FuseControlsNative_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsNative_bundle::Blitter65ac1d08_;
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.Controls.Navigation\1.3.0-rc2\.uno\ux13\Fuse.Controls.Navigation.unoproj.g.uno
// -------------------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property :10
// {
static void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property_build(uType* type)
{
    ::TYPES[13] = ::g::Fuse::Controls::Panel_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[13/*Fuse.Controls.Panel*/], offsetof(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property", options);
    type->fp_build_ = FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__Set1_fn;
    return type;
}

// public FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property(Fuse.Controls.Panel obj, Uno.UX.Selector name) :13
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__ctor_3_fn(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* __this, ::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :15
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__Get1_fn(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Panel*>(obj, ::TYPES[13/*Fuse.Controls.Panel*/]))->IsFrozen(), void();
}

// public FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property New(Fuse.Controls.Panel obj, Uno.UX.Selector name) :13
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__New1_fn(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector* name, FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property** __retval)
{
    *__retval = FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :14
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__get_Object_fn(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :16
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__Set1_fn(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::Panel*>(obj, ::TYPES[13/*Fuse.Controls.Panel*/]))->IsFrozen(v_);
}

// public FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property(Fuse.Controls.Panel obj, Uno.UX.Selector name) [instance] :13
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property::ctor_3(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property New(Fuse.Controls.Panel obj, Uno.UX.Selector name) [static] :13
FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property::New1(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* obj1 = (FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property*)uNew(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.Controls.Navigation\1.3.0-rc2\.uno\ux13\Fuse.Controls.Navigation.unoproj.g.uno
// -------------------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsNavigation_FuseControlsShape_Color_Property :1
// {
static void FuseControlsNavigation_FuseControlsShape_Color_Property_build(uType* type)
{
    ::TYPES[14] = ::g::Fuse::Controls::Shape_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[14/*Fuse.Controls.Shape*/], offsetof(FuseControlsNavigation_FuseControlsShape_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsNavigation_FuseControlsShape_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsNavigation_FuseControlsShape_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsNavigation_FuseControlsShape_Color_Property", options);
    type->fp_build_ = FuseControlsNavigation_FuseControlsShape_Color_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsNavigation_FuseControlsShape_Color_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsNavigation_FuseControlsShape_Color_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsNavigation_FuseControlsShape_Color_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsNavigation_FuseControlsShape_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsNavigation_FuseControlsShape_Color_Property(Fuse.Controls.Shape obj, Uno.UX.Selector name) :4
void FuseControlsNavigation_FuseControlsShape_Color_Property__ctor_3_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, ::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :6
void FuseControlsNavigation_FuseControlsShape_Color_Property__Get1_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Shape*>(obj, ::TYPES[14/*Fuse.Controls.Shape*/]))->Color(), void();
}

// public FuseControlsNavigation_FuseControlsShape_Color_Property New(Fuse.Controls.Shape obj, Uno.UX.Selector name) :4
void FuseControlsNavigation_FuseControlsShape_Color_Property__New1_fn(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name, FuseControlsNavigation_FuseControlsShape_Color_Property** __retval)
{
    *__retval = FuseControlsNavigation_FuseControlsShape_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :5
void FuseControlsNavigation_FuseControlsShape_Color_Property__get_Object_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :7
void FuseControlsNavigation_FuseControlsShape_Color_Property__Set1_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::Shape*>(obj, ::TYPES[14/*Fuse.Controls.Shape*/]))->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :8
void FuseControlsNavigation_FuseControlsShape_Color_Property__get_SupportsOriginSetter_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsNavigation_FuseControlsShape_Color_Property(Fuse.Controls.Shape obj, Uno.UX.Selector name) [instance] :4
void FuseControlsNavigation_FuseControlsShape_Color_Property::ctor_3(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsNavigation_FuseControlsShape_Color_Property New(Fuse.Controls.Shape obj, Uno.UX.Selector name) [static] :4
FuseControlsNavigation_FuseControlsShape_Color_Property* FuseControlsNavigation_FuseControlsShape_Color_Property::New1(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsNavigation_FuseControlsShape_Color_Property* obj1 = (FuseControlsNavigation_FuseControlsShape_Color_Property*)uNew(FuseControlsNavigation_FuseControlsShape_Color_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.Controls.Panels\1.3.0-rc2\.uno\package
// ---------------------------------------------------------------------------------------

// public static generated class FuseControlsPanels_bundle :0
// {
// static FuseControlsPanels_bundle() :0
static void FuseControlsPanels_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof()->Init();
    FuseControlsPanels_bundle::FreezeDrawable1e2faccf_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[35/*"uniform mat...*/], ::STRINGS[36/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"f"*/]));
}

static void FuseControlsPanels_bundle_build(uType* type)
{
    ::STRINGS[35] = uString::Const("uniform mat4 d,b;attribute vec2 a;varying vec2 e;void main(){e=true?vec2(a.x,float(1)-a.y):a;gl_Position=b*(d*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[36] = uString::Const("uniform float c;uniform sampler2D f;varying vec2 e;void main(){vec4 g=texture2D(f,e);gl_FragColor=vec4(g.xyz,g.w*c);}");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("f");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseControlsPanels_bundle::FreezeDrawable1e2faccf_, uFieldFlagsStatic);
}

uClassType* FuseControlsPanels_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControlsPanels_bundle", options);
    type->fp_build_ = FuseControlsPanels_bundle_build;
    type->fp_cctor_ = FuseControlsPanels_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsPanels_bundle::FreezeDrawable1e2faccf_;
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\1.3.0-rc2\.uno\ux13\Fuse.Controls.Primitives.unoproj.g.uno
// -------------------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text :1
// {
// static generated FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text() :1
static void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::Singleton_ = FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::New1();
    FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"Text"*/]);
}

static void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text_build(uType* type)
{
    ::STRINGS[7] = uString::Const("Text");
    ::TYPES[1] = ::g::Fuse::Controls::ButtonBase_typeof();
    ::TYPES[2] = ::g::Uno::String_typeof();
    ::TYPES[3] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text", options);
    type->fp_build_ = FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text_build;
    type->fp_ctor_ = (void*)FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__New1_fn;
    type->fp_cctor_ = FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_SupportsOriginSetter_fn;
    return type;
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text() :1
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__ctor_1_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :7
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__GetAsObject_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::ButtonBase*>(obj, ::TYPES[1/*Fuse.Controls.ButtonBase*/]))->Text(), void();
}

// public override sealed Uno.UX.Selector get_Name() :4
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_Name_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::_name_, void();
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text New() :1
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__New1_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text** __retval)
{
    *__retval = FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::New1();
}

// public override sealed Uno.Type get_PropertyType() :6
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_PropertyType_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this, uType** __retval)
{
    return *__retval = ::TYPES[2/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :8
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__SetAsObject_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::ButtonBase*>(obj, ::TYPES[1/*Fuse.Controls.ButtonBase*/]))->SetText(uCast<uString*>(v, ::TYPES[2/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :9
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_SupportsOriginSetter_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::Singleton_;

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text() [instance] :1
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::ctor_1()
{
    ctor_();
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text New() [static] :1
FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::New1()
{
    FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* obj1 = (FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text*)uNew(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\1.3.0-rc2\.uno\ux13\Fuse.Controls.Primitives.unoproj.g.uno
// -------------------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value :11
// {
// static generated FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value() :11
static void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::Singleton_ = FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::New1();
    FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[37/*"Value"*/]);
}

static void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value_build(uType* type)
{
    ::STRINGS[37] = uString::Const("Value");
    ::TYPES[15] = ::g::Fuse::Controls::ToggleControl_typeof();
    ::TYPES[3] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value", options);
    type->fp_build_ = FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value_build;
    type->fp_ctor_ = (void*)FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__New1_fn;
    type->fp_cctor_ = FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_SupportsOriginSetter_fn;
    return type;
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value() :11
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__ctor_1_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :17
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__GetAsObject_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uBox(::g::Uno::Bool_typeof(), uPtr(uCast< ::g::Fuse::Controls::ToggleControl*>(obj, ::TYPES[15/*Fuse.Controls.ToggleControl*/]))->Value()), void();
}

// public override sealed Uno.UX.Selector get_Name() :14
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_Name_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::_name_, void();
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value New() :11
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__New1_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value** __retval)
{
    *__retval = FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::New1();
}

// public override sealed Uno.Type get_PropertyType() :16
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_PropertyType_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Bool_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :18
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__SetAsObject_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::ToggleControl*>(obj, ::TYPES[15/*Fuse.Controls.ToggleControl*/]))->SetValue(uUnbox<bool>(::g::Uno::Bool_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter() :19
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_SupportsOriginSetter_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::Singleton_;

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value() [instance] :11
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::ctor_1()
{
    ctor_();
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value New() [static] :11
FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::New1()
{
    FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* obj1 = (FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value*)uNew(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\1.3.0-rc2\.uno\package
// -------------------------------------------------------------------------------------------

// public static generated class FuseControlsPrimitives_bundle :0
// {
// static FuseControlsPrimitives_bundle() :0
static void FuseControlsPrimitives_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof()->Init();
    FuseControlsPrimitives_bundle::ImageElementDraw7660063a_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[38/*"uniform mat...*/], ::STRINGS[39/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[16/*"h"*/]));
}

static void FuseControlsPrimitives_bundle_build(uType* type)
{
    ::STRINGS[38] = uString::Const("uniform mat4 f,b;uniform vec2 c,d;attribute vec2 a;varying vec2 g;void main(){g=(a*c)+d;gl_Position=b*(f*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[39] = uString::Const("uniform vec4 e;uniform sampler2D h;varying vec2 g;void main(){gl_FragColor=texture2D(h,g)*e;}");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[14] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[16] = uString::Const("h");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseControlsPrimitives_bundle::ImageElementDraw7660063a_, uFieldFlagsStatic);
}

uClassType* FuseControlsPrimitives_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControlsPrimitives_bundle", options);
    type->fp_build_ = FuseControlsPrimitives_bundle_build;
    type->fp_cctor_ = FuseControlsPrimitives_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsPrimitives_bundle::ImageElementDraw7660063a_;
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\1.3.0-rc2\.uno\ux13\Fuse.Controls.Primitives.unoproj.g.uno
// -------------------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsShape_Fill_Property :47
// {
static void FuseControlsPrimitives_FuseControlsShape_Fill_Property_build(uType* type)
{
    ::TYPES[14] = ::g::Fuse::Controls::Shape_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[14/*Fuse.Controls.Shape*/], offsetof(FuseControlsPrimitives_FuseControlsShape_Fill_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsShape_Fill_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsShape_Fill_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsShape_Fill_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseControlsShape_Fill_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseControlsShape_Fill_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsShape_Fill_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseControlsShape_Fill_Property__Set1_fn;
    return type;
}

// public override sealed Fuse.Drawing.Brush Get(Uno.UX.PropertyObject obj) :52
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__Get1_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Shape*>(obj, ::TYPES[14/*Fuse.Controls.Shape*/]))->Fill(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :51
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Drawing.Brush v, Uno.UX.IPropertyListener origin) :53
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__Set1_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::Shape*>(obj, ::TYPES[14/*Fuse.Controls.Shape*/]))->Fill(v);
}
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\1.3.0-rc2\.uno\ux13\Fuse.Controls.Primitives.unoproj.g.uno
// -------------------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property :30
// {
static void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property_build(uType* type)
{
    ::TYPES[5] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[5/*Fuse.Controls.TextControl*/], offsetof(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__Set1_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :33
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__ctor_3_fn(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :35
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__Get1_fn(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[5/*Fuse.Controls.TextControl*/]))->TextColor(), void();
}

// public FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :33
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :34
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :36
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__Set1_fn(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[5/*Fuse.Controls.TextControl*/]))->TextColor(v_);
}

// public FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [instance] :33
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property::ctor_3(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [static] :33
FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property::New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* obj1 = (FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property*)uNew(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\1.3.0-rc2\.uno\ux13\Fuse.Controls.Primitives.unoproj.g.uno
// -------------------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsTextControl_Value_Property :21
// {
static void FuseControlsPrimitives_FuseControlsTextControl_Value_Property_build(uType* type)
{
    ::TYPES[5] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[5/*Fuse.Controls.TextControl*/], offsetof(FuseControlsPrimitives_FuseControlsTextControl_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsTextControl_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsTextControl_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsTextControl_Value_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseControlsTextControl_Value_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseControlsTextControl_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsTextControl_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseControlsTextControl_Value_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :24
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__ctor_3_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :26
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__Get1_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[5/*Fuse.Controls.TextControl*/]))->Value(), void();
}

// public FuseControlsPrimitives_FuseControlsTextControl_Value_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :24
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsTextControl_Value_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsTextControl_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :25
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :27
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__Set1_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[5/*Fuse.Controls.TextControl*/]))->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :28
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [instance] :24
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property::ctor_3(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsTextControl_Value_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [static] :24
FuseControlsPrimitives_FuseControlsTextControl_Value_Property* FuseControlsPrimitives_FuseControlsTextControl_Value_Property::New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsTextControl_Value_Property* obj1 = (FuseControlsPrimitives_FuseControlsTextControl_Value_Property*)uNew(FuseControlsPrimitives_FuseControlsTextControl_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\1.3.0-rc2\.uno\ux13\Fuse.Controls.Primitives.unoproj.g.uno
// -------------------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property :97
// {
static void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_build(uType* type)
{
    ::TYPES[7] = ::g::Fuse::Drawing::SolidColor_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[7/*Fuse.Drawing.SolidColor*/], offsetof(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :102
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Get1_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Drawing::SolidColor*>(obj, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->Color(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :101
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :103
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Set1_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Drawing::SolidColor*>(obj, ::TYPES[7/*Fuse.Drawing.SolidColor*/]))->SetColor1(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :104
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\1.3.0-rc2\.uno\ux13\Fuse.Controls.Primitives.unoproj.g.uno
// -------------------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseDrawingStroke_Brush_Property :55
// {
static void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_build(uType* type)
{
    ::TYPES[8] = ::g::Fuse::Drawing::Stroke_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[8/*Fuse.Drawing.Stroke*/], offsetof(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseDrawingStroke_Brush_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Set1_fn;
    return type;
}

// public override sealed Fuse.Drawing.Brush Get(Uno.UX.PropertyObject obj) :60
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Get1_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[8/*Fuse.Drawing.Stroke*/]))->Brush(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :59
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Drawing.Brush v, Uno.UX.IPropertyListener origin) :61
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Set1_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[8/*Fuse.Drawing.Stroke*/]))->Brush(v);
}
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\1.3.0-rc2\.uno\ux13\Fuse.Controls.Primitives.unoproj.g.uno
// -------------------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseDrawingStroke_Color_Property :79
// {
static void FuseControlsPrimitives_FuseDrawingStroke_Color_Property_build(uType* type)
{
    ::TYPES[8] = ::g::Fuse::Drawing::Stroke_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[8/*Fuse.Drawing.Stroke*/], offsetof(FuseControlsPrimitives_FuseDrawingStroke_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingStroke_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseDrawingStroke_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseDrawingStroke_Color_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseDrawingStroke_Color_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :84
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Get1_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[8/*Fuse.Drawing.Stroke*/]))->Color(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :83
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :85
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Set1_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[8/*Fuse.Drawing.Stroke*/]))->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :86
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\1.3.0-rc2\.uno\ux13\Fuse.Controls.Primitives.unoproj.g.uno
// -------------------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property :63
// {
static void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_build(uType* type)
{
    ::TYPES[9] = ::g::Fuse::Effects::DropShadow_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[9/*Fuse.Effects.DropShadow*/], offsetof(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Set1_fn;
    return type;
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :68
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Get1_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Effects::DropShadow*>(obj, ::TYPES[9/*Fuse.Effects.DropShadow*/]))->Distance(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :67
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__get_Object_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :69
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Set1_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Effects::DropShadow*>(obj, ::TYPES[9/*Fuse.Effects.DropShadow*/]))->Distance(v_);
}
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\1.3.0-rc2\.uno\ux13\Fuse.Controls.Primitives.unoproj.g.uno
// -------------------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property :71
// {
static void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_build(uType* type)
{
    ::TYPES[9] = ::g::Fuse::Effects::DropShadow_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[9/*Fuse.Effects.DropShadow*/], offsetof(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Set1_fn;
    return type;
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :76
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Get1_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Effects::DropShadow*>(obj, ::TYPES[9/*Fuse.Effects.DropShadow*/]))->Size(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :75
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__get_Object_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :77
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Set1_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Effects::DropShadow*>(obj, ::TYPES[9/*Fuse.Effects.DropShadow*/]))->Size(v_);
}
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\1.3.0-rc2\.uno\ux13\Fuse.Controls.Primitives.unoproj.g.uno
// -------------------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseElementsElement_Opacity_Property :38
// {
static void FuseControlsPrimitives_FuseElementsElement_Opacity_Property_build(uType* type)
{
    ::TYPES[10] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[10/*Fuse.Elements.Element*/], offsetof(FuseControlsPrimitives_FuseElementsElement_Opacity_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseElementsElement_Opacity_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseElementsElement_Opacity_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseElementsElement_Opacity_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseElementsElement_Opacity_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseElementsElement_Opacity_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseElementsElement_Opacity_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseElementsElement_Opacity_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseElementsElement_Opacity_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) :41
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__ctor_3_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :43
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__Get1_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[10/*Fuse.Elements.Element*/]))->Opacity(), void();
}

// public FuseControlsPrimitives_FuseElementsElement_Opacity_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) :41
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseElementsElement_Opacity_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseElementsElement_Opacity_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :42
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__get_Object_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :44
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__Set1_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[10/*Fuse.Elements.Element*/]))->SetOpacity(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :45
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseElementsElement_Opacity_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) [instance] :41
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property::ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseElementsElement_Opacity_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) [static] :41
FuseControlsPrimitives_FuseElementsElement_Opacity_Property* FuseControlsPrimitives_FuseElementsElement_Opacity_Property::New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseElementsElement_Opacity_Property* obj1 = (FuseControlsPrimitives_FuseElementsElement_Opacity_Property*)uNew(FuseControlsPrimitives_FuseElementsElement_Opacity_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\1.3.0-rc2\.uno\ux13\Fuse.Controls.Primitives.unoproj.g.uno
// -------------------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property :88
// {
static void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_build(uType* type)
{
    ::TYPES[16] = ::g::Fuse::Gestures::SwipeGesture_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[16/*Fuse.Gestures.SwipeGesture*/], offsetof(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :93
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Get1_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Gestures::SwipeGesture*>(obj, ::TYPES[16/*Fuse.Gestures.SwipeGesture*/]))->IsActive(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :92
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_Object_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :94
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Set1_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::Gestures::SwipeGesture*>(obj, ::TYPES[16/*Fuse.Gestures.SwipeGesture*/]))->SetIsActive(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :95
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.Controls.ScrollView\1.3.0-rc2\.uno\ux13\Fuse.Controls.ScrollView.unoproj.g.uno
// -------------------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView :1
// {
// static generated FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView() :1
static void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::Singleton_ = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::New1();
    FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[40/*"KeepFocusIn...*/]);
}

static void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView_build(uType* type)
{
    ::STRINGS[40] = uString::Const("KeepFocusInView");
    ::TYPES[17] = ::g::Fuse::Controls::ScrollViewBase_typeof();
    ::TYPES[3] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView", options);
    type->fp_build_ = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView_build;
    type->fp_ctor_ = (void*)FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__New1_fn;
    type->fp_cctor_ = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__SetAsObject_fn;
    return type;
}

// public generated FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView() :1
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__ctor_1_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :7
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__GetAsObject_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uBox(::g::Uno::Bool_typeof(), uPtr(uCast< ::g::Fuse::Controls::ScrollViewBase*>(obj, ::TYPES[17/*Fuse.Controls.ScrollViewBase*/]))->KeepFocusInView()), void();
}

// public override sealed Uno.UX.Selector get_Name() :4
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__get_Name_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::_name_, void();
}

// public generated FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView New() :1
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__New1_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView** __retval)
{
    *__retval = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::New1();
}

// public override sealed Uno.Type get_PropertyType() :6
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__get_PropertyType_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Bool_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :8
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__SetAsObject_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::ScrollViewBase*>(obj, ::TYPES[17/*Fuse.Controls.ScrollViewBase*/]))->KeepFocusInView(uUnbox<bool>(::g::Uno::Bool_typeof(), v));
}

::g::Uno::UX::Selector FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::Singleton_;

// public generated FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView() [instance] :1
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::ctor_1()
{
    ctor_();
}

// public generated FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView New() [static] :1
FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::New1()
{
    FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* obj1 = (FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView*)uNew(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.Controls.ScrollView\1.3.0-rc2\.uno\ux13\Fuse.Controls.ScrollView.unoproj.g.uno
// -------------------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_FuseTriggersWhileBool_Value_Property :10
// {
static void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property_build(uType* type)
{
    ::TYPES[18] = ::g::Fuse::Triggers::WhileBool_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[18/*Fuse.Triggers.WhileBool*/], offsetof(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseTriggersWhileBool_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsScrollView_FuseTriggersWhileBool_Value_Property", options);
    type->fp_build_ = FuseControlsScrollView_FuseTriggersWhileBool_Value_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__Set1_fn;
    return type;
}

// public FuseControlsScrollView_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) :13
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__ctor_3_fn(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* __this, ::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :15
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__Get1_fn(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Triggers::WhileBool*>(obj, ::TYPES[18/*Fuse.Triggers.WhileBool*/]))->Value1(), void();
}

// public FuseControlsScrollView_FuseTriggersWhileBool_Value_Property New(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) :13
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__New1_fn(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name, FuseControlsScrollView_FuseTriggersWhileBool_Value_Property** __retval)
{
    *__retval = FuseControlsScrollView_FuseTriggersWhileBool_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :14
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__get_Object_fn(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :16
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__Set1_fn(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::Triggers::WhileBool*>(obj, ::TYPES[18/*Fuse.Triggers.WhileBool*/]))->Value1(v_);
}

// public FuseControlsScrollView_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) [instance] :13
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property::ctor_3(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsScrollView_FuseTriggersWhileBool_Value_Property New(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) [static] :13
FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* FuseControlsScrollView_FuseTriggersWhileBool_Value_Property::New1(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* obj1 = (FuseControlsScrollView_FuseTriggersWhileBool_Value_Property*)uNew(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.Controls.Video\1.3.0-rc2\.uno\package
// --------------------------------------------------------------------------------------

// public static generated class FuseControlsVideo_bundle :0
// {
// static FuseControlsVideo_bundle() :0
static void FuseControlsVideo_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof()->Init();
    FuseControlsVideo_bundle::Scale9Rectangleda875692_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[41/*"uniform flo...*/], ::STRINGS[42/*"uniform sam...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[23/*"o"*/], ::STRINGS[25/*"q"*/]));
    FuseControlsVideo_bundle::VideoDrawElement5c829975_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[43/*"uniform mat...*/], ::STRINGS[44/*"uniform sam...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[16/*"h"*/]));
}

static void FuseControlsVideo_bundle_build(uType* type)
{
    ::STRINGS[41] = uString::Const("uniform float c,d,e,f,g,h,k,l,m,n;uniform mat4 i,j;uniform vec2 o;attribute vec3 a,b;varying vec2 p;void main(){p=vec2(((a.x*c)+(a.y*k))+(a.z*l),((b.x*f)+(b.y*m))+(b.z*n))/o;gl_Position=j*(i*vec4(vec2(((a.x*c)+(a.y*d))+(a.z*e),((b.x*f)+(b.y*g))+(b.z*h)),float(0),float(1)));}");
    ::STRINGS[42] = uString::Const("uniform samplerExternalOES q;varying vec2 p;void main(){gl_FragColor=vec4(texture2D(q,p).xyz,1.);}");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[14] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[15] = uString::Const("g");
    ::STRINGS[16] = uString::Const("h");
    ::STRINGS[17] = uString::Const("i");
    ::STRINGS[18] = uString::Const("j");
    ::STRINGS[19] = uString::Const("k");
    ::STRINGS[20] = uString::Const("l");
    ::STRINGS[21] = uString::Const("m");
    ::STRINGS[22] = uString::Const("n");
    ::STRINGS[23] = uString::Const("o");
    ::STRINGS[25] = uString::Const("q");
    ::STRINGS[43] = uString::Const("uniform mat4 f,c;uniform vec2 d,e;attribute vec2 a;varying vec2 g;vec2 i(vec2 j){vec2 k=j.xy;if(b==1)return vec2(k.y,1.-k.x);else if(b==2)return vec2(1.-k.x,1.-k.y);else if(b==3)return vec2(1.-k.y,k.x);else return k;}void main(){g=i((a*d)+e);gl_Position=c*(f*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[44] = uString::Const("uniform samplerExternalOES h;varying vec2 g;void main(){gl_FragColor=vec4(texture2D(h,g).xyz,1.);}");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseControlsVideo_bundle::Scale9Rectangleda875692_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseControlsVideo_bundle::VideoDrawElement5c829975_, uFieldFlagsStatic);
}

uClassType* FuseControlsVideo_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControlsVideo_bundle", options);
    type->fp_build_ = FuseControlsVideo_bundle_build;
    type->fp_cctor_ = FuseControlsVideo_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsVideo_bundle::Scale9Rectangleda875692_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsVideo_bundle::VideoDrawElement5c829975_;
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.Drawing\1.3.0-rc2\.uno\package
// -------------------------------------------------------------------------------

// public static generated class FuseDrawing_bundle :0
// {
// static FuseDrawing_bundle() :0
static void FuseDrawing_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof()->Init();
    FuseDrawing_bundle::LinearGradientDrawable479fd075_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[45/*"attribute v...*/], ::STRINGS[46/*"uniform flo...*/], 3, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/]));
}

static void FuseDrawing_bundle_build(uType* type)
{
    ::STRINGS[45] = uString::Const("attribute vec2 a;varying vec2 h;void main(){h=a;gl_Position=vec4((a.x*float(2))-float(1),(-a.y*float(2))+float(1),float(0),float(1));}");
    ::STRINGS[46] = uString::Const("uniform float e[b],f;uniform vec4 g[c];varying vec2 h;float i(float k,float l,float m){return clamp((m-k)/(l-k),.0,1.);}vec4 j(vec2 k){float l=e[0]+(f*k.x);vec4 m=vec4(g[0].xyz*g[0].w,g[0].w);for(int n=0;n<(b-1);n++){float o=e[n];float p=e[n+1];vec4 q=g[n+1];m=mix(m,vec4(q.xyz*q.w,q.w),d?smoothstep(o,p,l):i(o,p,l));}return m;}void main(){gl_FragColor=j(h);}");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[14] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[15] = uString::Const("g");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawing_bundle::LinearGradientDrawable479fd075_, uFieldFlagsStatic);
}

uClassType* FuseDrawing_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseDrawing_bundle", options);
    type->fp_build_ = FuseDrawing_bundle_build;
    type->fp_cctor_ = FuseDrawing_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawing_bundle::LinearGradientDrawable479fd075_;
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.Drawing.Primitives\1.3.0-rc2\.uno\package
// ------------------------------------------------------------------------------------------

// public static generated class FuseDrawingPrimitives_bundle :0
// {
// static FuseDrawingPrimitives_bundle() :0
static void FuseDrawingPrimitives_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof()->Init();
    FuseDrawingPrimitives_bundle::Circle0f9e7404_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[47/*"uniform flo...*/], ::STRINGS[48/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/]));
    FuseDrawingPrimitives_bundle::Circle0f9e7409_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[49/*"uniform flo...*/], ::STRINGS[50/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/], ::STRINGS[22/*"n"*/]));
    FuseDrawingPrimitives_bundle::Circle0f9e740a_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[49/*"uniform flo...*/], ::STRINGS[51/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/], ::STRINGS[22/*"n"*/]));
    FuseDrawingPrimitives_bundle::Circle17d89cad_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[52/*"uniform flo...*/], ::STRINGS[53/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 22, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[23/*"o"*/], ::STRINGS[24/*"p"*/], ::STRINGS[25/*"q"*/], ::STRINGS[54/*"r"*/], ::STRINGS[55/*"s"*/], ::STRINGS[26/*"t"*/], ::STRINGS[56/*"u"*/], ::STRINGS[57/*"y"*/]));
    FuseDrawingPrimitives_bundle::Circle1cada5ec_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[58/*"uniform flo...*/], ::STRINGS[59/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/]));
    FuseDrawingPrimitives_bundle::Circle34b7481b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[60/*"uniform flo...*/], ::STRINGS[61/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/]));
    FuseDrawingPrimitives_bundle::Circle42b21980_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[62/*"uniform flo...*/], ::STRINGS[63/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 20, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[23/*"o"*/], ::STRINGS[24/*"p"*/], ::STRINGS[25/*"q"*/], ::STRINGS[54/*"r"*/], ::STRINGS[55/*"s"*/], ::STRINGS[64/*"w"*/]));
    FuseDrawingPrimitives_bundle::Circle47ebe12c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[65/*"uniform flo...*/], ::STRINGS[66/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/]));
    FuseDrawingPrimitives_bundle::Circle61fc8f03_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[67/*"uniform flo...*/], ::STRINGS[68/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 15, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[25/*"q"*/]));
    FuseDrawingPrimitives_bundle::Circle7a063151_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[58/*"uniform flo...*/], ::STRINGS[69/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/]));
    FuseDrawingPrimitives_bundle::Circlea74b7839_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[70/*"uniform flo...*/], ::STRINGS[71/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[23/*"o"*/], ::STRINGS[24/*"p"*/], ::STRINGS[25/*"q"*/], ::STRINGS[56/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circleba801148_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[72/*"uniform flo...*/], ::STRINGS[73/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 25, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[23/*"o"*/], ::STRINGS[24/*"p"*/], ::STRINGS[25/*"q"*/], ::STRINGS[54/*"r"*/], ::STRINGS[55/*"s"*/], ::STRINGS[26/*"t"*/], ::STRINGS[56/*"u"*/], ::STRINGS[74/*"v"*/], ::STRINGS[64/*"w"*/], ::STRINGS[75/*"x"*/], ::STRINGS[76/*"C"*/]));
    FuseDrawingPrimitives_bundle::Circlebf551a68_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[70/*"uniform flo...*/], ::STRINGS[77/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[23/*"o"*/], ::STRINGS[24/*"p"*/], ::STRINGS[25/*"q"*/], ::STRINGS[56/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circled289b377_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[72/*"uniform flo...*/], ::STRINGS[78/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 25, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[23/*"o"*/], ::STRINGS[24/*"p"*/], ::STRINGS[25/*"q"*/], ::STRINGS[54/*"r"*/], ::STRINGS[55/*"s"*/], ::STRINGS[26/*"t"*/], ::STRINGS[56/*"u"*/], ::STRINGS[74/*"v"*/], ::STRINGS[64/*"w"*/], ::STRINGS[75/*"x"*/], ::STRINGS[76/*"C"*/]));
    FuseDrawingPrimitives_bundle::Circlee5598e1b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[79/*"uniform flo...*/], ::STRINGS[80/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[23/*"o"*/], ::STRINGS[24/*"p"*/], ::STRINGS[55/*"s"*/]));
    FuseDrawingPrimitives_bundle::Circleea9355c7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[65/*"uniform flo...*/], ::STRINGS[81/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/]));
    FuseDrawingPrimitives_bundle::Circlef7ec1d38_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[62/*"uniform flo...*/], ::STRINGS[82/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 20, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[23/*"o"*/], ::STRINGS[24/*"p"*/], ::STRINGS[25/*"q"*/], ::STRINGS[54/*"r"*/], ::STRINGS[55/*"s"*/], ::STRINGS[64/*"w"*/]));
    FuseDrawingPrimitives_bundle::Circlef7ec1df8_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[83/*"uniform flo...*/], ::STRINGS[84/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 27, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[23/*"o"*/], ::STRINGS[24/*"p"*/], ::STRINGS[25/*"q"*/], ::STRINGS[54/*"r"*/], ::STRINGS[55/*"s"*/], ::STRINGS[26/*"t"*/], ::STRINGS[56/*"u"*/], ::STRINGS[74/*"v"*/], ::STRINGS[64/*"w"*/], ::STRINGS[75/*"x"*/], ::STRINGS[57/*"y"*/], ::STRINGS[85/*"z"*/], ::STRINGS[86/*"E"*/]));
    FuseDrawingPrimitives_bundle::Circlef7ec1dfa_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[87/*"uniform flo...*/], ::STRINGS[88/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 24, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[23/*"o"*/], ::STRINGS[24/*"p"*/], ::STRINGS[25/*"q"*/], ::STRINGS[54/*"r"*/], ::STRINGS[55/*"s"*/], ::STRINGS[26/*"t"*/], ::STRINGS[56/*"u"*/], ::STRINGS[74/*"v"*/], ::STRINGS[64/*"w"*/], ::STRINGS[89/*"A"*/]));
    FuseDrawingPrimitives_bundle::Circlef7ec1dfb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[83/*"uniform flo...*/], ::STRINGS[90/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 27, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[23/*"o"*/], ::STRINGS[24/*"p"*/], ::STRINGS[25/*"q"*/], ::STRINGS[54/*"r"*/], ::STRINGS[55/*"s"*/], ::STRINGS[26/*"t"*/], ::STRINGS[56/*"u"*/], ::STRINGS[74/*"v"*/], ::STRINGS[64/*"w"*/], ::STRINGS[75/*"x"*/], ::STRINGS[57/*"y"*/], ::STRINGS[85/*"z"*/], ::STRINGS[86/*"E"*/]));
    FuseDrawingPrimitives_bundle::Circlef7ec1ed4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[91/*"uniform flo...*/], ::STRINGS[92/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/]));
    FuseDrawingPrimitives_bundle::Circlef7ec1ed6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[93/*"uniform flo...*/], ::STRINGS[94/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 15, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[23/*"o"*/]));
    FuseDrawingPrimitives_bundle::Circlef7ec1ed7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[93/*"uniform flo...*/], ::STRINGS[95/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 15, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[23/*"o"*/]));
    FuseDrawingPrimitives_bundle::Circleffcefa9e_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[96/*"uniform flo...*/], ::STRINGS[97/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/]));
    FuseDrawingPrimitives_bundle::Rectangle5aede5cb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[98/*"uniform flo...*/], ::STRINGS[99/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[23/*"o"*/], ::STRINGS[24/*"p"*/], ::STRINGS[25/*"q"*/], ::STRINGS[74/*"v"*/]));
    FuseDrawingPrimitives_bundle::Rectangle5aede5cc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[98/*"uniform flo...*/], ::STRINGS[100/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[23/*"o"*/], ::STRINGS[24/*"p"*/], ::STRINGS[25/*"q"*/], ::STRINGS[74/*"v"*/]));
    FuseDrawingPrimitives_bundle::Rectangle6bc1d5d3_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[101/*"uniform flo...*/], ::STRINGS[102/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/]));
    FuseDrawingPrimitives_bundle::Rectangle6bc1d5d4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[101/*"uniform flo...*/], ::STRINGS[103/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/]));
    FuseDrawingPrimitives_bundle::Rectangle7c95c5e3_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[104/*"uniform flo...*/], ::STRINGS[105/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 25, ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[23/*"o"*/], ::STRINGS[24/*"p"*/], ::STRINGS[25/*"q"*/], ::STRINGS[54/*"r"*/], ::STRINGS[55/*"s"*/], ::STRINGS[26/*"t"*/], ::STRINGS[56/*"u"*/], ::STRINGS[74/*"v"*/], ::STRINGS[64/*"w"*/], ::STRINGS[75/*"x"*/], ::STRINGS[106/*"D"*/]));
    FuseDrawingPrimitives_bundle::Rectangle7c95c5e4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[104/*"uniform flo...*/], ::STRINGS[107/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 25, ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[23/*"o"*/], ::STRINGS[24/*"p"*/], ::STRINGS[25/*"q"*/], ::STRINGS[54/*"r"*/], ::STRINGS[55/*"s"*/], ::STRINGS[26/*"t"*/], ::STRINGS[56/*"u"*/], ::STRINGS[74/*"v"*/], ::STRINGS[64/*"w"*/], ::STRINGS[75/*"x"*/], ::STRINGS[106/*"D"*/]));
    FuseDrawingPrimitives_bundle::Rectangle7fa93ce4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[108/*"uniform flo...*/], ::STRINGS[109/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/], ::STRINGS[22/*"n"*/]));
    FuseDrawingPrimitives_bundle::Rectangle8d69b5eb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[110/*"uniform flo...*/], ::STRINGS[111/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/]));
    FuseDrawingPrimitives_bundle::Rectangle8d69b5ec_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[110/*"uniform flo...*/], ::STRINGS[112/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f3bc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[108/*"uniform flo...*/], ::STRINGS[113/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/], ::STRINGS[22/*"n"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f4fc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[114/*"uniform flo...*/], ::STRINGS[115/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 27, ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[23/*"o"*/], ::STRINGS[24/*"p"*/], ::STRINGS[25/*"q"*/], ::STRINGS[54/*"r"*/], ::STRINGS[55/*"s"*/], ::STRINGS[26/*"t"*/], ::STRINGS[56/*"u"*/], ::STRINGS[74/*"v"*/], ::STRINGS[64/*"w"*/], ::STRINGS[75/*"x"*/], ::STRINGS[57/*"y"*/], ::STRINGS[85/*"z"*/], ::STRINGS[116/*"F"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f503_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[114/*"uniform flo...*/], ::STRINGS[117/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 27, ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[23/*"o"*/], ::STRINGS[24/*"p"*/], ::STRINGS[25/*"q"*/], ::STRINGS[54/*"r"*/], ::STRINGS[55/*"s"*/], ::STRINGS[26/*"t"*/], ::STRINGS[56/*"u"*/], ::STRINGS[74/*"v"*/], ::STRINGS[64/*"w"*/], ::STRINGS[75/*"x"*/], ::STRINGS[57/*"y"*/], ::STRINGS[85/*"z"*/], ::STRINGS[116/*"F"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f53c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[118/*"uniform flo...*/], ::STRINGS[119/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 15, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[23/*"o"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f53f_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[118/*"uniform flo...*/], ::STRINGS[120/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 15, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[23/*"o"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f57b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[121/*"uniform flo...*/], ::STRINGS[122/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 20, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[23/*"o"*/], ::STRINGS[24/*"p"*/], ::STRINGS[25/*"q"*/], ::STRINGS[54/*"r"*/], ::STRINGS[55/*"s"*/], ::STRINGS[75/*"x"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f57c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[121/*"uniform flo...*/], ::STRINGS[123/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 20, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[23/*"o"*/], ::STRINGS[24/*"p"*/], ::STRINGS[25/*"q"*/], ::STRINGS[54/*"r"*/], ::STRINGS[55/*"s"*/], ::STRINGS[75/*"x"*/]));
}

static void FuseDrawingPrimitives_bundle_build(uType* type)
{
    ::STRINGS[47] = uString::Const("uniform float b,e;uniform vec2 c;uniform mat4 d;attribute vec2 a;varying vec2 l;void main(){vec2 m=a*b;l=m*e;gl_Position=d*vec4(m+c,0.,1.);}");
    ::STRINGS[48] = uString::Const("uniform float f,g,h,i,j;uniform vec4 k;varying vec2 l;void main(){gl_FragColor=k*(clamp(.5-(((abs(((length(l)-1.)*f)-g)-h)*i)*j),float(0),float(1))*float(1));}");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[14] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[15] = uString::Const("g");
    ::STRINGS[16] = uString::Const("h");
    ::STRINGS[17] = uString::Const("i");
    ::STRINGS[18] = uString::Const("j");
    ::STRINGS[19] = uString::Const("k");
    ::STRINGS[49] = uString::Const("uniform float b,e;uniform vec2 c;uniform mat4 d;attribute vec2 a;varying vec2 o,p;void main(){vec2 q=a*b;o=q*e;p=q;gl_Position=d*vec4(q+c,0.,1.);}");
    ::STRINGS[50] = uString::Const("uniform float f,g,h,i,j;uniform vec2 l,m,n;uniform vec4 k;varying vec2 o,p;void main(){gl_FragColor=k*(clamp(.5-(((abs(((length(o)-1.)*f)-g)-h)*i)*j),float(0),float(1))*clamp(.5-((max(dot(p,l),max(dot(p,m),dot(p,n)))*i)*j),float(0),float(1)));}");
    ::STRINGS[20] = uString::Const("l");
    ::STRINGS[21] = uString::Const("m");
    ::STRINGS[22] = uString::Const("n");
    ::STRINGS[51] = uString::Const("uniform float f,g,h,i,j;uniform vec2 l,m,n;uniform vec4 k;varying vec2 o,p;void main(){gl_FragColor=k*(clamp(.5-(((abs(((length(o)-1.)*f)-g)-h)*i)*j),float(0),float(1))*clamp(.5-((min(dot(p,l),min(dot(p,m),dot(p,n)))*i)*j),float(0),float(1)));}");
    ::STRINGS[52] = uString::Const("uniform float d,q;uniform vec2 e,g,h,i,j,k,m,l;uniform mat4 f;attribute vec2 a;varying vec2 v,w,x;void main(){vec2 z=a*d;vec2 A=z+e;vec2 B=((((g*(A/g))-h)/i)*j)+k;v=m+(B*l);w=B;x=z*q;gl_Position=f*vec4(A,0.,1.);}");
    ::STRINGS[53] = uString::Const("uniform vec2 o,n;uniform vec4 p;uniform float r,s,t,u;uniform sampler2D y;varying vec2 v,w,x;void main(){vec4 z=(c?vec4(float(0)):texture2D(y,b?(o+(fract(v)*n)):w))*p;gl_FragColor=(vec4(z.xyz*z.w,z.w)*(clamp(.5-((((length(x)-1.)*r)*s)*t),float(0),float(1))*float(1)))*u;}");
    ::STRINGS[23] = uString::Const("o");
    ::STRINGS[24] = uString::Const("p");
    ::STRINGS[25] = uString::Const("q");
    ::STRINGS[54] = uString::Const("r");
    ::STRINGS[55] = uString::Const("s");
    ::STRINGS[26] = uString::Const("t");
    ::STRINGS[56] = uString::Const("u");
    ::STRINGS[57] = uString::Const("y");
    ::STRINGS[58] = uString::Const("uniform float b,e;uniform vec2 c;uniform mat4 d;attribute vec2 a;varying vec2 m,n;void main(){vec2 o=a*b;m=o*e;n=o;gl_Position=d*vec4(o+c,0.,1.);}");
    ::STRINGS[59] = uString::Const("uniform float f,g,h;uniform vec2 j,k,l;uniform vec4 i;varying vec2 m,n;void main(){gl_FragColor=i*(clamp(.5-((((length(m)-1.)*f)*g)*h),float(0),float(1))*clamp(.5-((max(dot(n,j),max(dot(n,k),dot(n,l)))*g)*h),float(0),float(1)));}");
    ::STRINGS[60] = uString::Const("uniform float b,e;uniform vec2 c;uniform mat4 d;attribute vec2 a;varying vec2 j;void main(){vec2 k=a*b;j=k*e;gl_Position=d*vec4(k+c,0.,1.);}");
    ::STRINGS[61] = uString::Const("uniform float f,g,h;uniform vec4 i;varying vec2 j;void main(){gl_FragColor=i*(clamp(.5-((((length(j)-1.)*f)*g)*h),float(0),float(1))*float(1));}");
    ::STRINGS[62] = uString::Const("uniform float b,p,g;uniform vec2 c,e,f,o;uniform mat4 d;uniform vec4 n;attribute vec2 a;varying float t;varying vec2 u,v;float x(vec2 y,vec2 z,vec2 A,float B){vec2 C=(y*e)-z;float D=dot(C,A)/B;return (D-f.x)/f.y;}void main(){vec2 y=a*b;vec2 z=y+c;t=x(z/e,n.xy,o,p);u=y*g;v=y;gl_Position=d*vec4(z,0.,1.);}");
    ::STRINGS[63] = uString::Const("uniform float h,i,j,k,l,m;uniform vec2 q,r,s;uniform sampler2D w;varying float t;varying vec2 u,v;void main(){gl_FragColor=(texture2D(w,vec2(t,.5))*(clamp(.5-(((abs(((length(u)-1.)*h)-i)-j)*k)*l),float(0),float(1))*clamp(.5-((max(dot(v,q),max(dot(v,r),dot(v,s)))*k)*l),float(0),float(1))))*m;}");
    ::STRINGS[64] = uString::Const("w");
    ::STRINGS[65] = uString::Const("uniform float b,e;uniform vec2 c;uniform mat4 d;attribute vec2 a;varying vec2 n,o;void main(){vec2 p=a*b;n=p*e;o=p;gl_Position=d*vec4(p+c,0.,1.);}");
    ::STRINGS[66] = uString::Const("uniform float f,g,h,j;uniform vec2 k,l,m;uniform vec4 i;varying vec2 n,o;void main(){gl_FragColor=(i*(clamp(.5-((((length(n)-1.)*f)*g)*h),float(0),float(1))*clamp(.5-((max(dot(o,k),max(dot(o,l),dot(o,m)))*g)*h),float(0),float(1))))*j;}");
    ::STRINGS[67] = uString::Const("uniform float b,n,g;uniform vec2 c,e,f,m;uniform mat4 d;uniform vec4 l;attribute vec2 a;varying float o;varying vec2 p;float r(vec2 s,vec2 t,vec2 u,float v){vec2 w=(s*e)-t;float x=dot(w,u)/v;return (x-f.x)/f.y;}void main(){vec2 s=a*b;vec2 t=s+c;o=r(t/e,l.xy,m,n);p=s*g;gl_Position=d*vec4(t,0.,1.);}");
    ::STRINGS[68] = uString::Const("uniform float h,i,j,k;uniform sampler2D q;varying float o;varying vec2 p;void main(){gl_FragColor=(texture2D(q,vec2(o,.5))*(clamp(.5-((((length(p)-1.)*h)*i)*j),float(0),float(1))*float(1)))*k;}");
    ::STRINGS[69] = uString::Const("uniform float f,g,h;uniform vec2 j,k,l;uniform vec4 i;varying vec2 m,n;void main(){gl_FragColor=i*(clamp(.5-((((length(m)-1.)*f)*g)*h),float(0),float(1))*clamp(.5-((min(dot(n,j),min(dot(n,k),dot(n,l)))*g)*h),float(0),float(1)));}");
    ::STRINGS[70] = uString::Const("uniform float b,n,g;uniform vec2 c,e,f,m;uniform mat4 d;uniform vec4 l;attribute vec2 a;varying float r;varying vec2 s,t;float v(vec2 w,vec2 x,vec2 y,float z){vec2 A=(w*e)-x;float B=dot(A,y)/z;return (B-f.x)/f.y;}void main(){vec2 w=a*b;vec2 x=w+c;r=v(x/e,l.xy,m,n);s=w*g;t=w;gl_Position=d*vec4(x,0.,1.);}");
    ::STRINGS[71] = uString::Const("uniform float h,i,j,k;uniform vec2 o,p,q;uniform sampler2D u;varying float r;varying vec2 s,t;void main(){gl_FragColor=(texture2D(u,vec2(r,.5))*(clamp(.5-((((length(s)-1.)*h)*i)*j),float(0),float(1))*clamp(.5-((min(dot(t,o),min(dot(t,p),dot(t,q)))*i)*j),float(0),float(1))))*k;}");
    ::STRINGS[72] = uString::Const("uniform float d,q;uniform vec2 e,g,h,i,j,k,m,l;uniform mat4 f;attribute vec2 a;varying vec2 y,z,A,B;void main(){vec2 D=a*d;vec2 E=D+e;vec2 F=((((g*(E/g))-h)/i)*j)+k;y=m+(F*l);z=F;A=D*q;B=D;gl_Position=f*vec4(E,0.,1.);}");
    ::STRINGS[73] = uString::Const("uniform vec2 o,n,v,w,x;uniform vec4 p;uniform float r,s,t,u;uniform sampler2D C;varying vec2 y,z,A,B;void main(){vec4 D=(c?vec4(float(0)):texture2D(C,b?(o+(fract(y)*n)):z))*p;gl_FragColor=(vec4(D.xyz*D.w,D.w)*(clamp(.5-((((length(A)-1.)*r)*s)*t),float(0),float(1))*clamp(.5-((max(dot(B,v),max(dot(B,w),dot(B,x)))*s)*t),float(0),float(1))))*u;}");
    ::STRINGS[74] = uString::Const("v");
    ::STRINGS[75] = uString::Const("x");
    ::STRINGS[76] = uString::Const("C");
    ::STRINGS[77] = uString::Const("uniform float h,i,j,k;uniform vec2 o,p,q;uniform sampler2D u;varying float r;varying vec2 s,t;void main(){gl_FragColor=(texture2D(u,vec2(r,.5))*(clamp(.5-((((length(s)-1.)*h)*i)*j),float(0),float(1))*clamp(.5-((max(dot(t,o),max(dot(t,p),dot(t,q)))*i)*j),float(0),float(1))))*k;}");
    ::STRINGS[78] = uString::Const("uniform vec2 o,n,v,w,x;uniform vec4 p;uniform float r,s,t,u;uniform sampler2D C;varying vec2 y,z,A,B;void main(){vec4 D=(c?vec4(float(0)):texture2D(C,b?(o+(fract(y)*n)):z))*p;gl_FragColor=(vec4(D.xyz*D.w,D.w)*(clamp(.5-((((length(A)-1.)*r)*s)*t),float(0),float(1))*clamp(.5-((min(dot(B,v),min(dot(B,w),dot(B,x)))*s)*t),float(0),float(1))))*u;}");
    ::STRINGS[79] = uString::Const("uniform float b,p,g;uniform vec2 c,e,f,o;uniform mat4 d;uniform vec4 n;attribute vec2 a;varying float q;varying vec2 r;float t(vec2 u,vec2 v,vec2 w,float x){vec2 y=(u*e)-v;float z=dot(y,w)/x;return (z-f.x)/f.y;}void main(){vec2 u=a*b;vec2 v=u+c;q=t(v/e,n.xy,o,p);r=u*g;gl_Position=d*vec4(v,0.,1.);}");
    ::STRINGS[80] = uString::Const("uniform float h,i,j,k,l,m;uniform sampler2D s;varying float q;varying vec2 r;void main(){gl_FragColor=(texture2D(s,vec2(q,.5))*(clamp(.5-(((abs(((length(r)-1.)*h)-i)-j)*k)*l),float(0),float(1))*float(1)))*m;}");
    ::STRINGS[81] = uString::Const("uniform float f,g,h,j;uniform vec2 k,l,m;uniform vec4 i;varying vec2 n,o;void main(){gl_FragColor=(i*(clamp(.5-((((length(n)-1.)*f)*g)*h),float(0),float(1))*clamp(.5-((min(dot(o,k),min(dot(o,l),dot(o,m)))*g)*h),float(0),float(1))))*j;}");
    ::STRINGS[82] = uString::Const("uniform float h,i,j,k,l,m;uniform vec2 q,r,s;uniform sampler2D w;varying float t;varying vec2 u,v;void main(){gl_FragColor=(texture2D(w,vec2(t,.5))*(clamp(.5-(((abs(((length(u)-1.)*h)-i)-j)*k)*l),float(0),float(1))*clamp(.5-((min(dot(v,q),min(dot(v,r),dot(v,s)))*k)*l),float(0),float(1))))*m;}");
    ::STRINGS[83] = uString::Const("uniform float d,q;uniform vec2 e,g,h,i,j,k,m,l;uniform mat4 f;attribute vec2 a;varying vec2 A,B,C,D;void main(){vec2 F=a*d;vec2 G=F+e;vec2 H=((((g*(G/g))-h)/i)*j)+k;A=m+(H*l);B=H;C=F*q;D=F;gl_Position=f*vec4(G,0.,1.);}");
    ::STRINGS[84] = uString::Const("uniform vec2 o,n,x,y,z;uniform vec4 p;uniform float r,s,t,u,v,w;uniform sampler2D E;varying vec2 A,B,C,D;void main(){vec4 F=(c?vec4(float(0)):texture2D(E,b?(o+(fract(A)*n)):B))*p;gl_FragColor=(vec4(F.xyz*F.w,F.w)*(clamp(.5-(((abs(((length(C)-1.)*r)-s)-t)*u)*v),float(0),float(1))*clamp(.5-((min(dot(D,x),min(dot(D,y),dot(D,z)))*u)*v),float(0),float(1))))*w;}");
    ::STRINGS[85] = uString::Const("z");
    ::STRINGS[86] = uString::Const("E");
    ::STRINGS[87] = uString::Const("uniform float d,q;uniform vec2 e,g,h,i,j,k,m,l;uniform mat4 f;attribute vec2 a;varying vec2 x,y,z;void main(){vec2 B=a*d;vec2 C=B+e;vec2 D=((((g*(C/g))-h)/i)*j)+k;x=m+(D*l);y=D;z=B*q;gl_Position=f*vec4(C,0.,1.);}");
    ::STRINGS[88] = uString::Const("uniform vec2 o,n;uniform vec4 p;uniform float r,s,t,u,v,w;uniform sampler2D A;varying vec2 x,y,z;void main(){vec4 B=(c?vec4(float(0)):texture2D(A,b?(o+(fract(x)*n)):y))*p;gl_FragColor=(vec4(B.xyz*B.w,B.w)*(clamp(.5-(((abs(((length(z)-1.)*r)-s)-t)*u)*v),float(0),float(1))*float(1)))*w;}");
    ::STRINGS[89] = uString::Const("A");
    ::STRINGS[90] = uString::Const("uniform vec2 o,n,x,y,z;uniform vec4 p;uniform float r,s,t,u,v,w;uniform sampler2D E;varying vec2 A,B,C,D;void main(){vec4 F=(c?vec4(float(0)):texture2D(E,b?(o+(fract(A)*n)):B))*p;gl_FragColor=(vec4(F.xyz*F.w,F.w)*(clamp(.5-(((abs(((length(C)-1.)*r)-s)-t)*u)*v),float(0),float(1))*clamp(.5-((max(dot(D,x),max(dot(D,y),dot(D,z)))*u)*v),float(0),float(1))))*w;}");
    ::STRINGS[91] = uString::Const("uniform float b,e;uniform vec2 c;uniform mat4 d;attribute vec2 a;varying vec2 m;void main(){vec2 n=a*b;m=n*e;gl_Position=d*vec4(n+c,0.,1.);}");
    ::STRINGS[92] = uString::Const("uniform float f,g,h,i,j,l;uniform vec4 k;varying vec2 m;void main(){gl_FragColor=(k*(clamp(.5-(((abs(((length(m)-1.)*f)-g)-h)*i)*j),float(0),float(1))*float(1)))*l;}");
    ::STRINGS[93] = uString::Const("uniform float b,e;uniform vec2 c;uniform mat4 d;attribute vec2 a;varying vec2 p,q;void main(){vec2 r=a*b;p=r*e;q=r;gl_Position=d*vec4(r+c,0.,1.);}");
    ::STRINGS[94] = uString::Const("uniform float f,g,h,i,j,l;uniform vec2 m,n,o;uniform vec4 k;varying vec2 p,q;void main(){gl_FragColor=(k*(clamp(.5-(((abs(((length(p)-1.)*f)-g)-h)*i)*j),float(0),float(1))*clamp(.5-((min(dot(q,m),min(dot(q,n),dot(q,o)))*i)*j),float(0),float(1))))*l;}");
    ::STRINGS[95] = uString::Const("uniform float f,g,h,i,j,l;uniform vec2 m,n,o;uniform vec4 k;varying vec2 p,q;void main(){gl_FragColor=(k*(clamp(.5-(((abs(((length(p)-1.)*f)-g)-h)*i)*j),float(0),float(1))*clamp(.5-((max(dot(q,m),max(dot(q,n),dot(q,o)))*i)*j),float(0),float(1))))*l;}");
    ::STRINGS[96] = uString::Const("uniform float b,e;uniform vec2 c;uniform mat4 d;attribute vec2 a;varying vec2 k;void main(){vec2 l=a*b;k=l*e;gl_Position=d*vec4(l+c,0.,1.);}");
    ::STRINGS[97] = uString::Const("uniform float f,g,h,j;uniform vec4 i;varying vec2 k;void main(){gl_FragColor=(i*(clamp(.5-((((length(k)-1.)*f)*g)*h),float(0),float(1))*float(1)))*j;}");
    ::STRINGS[98] = uString::Const("uniform float e[d],q,j;uniform vec2 f,h,i,p;uniform mat4 g;uniform vec4 o;attribute vec4 a,b;attribute float c;varying float r,s;varying vec2 t,u;float w(vec2 x,vec2 y,vec2 z,float A){vec2 B=(x*h)-y;float C=dot(B,z)/A;return (C-i.x)/i.y;}void main(){vec2 x=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;r=e[int(c)];s=w(x/h,o.xy,p,q);t=x*j;u=(vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f)*j;gl_Position=g*vec4(x,0.,1.);}");
    ::STRINGS[99] = uString::Const("uniform float k,l,m,n;uniform sampler2D v;varying float r,s;varying vec2 t,u;void main(){gl_FragColor=(texture2D(v,vec2(s,.5))*clamp(.5-((((distance(t,u)*k)-r)*l)*m),float(0),float(1)))*n;}");
    ::STRINGS[100] = uString::Const("uniform float k,l,m,n;uniform sampler2D v;varying float r,s;varying vec2 t,u;void main(){float x=clamp(.5-((((distance(t,u)*k)-r)*l)*m),float(0),float(1));gl_FragColor=(texture2D(v,vec2(s,.5))*(((x*x)*x)*((x*((x*float(6))-float(15)))+float(10))))*n;}");
    ::STRINGS[101] = uString::Const("uniform float e[d],h;uniform vec2 f;uniform mat4 g;attribute vec4 a,b;attribute float c;varying float m;varying vec2 n,o;void main(){vec2 p=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;m=e[int(c)];n=p*h;o=(vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f)*h;gl_Position=g*vec4(p,0.,1.);}");
    ::STRINGS[102] = uString::Const("uniform float i,j,k;uniform vec4 l;varying float m;varying vec2 n,o;void main(){gl_FragColor=l*clamp(.5-((((distance(n,o)*i)-m)*j)*k),float(0),float(1));}");
    ::STRINGS[103] = uString::Const("uniform float i,j,k;uniform vec4 l;varying float m;varying vec2 n,o;void main(){float p=clamp(.5-((((distance(n,o)*i)-m)*j)*k),float(0),float(1));gl_FragColor=l*(((p*p)*p)*((p*((p*float(6))-float(15)))+float(10)));}");
    ::STRINGS[104] = uString::Const("uniform float g[d],t;uniform vec2 h,j,k,l,m,n,p,o;uniform mat4 i;attribute vec4 a,b;attribute float c;varying float y;varying vec2 z,A,B,C;void main(){vec2 E=vec2((sign(a.x)*g[int(abs(a.x))])+(sign(a.y)*g[int(abs(a.y))]),(sign(a.z)*g[int(abs(a.z))])+(sign(a.w)*g[int(abs(a.w))]))+h;vec2 F=((((j*(E/j))-k)/l)*m)+n;y=g[int(c)];z=p+(F*o);A=F;B=E*t;C=(vec2((sign(b.x)*g[int(abs(b.x))])+(sign(b.y)*g[int(abs(b.y))]),(sign(b.z)*g[int(abs(b.z))])+(sign(b.w)*g[int(abs(b.w))]))+h)*t;gl_Position=i*vec4(E,0.,1.);}");
    ::STRINGS[105] = uString::Const("uniform vec2 r,q;uniform vec4 s;uniform float u,v,w,x;uniform sampler2D D;varying float y;varying vec2 z,A,B,C;void main(){vec4 E=(f?vec4(float(0)):texture2D(D,e?(r+(fract(z)*q)):A))*s;gl_FragColor=(vec4(E.xyz*E.w,E.w)*clamp(.5-((((distance(B,C)*u)-y)*v)*w),float(0),float(1)))*x;}");
    ::STRINGS[106] = uString::Const("D");
    ::STRINGS[107] = uString::Const("uniform vec2 r,q;uniform vec4 s;uniform float u,v,w,x;uniform sampler2D D;varying float y;varying vec2 z,A,B,C;void main(){vec4 E=(f?vec4(float(0)):texture2D(D,e?(r+(fract(z)*q)):A))*s;float F=clamp(.5-((((distance(B,C)*u)-y)*v)*w),float(0),float(1));gl_FragColor=(vec4(E.xyz*E.w,E.w)*(((F*F)*F)*((F*((F*float(6))-float(15)))+float(10))))*x;}");
    ::STRINGS[108] = uString::Const("uniform float e[d],h;uniform vec2 f;uniform mat4 g;attribute vec4 a,b;attribute float c;varying float o;varying vec2 p,q;void main(){vec2 r=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;o=e[int(c)];p=r*h;q=(vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f)*h;gl_Position=g*vec4(r,0.,1.);}");
    ::STRINGS[109] = uString::Const("uniform float i,j,k,l,m;uniform vec4 n;varying float o;varying vec2 p,q;void main(){gl_FragColor=n*clamp(.5-(((abs(((distance(p,q)*i)-o)-j)-k)*l)*m),float(0),float(1));}");
    ::STRINGS[110] = uString::Const("uniform float e[d],h;uniform vec2 f;uniform mat4 g;attribute vec4 a,b;attribute float c;varying float n;varying vec2 o,p;void main(){vec2 q=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;n=e[int(c)];o=q*h;p=(vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f)*h;gl_Position=g*vec4(q,0.,1.);}");
    ::STRINGS[111] = uString::Const("uniform float i,j,k,m;uniform vec4 l;varying float n;varying vec2 o,p;void main(){gl_FragColor=(l*clamp(.5-((((distance(o,p)*i)-n)*j)*k),float(0),float(1)))*m;}");
    ::STRINGS[112] = uString::Const("uniform float i,j,k,m;uniform vec4 l;varying float n;varying vec2 o,p;void main(){float q=clamp(.5-((((distance(o,p)*i)-n)*j)*k),float(0),float(1));gl_FragColor=(l*(((q*q)*q)*((q*((q*float(6))-float(15)))+float(10))))*m;}");
    ::STRINGS[113] = uString::Const("uniform float i,j,k,l,m;uniform vec4 n;varying float o;varying vec2 p,q;void main(){float r=clamp(.5-(((abs(((distance(p,q)*i)-o)-j)-k)*l)*m),float(0),float(1));gl_FragColor=n*(((r*r)*r)*((r*((r*float(6))-float(15)))+float(10)));}");
    ::STRINGS[114] = uString::Const("uniform float g[d],t;uniform vec2 h,j,k,l,m,n,p,o;uniform mat4 i;attribute vec4 a,b;attribute float c;varying float A;varying vec2 B,C,D,E;void main(){vec2 G=vec2((sign(a.x)*g[int(abs(a.x))])+(sign(a.y)*g[int(abs(a.y))]),(sign(a.z)*g[int(abs(a.z))])+(sign(a.w)*g[int(abs(a.w))]))+h;vec2 H=((((j*(G/j))-k)/l)*m)+n;A=g[int(c)];B=p+(H*o);C=H;D=G*t;E=(vec2((sign(b.x)*g[int(abs(b.x))])+(sign(b.y)*g[int(abs(b.y))]),(sign(b.z)*g[int(abs(b.z))])+(sign(b.w)*g[int(abs(b.w))]))+h)*t;gl_Position=i*vec4(G,0.,1.);}");
    ::STRINGS[115] = uString::Const("uniform vec2 r,q;uniform vec4 s;uniform float u,v,w,x,y,z;uniform sampler2D F;varying float A;varying vec2 B,C,D,E;void main(){vec4 G=(f?vec4(float(0)):texture2D(F,e?(r+(fract(B)*q)):C))*s;float H=clamp(.5-(((abs(((distance(D,E)*u)-A)-v)-w)*x)*y),float(0),float(1));gl_FragColor=(vec4(G.xyz*G.w,G.w)*(((H*H)*H)*((H*((H*float(6))-float(15)))+float(10))))*z;}");
    ::STRINGS[116] = uString::Const("F");
    ::STRINGS[117] = uString::Const("uniform vec2 r,q;uniform vec4 s;uniform float u,v,w,x,y,z;uniform sampler2D F;varying float A;varying vec2 B,C,D,E;void main(){vec4 G=(f?vec4(float(0)):texture2D(F,e?(r+(fract(B)*q)):C))*s;gl_FragColor=(vec4(G.xyz*G.w,G.w)*clamp(.5-(((abs(((distance(D,E)*u)-A)-v)-w)*x)*y),float(0),float(1)))*z;}");
    ::STRINGS[118] = uString::Const("uniform float e[d],h;uniform vec2 f;uniform mat4 g;attribute vec4 a,b;attribute float c;varying float p;varying vec2 q,r;void main(){vec2 s=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;p=e[int(c)];q=s*h;r=(vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f)*h;gl_Position=g*vec4(s,0.,1.);}");
    ::STRINGS[119] = uString::Const("uniform float i,j,k,l,m,o;uniform vec4 n;varying float p;varying vec2 q,r;void main(){float s=clamp(.5-(((abs(((distance(q,r)*i)-p)-j)-k)*l)*m),float(0),float(1));gl_FragColor=(n*(((s*s)*s)*((s*((s*float(6))-float(15)))+float(10))))*o;}");
    ::STRINGS[120] = uString::Const("uniform float i,j,k,l,m,o;uniform vec4 n;varying float p;varying vec2 q,r;void main(){gl_FragColor=(n*clamp(.5-(((abs(((distance(q,r)*i)-p)-j)-k)*l)*m),float(0),float(1)))*o;}");
    ::STRINGS[121] = uString::Const("uniform float e[d],s,j;uniform vec2 f,h,i,r;uniform mat4 g;uniform vec4 q;attribute vec4 a,b;attribute float c;varying float t,u;varying vec2 v,w;float y(vec2 z,vec2 A,vec2 B,float C){vec2 D=(z*h)-A;float E=dot(D,B)/C;return (E-i.x)/i.y;}void main(){vec2 z=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;t=e[int(c)];u=y(z/h,q.xy,r,s);v=z*j;w=(vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f)*j;gl_Position=g*vec4(z,0.,1.);}");
    ::STRINGS[122] = uString::Const("uniform float k,l,m,n,o,p;uniform sampler2D x;varying float t,u;varying vec2 v,w;void main(){gl_FragColor=(texture2D(x,vec2(u,.5))*clamp(.5-(((abs(((distance(v,w)*k)-t)-l)-m)*n)*o),float(0),float(1)))*p;}");
    ::STRINGS[123] = uString::Const("uniform float k,l,m,n,o,p;uniform sampler2D x;varying float t,u;varying vec2 v,w;void main(){float z=clamp(.5-(((abs(((distance(v,w)*k)-t)-l)-m)*n)*o),float(0),float(1));gl_FragColor=(texture2D(x,vec2(u,.5))*(((z*z)*z)*((z*((z*float(6))-float(15)))+float(10))))*p;}");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle0f9e7404_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle0f9e7409_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle0f9e740a_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle17d89cad_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle1cada5ec_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle34b7481b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle42b21980_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle47ebe12c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle61fc8f03_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle7a063151_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circlea74b7839_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circleba801148_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circlebf551a68_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circled289b377_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circlee5598e1b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circleea9355c7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circlef7ec1d38_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circlef7ec1df8_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circlef7ec1dfa_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circlef7ec1dfb_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circlef7ec1ed4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circlef7ec1ed6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circlef7ec1ed7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circleffcefa9e_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangle5aede5cb_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangle5aede5cc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangle6bc1d5d3_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangle6bc1d5d4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangle7c95c5e3_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangle7c95c5e4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangle7fa93ce4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangle8d69b5eb_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangle8d69b5ec_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectanglea858f3bc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectanglea858f4fc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectanglea858f503_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectanglea858f53c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectanglea858f53f_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectanglea858f57b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectanglea858f57c_, uFieldFlagsStatic);
}

uClassType* FuseDrawingPrimitives_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 40;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseDrawingPrimitives_bundle", options);
    type->fp_build_ = FuseDrawingPrimitives_bundle_build;
    type->fp_cctor_ = FuseDrawingPrimitives_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle0f9e7404_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle0f9e7409_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle0f9e740a_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle17d89cad_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle1cada5ec_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle34b7481b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle42b21980_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle47ebe12c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle61fc8f03_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle7a063151_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlea74b7839_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circleba801148_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlebf551a68_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circled289b377_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlee5598e1b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circleea9355c7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef7ec1d38_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef7ec1df8_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef7ec1dfa_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef7ec1dfb_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef7ec1ed4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef7ec1ed6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef7ec1ed7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circleffcefa9e_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle5aede5cb_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle5aede5cc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle6bc1d5d3_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle6bc1d5d4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle7c95c5e3_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle7c95c5e4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle7fa93ce4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle8d69b5eb_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle8d69b5ec_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f3bc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f4fc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f503_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f53c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f53f_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f57b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f57c_;
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.Drawing.Surface\1.3.0-rc2\.uno\package
// ---------------------------------------------------------------------------------------

// public static generated class FuseDrawingSurface_bundle :0
// {
// static FuseDrawingSurface_bundle() :0
static void FuseDrawingSurface_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof()->Init();
    FuseDrawingSurface_bundle::AndroidGraphicsDrawHelperfe97d8e2_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[124/*"attribute v...*/], ::STRINGS[125/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/]));
    FuseDrawingSurface_bundle::Surface541b21c2_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[31/*"uniform mat...*/], ::STRINGS[32/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[14/*"e"*/]));
}

static void FuseDrawingSurface_bundle_build(uType* type)
{
    ::STRINGS[124] = uString::Const("attribute vec2 a;varying vec2 b;void main(){b=vec2(a.x,float(1)-a.y);gl_Position=vec4((a*float(2))-float(1),float(0),float(1));}");
    ::STRINGS[125] = uString::Const("uniform sampler2D c;varying vec2 b;void main(){gl_FragColor=texture2D(c,b);}");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[31] = uString::Const("uniform mat4 c,b;attribute vec2 a;varying vec2 d;void main(){d=true?vec2(a.x,float(1)-a.y):a;gl_Position=b*(c*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[32] = uString::Const("uniform sampler2D e;varying vec2 d;void main(){gl_FragColor=texture2D(e,d);}");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[14] = uString::Const("e");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingSurface_bundle::AndroidGraphicsDrawHelperfe97d8e2_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingSurface_bundle::Surface541b21c2_, uFieldFlagsStatic);
}

uClassType* FuseDrawingSurface_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseDrawingSurface_bundle", options);
    type->fp_build_ = FuseDrawingSurface_bundle_build;
    type->fp_cctor_ = FuseDrawingSurface_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingSurface_bundle::AndroidGraphicsDrawHelperfe97d8e2_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingSurface_bundle::Surface541b21c2_;
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.Effects\1.3.0-rc2\.uno\package
// -------------------------------------------------------------------------------

// public static generated class FuseEffects_bundle :0
// {
// static FuseEffects_bundle() :0
static void FuseEffects_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof()->Init();
    FuseEffects_bundle::Blitter6e650d31_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[126/*"uniform mat...*/], ::STRINGS[127/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[16/*"h"*/]));
    FuseEffects_bundle::Blur115443aa_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[31/*"uniform mat...*/], ::STRINGS[32/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[14/*"e"*/]));
    FuseEffects_bundle::Desaturate88bb7f94_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[35/*"uniform mat...*/], ::STRINGS[128/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"f"*/]));
    FuseEffects_bundle::Duotone26eb7e3c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[126/*"uniform mat...*/], ::STRINGS[129/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[16/*"h"*/]));
    FuseEffects_bundle::EffectHelpers52052d40_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[130/*"attribute v...*/], ::STRINGS[131/*"uniform flo...*/], 3, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[16/*"h"*/]));
    FuseEffects_bundle::EffectHelpers9b892494_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[132/*"attribute v...*/], ::STRINGS[125/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/]));
    FuseEffects_bundle::EffectHelpersd8c2e3e5_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[133/*"uniform vec...*/], ::STRINGS[134/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[26/*"t"*/]));
    FuseEffects_bundle::EffectHelperse7e608d1_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[135/*"uniform vec...*/], ::STRINGS[136/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 8, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[21/*"m"*/]));
    FuseEffects_bundle::Halftone3c4c510c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[137/*"uniform mat...*/], ::STRINGS[138/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/], ::STRINGS[25/*"q"*/]));
    FuseEffects_bundle::Mask0da73af7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[139/*"uniform mat...*/], ::STRINGS[140/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/]));
    FuseEffects_bundle::Mask6affc65c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[139/*"uniform mat...*/], ::STRINGS[141/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/]));
    FuseEffects_bundle::Maskb04eaf92_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[139/*"uniform mat...*/], ::STRINGS[142/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/]));
}

static void FuseEffects_bundle_build(uType* type)
{
    ::STRINGS[126] = uString::Const("uniform mat4 f,b;attribute vec2 a;varying vec2 g;void main(){g=true?vec2(a.x,float(1)-a.y):a;gl_Position=b*(f*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[127] = uString::Const("uniform vec3 e;uniform float c,d;uniform sampler2D h;varying vec2 g;void main(){gl_FragColor=vec4(e,clamp(texture2D(h,g).w*c,float(0),float(1))*d);}");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[14] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[16] = uString::Const("h");
    ::STRINGS[31] = uString::Const("uniform mat4 c,b;attribute vec2 a;varying vec2 d;void main(){d=true?vec2(a.x,float(1)-a.y):a;gl_Position=b*(c*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[32] = uString::Const("uniform sampler2D e;varying vec2 d;void main(){gl_FragColor=texture2D(e,d);}");
    ::STRINGS[35] = uString::Const("uniform mat4 d,b;attribute vec2 a;varying vec2 e;void main(){e=true?vec2(a.x,float(1)-a.y):a;gl_Position=b*(d*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[128] = uString::Const("uniform float c;uniform sampler2D f;varying vec2 e;void main(){vec4 g=texture2D(f,e);vec4 h=vec4(g.xyz/max(g.w,1e-05),g.w);gl_FragColor=vec4(mix(h.xyz,vec3(sqrt(dot(h.xyz*h.xyz,vec3(.299,.587,.114)))),c),h.w);}");
    ::STRINGS[129] = uString::Const("uniform vec3 c,d;uniform float e;uniform sampler2D h;varying vec2 g;void main(){vec4 i=texture2D(h,g);vec4 j=vec4(i.xyz/max(i.w,1e-05),i.w);gl_FragColor=vec4(mix(j.xyz,mix(c,d,sqrt(dot(j.xyz*j.xyz,vec3(.299,.587,.114)))).xyz,e),j.w);}");
    ::STRINGS[130] = uString::Const("attribute vec2 a;varying vec2 g;void main(){vec3 j=vec3((a.xy*vec2(float(2),float(2)))+vec3(float(-1),float(-1),float(0)).xy,float(0));g=(j.xy*.5)+.5;gl_Position=vec4(j,float(1));}");
    ::STRINGS[131] = uString::Const("uniform float e[b];uniform vec2 f[d];uniform sampler2D h;varying vec2 g;vec4 i(vec2 j){vec4 k=texture2D(h,j)*e[0];for(int l=0;l<c;++l){k=k+(texture2D(h,j+f[l])*e[1+l]);k=k+(texture2D(h,j-f[l])*e[1+l]);}return k;}void main(){gl_FragColor=i(g);}");
    ::STRINGS[132] = uString::Const("attribute vec2 a;varying vec2 b;void main(){vec3 d=vec3((a.xy*vec2(float(2),float(2)))+vec3(float(-1),float(-1),float(0)).xy,float(0));b=(d.xy*.5)+.5;gl_Position=vec4(d,float(1));}");
    ::STRINGS[125] = uString::Const("uniform sampler2D c;varying vec2 b;void main(){gl_FragColor=texture2D(c,b);}");
    ::STRINGS[133] = uString::Const("uniform vec2 c,e,f,h,i,j;attribute vec2 a;varying vec2 k,l,m,n,o,p,q,r,s;void main(){vec3 u=vec3((a.xy*vec2(float(2),float(2)))+vec3(float(-1),float(-1),float(0)).xy,float(0));vec2 v=(u.xy*.5)+.5;k=v;l=v+c;m=v-c;n=v+e;o=v-e;p=v+f;q=v+h;r=v+i;s=v+j;gl_Position=vec4(u,float(1));}");
    ::STRINGS[134] = uString::Const("uniform float b,d,g;uniform sampler2D t;varying vec2 k,l,m,n,o,p,q,r,s;void main(){gl_FragColor=((((((((texture2D(t,k)*b)+(texture2D(t,l)*d))+(texture2D(t,m)*d))+(texture2D(t,n)*d))+(texture2D(t,o)*d))+(texture2D(t,p)*g))+(texture2D(t,q)*g))+(texture2D(t,r)*g))+(texture2D(t,s)*g);}");
    ::STRINGS[15] = uString::Const("g");
    ::STRINGS[17] = uString::Const("i");
    ::STRINGS[18] = uString::Const("j");
    ::STRINGS[26] = uString::Const("t");
    ::STRINGS[135] = uString::Const("uniform vec2 c,e,f,g;attribute vec2 a;varying vec2 h,i,j,k,l;void main(){vec3 n=vec3((a.xy*vec2(float(2),float(2)))+vec3(float(-1),float(-1),float(0)).xy,float(0));vec2 o=(n.xy*.5)+.5;h=o;i=o+c;j=o+e;k=o+f;l=o+g;gl_Position=vec4(n,float(1));}");
    ::STRINGS[136] = uString::Const("uniform float b,d;uniform sampler2D m;varying vec2 h,i,j,k,l;void main(){gl_FragColor=((((texture2D(m,h)*b)+(texture2D(m,i)*d))+(texture2D(m,j)*d))+(texture2D(m,k)*d))+(texture2D(m,l)*d);}");
    ::STRINGS[21] = uString::Const("m");
    ::STRINGS[137] = uString::Const("uniform mat4 m,b;uniform vec2 g,h;uniform mat2 i;attribute vec2 a;varying vec2 n,o,p;void main(){vec2 r=true?vec2(a.x,float(1)-a.y):a;vec2 s=(r*g)+h;n=r;o=i*s;p=s;gl_Position=b*(m*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[138] = uString::Const("uniform float c,d,e,f,k,l;uniform mat2 j;uniform sampler2D q;varying vec2 n,o,p;void main(){vec4 r=texture2D(q,n);gl_FragColor=mix(mix(vec4(float(1),float(1),float(1),r.w),r,c),mix(vec4(float(0),float(0),float(0),r.w),r,d),clamp(.5-((((((float(1)-sqrt((float(1)-dot(r.xyz*r.xyz,vec3(.299,.587,.114)))/3.14159274))*e)*f)-length(p-(j*((floor(o/e)+.5)*e))))*k)*l),float(0),float(1)));}");
    ::STRINGS[19] = uString::Const("k");
    ::STRINGS[20] = uString::Const("l");
    ::STRINGS[25] = uString::Const("q");
    ::STRINGS[139] = uString::Const("uniform mat4 e,b;uniform vec2 c,d;attribute vec2 a;varying vec2 f,g;void main(){vec2 j=true?vec2(a.x,float(1)-a.y):a;f=j;g=(vec2(j.x,float(1)-j.y)*c)+d;gl_Position=b*(e*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[140] = uString::Const("uniform sampler2D h,i;varying vec2 f,g;void main(){gl_FragColor=texture2D(h,f)*texture2D(i,g).x;}");
    ::STRINGS[141] = uString::Const("uniform sampler2D h,i;varying vec2 f,g;void main(){vec4 j=texture2D(i,g);gl_FragColor=texture2D(h,f)*vec4(j.xyz*j.w,j.w);}");
    ::STRINGS[142] = uString::Const("uniform sampler2D h,i;varying vec2 f,g;void main(){gl_FragColor=texture2D(h,f)*texture2D(i,g).w;}");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseEffects_bundle::Blitter6e650d31_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseEffects_bundle::Blur115443aa_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseEffects_bundle::Desaturate88bb7f94_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseEffects_bundle::Duotone26eb7e3c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseEffects_bundle::EffectHelpers52052d40_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseEffects_bundle::EffectHelpers9b892494_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseEffects_bundle::EffectHelpersd8c2e3e5_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseEffects_bundle::EffectHelperse7e608d1_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseEffects_bundle::Halftone3c4c510c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseEffects_bundle::Mask0da73af7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseEffects_bundle::Mask6affc65c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseEffects_bundle::Maskb04eaf92_, uFieldFlagsStatic);
}

uClassType* FuseEffects_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseEffects_bundle", options);
    type->fp_build_ = FuseEffects_bundle_build;
    type->fp_cctor_ = FuseEffects_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Blitter6e650d31_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Blur115443aa_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Desaturate88bb7f94_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Duotone26eb7e3c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpers52052d40_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpers9b892494_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpersd8c2e3e5_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelperse7e608d1_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Halftone3c4c510c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Mask0da73af7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Mask6affc65c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Maskb04eaf92_;
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.Elements\1.3.0-rc2\.uno\package
// --------------------------------------------------------------------------------

// public static generated class FuseElements_bundle :0
// {
// static FuseElements_bundle() :0
static void FuseElements_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof()->Init();
    FuseElements_bundle::CacheHelper230c69b7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[143/*"uniform vec...*/], ::STRINGS[144/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[15/*"g"*/]));
    FuseElements_bundle::ElementBatchd43eeb4e_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[145/*"uniform mat...*/], ::STRINGS[146/*"uniform sam...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"f"*/]));
    FuseElements_bundle::ElementDraw1f583284_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[29/*"uniform mat...*/], ::STRINGS[30/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/]));
    FuseElements_bundle::RepeatBaker447c61dc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[147/*"uniform vec...*/], ::STRINGS[148/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[14/*"e"*/]));
    FuseElements_bundle::Scale9Rectangle720ad3ad_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[149/*"uniform flo...*/], ::STRINGS[150/*"uniform vec...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[15/*"g"*/], ::STRINGS[16/*"h"*/], ::STRINGS[17/*"i"*/], ::STRINGS[18/*"j"*/], ::STRINGS[19/*"k"*/], ::STRINGS[20/*"l"*/], ::STRINGS[21/*"m"*/], ::STRINGS[22/*"n"*/], ::STRINGS[23/*"o"*/], ::STRINGS[24/*"p"*/], ::STRINGS[54/*"r"*/]));
}

static void FuseElements_bundle_build(uType* type)
{
    ::STRINGS[143] = uString::Const("uniform vec2 b;uniform mat4 c,d;attribute vec2 a;varying vec2 f;void main(){f=vec2(a.x,1.-a.y);gl_Position=d*(c*vec4(a*b,float(0),float(1)));}");
    ::STRINGS[144] = uString::Const("uniform float e;uniform sampler2D g;varying vec2 f;void main(){vec4 h=texture2D(g,f);gl_FragColor=vec4(h.xyz*e,h.w*e);}");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[14] = uString::Const("e");
    ::STRINGS[15] = uString::Const("g");
    ::STRINGS[145] = uString::Const("uniform mat4 c;attribute vec3 a;attribute vec2 b;varying float d;varying vec2 e;void main(){d=a.z;e=vec2(b.x,1.-b.y);gl_Position=(a.z>float(0))?(c*vec4(a.xy,float(0),float(1))):vec4(float(0),float(0),float(0),float(-1));}");
    ::STRINGS[146] = uString::Const("uniform sampler2D f;varying float d;varying vec2 e;void main(){gl_FragColor=texture2D(f,e)*d;}");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[29] = uString::Const("uniform mat4 d,b;attribute vec2 a;void main(){gl_Position=b*(d*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[30] = uString::Const("uniform vec4 c;void main(){gl_FragColor=c;}");
    ::STRINGS[147] = uString::Const("uniform vec2 b,c;attribute vec2 a;varying vec2 d;void main(){d=(a*b)/c;gl_Position=vec4((a*float(2))-float(1),float(0),float(1));}");
    ::STRINGS[148] = uString::Const("uniform sampler2D e;varying vec2 d;void main(){gl_FragColor=texture2D(e,fract(d));}");
    ::STRINGS[149] = uString::Const("uniform float c,d,e,f,g,h,k,l,m,n;uniform mat4 i,j;uniform vec2 o;attribute vec3 a,b;varying vec2 q;void main(){q=vec2(((a.x*c)+(a.y*k))+(a.z*l),((b.x*f)+(b.y*m))+(b.z*n))/o;gl_Position=j*(i*vec4(vec2(((a.x*c)+(a.y*d))+(a.z*e),((b.x*f)+(b.y*g))+(b.z*h)),float(0),float(1)));}");
    ::STRINGS[150] = uString::Const("uniform vec4 p;uniform sampler2D r;varying vec2 q;void main(){gl_FragColor=texture2D(r,q)*p;}");
    ::STRINGS[16] = uString::Const("h");
    ::STRINGS[17] = uString::Const("i");
    ::STRINGS[18] = uString::Const("j");
    ::STRINGS[19] = uString::Const("k");
    ::STRINGS[20] = uString::Const("l");
    ::STRINGS[21] = uString::Const("m");
    ::STRINGS[22] = uString::Const("n");
    ::STRINGS[23] = uString::Const("o");
    ::STRINGS[24] = uString::Const("p");
    ::STRINGS[54] = uString::Const("r");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseElements_bundle::CacheHelper230c69b7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseElements_bundle::ElementBatchd43eeb4e_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseElements_bundle::ElementDraw1f583284_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseElements_bundle::RepeatBaker447c61dc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseElements_bundle::Scale9Rectangle720ad3ad_, uFieldFlagsStatic);
}

uClassType* FuseElements_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseElements_bundle", options);
    type->fp_build_ = FuseElements_bundle_build;
    type->fp_cctor_ = FuseElements_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::CacheHelper230c69b7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::ElementBatchd43eeb4e_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::ElementDraw1f583284_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::RepeatBaker447c61dc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::Scale9Rectangle720ad3ad_;
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.Nodes\1.3.0-rc2\.uno\package
// -----------------------------------------------------------------------------

// public static generated class FuseNodes_bundle :0
// {
// static FuseNodes_bundle() :0
static void FuseNodes_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof()->Init();
    FuseNodes_bundle::DrawHelpers4c5c39ae_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[151/*"uniform vec...*/], ::STRINGS[152/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[14/*"e"*/]));
    FuseNodes_bundle::DrawRectVisualizer5cbb2c45_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[153/*"attribute v...*/], ::STRINGS[154/*"void main()...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 1, ::STRINGS[2/*"a"*/]));
    FuseNodes_bundle::DrawRectVisualizer5cbb2c46_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[155/*"uniform mat...*/], ::STRINGS[156/*"varying vec...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 3, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/]));
}

static void FuseNodes_bundle_build(uType* type)
{
    ::STRINGS[151] = uString::Const("uniform vec2 c,b;uniform mat4 d;attribute vec2 a;void main(){gl_Position=d*vec4(c+(a*b),float(0),float(1));}");
    ::STRINGS[152] = uString::Const("uniform vec4 e;void main(){gl_FragColor=e;}");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[14] = uString::Const("e");
    ::STRINGS[153] = uString::Const("attribute vec2 a;void main(){gl_Position=vec4((a*float(2))-float(1),float(0),float(1));}");
    ::STRINGS[154] = uString::Const("void main(){gl_FragColor=vec4(float(0),float(0),float(0),.5);}");
    ::STRINGS[155] = uString::Const("uniform mat4 c;attribute vec4 a;attribute vec2 b;varying vec4 d;void main(){d=vec4(b,float(0),.2);gl_Position=c*a;}");
    ::STRINGS[156] = uString::Const("varying vec4 d;void main(){gl_FragColor=d;}");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseNodes_bundle::DrawHelpers4c5c39ae_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseNodes_bundle::DrawRectVisualizer5cbb2c45_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseNodes_bundle::DrawRectVisualizer5cbb2c46_, uFieldFlagsStatic);
}

uClassType* FuseNodes_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseNodes_bundle", options);
    type->fp_build_ = FuseNodes_bundle_build;
    type->fp_cctor_ = FuseNodes_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseNodes_bundle::DrawHelpers4c5c39ae_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseNodes_bundle::DrawRectVisualizer5cbb2c45_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseNodes_bundle::DrawRectVisualizer5cbb2c46_;
// }

// C:\Users\q\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\1.3.0-rc2\.uno\package
// -------------------------------------------------------------------------------------------

// public static generated class FuseReactiveJavaScript_bundle :0
// {
// static FuseReactiveJavaScript_bundle() :0
static void FuseReactiveJavaScript_bundle__cctor__fn(uType* __type)
{
    FuseReactiveJavaScript_bundle::Diagnosticsa2c35693_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[157/*"Fuse.Reacti...*/]))->GetFile(::STRINGS[158/*"diagnostics...*/]);
    FuseReactiveJavaScript_bundle::es6promiseminb4b7ea8e_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[157/*"Fuse.Reacti...*/]))->GetFile(::STRINGS[159/*"es6-promise...*/]);
    FuseReactiveJavaScript_bundle::Observable61dc4260_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[157/*"Fuse.Reacti...*/]))->GetFile(::STRINGS[160/*"observable-...*/]);
    FuseReactiveJavaScript_bundle::setTimeoutddc67d36_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[157/*"Fuse.Reacti...*/]))->GetFile(::STRINGS[161/*"settimeout-...*/]);
}

static void FuseReactiveJavaScript_bundle_build(uType* type)
{
    ::STRINGS[157] = uString::Const("Fuse.Reactive.JavaScript");
    ::STRINGS[158] = uString::Const("diagnostics-1fee1f53.js");
    ::STRINGS[159] = uString::Const("es6-promise.min-2da2c24c.js");
    ::STRINGS[160] = uString::Const("observable-2bc0fed2.js");
    ::STRINGS[161] = uString::Const("settimeout-93150384.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&FuseReactiveJavaScript_bundle::Diagnosticsa2c35693_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&FuseReactiveJavaScript_bundle::es6promiseminb4b7ea8e_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&FuseReactiveJavaScript_bundle::Observable61dc4260_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&FuseReactiveJavaScript_bundle::setTimeoutddc67d36_, uFieldFlagsStatic);
}

uClassType* FuseReactiveJavaScript_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseReactiveJavaScript_bundle", options);
    type->fp_build_ = FuseReactiveJavaScript_bundle_build;
    type->fp_cctor_ = FuseReactiveJavaScript_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> FuseReactiveJavaScript_bundle::Diagnosticsa2c35693_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseReactiveJavaScript_bundle::es6promiseminb4b7ea8e_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseReactiveJavaScript_bundle::Observable61dc4260_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseReactiveJavaScript_bundle::setTimeoutddc67d36_;
// }

} // ::g
