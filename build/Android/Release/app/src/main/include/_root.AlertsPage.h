// This file was generated based on '.uno/ux11/AlertsPage.g.uno'.
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
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Circle;}}}
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Fuse{namespace Triggers{struct Busy;}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileTrue;}}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct AlertsPage;}
namespace g{struct MyLoadingIndicator;}

namespace g{

// public partial sealed class AlertsPage :2
// {
::g::Fuse::Controls::Panel_type* AlertsPage_typeof();
void AlertsPage__ctor_8_fn(AlertsPage* __this, ::g::Fuse::Navigation::Router* router1);
void AlertsPage__InitializeUX_fn(AlertsPage* __this);
void AlertsPage__New5_fn(::g::Fuse::Navigation::Router* router1, AlertsPage** __retval);

struct AlertsPage : ::g::Fuse::Controls::Page
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return AlertsPage_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return AlertsPage_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return AlertsPage_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return AlertsPage_typeof()->Init(), __selector10_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return AlertsPage_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return AlertsPage_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return AlertsPage_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return AlertsPage_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return AlertsPage_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return AlertsPage_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return AlertsPage_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return AlertsPage_typeof()->Init(), __selector9_; }
    uStrong< ::g::Fuse::Controls::Rectangle*> alert_panel;
    uStrong< ::g::Uno::UX::Property1*> alert_panel_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> alert_panel_Visibility_inst;
    uStrong< ::g::Fuse::Controls::Panel*> ChooseFile;
    uStrong< ::g::Uno::UX::Property1*> ChooseFile_Visibility_inst;
    static uSStrong< ::g::Fuse::Font*> Header_;
    static uSStrong< ::g::Fuse::Font*>& Header() { return AlertsPage_typeof()->Init(), Header_; }
    uStrong< ::g::Fuse::Triggers::Busy*> isBusy;
    uStrong< ::g::MyLoadingIndicator*> loadingPanel;
    uStrong< ::g::Uno::UX::Property1*> loadingPanel_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Circle*> postcircle;
    uStrong< ::g::Uno::UX::Property1*> postcircle_Color_inst;
    static uSStrong< ::g::Fuse::Font*> PTreal_;
    static uSStrong< ::g::Fuse::Font*>& PTreal() { return AlertsPage_typeof()->Init(), PTreal_; }
    uStrong< ::g::Fuse::Triggers::WhileTrue*> Revealed;
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb13;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb14;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb15;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Items_inst;

    void ctor_8(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static AlertsPage* New5(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
