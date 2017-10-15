// This file was generated based on '.uno/ux11/CameraPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Fuse{namespace Triggers{struct Busy;}}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct CameraPage;}
namespace g{struct MyLoadingIndicator2;}
namespace g{struct PTBold;}

namespace g{

// public partial sealed class CameraPage :2
// {
::g::Fuse::Controls::Panel_type* CameraPage_typeof();
void CameraPage__ctor_8_fn(CameraPage* __this, ::g::Fuse::Navigation::Router* router1);
void CameraPage__InitializeUX_fn(CameraPage* __this);
void CameraPage__New5_fn(::g::Fuse::Navigation::Router* router1, CameraPage** __retval);

struct CameraPage : ::g::Fuse::Controls::Page
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return CameraPage_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return CameraPage_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return CameraPage_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return CameraPage_typeof()->Init(), __selector10_; }
    static ::g::Uno::UX::Selector __selector11_;
    static ::g::Uno::UX::Selector& __selector11() { return CameraPage_typeof()->Init(), __selector11_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return CameraPage_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return CameraPage_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return CameraPage_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return CameraPage_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return CameraPage_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return CameraPage_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return CameraPage_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return CameraPage_typeof()->Init(), __selector9_; }
    uStrong< ::g::Fuse::Controls::Panel*> AddEmralsPopUp;
    uStrong< ::g::Uno::UX::Property1*> AddEmralsPopUp_Visibility_inst;
    uStrong< ::g::PTBold*> emrals_value1;
    uStrong< ::g::PTBold*> emrals_value10;
    uStrong< ::g::PTBold*> emrals_value5;
    uStrong< ::g::Fuse::Triggers::Busy*> isBusy2;
    uStrong< ::g::Uno::UX::Property1*> isBusy2_IsActive_inst;
    uStrong< ::g::MyLoadingIndicator2*> loadingPanel;
    uStrong< ::g::Uno::UX::Property1*> loadingPanel_Opacity_inst;
    static uSStrong< ::g::Fuse::Font*> PTBold_;
    static uSStrong< ::g::Fuse::Font*>& PTBold() { return CameraPage_typeof()->Init(), PTBold_; }
    static uSStrong< ::g::Fuse::Font*> PTSerif_;
    static uSStrong< ::g::Fuse::Font*>& PTSerif() { return CameraPage_typeof()->Init(), PTSerif_; }
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb26;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb27;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb28;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb29;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb30;
    uStrong< ::g::Uno::UX::Property1*> temp_File_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Values_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;

    void ctor_8(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static CameraPage* New5(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
