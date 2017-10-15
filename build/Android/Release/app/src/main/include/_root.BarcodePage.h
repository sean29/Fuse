// This file was generated based on '.uno/ux11/BarcodePage.g.uno'.
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
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct BarcodePage;}
namespace g{struct Qreader;}

namespace g{

// public partial sealed class BarcodePage :2
// {
::g::Fuse::Controls::Panel_type* BarcodePage_typeof();
void BarcodePage__ctor_8_fn(BarcodePage* __this, ::g::Fuse::Navigation::Router* router1);
void BarcodePage__InitializeUX_fn(BarcodePage* __this);
void BarcodePage__New5_fn(::g::Fuse::Navigation::Router* router1, BarcodePage** __retval);

struct BarcodePage : ::g::Fuse::Controls::Page
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return BarcodePage_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return BarcodePage_typeof()->Init(), __selector0_; }
    static uSStrong< ::g::Qreader*> Qreader_;
    static uSStrong< ::g::Qreader*>& Qreader() { return BarcodePage_typeof()->Init(), Qreader_; }
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb17;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;

    void ctor_8(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static BarcodePage* New5(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
