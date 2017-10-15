// This file was generated based on '.uno/ux13/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <_root.PaymentPage.h>
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
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
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MainView;}
namespace g{struct MainView__Template9;}

namespace g{

// private sealed class MainView.Template9 :269
// {
::g::Fuse::Controls::Panel_type* MainView__Template9_typeof();
void MainView__Template9__ctor_9_fn(MainView__Template9* __this, ::g::MainView* parent, ::g::Fuse::Navigation::Router* router1);
void MainView__Template9__InitializeUX1_fn(MainView__Template9* __this);
void MainView__Template9__New6_fn(::g::MainView* parent, ::g::Fuse::Navigation::Router* router1, MainView__Template9** __retval);

struct MainView__Template9 : ::g::PaymentPage
{
    uWeak< ::g::MainView*> __parent1;
    static ::g::Uno::UX::Selector __selector01_;
    static ::g::Uno::UX::Selector& __selector01() { return MainView__Template9_typeof()->Init(), __selector01_; }

    void ctor_9(::g::MainView* parent, ::g::Fuse::Navigation::Router* router1);
    void InitializeUX1();
    static MainView__Template9* New6(::g::MainView* parent, ::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
