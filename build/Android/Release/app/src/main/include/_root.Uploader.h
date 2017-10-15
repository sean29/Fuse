// This file was generated based on Uploader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Uno{namespace Threading{struct Future1;}}}
namespace g{struct Uploader;}

namespace g{

// public sealed class Uploader :22
// {
::g::Fuse::Scripting::NativeModule_type* Uploader_typeof();
void Uploader__ctor_2_fn(Uploader* __this);
void Uploader__New2_fn(Uploader** __retval);
void Uploader__send_fn(uArray* args, ::g::Uno::Threading::Future1** __retval);

struct Uploader : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<Uploader*> _instance_;
    static uSStrong<Uploader*>& _instance() { return _instance_; }

    void ctor_2();
    static Uploader* New2();
    static ::g::Uno::Threading::Future1* send(uArray* args);
};
// }

} // ::g
