// This file was generated based on C:/Users/q/AppData/Local/Fusetools/Packages/Fuse.ImageTools/1.3.0-rc2/Android/Commands.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ImageTools.PCommand.h>
namespace g{namespace Fuse{namespace ImageTools{struct CropCommand;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace ImageTools{

// internal sealed extern class CropCommand :73
// {
::g::Fuse::ImageTools::PCommand_type* CropCommand_typeof();
void CropCommand__ctor_1_fn(CropCommand* __this, uString* path, int* x, int* y, int* desiredWidth, int* desiredHeight, uDelegate* Resolve, uDelegate* Reject, bool* inPlace);
void CropCommand__New1_fn(uString* path, int* x, int* y, int* desiredWidth, int* desiredHeight, uDelegate* Resolve, uDelegate* Reject, bool* inPlace, CropCommand** __retval);
void CropCommand__OnGranted_fn(CropCommand* __this);
void CropCommand__OnRejected_fn(CropCommand* __this, ::g::Uno::Exception* e);

struct CropCommand : ::g::Fuse::ImageTools::PCommand
{
    int _height;
    bool _inPlace;
    uStrong<uString*> _path;
    uStrong<uDelegate*> _reject;
    uStrong<uDelegate*> _resolve;
    int _width;
    int _x;
    int _y;

    void ctor_1(uString* path, int x, int y, int desiredWidth, int desiredHeight, uDelegate* Resolve, uDelegate* Reject, bool inPlace);
    static CropCommand* New1(uString* path, int x, int y, int desiredWidth, int desiredHeight, uDelegate* Resolve, uDelegate* Reject, bool inPlace);
};
// }

}}} // ::g::Fuse::ImageTools
