// This file was generated based on '.uno/ux11/ImpactPage.g.uno'.
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
namespace g{namespace Fuse{namespace Controls{struct StackPanel;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ImpactPage;}

namespace g{

// public partial sealed class ImpactPage :2
// {
::g::Fuse::Controls::Panel_type* ImpactPage_typeof();
void ImpactPage__ctor_8_fn(ImpactPage* __this, ::g::Fuse::Navigation::Router* router1);
void ImpactPage__InitializeUX_fn(ImpactPage* __this);
void ImpactPage__New5_fn(::g::Fuse::Navigation::Router* router1, ImpactPage** __retval);

struct ImpactPage : ::g::Fuse::Controls::Page
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return ImpactPage_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ImpactPage_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return ImpactPage_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return ImpactPage_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return ImpactPage_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return ImpactPage_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return ImpactPage_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return ImpactPage_typeof()->Init(), __selector6_; }
    static uSStrong< ::g::Fuse::Font*> Curl_;
    static uSStrong< ::g::Fuse::Font*>& Curl() { return ImpactPage_typeof()->Init(), Curl_; }
    uStrong< ::g::Fuse::Controls::Rectangle*> fiverec;
    uStrong< ::g::Uno::UX::Property1*> fiverec_Color_inst;
    uStrong< ::g::Fuse::Controls::StackPanel*> outerpanel;
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb40;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb41;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb42;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb43;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Fuse::Controls::Rectangle*> tenrec;
    uStrong< ::g::Uno::UX::Property1*> tenrec_Color_inst;
    uStrong< ::g::Fuse::Controls::Rectangle*> twentyfiverec;
    uStrong< ::g::Uno::UX::Property1*> twentyfiverec_Color_inst;
    uStrong< ::g::Fuse::Controls::Rectangle*> ZipBar;

    void ctor_8(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static ImpactPage* New5(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
