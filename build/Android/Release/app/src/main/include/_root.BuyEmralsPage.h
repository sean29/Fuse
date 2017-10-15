// This file was generated based on '.uno/ux11/BuyEmralsPage.g.uno'.
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
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct BuyEmralsPage;}

namespace g{

// public partial sealed class BuyEmralsPage :2
// {
::g::Fuse::Controls::Panel_type* BuyEmralsPage_typeof();
void BuyEmralsPage__ctor_8_fn(BuyEmralsPage* __this, ::g::Fuse::Navigation::Router* router1);
void BuyEmralsPage__InitializeUX_fn(BuyEmralsPage* __this);
void BuyEmralsPage__New5_fn(::g::Fuse::Navigation::Router* router1, BuyEmralsPage** __retval);

struct BuyEmralsPage : ::g::Fuse::Controls::Page
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return BuyEmralsPage_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return BuyEmralsPage_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return BuyEmralsPage_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return BuyEmralsPage_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return BuyEmralsPage_typeof()->Init(), __selector3_; }
    uStrong< ::g::Fuse::Controls::Rectangle*> confirmrec;
    uStrong< ::g::Uno::UX::Property1*> confirmrec_Color_inst;
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb22;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb23;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb24;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb25;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp10_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Visibility_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp5_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp6_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp7_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp8_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp9_Value_inst;

    void ctor_8(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static BuyEmralsPage* New5(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
