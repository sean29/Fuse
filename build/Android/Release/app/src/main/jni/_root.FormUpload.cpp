// This file was generated based on Uploader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FormUpload.FileParameter.h>
#include <_root.FormUpload.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dicti-d1699346.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Int.h>
#include <Uno.IO.MemoryStream.h>
#include <Uno.IO.Stream.h>
#include <Uno.Long.h>
#include <Uno.Net.Http.HttpMess-1d2e0b2f.h>
#include <Uno.Net.Http.HttpMess-8a5feb56.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Text.Encoding.h>
#include <Uno.Text.Utf8.h>

namespace g{

// public static class FormUpload :115
// {
// static generated FormUpload() :115
static void FormUpload__cctor__fn(uType* __type)
{
    ::g::Uno::Text::Encoding_typeof()->Init();
    FormUpload::encoding_ = ::g::Uno::Text::Encoding::UTF8();
}

static void FormUpload_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Text::Encoding_typeof(), (uintptr_t)&FormUpload::encoding_, uFieldFlagsStatic);
}

uClassType* FormUpload_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FormUpload", options);
    type->fp_build_ = FormUpload_build;
    type->fp_cctor_ = FormUpload__cctor__fn;
    return type;
}

// private static byte[] GetMultipartFormData(Uno.Collections.Dictionary<string, object> postParameters, string boundary) :164
void FormUpload__GetMultipartFormData_fn(::g::Uno::Collections::Dictionary* postParameters, uString* boundary, uArray** __retval)
{
    *__retval = FormUpload::GetMultipartFormData(postParameters, boundary);
}

// public static Uno.Net.Http.HttpMessageHandlerRequest MultipartFormDataPost(string postUrl, string postMethod, Uno.Collections.Dictionary<string, string> headers, Uno.Collections.Dictionary<string, object> postParameters, byte[]& formData) :118
void FormUpload__MultipartFormDataPost_fn(uString* postUrl, uString* postMethod, ::g::Uno::Collections::Dictionary* headers, ::g::Uno::Collections::Dictionary* postParameters, uArray** formData, ::g::Uno::Net::Http::HttpMessageHandlerRequest** __retval)
{
    *__retval = FormUpload::MultipartFormDataPost(postUrl, postMethod, headers, postParameters, formData);
}

// private static Uno.Net.Http.HttpMessageHandlerRequest PostForm(string postUrl, string postMethod, string contentType, Uno.Collections.Dictionary<string, string> headers, byte[] formData) :127
void FormUpload__PostForm_fn(uString* postUrl, uString* postMethod, uString* contentType, ::g::Uno::Collections::Dictionary* headers, uArray* formData, ::g::Uno::Net::Http::HttpMessageHandlerRequest** __retval)
{
    *__retval = FormUpload::PostForm(postUrl, postMethod, contentType, headers, formData);
}

uSStrong< ::g::Uno::Text::Encoding*> FormUpload::encoding_;

