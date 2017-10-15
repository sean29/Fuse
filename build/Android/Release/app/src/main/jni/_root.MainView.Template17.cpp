// This file was generated based on '.uno/ux11/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.BuyEmralsPage.h>
#include <_root.MainView.h>
#include <_root.MainView.Template17.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Node.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];

namespace g{

// public partial sealed class MainView.Template17 :362
// {
// static Template17() :371
static void MainView__Template17__cctor__fn(uType* __type)
{
    MainView__Template17::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"buyemrals"*/]);
}

static void MainView__Template17_build(uType* type)
{
    ::STRINGS[0] = uString::Const("buyemrals");
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template17, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template17, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template17::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* MainView__Template17_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(MainView__Template17);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template17", options);
    type->fp_build_ = MainView__Template17_build;
    type->fp_cctor_ = MainView__Template17__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template17__New1_fn;
    return type;
}

// public Template17(MainView parent, MainView parentInstance) :366
void MainView__Template17__ctor_1_fn(MainView__Template17* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :374
void MainView__Template17__New1_fn(MainView__Template17* __this, uObject** __retval)
{
    ::g::BuyEmralsPage* __self1 = ::g::BuyEmralsPage::New5(uPtr(__this->__parent1)->router);
    __self1->Name(MainView__Template17::__selector0());
    return *__retval = __self1, void();
}

// public Template17 New(MainView parent, MainView parentInstance) :366
void MainView__Template17__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template17** __retval)
{
    *__retval = MainView__Template17::New2(parent, parentInstance);
}

::g::Uno::UX::Selector MainView__Template17::__selector0_;

// public Template17(MainView parent, MainView parentInstance) [instance] :366
void MainView__Template17::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(::STRINGS[0/*"buyemrals"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template17 New(MainView parent, MainView parentInstance) [static] :366
MainView__Template17* MainView__Template17::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template17* obj1 = (MainView__Template17*)uNew(MainView__Template17_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
