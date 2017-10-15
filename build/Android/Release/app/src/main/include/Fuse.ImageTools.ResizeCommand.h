// This file was generated based on C:/Users/q/AppData/Local/Fusetools/Packages/Fuse.ImageTools/1.3.0-rc2/Android/Commands.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ImageTools.PCommand.h>
namespace g{namespace Fuse{namespace ImageTools{struct ResizeCommand;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace ImageTools{

// internal sealed extern class ResizeCommand :44
// {
::g::Fuse::ImageTools::PCommand_type* ResizeCommand_typeof();
void ResizeCommand__ctor_1_fn(ResizeCommand* __this, uString* path, int* desiredWidth, int* desiredHeight, int* mode, uDelegate* Resolve, uDelegate* Reject, bool* inPlace);
void ResizeCommand__New1_fn(uString* path, int* desiredWidth, int* desiredHeight, int* mode, uDelegate* Resolve, uDelegate* Reject, bool* inPlace, ResizeCommand** __retval);
void ResizeCommand__OnGranted_fn(ResizeCommand* __this);
void ResizeCommand__OnRejected_fn(ResizeCommand* __this, ::g::Uno::Exception* e);

struct ResizeCommand : ::g::Fuse::ImageTools::PCommand
{
    int _desiredHeight;
    int _desiredWidth;
    bool _inPlace;
    int _mode;
    uStrong<uString*> _path;
    uStrong<uDelegate*> _reject;
    uStrong<uDelegate*> _resolve;

    void ctor_1(uString* path, int desiredWidth, int desiredHeight, int mode, uDelegate* Resolve, uDelegate* Reject, bool inPlace);
    static ResizeCommand* New1(uString* path, int desiredWidth, int desiredHeight, int mode, uDelegate* Resolve, uDelegate* Reject, bool inPlace);
};
// }

}}} // ::g::Fuse::ImageTools
