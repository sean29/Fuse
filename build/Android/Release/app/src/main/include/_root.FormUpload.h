// This file was generated based on Uploader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandlerRequest;}}}}
namespace g{namespace Uno{namespace Text{struct Encoding;}}}
namespace g{struct FormUpload;}

namespace g{

// public static class FormUpload :110
// {
uClassType* FormUpload_typeof();
void FormUpload__GetMultipartFormData_fn(::g::Uno::Collections::Dictionary* postParameters, uString* boundary, uArray** __retval);
void FormUpload__MultipartFormDataPost_fn(uString* postUrl, uString* postMethod, ::g::Uno::Collections::Dictionary* headers, ::g::Uno::Collections::Dictionary* postParameters, uArray** formData, ::g::Uno::Net::Http::HttpMessageHandlerRequest** __retval);
void FormUpload__PostForm_fn(uString* postUrl, uString* postMethod, uString* contentType, ::g::Uno::Collections::Dictionary* headers, uArray* formData, ::g::Uno::Net::Http::HttpMessageHandlerRequest** __retval);

struct FormUpload : uObject
{
    static uSStrong< ::g::Uno::Text::Encoding*> encoding_;
    static uSStrong< ::g::Uno::Text::Encoding*>& encoding() { return FormUpload_typeof()->Init(), encoding_; }

    static uArray* GetMultipartFormData(::g::Uno::Collections::Dictionary* postParameters, uString* boundary);
    static ::g::Uno::Net::Http::HttpMessageHandlerRequest* MultipartFormDataPost(uString* postUrl, uString* postMethod, ::g::Uno::Collections::Dictionary* headers, ::g::Uno::Collections::Dictionary* postParameters, uArray** formData);
    static ::g::Uno::Net::Http::HttpMessageHandlerRequest* PostForm(uString* postUrl, uString* postMethod, uString* contentType, ::g::Uno::Collections::Dictionary* headers, uArray* formData);
};
// }

} // ::g
