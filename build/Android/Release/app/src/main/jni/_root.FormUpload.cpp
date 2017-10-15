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
static uString* STRINGS[10];
static uType* TYPES[8];

namespace g{

// public static class FormUpload :115
// {
// static FormUpload() :115
static void FormUpload__cctor__fn(uType* __type)
{
    FormUpload::encoding_ = ::g::Uno::Text::Encoding::UTF8();
}

static void FormUpload_build(uType* type)
{
    ::STRINGS[0] = uString::Const("\r\n"
        "");
    ::STRINGS[1] = uString::Const("--{0}\r\n"
        "Content-Disposition: form-data; name=\"{1}\"; filename=\"{2}\"\r\n"
        "Content-Type: {3}\r\n"
        "\r\n"
        "");
    ::STRINGS[2] = uString::Const("application/octet-stream");
    ::STRINGS[3] = uString::Const("--{0}\r\n"
        "Content-Disposition: form-data; name=\"{1}\"\r\n"
        "\r\n"
        "{2}");
    ::STRINGS[4] = uString::Const("\r\n"
        "--");
    ::STRINGS[5] = uString::Const("--\r\n"
        "");
    ::STRINGS[6] = uString::Const("----------1111");
    ::STRINGS[7] = uString::Const("multipart/form-data; boundary=");
    ::STRINGS[8] = uString::Const("Content-Type");
    ::STRINGS[9] = uString::Const("Content-Length");
    ::TYPES[0] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[1] = FormUpload__FileParameter_typeof();
    ::TYPES[2] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[4] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[5] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::g::Uno::Text::Encoding_typeof(), (uintptr_t)&::g::FormUpload::encoding_, uFieldFlagsStatic);
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
    FormUpload_typeof()->Init();
    uString* ind3;
    uString* ind4;
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > ret5;
    ::g::Uno::IO::Stream* formDataStream = ::g::Uno::IO::MemoryStream::New1();
    bool needsCLRF = false;

    for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > enum2 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(postParameters), &ret5), ret5); enum2.MoveNext(::TYPES[0/*Uno.Collections.Dictionary<string, object>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uObject*> > param = enum2.Current(::TYPES[0/*Uno.Collections.Dictionary<string, object>.Enumerator*/]);

        if (needsCLRF)
        {
            uArray* bytes = ::g::Uno::Text::Utf8::GetBytes(::STRINGS[0/*"\r\n"*/]);
            uPtr(formDataStream)->Write(bytes, 0, uPtr(bytes)->Length());
        }

        needsCLRF = true;

        if (uIs((uObject*)param.Value(::TYPES[2/*Uno.Collections.KeyValuePair<string, object>*/]), ::TYPES[1/*FormUpload.FileParameter*/]))
        {
            FormUpload__FileParameter* fileToUpload = uCast<FormUpload__FileParameter*>(param.Value(::TYPES[2/*Uno.Collections.KeyValuePair<string, object>*/]), ::TYPES[1/*FormUpload.FileParameter*/]);
            uString* header = ::g::Uno::String::Format(::STRINGS[1/*"--{0}\r\nCo...*/], uArray::Init<uObject*>(::TYPES[3/*object[]*/], 4, boundary, (uString*)param.Key(::TYPES[2/*Uno.Collections.KeyValuePair<string, object>*/]), (ind3 = uPtr(fileToUpload)->FileName(), (ind3 != NULL) ? ind3 : (uString*)param.Key(::TYPES[2/*Uno.Collections.KeyValuePair<string, object>*/])), (ind4 = uPtr(fileToUpload)->ContentType(), (ind4 != NULL) ? ind4 : ::STRINGS[2/*"application...*/])));
            uArray* bytes1 = ::g::Uno::Text::Utf8::GetBytes(header);
            uPtr(formDataStream)->Write(bytes1, 0, uPtr(bytes1)->Length());
            formDataStream->Write(fileToUpload->File(), 0, uPtr(fileToUpload->File())->Length());
        }
        else
        {
            uString* postData = ::g::Uno::String::Format(::STRINGS[3/*"--{0}\r\nCo...*/], uArray::Init<uObject*>(::TYPES[3/*object[]*/], 3, boundary, (uString*)param.Key(::TYPES[2/*Uno.Collections.KeyValuePair<string, object>*/]), (uObject*)param.Value(::TYPES[2/*Uno.Collections.KeyValuePair<string, object>*/])));
            uArray* bytes2 = ::g::Uno::Text::Utf8::GetBytes(postData);
            uPtr(formDataStream)->Write(bytes2, 0, uPtr(bytes2)->Length());
        }
    }

    uString* footer = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[4/*"\r\n--"*/], boundary), ::STRINGS[5/*"--\r\n"*/]);
    uArray* fbytes = ::g::Uno::Text::Utf8::GetBytes(footer);
    formDataStream->Write(fbytes, 0, uPtr(fbytes)->Length());
    formDataStream->Position(0LL);
    uArray* formData = uArray::New(::TYPES[4/*byte[]*/], (int)formDataStream->Length());
    formDataStream->Read(formData, 0, formData->Length());
    formDataStream->Close();
    return formData;
}

