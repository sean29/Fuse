// This file was generated based on '.uno/ux13/MyLoadingIndicator3.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Circle;}}}
namespace g{namespace Fuse{namespace Triggers{struct Timeline;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MyLoadingIndicator3;}

namespace g{

// public partial sealed class MyLoadingIndicator3 :2
// {
::g::Fuse::Controls::Panel_type* MyLoadingIndicator3_typeof();
void MyLoadingIndicator3__ctor_7_fn(MyLoadingIndicator3* __this);
void MyLoadingIndicator3__InitializeUX_fn(MyLoadingIndicator3* __this);
void MyLoadingIndicator3__New4_fn(MyLoadingIndicator3** __retval);
void MyLoadingIndicator3__SetThemeColor_fn(MyLoadingIndicator3* __this, ::g::Uno::Float4* value, uObject* origin);
void MyLoadingIndicator3__get_ThemeColor_fn(MyLoadingIndicator3* __this, ::g::Uno::Float4* __retval);
void MyLoadingIndicator3__set_ThemeColor_fn(MyLoadingIndicator3* __this, ::g::Uno::Float4* value);

struct MyLoadingIndicator3 : ::g::Fuse::Controls::Panel
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MyLoadingIndicator3_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return MyLoadingIndicator3_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return MyLoadingIndicator3_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return MyLoadingIndicator3_typeof()->Init(), __selector3_; }
    ::g::Uno::Float4 _field_ThemeColor;
    uStrong< ::g::Fuse::Triggers::Timeline*> myTimeline;
    uStrong< ::g::Uno::UX::Property1*> myTimeline_TargetProgress_inst;
    uStrong< ::g::Fuse::Controls::Circle*> rotatingStroke;
    uStrong< ::g::Uno::UX::Property1*> temp_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Color_inst;

    void ctor_7();
    void InitializeUX();
    void SetThemeColor(::g::Uno::Float4 value, uObject* origin);
    ::g::Uno::Float4 ThemeColor();
    void ThemeColor(::g::Uno::Float4 value);
    static MyLoadingIndicator3* New4();
};
// }

} // ::g
