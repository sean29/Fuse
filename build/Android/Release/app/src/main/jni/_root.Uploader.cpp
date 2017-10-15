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

namespace g{

// public sealed class Uploader :22
// {
static void Uploader_build(uType* type)
{
    type->SetDependencies(
        ::g::FormUpload_typeof(),
        ::g::Uno::IO::Path_typeof(),
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&Uploader::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* Uploader_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(Uploader);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Uploader", options);
    type->fp_build_ = Uploader_build;
    type->fp_ctor_ = (void*)Uploader__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Uploader() :25
void Uploader__ctor_2_fn(Uploader* __this)
{
    __this->ctor_2();
}

// public Uploader New() :25
void Uploader__New2_fn(Uploader** __retval)
{
    *__retval = Uploader::New2();
}

// private static Uno.Threading.Future<string> send(object[] args) :33
void Uploader__send_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Uploader::send(args);
}

uSStrong<Uploader*> Uploader::_instance_;

// public Uploader() [instance] :25
void Uploader::ctor_2()
{
    ctor_1();

    if (Uploader::_instance_ != NULL)
        return;

    Uploader::_instance_ = this;
    ::g::Uno::UX::Resource::SetGlobalKey(Uploader::_instance_, uString::Const("Uploader"));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL), uString::Const("send"), uDelegate::New(::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::String_typeof(), NULL), (void*)Uploader__send_fn), NULL));
}

// public Uploader New() [static] :25
Uploader* Uploader::New2()
{
    Uploader* obj1 = (Uploader*)uNew(Uploader_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static Uno.Threading.Future<string> send(object[] args) [static] :33
::g::Uno::Threading::Future1* Uploader::send(uArray* args)
{
    uString* path = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::g::Uno::String_typeof());
    uString* uri = uCast<uString*>(args->Strong<uObject*>(1), ::g::Uno::String_typeof());
    uString* fileName = ::g::Uno::IO::Path::GetFileName(path);
    uString* fileExt = ::g::Uno::String::ToLower(uPtr(::g::Uno::IO::Path::GetExtension(path)));
    uArray* imageData = ::g::Uno::IO::File::ReadAllBytes(path);
    uString* fileType = uString::Const("image/png");

    if (::g::Uno::String::op_Equality(fileExt, uString::Const(".jpg")) || ::g::Uno::String::op_Equality(fileExt, uString::Const(".jpeg")))
        fileType = uString::Const("image/jpeg");
    else if (::g::Uno::String::op_Equality(fileExt, uString::Const(".gif")))
        fileType = uString::Const("image/gif");

    ::g::Uno::Collections::Dictionary* headers = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL));
    ::g::Uno::Collections::Dictionary* postParameters = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL));
    ::g::Uno::Collections::Dictionary__Add_fn(postParameters, uString::Const("filename"), fileName);
    ::g::Uno::Collections::Dictionary__Add_fn(postParameters, uString::Const("fileformat"), fileExt);
    ::g::Uno::Collections::Dictionary__Add_fn(postParameters, uString::Const("file"), ::g::FormUpload__FileParameter::New3(imageData, fileName, fileType));
    uArray* formData = NULL;
    ::g::Uno::Net::Http::HttpMessageHandlerRequest* request = ::g::FormUpload::MultipartFormDataPost(uri, uString::Const("POST"), headers, postParameters, &formData);
    ::g::Uno::Threading::Promise* promise = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    Uploader__ResultClosure::New1(promise, request);
    uPtr(request)->SendAsync1(formData);
    return promise;
}
// }

} // ::g
