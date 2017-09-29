// This file was generated based on '.uno/ux11/Dog.g.uno'.
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
namespace g{struct Dog;}

namespace g{

// public partial sealed class Dog :2
// {
::g::Fuse::Controls::TextControl_type* Dog_typeof();
void Dog__ctor_8_fn(Dog* __this);
void Dog__InitializeUX1_fn(Dog* __this);
void Dog__New4_fn(Dog** __retval);

struct Dog : ::g::Fuse::Controls::Text
{
    void ctor_8();
    void InitializeUX1();
    static Dog* New4();
};
// }

} // ::g
