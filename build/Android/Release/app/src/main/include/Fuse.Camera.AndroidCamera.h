// This file was generated based on C:/Users/q/AppData/Local/Fusetools/Packages/Fuse.Camera/1.3.0-rc2/Android/AndroidCamera.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Camera{struct AndroidCamera;}}}
namespace g{namespace Fuse{namespace ImageTools{struct Image;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}

namespace g{
namespace Fuse{
namespace Camera{

// internal static extern class AndroidCamera :10
// {
uClassType* AndroidCamera_typeof();
void AndroidCamera__TakePicture_fn(::g::Uno::Threading::Promise* p);

struct AndroidCamera : uObject
{
    static void TakePicture(::g::Uno::Threading::Promise* p);
};
// }

}}} // ::g::Fuse::Camera
