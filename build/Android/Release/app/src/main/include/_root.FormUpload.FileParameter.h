// This file was generated based on Uploader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{struct FormUpload__FileParameter;}

namespace g{

// public sealed class FormUpload.FileParameter :223
// {
uType* FormUpload__FileParameter_typeof();
void FormUpload__FileParameter__ctor_2_fn(FormUpload__FileParameter* __this, uArray* file, uString* filename, uString* contenttype);
void FormUpload__FileParameter__get_ContentType_fn(FormUpload__FileParameter* __this, uString** __retval);
void FormUpload__FileParameter__set_ContentType_fn(FormUpload__FileParameter* __this, uString* value);
void FormUpload__FileParameter__get_File_fn(FormUpload__FileParameter* __this, uArray** __retval);
void FormUpload__FileParameter__set_File_fn(FormUpload__FileParameter* __this, uArray* value);
void FormUpload__FileParameter__get_FileName_fn(FormUpload__FileParameter* __this, uString** __retval);
void FormUpload__FileParameter__set_FileName_fn(FormUpload__FileParameter* __this, uString* value);
void FormUpload__FileParameter__New3_fn(uArray* file, uString* filename, uString* contenttype, FormUpload__FileParameter** __retval);

struct FormUpload__FileParameter : uObject
{
    uStrong<uString*> _ContentType;
    uStrong<uArray*> _File;
    uStrong<uString*> _FileName;

    void ctor_2(uArray* file, uString* filename, uString* contenttype);
    uString* ContentType();
    void ContentType(uString* value);
    uArray* File();
    void File(uArray* value);
    uString* FileName();
    void FileName(uString* value);
    static FormUpload__FileParameter* New3(uArray* file, uString* filename, uString* contenttype);
};
// }

} // ::g
