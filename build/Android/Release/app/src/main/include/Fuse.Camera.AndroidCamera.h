// This file was generated based on '/Users/a/Library/Application Support/Fusetools/Packages/Fuse.Camera/1.2.1/android/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Camera{struct AndroidCamera;}}}
namespace g{namespace Fuse{namespace ImageTools{struct Image;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}

namespace g{
namespace Fuse{
namespace Camera{

// internal static extern class AndroidCamera :12
// {
uClassType* AndroidCamera_typeof();
void AndroidCamera__TakePicture_fn(::g::Uno::Threading::Promise* p);

struct AndroidCamera : uObject
{
    static void TakePicture(::g::Uno::Threading::Promise* p);
};
// }

}}} // ::g::Fuse::Camera
