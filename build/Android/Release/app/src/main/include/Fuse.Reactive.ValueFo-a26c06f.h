// This file was generated based on C:/Users/q/AppData/Local/Fusetools/Packages/Fuse.Reactive/1.3.0-rc2/ValueObserver.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract interface ValueForwarder.IValueListener :79
// {
uInterfaceType* ValueForwarder__IValueListener_typeof();

struct ValueForwarder__IValueListener
{
    void(*fp_NewValue)(uObject*, uObject*);
    static void NewValue(const uInterface& __this, uObject* value) { __this.VTable<ValueForwarder__IValueListener>()->fp_NewValue(__this, value); }
};
// }

}}} // ::g::Fuse::Reactive
