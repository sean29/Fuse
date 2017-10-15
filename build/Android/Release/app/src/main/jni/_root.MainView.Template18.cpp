// This file was generated based on '.uno/ux11/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.EmralsThankYouPage.h>
#include <_root.MainView.h>
#include <_root.MainView.Template18.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Node.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];

namespace g{

// public partial sealed class MainView.Template18 :383
// {
// static Template18() :392
static void MainView__Template18__cctor__fn(uType* __type)
{
    MainView__Template18::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"emralsthanks"*/]);
}

static void MainView__Template18_build(uType* type)
{
    ::STRINGS[0] = uString::Const("emralsthanks");
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template18, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template18, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template18::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* MainView__Template18_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(MainView__Template18);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template18", options);
    type->fp_build_ = MainView__Template18_build;
    type->fp_cctor_ = MainView__Template18__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template18__New1_fn;
    return type;
}

// public Template18(MainView parent, MainView parentInstance) :387
void MainView__Template18__ctor_1_fn(MainView__Template18* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :395
void MainView__Template18__New1_fn(MainView__Template18* __this, uObject** __retval)
{
    ::g::EmralsThankYouPage* __self1 = ::g::EmralsThankYouPage::New5(uPtr(__this->__parent1)->router);
    __self1->Name(MainView__Template18::__selector0());
    return *__retval = __self1, void();
}

// public Template18 New(MainView parent, MainView parentInstance) :387
void MainView__Template18__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template18** __retval)
{
    *__retval = MainView__Template18::New2(parent, parentInstance);
}

::g::Uno::UX::Selector MainView__Template18::__selector0_;

// public Template18(MainView parent, MainView parentInstance) [instance] :387
void MainView__Template18::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(::STRINGS[0/*"emralsthanks"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template18 New(MainView parent, MainView parentInstance) [static] :387
MainView__Template18* MainView__Template18::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template18* obj1 = (MainView__Template18*)uNew(MainView__Template18_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
