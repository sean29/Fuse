// This file was generated based on '.uno/ux11/AlertsPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct AlertsPage;}
namespace g{struct AlertsPage__Template;}

namespace g{

// public partial sealed class AlertsPage.Template :6
// {
::g::Uno::UX::Template_type* AlertsPage__Template_typeof();
void AlertsPage__Template__ctor_1_fn(AlertsPage__Template* __this, ::g::AlertsPage* parent, ::g::AlertsPage* parentInstance);
void AlertsPage__Template__New1_fn(AlertsPage__Template* __this, uObject** __retval);
void AlertsPage__Template__New2_fn(::g::AlertsPage* parent, ::g::AlertsPage* parentInstance, AlertsPage__Template** __retval);

struct AlertsPage__Template : ::g::Uno::UX::Template
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return AlertsPage__Template_typeof()->Init(), __g_static_nametable1_; }
    uWeak< ::g::AlertsPage*> __parent1;
    uWeak< ::g::AlertsPage*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return AlertsPage__Template_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return AlertsPage__Template_typeof()->Init(), __selector1_; }
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Url_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;

    void ctor_1(::g::AlertsPage* parent, ::g::AlertsPage* parentInstance);
    static AlertsPage__Template* New2(::g::AlertsPage* parent, ::g::AlertsPage* parentInstance);
};
// }

} // ::g
