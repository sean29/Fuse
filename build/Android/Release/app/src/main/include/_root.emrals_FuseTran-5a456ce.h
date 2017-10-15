// This file was generated based on '.uno/ux13/emrals.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{struct Translation;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct emrals_FuseTranslation_Y_Property;}

namespace g{

// internal sealed class emrals_FuseTranslation_Y_Property :68
// {
::g::Uno::UX::Property1_type* emrals_FuseTranslation_Y_Property_typeof();
void emrals_FuseTranslation_Y_Property__ctor_3_fn(emrals_FuseTranslation_Y_Property* __this, ::g::Fuse::Translation* obj, ::g::Uno::UX::Selector* name);
void emrals_FuseTranslation_Y_Property__Get1_fn(emrals_FuseTranslation_Y_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval);
void emrals_FuseTranslation_Y_Property__New1_fn(::g::Fuse::Translation* obj, ::g::Uno::UX::Selector* name, emrals_FuseTranslation_Y_Property** __retval);
void emrals_FuseTranslation_Y_Property__get_Object_fn(emrals_FuseTranslation_Y_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void emrals_FuseTranslation_Y_Property__Set1_fn(emrals_FuseTranslation_Y_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin);

struct emrals_FuseTranslation_Y_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Translation*> _obj;

    void ctor_3(::g::Fuse::Translation* obj, ::g::Uno::UX::Selector name);
    static emrals_FuseTranslation_Y_Property* New1(::g::Fuse::Translation* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