// public static Uno.Net.Http.HttpMessageHandlerRequest MultipartFormDataPost(string postUrl, string postMethod, Uno.Collections.Dictionary<string, string> headers, Uno.Collections.Dictionary<string, object> postParameters, byte[]& formData) [static] :118
::g::Uno::Net::Http::HttpMessageHandlerRequest* FormUpload::MultipartFormDataPost(uString* postUrl, uString* postMethod, ::g::Uno::Collections::Dictionary* headers, ::g::Uno::Collections::Dictionary* postParameters, uArray** formData)
{
    FormUpload_typeof()->Init();
    uString* formDataBoundary = ::g::Uno::String::Format(::STRINGS[6/*"----------1...*/], uArray::New(::TYPES[3/*object[]*/], 0));
    uString* contentType = ::g::Uno::String::op_Addition2(::STRINGS[7/*"multipart/f...*/], formDataBoundary);
    *formData = FormUpload::GetMultipartFormData(postParameters, formDataBoundary);
    return FormUpload::PostForm(postUrl, postMethod, contentType, headers, *formData);
}

// private static Uno.Net.Http.HttpMessageHandlerRequest PostForm(string postUrl, string postMethod, string contentType, Uno.Collections.Dictionary<string, string> headers, byte[] formData) [static] :127
::g::Uno::Net::Http::HttpMessageHandlerRequest* FormUpload::PostForm(uString* postUrl, uString* postMethod, uString* contentType, ::g::Uno::Collections::Dictionary* headers, uArray* formData)
{
    FormUpload_typeof()->Init();
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uString*> > ret6;
    ::g::Uno::Net::Http::HttpMessageHandler* client = ::g::Uno::Net::Http::HttpMessageHandler::New1();
    ::g::Uno::Net::Http::HttpMessageHandlerRequest* request = client->CreateRequest(postMethod, postUrl);

    if (request == NULL)
        return request;

    for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uString*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(headers), &ret6), ret6); enum1.MoveNext(::TYPES[5/*Uno.Collections.Dictionary<string, string>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uString*> > header = enum1.Current(::TYPES[5/*Uno.Collections.Dictionary<string, string>.Enumerator*/]);
        uPtr(request)->SetHeader(header.Key(::TYPES[6/*Uno.Collections.KeyValuePair<string, string>*/]), header.Value(::TYPES[6/*Uno.Collections.KeyValuePair<string, string>*/]));
    }

    uPtr(request)->SetHeader(::STRINGS[8/*"Content-Type"*/], contentType);
    request->SetHeader(::STRINGS[9/*"Content-Len...*/], ::g::Uno::Int::ToString(uPtr(formData)->Length(), ::TYPES[7/*int*/]));
    return request;
}
// }

} // ::g
