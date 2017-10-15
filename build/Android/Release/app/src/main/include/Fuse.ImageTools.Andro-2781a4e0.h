// This file was generated based on '/Users/a/Library/Application Support/Fusetools/Packages/Fuse.ImageTools/1.2.1/android/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace ImageTools{struct AndroidImageUtils;}}}
namespace g{namespace Fuse{namespace ImageTools{struct Image;}}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace ImageTools{

// internal static extern class AndroidImageUtils :10
// {
uClassType* AndroidImageUtils_typeof();
void AndroidImageUtils__Crop_fn(uString* path, int* width, int* height, int* x, int* y, uDelegate* onSuccess, uDelegate* onFail, bool* performInPlace);
void AndroidImageUtils__GetBase64FromImage_fn(uString* path, uDelegate* onSuccess, uDelegate* onFail);
void AndroidImageUtils__GetImageFromBase64_fn(uString* b64, uDelegate* onSuccess, uDelegate* onFail);
void AndroidImageUtils__GetImageFromBuffer_fn(uArray* bytes, uDelegate* onSuccess, uDelegate* onFail);
void AndroidImageUtils__GetImageFromBufferSync_fn(uArray* bytes, uString** __retval);
void AndroidImageUtils__GetSize_fn(::g::Fuse::ImageTools::Image* inImage, ::g::Uno::Int2* __retval);
void AndroidImageUtils__GetSizeInternal_fn(uString* path, uArray* values);
void AndroidImageUtils__Resize_fn(uString* path, int* width, int* height, int* mode, uDelegate* onSuccess, uDelegate* onFail, bool* performInPlace);

struct AndroidImageUtils : uObject
{
    static void Crop(uString* path, int width, int height, int x, int y, uDelegate* onSuccess, uDelegate* onFail, bool performInPlace);
    static void GetBase64FromImage(uString* path, uDelegate* onSuccess, uDelegate* onFail);
    static void GetImageFromBase64(uString* b64, uDelegate* onSuccess, uDelegate* onFail);
    static void GetImageFromBuffer(uArray* bytes, uDelegate* onSuccess, uDelegate* onFail);
    static uString* GetImageFromBufferSync(uArray* bytes);
    static ::g::Uno::Int2 GetSize(::g::Fuse::ImageTools::Image* inImage);
    static void GetSizeInternal(uString* path, uArray* values);
    static void Resize(uString* path, int width, int height, int mode, uDelegate* onSuccess, uDelegate* onFail, bool performInPlace);
};
// }

}}} // ::g::Fuse::ImageTools
