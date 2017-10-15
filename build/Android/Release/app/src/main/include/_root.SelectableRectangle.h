// This file was generated based on '.uno/ux13/SelectableRectangle.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Drawing.IDrawObj-d34d045e.h>
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
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Drawing{struct SolidColor;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct SelectableRectangle;}

namespace g{

// public partial sealed class SelectableRectangle :2
// {
::g::Fuse::Controls::Shape_type* SelectableRectangle_typeof();
void SelectableRectangle__ctor_8_fn(SelectableRectangle* __this);
void SelectableRectangle__get_ID_fn(SelectableRectangle* __this, uString** __retval);
void SelectableRectangle__set_ID_fn(SelectableRectangle* __this, uString* value);
void SelectableRectangle__InitializeUX_fn(SelectableRectangle* __this);
void SelectableRectangle__New4_fn(SelectableRectangle** __retval);
void SelectableRectangle__SetID_fn(SelectableRectangle* __this, uString* value, uObject* origin);

struct SelectableRectangle : ::g::Fuse::Controls::Rectangle
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return SelectableRectangle_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return SelectableRectangle_typeof()->Init(), __selector1_; }
    uStrong<uString*> _field_ID;
    uStrong< ::g::Fuse::Drawing::Stroke*> rectStroke;
    uStrong< ::g::Fuse::Drawing::SolidColor*> rectStrokeColor;
    uStrong< ::g::Uno::UX::Property1*> rectStrokeColor_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;

    void ctor_8();
    uString* ID();
    void ID(uString* value);
    void InitializeUX();
    void SetID(uString* value, uObject* origin);
    static SelectableRectangle* New4();
};
// }

} // ::g
