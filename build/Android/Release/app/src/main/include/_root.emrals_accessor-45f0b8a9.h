// This file was generated based on '.uno/ux11/emrals.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct emrals_accessor_FatButton_Text;}

namespace g{

// internal sealed class emrals_accessor_FatButton_Text :21
// {
::g::Uno::UX::PropertyAccessor_type* emrals_accessor_FatButton_Text_typeof();
void emrals_accessor_FatButton_Text__ctor_1_fn(emrals_accessor_FatButton_Text* __this);
void emrals_accessor_FatButton_Text__GetAsObject_fn(emrals_accessor_FatButton_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void emrals_accessor_FatButton_Text__get_Name_fn(emrals_accessor_FatButton_Text* __this, ::g::Uno::UX::Selector* __retval);
void emrals_accessor_FatButton_Text__New1_fn(emrals_accessor_FatButton_Text** __retval);
void emrals_accessor_FatButton_Text__get_PropertyType_fn(emrals_accessor_FatButton_Text* __this, uType** __retval);
void emrals_accessor_FatButton_Text__SetAsObject_fn(emrals_accessor_FatButton_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void emrals_accessor_FatButton_Text__get_SupportsOriginSetter_fn(emrals_accessor_FatButton_Text* __this, bool* __retval);

struct emrals_accessor_FatButton_Text : ::g::Uno::UX::PropertyAccessor
{
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return emrals_accessor_FatButton_Text_typeof()->Init(), _name_; }
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return emrals_accessor_FatButton_Text_typeof()->Init(), Singleton_; }

    void ctor_1();
    static emrals_accessor_FatButton_Text* New1();
};
// }

} // ::g
