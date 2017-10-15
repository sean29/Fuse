// This file was generated based on '.uno/ux13/EmralsThankYouPage.g.uno'.
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
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct EmralsThankYouPage;}

namespace g{

// public partial class EmralsThankYouPage :2
// {
::g::Fuse::Controls::Panel_type* EmralsThankYouPage_typeof();
void EmralsThankYouPage__ctor_8_fn(EmralsThankYouPage* __this, ::g::Fuse::Navigation::Router* router1);
void EmralsThankYouPage__InitializeUX_fn(EmralsThankYouPage* __this);

struct EmralsThankYouPage : ::g::Fuse::Controls::Page
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return EmralsThankYouPage_typeof()->Init(), __selector0_; }
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb37;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb38;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb39;
    uStrong< ::g::Uno::UX::Property1*> temp_File_inst;

    void ctor_8(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
};
// }

} // ::g
