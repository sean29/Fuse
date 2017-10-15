// This file was generated based on '.uno/ux13/SplashPage.g.uno'.
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
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct SplashPage;}

namespace g{

// public partial class SplashPage :2
// {
::g::Fuse::Controls::Panel_type* SplashPage_typeof();
void SplashPage__ctor_8_fn(SplashPage* __this, ::g::Fuse::Navigation::Router* router1);
void SplashPage__InitializeUX_fn(SplashPage* __this);

struct SplashPage : ::g::Fuse::Controls::Page
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return SplashPage_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return SplashPage_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return SplashPage_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return SplashPage_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return SplashPage_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return SplashPage_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return SplashPage_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return SplashPage_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return SplashPage_typeof()->Init(), __selector8_; }
    uStrong< ::g::Fuse::Controls::Rectangle*> ecanrec;
    uStrong< ::g::Uno::UX::Property1*> ecanrec_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Rectangle*> impactrec;
    uStrong< ::g::Uno::UX::Property1*> impactrec_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Rectangle*> loginrec;
    uStrong< ::g::Uno::UX::Property1*> loginrec_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> loginrec_Visibility_inst;
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Fuse::Controls::Rectangle*> tagrec;
    uStrong< ::g::Uno::UX::Property1*> tagrec_Opacity_inst;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb69;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb70;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb71;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb72;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb73;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Url_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;

    void ctor_8(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
};
// }

} // ::g