// private static byte[] GetMultipartFormData(Uno.Collections.Dictionary<string, object> postParameters, string boundary) [static] :164
uArray* FormUpload::GetMultipartFormData(::g::Uno::Collections::Dictionary* postParameters, uString* boundary)
{
    uString* ind3;
    uString* ind4;
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > ret5;
    ::g::Uno::IO::Stream* formDataStream = ::g::Uno::IO::MemoryStream::New1();
    bool needsCLRF = false;
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > enum2 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(postParameters), &ret5), ret5);

    {
        const auto __finally_fun = [&]()
        {
            enum2.Dispose(::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        while (enum2.MoveNext(::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL)))
        {
            ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uObject*> > param = enum2.Current(::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL));

            if (needsCLRF)
            {
                uArray* bytes = ::g::Uno::Text::Utf8::GetBytes(uString::Const("\r\n"
                    ""));
                uPtr(formDataStream)->Write(bytes, 0, uPtr(bytes)->Length());
            }

            needsCLRF = true;

            if (uIs((uObject*)param.Value(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL)), FormUpload__FileParameter_typeof()))
            {
                FormUpload__FileParameter* fileToUpload = uCast<FormUpload__FileParameter*>(param.Value(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL)), FormUpload__FileParameter_typeof());
                uString* header = ::g::Uno::String::Format(uString::Const("--{0}\r\n"
                    "Content-Disposition: form-data; name=\"{1}\"; filename=\"{2}\"\r\n"
                    "Content-Type: {3}\r\n"
                    "\r\n"
                    ""), uArray::Init<uObject*>(uObject_typeof()->Array(), 4, boundary, (uString*)param.Key(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL)), (ind3 = uPtr(fileToUpload)->FileName(), (ind3 != NULL) ? ind3 : (uString*)param.Key(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL))), (ind4 = uPtr(fileToUpload)->ContentType(), (ind4 != NULL) ? ind4 : uString::Const("application/octet-stream"))));
                uArray* bytes1 = ::g::Uno::Text::Utf8::GetBytes(header);
                uPtr(formDataStream)->Write(bytes1, 0, uPtr(bytes1)->Length());
                formDataStream->Write(fileToUpload->File(), 0, uPtr(fileToUpload->File())->Length());
            }
            else
            {
                uString* postData = ::g::Uno::String::Format(uString::Const("--{0}\r\n"
                    "Content-Disposition: form-data; name=\"{1}\"\r\n"
                    "\r\n"
                    "{2}"), uArray::Init<uObject*>(uObject_typeof()->Array(), 3, boundary, (uString*)param.Key(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL)), (uObject*)param.Value(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL))));
                uArray* bytes2 = ::g::Uno::Text::Utf8::GetBytes(postData);
                uPtr(formDataStream)->Write(bytes2, 0, uPtr(bytes2)->Length());
            }
        }
    }

    uString* footer = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uString::Const("\r\n"
        "--"), boundary), uString::Const("--\r\n"
        ""));
    uArray* fbytes = ::g::Uno::Text::Utf8::GetBytes(footer);
    formDataStream->Write(fbytes, 0, uPtr(fbytes)->Length());
    formDataStream->Position(0LL);
    uArray* formData = uArray::New(::g::Uno::Byte_typeof()->Array(), (int)formDataStream->Length());
    formDataStream->Read(formData, 0, formData->Length());
    formDataStream->Close();
    return formData;
}

// public static Uno.Net.Http.HttpMessageHandlerRequest MultipartFormDataPost(string postUrl, string postMethod, Uno.Collections.Dictionary<string, string> headers, Uno.Collections.Dictionary<string, object> postParameters, byte[]& formData) [static] :118
::g::Uno::Net::Http::HttpMessageHandlerRequest* FormUpload::MultipartFormDataPost(uString* postUrl, uString* postMethod, ::g::Uno::Collections::Dictionary* headers, ::g::Uno::Collections::Dictionary* postParameters, uArray** formData)
{
    uString* formDataBoundary = ::g::Uno::String::Format(uString::Const("----------1111"), uArray::New(uObject_typeof()->Array(), 0));
    uString* contentType = ::g::Uno::String::op_Addition2(uString::Const("multipart/form-data; boundary="), formDataBoundary);
    *formData = FormUpload::GetMultipartFormData(postParameters, formDataBoundary);
    return FormUpload::PostForm(postUrl, postMethod, contentType, headers, *formData);
}

// private static Uno.Net.Http.HttpMessageHandlerRequest PostForm(string postUrl, string postMethod, string contentType, Uno.Collections.Dictionary<string, string> headers, byte[] formData) [static] :127
::g::Uno::Net::Http::HttpMessageHandlerRequest* FormUpload::PostForm(uString* postUrl, uString* postMethod, uString* contentType, ::g::Uno::Collections::Dictionary* headers, uArray* formData)
{
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uString*> > ret6;
    ::g::Uno::Net::Http::HttpMessageHandler* client = ::g::Uno::Net::Http::HttpMessageHandler::New1();
    ::g::Uno::Net::Http::HttpMessageHandlerRequest* request = client->CreateRequest(postMethod, postUrl);

    if (request == NULL)
        return request;

    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uString*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(headers), &ret6), ret6);

    {
        const auto __finally_fun = [&]()
        {
            enum1.Dispose(::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        while (enum1.MoveNext(::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL)))
        {
            ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uString*> > header = enum1.Current(::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL));
            uPtr(request)->SetHeader(header.Key(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL)), header.Value(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL)));
        }
    }

    uPtr(request)->SetHeader(uString::Const("Content-Type"), contentType);
    request->SetHeader(uString::Const("Content-Length"), ::g::Uno::Int::ToString(uPtr(formData)->Length(), ::g::Uno::Int_typeof()));
    return request;
}
// }

} // ::g
