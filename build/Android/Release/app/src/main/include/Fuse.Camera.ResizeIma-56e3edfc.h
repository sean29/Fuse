// This file was generated based on C:/Users/q/AppData/Local/Fusetools/Packages/Fuse.Camera/1.2.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Camera{struct ResizeImageCallback;}}}
namespace g{namespace Fuse{namespace ImageTools{struct Image;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}

namespace g{
namespace Fuse{
namespace Camera{

// internal sealed class ResizeImageCallback :94
// {
uType* ResizeImageCallback_typeof();
void ResizeImageCallback__ctor__fn(ResizeImageCallback* __this, ::g::Uno::Threading::Promise* p, int* width, int* height);
void ResizeImageCallback__get_ImagePromise_fn(ResizeImageCallback* __this, ::g::Uno::Threading::Promise** __retval);
void ResizeImageCallback__set_ImagePromise_fn(ResizeImageCallback* __this, ::g::Uno::Threading::Promise* value);
void ResizeImageCallback__New1_fn(::g::Uno::Threading::Promise* p, int* width, int* height, ResizeImageCallback** __retval);
void ResizeImageCallback__ResolveResized_fn(ResizeImageCallback* __this, ::g::Fuse::ImageTools::Image* img);
void ResizeImageCallback__ResolveTaken_fn(ResizeImageCallback* __this, ::g::Fuse::ImageTools::Image* img);

struct ResizeImageCallback : uObject
{
    int _height;
    uStrong< ::g::Uno::Threading::Promise*> _promise;
    int _width;
    uStrong< ::g::Uno::Threading::Promise*> _ImagePromise;

    void ctor_(::g::Uno::Threading::Promise* p, int width, int height);
    ::g::Uno::Threading::Promise* ImagePromise();
    void ImagePromise(::g::Uno::Threading::Promise* value);
    void ResolveResized(::g::Fuse::ImageTools::Image* img);
    void ResolveTaken(::g::Fuse::ImageTools::Image* img);
    static ResizeImageCallback* New1(::g::Uno::Threading::Promise* p, int width, int height);
};
// }

}}} // ::g::Fuse::Camera
