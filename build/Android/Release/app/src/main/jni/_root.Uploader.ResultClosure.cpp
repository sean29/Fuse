// This file was generated based on Uploader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Uploader.ResultClosure.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Exception.h>
#include <Uno.Net.Http.HttpMess-1d2e0b2f.h>
#include <Uno.String.h>
#include <Uno.Threading.Promise-1.h>
static uString* STRINGS[2];
static uType* TYPES[2];

namespace g{

// private sealed class Uploader.ResultClosure :86
// {
static void Uploader__ResultClosure_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Aborted");
    ::STRINGS[1] = uString::Const("Timeout");
    ::TYPES[0] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), ::g::Uno::String_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Uploader__ResultClosure, _promise), 0);
}

uType* Uploader__ResultClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Uploader__ResultClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uploader.ResultClosure", options);
    type->fp_build_ = Uploader__ResultClosure_build;
    return type;
}

// public ResultClosure(Uno.Threading.Promise<string> promise, Uno.Net.Http.HttpMessageHandlerRequest request) :90
void Uploader__ResultClosure__ctor__fn(Uploader__ResultClosure* __this, ::g::Uno::Threading::Promise* promise, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request)
{
    __this->ctor_(promise, request);
}

// private void Aborted(Uno.Net.Http.HttpMessageHandlerRequest r) :106
void Uploader__ResultClosure__Aborted_fn(Uploader__ResultClosure* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* r)
{
    __this->Aborted(r);
}

// private void Done(Uno.Net.Http.HttpMessageHandlerRequest r) :100
void Uploader__ResultClosure__Done_fn(Uploader__ResultClosure* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* r)
{
    __this->Done(r);
}

// private void Error(Uno.Net.Http.HttpMessageHandlerRequest r, string message) :104
void Uploader__ResultClosure__Error_fn(Uploader__ResultClosure* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* r, uString* message)
{
    __this->Error(r, message);
}

// public ResultClosure New(Uno.Threading.Promise<string> promise, Uno.Net.Http.HttpMessageHandlerRequest request) :90
void Uploader__ResultClosure__New1_fn(::g::Uno::Threading::Promise* promise, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request, Uploader__ResultClosure** __retval)
{
    *__retval = Uploader__ResultClosure::New1(promise, request);
}

// private void Timeout(Uno.Net.Http.HttpMessageHandlerRequest r) :108
void Uploader__ResultClosure__Timeout_fn(Uploader__ResultClosure* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* r)
{
    __this->Timeout(r);
}

// public ResultClosure(Uno.Threading.Promise<string> promise, Uno.Net.Http.HttpMessageHandlerRequest request) [instance] :90
void Uploader__ResultClosure::ctor_(::g::Uno::Threading::Promise* promise, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request)
{
    _promise = promise;
    uPtr(request)->add_Done(uDelegate::New(::TYPES[0/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Uploader__ResultClosure__Done_fn, this));
    request->add_Aborted(uDelegate::New(::TYPES[0/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Uploader__ResultClosure__Aborted_fn, this));
    request->add_Error(uDelegate::New(::TYPES[1/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string>*/], (void*)Uploader__ResultClosure__Error_fn, this));
    request->add_Timeout(uDelegate::New(::TYPES[0/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Uploader__ResultClosure__Timeout_fn, this));
}

// private void Aborted(Uno.Net.Http.HttpMessageHandlerRequest r) [instance] :106
void Uploader__ResultClosure::Aborted(::g::Uno::Net::Http::HttpMessageHandlerRequest* r)
{
    uPtr(_promise)->Reject(::g::Uno::Exception::New2(::STRINGS[0/*"Aborted"*/]));
}

// private void Done(Uno.Net.Http.HttpMessageHandlerRequest r) [instance] :100
void Uploader__ResultClosure::Done(::g::Uno::Net::Http::HttpMessageHandlerRequest* r)
{
    ::g::Uno::Threading::Promise__Resolve_fn(uPtr(_promise), uPtr(r)->GetResponseContentString());
}

// private void Error(Uno.Net.Http.HttpMessageHandlerRequest r, string message) [instance] :104
void Uploader__ResultClosure::Error(::g::Uno::Net::Http::HttpMessageHandlerRequest* r, uString* message)
{
    uPtr(_promise)->Reject(::g::Uno::Exception::New2(message));
}

// private void Timeout(Uno.Net.Http.HttpMessageHandlerRequest r) [instance] :108
void Uploader__ResultClosure::Timeout(::g::Uno::Net::Http::HttpMessageHandlerRequest* r)
{
    uPtr(_promise)->Reject(::g::Uno::Exception::New2(::STRINGS[1/*"Timeout"*/]));
}

// public ResultClosure New(Uno.Threading.Promise<string> promise, Uno.Net.Http.HttpMessageHandlerRequest request) [static] :90
Uploader__ResultClosure* Uploader__ResultClosure::New1(::g::Uno::Threading::Promise* promise, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request)
{
    Uploader__ResultClosure* obj1 = (Uploader__ResultClosure*)uNew(Uploader__ResultClosure_typeof());
    obj1->ctor_(promise, request);
    return obj1;
}
// }

} // ::g
