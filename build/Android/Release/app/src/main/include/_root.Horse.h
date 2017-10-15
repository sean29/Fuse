// This file was generated based on '.uno/ux11/Horse.g.uno'.
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
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{struct Horse;}

namespace g{

// public partial sealed class Horse :2
// {
::g::Fuse::Controls::TextControl_type* Horse_typeof();
void Horse__ctor_8_fn(Horse* __this);
void Horse__InitializeUX1_fn(Horse* __this);
void Horse__New4_fn(Horse** __retval);

struct Horse : ::g::Fuse::Controls::Text
{
    void ctor_8();
    void InitializeUX1();
    static Horse* New4();
};
// }

} // ::g
