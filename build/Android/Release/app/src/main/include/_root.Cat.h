// This file was generated based on '.uno/ux11/Cat.g.uno'.
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
namespace g{struct Cat;}

namespace g{

// public partial sealed class Cat :2
// {
::g::Fuse::Controls::TextControl_type* Cat_typeof();
void Cat__ctor_8_fn(Cat* __this);
void Cat__InitializeUX1_fn(Cat* __this);
void Cat__New4_fn(Cat** __retval);

struct Cat : ::g::Fuse::Controls::Text
{
    void ctor_8();
    void InitializeUX1();
    static Cat* New4();
};
// }

} // ::g
