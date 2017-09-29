// This file was generated based on Uploader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandlerRequest;}}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}
namespace g{struct Uploader__ResultClosure;}

namespace g{

// private sealed class Uploader.ResultClosure :81
// {
uType* Uploader__ResultClosure_typeof();
void Uploader__ResultClosure__ctor__fn(Uploader__ResultClosure* __this, ::g::Uno::Threading::Promise* promise, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request);
void Uploader__ResultClosure__Aborted_fn(Uploader__ResultClosure* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* r);
void Uploader__ResultClosure__Done_fn(Uploader__ResultClosure* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* r);
void Uploader__ResultClosure__Error_fn(Uploader__ResultClosure* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* r, uString* message);
void Uploader__ResultClosure__New1_fn(::g::Uno::Threading::Promise* promise, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request, Uploader__ResultClosure** __retval);
void Uploader__ResultClosure__Timeout_fn(Uploader__ResultClosure* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* r);

struct Uploader__ResultClosure : uObject
{
    uStrong< ::g::Uno::Threading::Promise*> _promise;

    void ctor_(::g::Uno::Threading::Promise* promise, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request);
    void Aborted(::g::Uno::Net::Http::HttpMessageHandlerRequest* r);
    void Done(::g::Uno::Net::Http::HttpMessageHandlerRequest* r);
    void Error(::g::Uno::Net::Http::HttpMessageHandlerRequest* r, uString* message);
    void Timeout(::g::Uno::Net::Http::HttpMessageHandlerRequest* r);
    static Uploader__ResultClosure* New1(::g::Uno::Threading::Promise* promise, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request);
};
// }

} // ::g
