// This file was generated based on '.uno/ux11/AlertDetailPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Page.h>
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
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileTrue;}}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct AlertDetailPage;}
namespace g{struct PTBold;}

namespace g{

// public partial sealed class AlertDetailPage :2
// {
::g::Fuse::Controls::Panel_type* AlertDetailPage_typeof();
void AlertDetailPage__ctor_8_fn(AlertDetailPage* __this, ::g::Fuse::Navigation::Router* router1);
void AlertDetailPage__InitializeUX_fn(AlertDetailPage* __this);
void AlertDetailPage__New5_fn(::g::Fuse::Navigation::Router* router1, AlertDetailPage** __retval);

struct AlertDetailPage : ::g::Fuse::Controls::Page
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return AlertDetailPage_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return AlertDetailPage_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return AlertDetailPage_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return AlertDetailPage_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return AlertDetailPage_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return AlertDetailPage_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return AlertDetailPage_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return AlertDetailPage_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return AlertDetailPage_typeof()->Init(), __selector7_; }
    uStrong< ::g::Fuse::Controls::Panel*> AddEmralsPopUp2;
    uStrong< ::g::Uno::UX::Property1*> AddEmralsPopUp2_Visibility_inst;
    uStrong< ::g::PTBold*> emrals_value1;
    uStrong< ::g::PTBold*> emrals_value10;
    uStrong< ::g::PTBold*> emrals_value5;
    static uSStrong< ::g::Fuse::Font*> Head_;
    static uSStrong< ::g::Fuse::Font*>& Head() { return AlertDetailPage_typeof()->Init(), Head_; }
    uStrong< ::g::Fuse::Triggers::WhileTrue*> Revealed;
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb10;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb11;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb12;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb7;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb8;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb9;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Url_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp5_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp6_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp7_Url_inst;

    void ctor_8(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static AlertDetailPage* New5(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
