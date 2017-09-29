// This file was generated based on Uploader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FormUpload.FileParameter.h>
#include <_root.FormUpload.h>
#include <_root.Uploader.h>
#include <_root.Uploader.ResultClosure.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.Result-92713bce.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Int.h>
#include <Uno.IO.File.h>
#include <Uno.IO.Path.h>
#include <Uno.Net.Http.HttpMess-1d2e0b2f.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[12];
static uType* TYPES[6];

namespace g{

// public sealed class Uploader :17
// {
static void Uploader_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Uploader");
    ::STRINGS[1] = uString::Const("send");
    ::STRINGS[2] = uString::Const("image/png");
    ::STRINGS[3] = uString::Const(".jpg");
    ::STRINGS[4] = uString::Const(".jpeg");
    ::STRINGS[5] = uString::Const("image/jpeg");
    ::STRINGS[6] = uString::Const(".gif");
    ::STRINGS[7] = uString::Const("image/gif");
    ::STRINGS[8] = uString::Const("filename");
    ::STRINGS[9] = uString::Const("fileformat");
    ::STRINGS[10] = uString::Const("file");
    ::STRINGS[11] = uString::Const("POST");
    ::TYPES[0] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::String_typeof();
    ::TYPES[3] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::TYPES[2/*string*/], ::TYPES[2/*string*/], NULL);
    ::TYPES[4] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::TYPES[2/*string*/], uObject_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Threading::Promise_typeof()->MakeType(::TYPES[2/*string*/], NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&::g::Uploader::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* Uploader_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Uploader);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Uploader", options);
    type->fp_build_ = Uploader_build;
    type->fp_ctor_ = (void*)Uploader__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Uploader() :20
void Uploader__ctor_2_fn(Uploader* __this)
{
    __this->ctor_2();
}

// public Uploader New() :20
void Uploader__New2_fn(Uploader** __retval)
{
    *__retval = Uploader::New2();
}

// private static Uno.Threading.Future<string> send(object[] args) :28
void Uploader__send_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Uploader::send(args);
}

uSStrong<Uploader*> Uploader::_instance_;

// public Uploader() [instance] :20
void Uploader::ctor_2()
{
    ctor_1();

    if (Uploader::_instance_ != NULL)
        return;

    Uploader::_instance_ = this;
    ::g::Uno::UX::Resource::SetGlobalKey(Uploader::_instance_, ::STRINGS[0/*"Uploader"*/]);
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[0/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[1/*"send"*/], uDelegate::New(::TYPES[1/*Fuse.Scripting.FutureFactory<string>*/], (void*)Uploader__send_fn), NULL));
}

// public Uploader New() [static] :20
Uploader* Uploader::New2()
{
    Uploader* obj1 = (Uploader*)uNew(Uploader_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static Uno.Threading.Future<string> send(object[] args) [static] :28
::g::Uno::Threading::Future1* Uploader::send(uArray* args)
{
    uString* path = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[2/*string*/]);
    uString* uri = uCast<uString*>(args->Strong<uObject*>(1), ::TYPES[2/*string*/]);
    uString* fileName = ::g::Uno::IO::Path::GetFileName(path);
    uString* fileExt = ::g::Uno::String::ToLower(uPtr(::g::Uno::IO::Path::GetExtension(path)));
    uArray* imageData = ::g::Uno::IO::File::ReadAllBytes(path);
    uString* fileType = ::STRINGS[2/*"image/png"*/];

    if (::g::Uno::String::op_Equality(fileExt, ::STRINGS[3/*".jpg"*/]) || ::g::Uno::String::op_Equality(fileExt, ::STRINGS[4/*".jpeg"*/]))
        fileType = ::STRINGS[5/*"image/jpeg"*/];
    else if (::g::Uno::String::op_Equality(fileExt, ::STRINGS[6/*".gif"*/]))
        fileType = ::STRINGS[7/*"image/gif"*/];

    ::g::Uno::Collections::Dictionary* headers = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[3/*Uno.Collections.Dictionary<string, string>*/]);
    ::g::Uno::Collections::Dictionary* postParameters = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[4/*Uno.Collections.Dictionary<string, object>*/]);
    ::g::Uno::Collections::Dictionary__Add_fn(postParameters, ::STRINGS[8/*"filename"*/], fileName);
    ::g::Uno::Collections::Dictionary__Add_fn(postParameters, ::STRINGS[9/*"fileformat"*/], fileExt);
    ::g::Uno::Collections::Dictionary__Add_fn(postParameters, ::STRINGS[10/*"file"*/], ::g::FormUpload__FileParameter::New3(imageData, fileName, fileType));
    uArray* formData = NULL;
    ::g::Uno::Net::Http::HttpMessageHandlerRequest* request = ::g::FormUpload::MultipartFormDataPost(uri, ::STRINGS[11/*"POST"*/], headers, postParameters, &formData);
    ::g::Uno::Threading::Promise* promise = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[5/*Uno.Threading.Promise<string>*/]);
    Uploader__ResultClosure::New1(promise, request);
    uPtr(request)->SendAsync1(formData);
    return promise;
}
// }

} // ::g
