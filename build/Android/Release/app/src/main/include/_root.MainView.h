// This file was generated based on '.uno/ux11/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.App.h>
#include <Fuse.IProperties.h>
#include <Uno.UX.Size.h>
namespace g{namespace Fuse{namespace Controls{struct ClientPanel;}}}
namespace g{namespace Fuse{namespace Controls{struct EdgeNavigator;}}}
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Fuse{struct Rotation;}}
namespace g{namespace Fuse{struct Translation;}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MainView;}
namespace g{struct Sidebar;}

namespace g{

// public partial sealed class MainView :2
// {
::g::Fuse::AppBase_type* MainView_typeof();
void MainView__ctor_4_fn(MainView* __this);
void MainView__InitializeUX_fn(MainView* __this);
void MainView__New1_fn(MainView** __retval);

struct MainView : ::g::Fuse::App
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return MainView_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MainView_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return MainView_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return MainView_typeof()->Init(), __selector10_; }
    static ::g::Uno::UX::Selector __selector11_;
    static ::g::Uno::UX::Selector& __selector11() { return MainView_typeof()->Init(), __selector11_; }
    static ::g::Uno::UX::Selector __selector12_;
    static ::g::Uno::UX::Selector& __selector12() { return MainView_typeof()->Init(), __selector12_; }
    static ::g::Uno::UX::Selector __selector13_;
    static ::g::Uno::UX::Selector& __selector13() { return MainView_typeof()->Init(), __selector13_; }
    static ::g::Uno::UX::Selector __selector14_;
    static ::g::Uno::UX::Selector& __selector14() { return MainView_typeof()->Init(), __selector14_; }
    static ::g::Uno::UX::Selector __selector15_;
    static ::g::Uno::UX::Selector& __selector15() { return MainView_typeof()->Init(), __selector15_; }
    static ::g::Uno::UX::Selector __selector16_;
    static ::g::Uno::UX::Selector& __selector16() { return MainView_typeof()->Init(), __selector16_; }
    static ::g::Uno::UX::Selector __selector17_;
    static ::g::Uno::UX::Selector& __selector17() { return MainView_typeof()->Init(), __selector17_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return MainView_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return MainView_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return MainView_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return MainView_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return MainView_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return MainView_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return MainView_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return MainView_typeof()->Init(), __selector9_; }
    uStrong< ::g::Fuse::Rotation*> bottomMenuRotation;
    uStrong< ::g::Uno::UX::Property1*> bottomMenuRotation_Degrees_inst;
    uStrong< ::g::Fuse::Translation*> bottomMenuTranslation;
    uStrong< ::g::Uno::UX::Property1*> bottomMenuTranslation_Y_inst;
    uStrong< ::g::Fuse::Controls::Rectangle*> bottomRectangle;
    uStrong< ::g::Uno::UX::Property1*> bottomRectangle_Width_inst;
    static uSStrong< ::g::Fuse::Font*> Cat_;
    static uSStrong< ::g::Fuse::Font*>& Cat() { return MainView_typeof()->Init(), Cat_; }
    uStrong< ::g::Fuse::Controls::ClientPanel*> content;
    static uSStrong< ::g::Fuse::Font*> Dog_;
    static uSStrong< ::g::Fuse::Font*>& Dog() { return MainView_typeof()->Init(), Dog_; }
    uStrong< ::g::Fuse::Controls::EdgeNavigator*> EdgeNavigator;
    static uSStrong< ::g::Fuse::Font*> Horse_;
    static uSStrong< ::g::Fuse::Font*>& Horse() { return MainView_typeof()->Init(), Horse_; }
    uStrong< ::g::Fuse::Translation*> mainAppTranslation;
    uStrong< ::g::Uno::UX::Property1*> mainAppTranslation_X_inst;
    uStrong< ::g::Sidebar*> menu;
    uStrong< ::g::Fuse::Controls::Rectangle*> middleRectangle;
    uStrong< ::g::Uno::UX::Property1*> middleRectangle_Opacity_inst;
    static uSStrong< ::g::Fuse::Font*> Mouse_;
    static uSStrong< ::g::Fuse::Font*>& Mouse() { return MainView_typeof()->Init(), Mouse_; }
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb0;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb1;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Fuse::Rotation*> topMenuRotation;
    uStrong< ::g::Uno::UX::Property1*> topMenuRotation_Degrees_inst;
    uStrong< ::g::Fuse::Translation*> topMenuTranslation;
    uStrong< ::g::Uno::UX::Property1*> topMenuTranslation_Y_inst;
    uStrong< ::g::Fuse::Controls::Rectangle*> topRectangle;
    uStrong< ::g::Uno::UX::Property1*> topRectangle_Width_inst;

    void ctor_4();
    void InitializeUX();
    static MainView* New1();
};
// }

} // ::g
