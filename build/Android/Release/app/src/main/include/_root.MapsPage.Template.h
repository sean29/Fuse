// This file was generated based on '.uno/ux11/MapsPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MapsPage;}
namespace g{struct MapsPage__Template;}

namespace g{

// public partial sealed class MapsPage.Template :6
// {
::g::Uno::UX::Template_type* MapsPage__Template_typeof();
void MapsPage__Template__ctor_1_fn(MapsPage__Template* __this, ::g::MapsPage* parent, ::g::MapsPage* parentInstance);
void MapsPage__Template__New1_fn(MapsPage__Template* __this, uObject** __retval);
void MapsPage__Template__New2_fn(::g::MapsPage* parent, ::g::MapsPage* parentInstance, MapsPage__Template** __retval);

struct MapsPage__Template : ::g::Uno::UX::Template
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return MapsPage__Template_typeof()->Init(), __g_static_nametable1_; }
    uWeak< ::g::MapsPage*> __parent1;
    uWeak< ::g::MapsPage*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MapsPage__Template_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return MapsPage__Template_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return MapsPage__Template_typeof()->Init(), __selector2_; }
    uStrong< ::g::Uno::UX::Property1*> __self_Label_inst1;
    uStrong< ::g::Uno::UX::Property1*> __self_Latitude_inst1;
    uStrong< ::g::Uno::UX::Property1*> __self_Longitude_inst1;

    void ctor_1(::g::MapsPage* parent, ::g::MapsPage* parentInstance);
    static MapsPage__Template* New2(::g::MapsPage* parent, ::g::MapsPage* parentInstance);
};
// }

} // ::g
