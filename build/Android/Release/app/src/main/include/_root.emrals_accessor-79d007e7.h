// This file was generated based on '.uno/ux13/emrals.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct emrals_accessor_SelectableRectangle_ID;}

namespace g{

// internal sealed class emrals_accessor_SelectableRectangle_ID :21
// {
::g::Uno::UX::PropertyAccessor_type* emrals_accessor_SelectableRectangle_ID_typeof();
void emrals_accessor_SelectableRectangle_ID__ctor_1_fn(emrals_accessor_SelectableRectangle_ID* __this);
void emrals_accessor_SelectableRectangle_ID__GetAsObject_fn(emrals_accessor_SelectableRectangle_ID* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void emrals_accessor_SelectableRectangle_ID__get_Name_fn(emrals_accessor_SelectableRectangle_ID* __this, ::g::Uno::UX::Selector* __retval);
void emrals_accessor_SelectableRectangle_ID__New1_fn(emrals_accessor_SelectableRectangle_ID** __retval);
void emrals_accessor_SelectableRectangle_ID__get_PropertyType_fn(emrals_accessor_SelectableRectangle_ID* __this, uType** __retval);
void emrals_accessor_SelectableRectangle_ID__SetAsObject_fn(emrals_accessor_SelectableRectangle_ID* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void emrals_accessor_SelectableRectangle_ID__get_SupportsOriginSetter_fn(emrals_accessor_SelectableRectangle_ID* __this, bool* __retval);

struct emrals_accessor_SelectableRectangle_ID : ::g::Uno::UX::PropertyAccessor
{
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return _name_; }
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return Singleton_; }

    void ctor_1();
    static emrals_accessor_SelectableRectangle_ID* New1();
};
// }

} // ::g
