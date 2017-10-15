// This file was generated based on '.uno/ux13/Mouse.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{struct Mouse;}

namespace g{

// public partial sealed class Mouse :2
// {
::g::Fuse::Controls::TextControl_type* Mouse_typeof();
void Mouse__ctor_8_fn(Mouse* __this);
void Mouse__InitializeUX1_fn(Mouse* __this);
void Mouse__New4_fn(Mouse** __retval);

struct Mouse : ::g::Fuse::Controls::Text
{
    void ctor_8();
    void InitializeUX1();
    static Mouse* New4();
};
// }

} // ::g
