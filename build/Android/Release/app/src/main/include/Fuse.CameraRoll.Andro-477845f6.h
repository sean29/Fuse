// This file was generated based on C:/Users/q/AppData/Local/Fusetools/Packages/Fuse.CameraRoll/1.3.0-rc2/Android/AndroidCameraRoll.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace CameraRoll{struct AndroidCameraRoll;}}}
namespace g{namespace Fuse{namespace ImageTools{struct Image;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}

namespace g{
namespace Fuse{
namespace CameraRoll{

// internal static extern class AndroidCameraRoll :157
// {
uClassType* AndroidCameraRoll_typeof();
void AndroidCameraRoll__AddToCameraRoll_fn(::g::Fuse::ImageTools::Image* photo, ::g::Uno::Threading::Future1** __retval);
void AndroidCameraRoll__SelectPicture_fn(::g::Uno::Threading::Promise* p);

struct AndroidCameraRoll : uObject
{
    static ::g::Uno::Threading::Future1* AddToCameraRoll(::g::Fuse::ImageTools::Image* photo);
    static void SelectPicture(::g::Uno::Threading::Promise* p);
};
// }

}}} // ::g::Fuse::CameraRoll
