// This file was generated based on '.uno/ux11/NewsItem.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct NewsItem;}
namespace g{struct NewsItem__Template;}

namespace g{

// public partial sealed class NewsItem.Template :6
// {
::g::Uno::UX::Template_type* NewsItem__Template_typeof();
void NewsItem__Template__ctor_1_fn(NewsItem__Template* __this, ::g::NewsItem* parent, ::g::NewsItem* parentInstance);
void NewsItem__Template__New1_fn(NewsItem__Template* __this, uObject** __retval);
void NewsItem__Template__New2_fn(::g::NewsItem* parent, ::g::NewsItem* parentInstance, NewsItem__Template** __retval);

struct NewsItem__Template : ::g::Uno::UX::Template
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return NewsItem__Template_typeof()->Init(), __g_static_nametable1_; }
    uWeak< ::g::NewsItem*> __parent1;
    uWeak< ::g::NewsItem*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return NewsItem__Template_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return NewsItem__Template_typeof()->Init(), __selector1_; }
    uStrong< ::g::Uno::UX::Property1*> temp_Url_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp5_Url_inst;
    uStrong< ::g::Uno::UX::Property1*> temp6_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp7_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp8_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp9_Value_inst;

    void ctor_1(::g::NewsItem* parent, ::g::NewsItem* parentInstance);
    static NewsItem__Template* New2(::g::NewsItem* parent, ::g::NewsItem* parentInstance);
};
// }

} // ::g
