// This file was generated based on '/Users/a/Library/Application Support/Fusetools/Packages/Fuse.CameraRoll/1.2.1/android/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace CameraRoll{struct SelectPictureClosure;}}}
namespace g{namespace Fuse{namespace ImageTools{struct Image;}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}

namespace g{
namespace Fuse{
namespace CameraRoll{

// internal sealed extern class SelectPictureClosure :12
// {
uType* SelectPictureClosure_typeof();
void SelectPictureClosure__ctor__fn(SelectPictureClosure* __this, ::g::Uno::Threading::Promise* p);
void SelectPictureClosure__HandleIntent_fn(SelectPictureClosure* __this, int* resultCode, ::g::Java::Object* intent, uDelegate* onComplete, uDelegate* onFail);
void SelectPictureClosure__New1_fn(::g::Uno::Threading::Promise* p, SelectPictureClosure** __retval);
void SelectPictureClosure__OnActivityResult_fn(SelectPictureClosure* __this, int* resultCode, ::g::Java::Object* intent, uObject* info);
void SelectPictureClosure__OnComplete_fn(SelectPictureClosure* __this, uString* path);
void SelectPictureClosure__OnFail_fn(SelectPictureClosure* __this, uString* reason);

struct SelectPictureClosure : uObject
{
    uStrong< ::g::Uno::Threading::Promise*> _p;

    void ctor_(::g::Uno::Threading::Promise* p);
    void HandleIntent(int resultCode, ::g::Java::Object* intent, uDelegate* onComplete, uDelegate* onFail);
    void OnActivityResult(int resultCode, ::g::Java::Object* intent, uObject* info);
    void OnComplete(uString* path);
    void OnFail(uString* reason);
    static SelectPictureClosure* New1(::g::Uno::Threading::Promise* p);
};
// }

}}} // ::g::Fuse::CameraRoll
