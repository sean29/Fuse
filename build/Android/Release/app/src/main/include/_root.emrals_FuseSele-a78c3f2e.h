// This file was generated based on '.uno/ux13/emrals.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Selection{struct Selection;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct emrals_FuseSelectionSelection_Values_Property;}

namespace g{

// internal sealed class emrals_FuseSelectionSelection_Values_Property :210
// {
::g::Uno::UX::Property1_type* emrals_FuseSelectionSelection_Values_Property_typeof();
void emrals_FuseSelectionSelection_Values_Property__ctor_3_fn(emrals_FuseSelectionSelection_Values_Property* __this, ::g::Fuse::Selection::Selection* obj, ::g::Uno::UX::Selector* name);
void emrals_FuseSelectionSelection_Values_Property__Get1_fn(emrals_FuseSelectionSelection_Values_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void emrals_FuseSelectionSelection_Values_Property__New1_fn(::g::Fuse::Selection::Selection* obj, ::g::Uno::UX::Selector* name, emrals_FuseSelectionSelection_Values_Property** __retval);
void emrals_FuseSelectionSelection_Values_Property__get_Object_fn(emrals_FuseSelectionSelection_Values_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void emrals_FuseSelectionSelection_Values_Property__Set1_fn(emrals_FuseSelectionSelection_Values_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);

struct emrals_FuseSelectionSelection_Values_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Selection::Selection*> _obj;

    void ctor_3(::g::Fuse::Selection::Selection* obj, ::g::Uno::UX::Selector name);
    static emrals_FuseSelectionSelection_Values_Property* New1(::g::Fuse::Selection::Selection* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
