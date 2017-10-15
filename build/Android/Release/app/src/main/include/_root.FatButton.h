// This file was generated based on '.uno/ux13/FatButton.g.uno'.
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
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FatButton;}

namespace g{

// public partial sealed class FatButton :2
// {
::g::Fuse::Controls::Panel_type* FatButton_typeof();
void FatButton__SetText_fn(FatButton* __this, uString* value, uObject* origin);
void FatButton__get_Text_fn(FatButton* __this, uString** __retval);
void FatButton__set_Text_fn(FatButton* __this, uString* value);

struct FatButton : ::g::Fuse::Controls::Panel
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return FatButton_typeof()->Init(), __selector0_; }
    uStrong<uString*> _field_Text;

    void SetText(uString* value, uObject* origin);
    uString* Text();
    void Text(uString* value);
};
// }

} // ::g
