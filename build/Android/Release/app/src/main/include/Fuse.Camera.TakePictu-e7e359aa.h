// This file was generated based on '/Users/a/Library/Application Support/Fusetools/Packages/Fuse.Camera/1.2.1/android/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Camera{struct TakePictureCallback;}}}
namespace g{namespace Fuse{namespace ImageTools{struct Image;}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}

namespace g{
namespace Fuse{
namespace Camera{

// internal sealed extern class TakePictureCallback :81
// {
uType* TakePictureCallback_typeof();
void TakePictureCallback__ctor__fn(TakePictureCallback* __this, ::g::Uno::Threading::Promise* p);
void TakePictureCallback__HandleIntent_fn(TakePictureCallback* __this, int* resultCode, ::g::Java::Object* intent, ::g::Java::Object* photo, uDelegate* onComplete, uDelegate* onFail);
void TakePictureCallback__New1_fn(::g::Uno::Threading::Promise* p, TakePictureCallback** __retval);
void TakePictureCallback__OnActivityResult_fn(TakePictureCallback* __this, int* resultCode, ::g::Java::Object* intent, uObject* info);
void TakePictureCallback__OnComplete_fn(TakePictureCallback* __this, uString* path);
void TakePictureCallback__OnFail_fn(TakePictureCallback* __this, uString* reason);

struct TakePictureCallback : uObject
{
    uStrong< ::g::Uno::Threading::Promise*> _p;

    void ctor_(::g::Uno::Threading::Promise* p);
    void HandleIntent(int resultCode, ::g::Java::Object* intent, ::g::Java::Object* photo, uDelegate* onComplete, uDelegate* onFail);
    void OnActivityResult(int resultCode, ::g::Java::Object* intent, uObject* info);
    void OnComplete(uString* path);
    void OnFail(uString* reason);
    static TakePictureCallback* New1(::g::Uno::Threading::Promise* p);
};
// }

}}} // ::g::Fuse::Camera
