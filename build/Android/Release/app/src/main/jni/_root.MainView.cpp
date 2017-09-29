// This file was generated based on '.uno/ux11/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AlertDetailPage.h>
#include <_root.AlertsPage.h>
#include <_root.BuyEcanPage.h>
#include <_root.CameraPage.h>
#include <_root.emrals_bundle.h>
#include <_root.emrals_FuseCont-56bc3fec.h>
#include <_root.emrals_FuseCont-b37426cf.h>
#include <_root.emrals_FuseElem-95841797.h>
#include <_root.ImpactPage.h>
#include <_root.MainView.h>
#include <_root.MainView.Template.h>
#include <_root.MainView.Template1.h>
#include <_root.MainView.Template10.h>
#include <_root.MainView.Template11.h>
#include <_root.MainView.Template2.h>
#include <_root.MainView.Template3.h>
#include <_root.MainView.Template4.h>
#include <_root.MainView.Template5.h>
#include <_root.MainView.Template6.h>
#include <_root.MainView.Template7.h>
#include <_root.MainView.Template8.h>
#include <_root.MainView.Template9.h>
#include <_root.PaymentPage.h>
#include <_root.PTSerif.h>
#include <_root.Uploader.h>
#include <Basic.Resources.h>
#include <Fuse.Android.StatusBarConfig.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.AppBase.h>
#include <Fuse.Binding.h>
#include <Fuse.Camera.Camera.h>
#include <Fuse.CameraRoll.CameraRoll.h>
#include <Fuse.Controls.ClientPanel.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Navigator.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.BrushConverter.h>
#include <Fuse.Drawing.Brushes.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.ITransformOrigin.h>
#include <Fuse.Elements.TransformOrigins.h>
#include <Fuse.Elements.TranslationModes.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.FileSystem.FileS-3c9ac41b.h>
#include <Fuse.Font.h>
#include <Fuse.GeoLocation.GeoLocation.h>
#include <Fuse.ImageTools.ImageTools.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Node.h>
#include <Fuse.Platform.StatusBarStyle.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.FuseJS.-61f763fd.h>
#include <Fuse.Reactive.FuseJS.-97046318.h>
#include <Fuse.Reactive.FuseJS.Email.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.FuseJS.InterApp.h>
#include <Fuse.Reactive.FuseJS.Maps.h>
#include <Fuse.Reactive.FuseJS.Phone.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.ScalingModes.h>
#include <Fuse.Storage.StorageModule.h>
#include <Fuse.Testing.UnoTestingHelper.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions-7ea0e0be.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.BusyTaskModule.h>
#include <Fuse.Triggers.IScrolledLength.h>
#include <Fuse.Triggers.IScrolledLengths.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.WhileKe-99bafeca.h>
#include <Fuse.Visual.h>
#include <Fuse.WebSocket.WebSoc-2254f404.h>
#include <FuseJS.Base64.h>
#include <FuseJS.Bundle.h>
#include <FuseJS.Environment.h>
#include <FuseJS.FileReaderImpl.h>
#include <FuseJS.Globals.h>
#include <FuseJS.Lifecycle.h>
#include <FuseJS.UserEvents.h>
#include <Polyfills.Window.WindowModule.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[124];
static uType* TYPES[5];

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :264
static void MainView__cctor_1_fn(uType* __type)
{
    MainView::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 1, ::STRINGS[0/*"router"*/]);
    MainView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Value"*/]);
    MainView::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Url"*/]);
    MainView::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Visibility"*/]);
    MainView::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"router"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::Linear(), ::STRINGS[4/*"Linear"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticIn(), ::STRINGS[5/*"QuadraticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticOut(), ::STRINGS[6/*"QuadraticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticInOut(), ::STRINGS[7/*"QuadraticIn...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicIn(), ::STRINGS[8/*"CubicIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicOut(), ::STRINGS[9/*"CubicOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicInOut(), ::STRINGS[10/*"CubicInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticIn(), ::STRINGS[11/*"QuarticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticOut(), ::STRINGS[12/*"QuarticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticInOut(), ::STRINGS[13/*"QuarticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticIn(), ::STRINGS[14/*"QuinticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticOut(), ::STRINGS[15/*"QuinticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticInOut(), ::STRINGS[16/*"QuinticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalIn(), ::STRINGS[17/*"SinusoidalIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalOut(), ::STRINGS[18/*"SinusoidalOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalInOut(), ::STRINGS[19/*"SinusoidalI...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialIn(), ::STRINGS[20/*"ExponentialIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialOut(), ::STRINGS[21/*"Exponential...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialInOut(), ::STRINGS[22/*"Exponential...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularIn(), ::STRINGS[23/*"CircularIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularOut(), ::STRINGS[24/*"CircularOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularInOut(), ::STRINGS[25/*"CircularInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticIn(), ::STRINGS[26/*"ElasticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticOut(), ::STRINGS[27/*"ElasticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticInOut(), ::STRINGS[28/*"ElasticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackIn(), ::STRINGS[29/*"BackIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackOut(), ::STRINGS[30/*"BackOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackInOut(), ::STRINGS[31/*"BackInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceIn(), ::STRINGS[32/*"BounceIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceOut(), ::STRINGS[33/*"BounceOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceInOut(), ::STRINGS[34/*"BounceInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Transparent()), ::STRINGS[35/*"Transparent"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Transparent(), ::STRINGS[35/*"Transparent"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Black()), ::STRINGS[36/*"Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Black(), ::STRINGS[36/*"Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Silver()), ::STRINGS[37/*"Silver"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Silver(), ::STRINGS[37/*"Silver"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Gray()), ::STRINGS[38/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Gray(), ::STRINGS[38/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::White()), ::STRINGS[39/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::White(), ::STRINGS[39/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Maroon()), ::STRINGS[40/*"Maroon"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Maroon(), ::STRINGS[40/*"Maroon"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Red()), ::STRINGS[41/*"Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Red(), ::STRINGS[41/*"Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Purple()), ::STRINGS[42/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Purple(), ::STRINGS[42/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Fuchsia()), ::STRINGS[43/*"Fuchsia"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Fuchsia(), ::STRINGS[43/*"Fuchsia"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Green()), ::STRINGS[44/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Green(), ::STRINGS[44/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Lime()), ::STRINGS[45/*"Lime"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Lime(), ::STRINGS[45/*"Lime"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Olive()), ::STRINGS[46/*"Olive"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Olive(), ::STRINGS[46/*"Olive"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Yellow()), ::STRINGS[47/*"Yellow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Yellow(), ::STRINGS[47/*"Yellow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Navy()), ::STRINGS[48/*"Navy"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Navy(), ::STRINGS[48/*"Navy"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Blue()), ::STRINGS[49/*"Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Blue(), ::STRINGS[49/*"Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Teal()), ::STRINGS[50/*"Teal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Teal(), ::STRINGS[50/*"Teal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Aqua()), ::STRINGS[51/*"Aqua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Aqua(), ::STRINGS[51/*"Aqua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::TopLeft(), ::STRINGS[52/*"TopLeft"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Center(), ::STRINGS[53/*"Center"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Anchor(), ::STRINGS[54/*"Anchor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::HorizontalBoxCenter(), ::STRINGS[55/*"HorizontalB...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::VerticalBoxCenter(), ::STRINGS[56/*"VerticalBox...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::TransformOriginOffset(), ::STRINGS[57/*"TransformOr...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::PositionOffset(), ::STRINGS[58/*"PositionOff...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::SizeFactor(), ::STRINGS[59/*"SizeFactor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::Size(), ::STRINGS[60/*"Size"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Size(), ::STRINGS[60/*"Size"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::Actions::GiveFocus::Singleton(), ::STRINGS[61/*"GiveFocus"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::WhileKeyboardVisible::Keyboard(), ::STRINGS[62/*"Keyboard"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange(), ::STRINGS[63/*"LayoutChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::SizeLayoutChange(), ::STRINGS[63/*"LayoutChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange(), ::STRINGS[64/*"WorldPositi...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionChange(), ::STRINGS[65/*"PositionCha...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ResizeSizeChange(), ::STRINGS[66/*"SizeChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ScalingSizeChange(), ::STRINGS[66/*"SizeChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Points(), ::STRINGS[67/*"Points"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Pixels(), ::STRINGS[68/*"Pixels"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ContentSize(), ::STRINGS[69/*"ContentSize"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ScrollViewSize(), ::STRINGS[70/*"ScrollViewS...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::PreloadRetain(), ::STRINGS[71/*"PreloadRetain"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadUnused(), ::STRINGS[72/*"UnloadUnused"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::QuickUnload(), ::STRINGS[73/*"QuickUnload"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadInBackgroundPolicy(), ::STRINGS[74/*"UnloadInBac...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Thin(), ::STRINGS[75/*"Thin"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Light(), ::STRINGS[76/*"Light"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Regular(), ::STRINGS[77/*"Regular"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Medium(), ::STRINGS[78/*"Medium"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Bold(), ::STRINGS[79/*"Bold"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::ThinItalic(), ::STRINGS[80/*"ThinItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::LightItalic(), ::STRINGS[81/*"LightItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Italic(), ::STRINGS[82/*"Italic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::MediumItalic(), ::STRINGS[83/*"MediumItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::BoldItalic(), ::STRINGS[84/*"BoldItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::PlatformDefault(), ::STRINGS[85/*"PlatformDef...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::ScalingModes::Identity(), ::STRINGS[86/*"Identity"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Local(), ::STRINGS[87/*"Local"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::ParentSize(), ::STRINGS[88/*"ParentSize"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Width(), ::STRINGS[89/*"Width"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Height(), ::STRINGS[90/*"Height"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Basic::Resources::RobotoRegular(), ::STRINGS[91/*"RobotoRegular"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Basic::Resources::RobotoLight(), ::STRINGS[92/*"RobotoLight"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Basic::Resources::RobotoMedium(), ::STRINGS[93/*"RobotoMedium"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicCLine()), ::STRINGS[94/*"Basic.CLine"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicCFillFore()), ::STRINGS[95/*"Basic.CFill...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicCEmptyFore()), ::STRINGS[96/*"Basic.CEmpt...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicCShadow()), ::STRINGS[97/*"Basic.CShadow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicC50()), ::STRINGS[98/*"Basic.C50"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicC100()), ::STRINGS[99/*"Basic.C100"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicC200()), ::STRINGS[100/*"Basic.C200"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicC300()), ::STRINGS[101/*"Basic.C300"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicC400()), ::STRINGS[102/*"Basic.C400"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicC500()), ::STRINGS[103/*"Basic.C500"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicC600()), ::STRINGS[104/*"Basic.C600"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicC700()), ::STRINGS[105/*"Basic.C700"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicC800()), ::STRINGS[106/*"Basic.C800"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicC900()), ::STRINGS[107/*"Basic.C900"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::AlertDetailPage::Head(), ::STRINGS[108/*"Head"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::AlertsPage::Header(), ::STRINGS[109/*"Header"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::AlertsPage::PTreal(), ::STRINGS[110/*"PTreal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::BuyEcanPage::PTMono(), ::STRINGS[111/*"PTMono"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::CameraPage::PTSerif(), ::STRINGS[112/*"PTSerif"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::CameraPage::PTBold(), ::STRINGS[113/*"PTBold"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::ImpactPage::Curl(), ::STRINGS[114/*"Curl"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::PaymentPage::Cat(), ::STRINGS[115/*"Cat"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::PaymentPage::Dog(), ::STRINGS[116/*"Dog"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::PaymentPage::Horse(), ::STRINGS[117/*"Horse"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::PaymentPage::Mouse(), ::STRINGS[118/*"Mouse"*/]);
}

static void MainView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("Url");
    ::STRINGS[3] = uString::Const("Visibility");
    ::STRINGS[4] = uString::Const("Linear");
    ::STRINGS[5] = uString::Const("QuadraticIn");
    ::STRINGS[6] = uString::Const("QuadraticOut");
    ::STRINGS[7] = uString::Const("QuadraticInOut");
    ::STRINGS[8] = uString::Const("CubicIn");
    ::STRINGS[9] = uString::Const("CubicOut");
    ::STRINGS[10] = uString::Const("CubicInOut");
    ::STRINGS[11] = uString::Const("QuarticIn");
    ::STRINGS[12] = uString::Const("QuarticOut");
    ::STRINGS[13] = uString::Const("QuarticInOut");
    ::STRINGS[14] = uString::Const("QuinticIn");
    ::STRINGS[15] = uString::Const("QuinticOut");
    ::STRINGS[16] = uString::Const("QuinticInOut");
    ::STRINGS[17] = uString::Const("SinusoidalIn");
    ::STRINGS[18] = uString::Const("SinusoidalOut");
    ::STRINGS[19] = uString::Const("SinusoidalInOut");
    ::STRINGS[20] = uString::Const("ExponentialIn");
    ::STRINGS[21] = uString::Const("ExponentialOut");
    ::STRINGS[22] = uString::Const("ExponentialInOut");
    ::STRINGS[23] = uString::Const("CircularIn");
    ::STRINGS[24] = uString::Const("CircularOut");
    ::STRINGS[25] = uString::Const("CircularInOut");
    ::STRINGS[26] = uString::Const("ElasticIn");
    ::STRINGS[27] = uString::Const("ElasticOut");
    ::STRINGS[28] = uString::Const("ElasticInOut");
    ::STRINGS[29] = uString::Const("BackIn");
    ::STRINGS[30] = uString::Const("BackOut");
    ::STRINGS[31] = uString::Const("BackInOut");
    ::STRINGS[32] = uString::Const("BounceIn");
    ::STRINGS[33] = uString::Const("BounceOut");
    ::STRINGS[34] = uString::Const("BounceInOut");
    ::STRINGS[35] = uString::Const("Transparent");
    ::STRINGS[36] = uString::Const("Black");
    ::STRINGS[37] = uString::Const("Silver");
    ::STRINGS[38] = uString::Const("Gray");
    ::STRINGS[39] = uString::Const("White");
    ::STRINGS[40] = uString::Const("Maroon");
    ::STRINGS[41] = uString::Const("Red");
    ::STRINGS[42] = uString::Const("Purple");
    ::STRINGS[43] = uString::Const("Fuchsia");
    ::STRINGS[44] = uString::Const("Green");
    ::STRINGS[45] = uString::Const("Lime");
    ::STRINGS[46] = uString::Const("Olive");
    ::STRINGS[47] = uString::Const("Yellow");
    ::STRINGS[48] = uString::Const("Navy");
    ::STRINGS[49] = uString::Const("Blue");
    ::STRINGS[50] = uString::Const("Teal");
    ::STRINGS[51] = uString::Const("Aqua");
    ::STRINGS[52] = uString::Const("TopLeft");
    ::STRINGS[53] = uString::Const("Center");
    ::STRINGS[54] = uString::Const("Anchor");
    ::STRINGS[55] = uString::Const("HorizontalBoxCenter");
    ::STRINGS[56] = uString::Const("VerticalBoxCenter");
    ::STRINGS[57] = uString::Const("TransformOriginOffset");
    ::STRINGS[58] = uString::Const("PositionOffset");
    ::STRINGS[59] = uString::Const("SizeFactor");
    ::STRINGS[60] = uString::Const("Size");
    ::STRINGS[61] = uString::Const("GiveFocus");
    ::STRINGS[62] = uString::Const("Keyboard");
    ::STRINGS[63] = uString::Const("LayoutChange");
    ::STRINGS[64] = uString::Const("WorldPositionChange");
    ::STRINGS[65] = uString::Const("PositionChange");
    ::STRINGS[66] = uString::Const("SizeChange");
    ::STRINGS[67] = uString::Const("Points");
    ::STRINGS[68] = uString::Const("Pixels");
    ::STRINGS[69] = uString::Const("ContentSize");
    ::STRINGS[70] = uString::Const("ScrollViewSize");
    ::STRINGS[71] = uString::Const("PreloadRetain");
    ::STRINGS[72] = uString::Const("UnloadUnused");
    ::STRINGS[73] = uString::Const("QuickUnload");
    ::STRINGS[74] = uString::Const("UnloadInBackground");
    ::STRINGS[75] = uString::Const("Thin");
    ::STRINGS[76] = uString::Const("Light");
    ::STRINGS[77] = uString::Const("Regular");
    ::STRINGS[78] = uString::Const("Medium");
    ::STRINGS[79] = uString::Const("Bold");
    ::STRINGS[80] = uString::Const("ThinItalic");
    ::STRINGS[81] = uString::Const("LightItalic");
    ::STRINGS[82] = uString::Const("Italic");
    ::STRINGS[83] = uString::Const("MediumItalic");
    ::STRINGS[84] = uString::Const("BoldItalic");
    ::STRINGS[85] = uString::Const("PlatformDefault");
    ::STRINGS[86] = uString::Const("Identity");
    ::STRINGS[87] = uString::Const("Local");
    ::STRINGS[88] = uString::Const("ParentSize");
    ::STRINGS[89] = uString::Const("Width");
    ::STRINGS[90] = uString::Const("Height");
    ::STRINGS[91] = uString::Const("RobotoRegular");
    ::STRINGS[92] = uString::Const("RobotoLight");
    ::STRINGS[93] = uString::Const("RobotoMedium");
    ::STRINGS[94] = uString::Const("Basic.CLine");
    ::STRINGS[95] = uString::Const("Basic.CFillFore");
    ::STRINGS[96] = uString::Const("Basic.CEmptyFore");
    ::STRINGS[97] = uString::Const("Basic.CShadow");
    ::STRINGS[98] = uString::Const("Basic.C50");
    ::STRINGS[99] = uString::Const("Basic.C100");
    ::STRINGS[100] = uString::Const("Basic.C200");
    ::STRINGS[101] = uString::Const("Basic.C300");
    ::STRINGS[102] = uString::Const("Basic.C400");
    ::STRINGS[103] = uString::Const("Basic.C500");
    ::STRINGS[104] = uString::Const("Basic.C600");
    ::STRINGS[105] = uString::Const("Basic.C700");
    ::STRINGS[106] = uString::Const("Basic.C800");
    ::STRINGS[107] = uString::Const("Basic.C900");
    ::STRINGS[108] = uString::Const("Head");
    ::STRINGS[109] = uString::Const("Header");
    ::STRINGS[110] = uString::Const("PTreal");
    ::STRINGS[111] = uString::Const("PTMono");
    ::STRINGS[112] = uString::Const("PTSerif");
    ::STRINGS[113] = uString::Const("PTBold");
    ::STRINGS[114] = uString::Const("Curl");
    ::STRINGS[115] = uString::Const("Cat");
    ::STRINGS[116] = uString::Const("Dog");
    ::STRINGS[117] = uString::Const("Horse");
    ::STRINGS[118] = uString::Const("Mouse");
    ::STRINGS[119] = uString::Const("user_emrals");
    ::STRINGS[120] = uString::Const("user_avatar");
    ::STRINGS[121] = uString::Const("widget_visible");
    ::STRINGS[122] = uString::Const("MainView.ux");
    ::STRINGS[123] = uString::Const("splash");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::AppBase_type, interface0));
    type->SetFields(9,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MainView, __g_nametable1), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::MainView, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp1_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::MainView, temp2_Visibility_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::MainView::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector3_, uFieldFlagsStatic);
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::App_typeof();
    options.FieldCount = 19;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->fp_build_ = MainView_build;
    type->fp_ctor_ = (void*)MainView__New1_fn;
    type->fp_cctor_ = MainView__cctor_1_fn;
    type->interface0.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::AppBase__get_Properties_fn;
    return type;
}

// public MainView() :403
void MainView__ctor_4_fn(MainView* __this)
{
    __this->ctor_4();
}

// private void InitializeUX() :407
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :403
void MainView__New1_fn(MainView** __retval)
{
    *__retval = MainView::New1();
}

uSStrong<uArray*> MainView::__g_static_nametable1_;
::g::Uno::UX::Selector MainView::__selector0_;
::g::Uno::UX::Selector MainView::__selector1_;
::g::Uno::UX::Selector MainView::__selector2_;
::g::Uno::UX::Selector MainView::__selector3_;

// public MainView() [instance] :403
void MainView::ctor_4()
{
    ctor_3();
    InitializeUX();
}

// private void InitializeUX() [instance] :407
void MainView::InitializeUX()
{
    ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule* temp3 = ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule::New2();
    ::g::Fuse::Reactive::FuseJS::Http* temp4 = ::g::Fuse::Reactive::FuseJS::Http::New2();
    ::g::Fuse::Reactive::FuseJS::TimerModule* temp5 = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();
    ::g::Fuse::Reactive::FuseJS::Email* temp6 = ::g::Fuse::Reactive::FuseJS::Email::New2();
    ::g::Fuse::Reactive::FuseJS::InterApp* temp7 = ::g::Fuse::Reactive::FuseJS::InterApp::New3();
    ::g::Fuse::Reactive::FuseJS::Maps* temp8 = ::g::Fuse::Reactive::FuseJS::Maps::New2();
    ::g::Fuse::Reactive::FuseJS::Phone* temp9 = ::g::Fuse::Reactive::FuseJS::Phone::New2();
    ::g::Fuse::Drawing::BrushConverter* temp10 = ::g::Fuse::Drawing::BrushConverter::New1();
    ::g::Fuse::Triggers::BusyTaskModule* temp11 = ::g::Fuse::Triggers::BusyTaskModule::New2();
    ::g::Fuse::Testing::UnoTestingHelper* temp12 = ::g::Fuse::Testing::UnoTestingHelper::New2();
    ::g::Fuse::FileSystem::FileSystemModule* temp13 = ::g::Fuse::FileSystem::FileSystemModule::New2();
    ::g::Fuse::Storage::StorageModule* temp14 = ::g::Fuse::Storage::StorageModule::New2();
    ::g::Fuse::WebSocket::WebSocketClientModule* temp15 = ::g::Fuse::WebSocket::WebSocketClientModule::New2();
    ::g::Fuse::ImageTools::ImageTools* temp16 = ::g::Fuse::ImageTools::ImageTools::New2();
    ::g::Fuse::Camera::Camera* temp17 = ::g::Fuse::Camera::Camera::New2();
    ::g::Fuse::CameraRoll::CameraRoll* temp18 = ::g::Fuse::CameraRoll::CameraRoll::New2();
    ::g::Fuse::GeoLocation::GeoLocation* temp19 = ::g::Fuse::GeoLocation::GeoLocation::New3();
    ::g::Polyfills::Window::WindowModule* temp20 = ::g::Polyfills::Window::WindowModule::New3();
    ::g::FuseJS::Globals* temp21 = ::g::FuseJS::Globals::New2();
    ::g::FuseJS::Lifecycle* temp22 = ::g::FuseJS::Lifecycle::New3();
    ::g::FuseJS::Environment* temp23 = ::g::FuseJS::Environment::New2();
    ::g::FuseJS::Base64* temp24 = ::g::FuseJS::Base64::New2();
    ::g::FuseJS::Bundle* temp25 = ::g::FuseJS::Bundle::New2();
    ::g::FuseJS::FileReaderImpl* temp26 = ::g::FuseJS::FileReaderImpl::New2();
    ::g::FuseJS::UserEvents* temp27 = ::g::FuseJS::UserEvents::New2();
    ::g::Uploader* temp28 = ::g::Uploader::New2();
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MainView::__g_static_nametable1());
    ::g::PTSerif* temp = ::g::PTSerif::New4();
    temp_Value_inst = ::g::emrals_FuseControlsTextControl_Value_Property::New1(temp, MainView::__selector0());
    ::g::Fuse::Reactive::Data* temp29 = ::g::Fuse::Reactive::Data::New1(::STRINGS[119/*"user_emrals"*/]);
    ::g::Fuse::Controls::Image* temp1 = ::g::Fuse::Controls::Image::New3();
    temp1_Url_inst = ::g::emrals_FuseControlsImage_Url_Property::New1(temp1, MainView::__selector1());
    ::g::Fuse::Reactive::Data* temp30 = ::g::Fuse::Reactive::Data::New1(::STRINGS[120/*"user_avatar"*/]);
    ::g::Fuse::Controls::StackPanel* temp2 = ::g::Fuse::Controls::StackPanel::New4();
    temp2_Visibility_inst = ::g::emrals_FuseElementsElement_Visibility_Property::New1(temp2, MainView::__selector2());
    ::g::Fuse::Reactive::Data* temp31 = ::g::Fuse::Reactive::Data::New1(::STRINGS[121/*"widget_visi...*/]);
    ::g::Fuse::iOS::StatusBarConfig* temp32 = ::g::Fuse::iOS::StatusBarConfig::New2();
    ::g::Fuse::Android::StatusBarConfig* temp33 = ::g::Fuse::Android::StatusBarConfig::New2();
    ::g::Fuse::Reactive::JavaScript* temp34 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    router = ::g::Fuse::Navigation::Router::New2();
    ::g::Fuse::Controls::ClientPanel* temp35 = ::g::Fuse::Controls::ClientPanel::New5();
    ::g::Fuse::Controls::Image* temp36 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp37 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp29, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp38 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Url_inst, (uObject*)temp30, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp39 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Visibility_inst, (uObject*)temp31, __g_nametable1, 3);
    ::g::Fuse::Controls::Navigator* temp40 = ::g::Fuse::Controls::Navigator::New4();
    MainView__Template* splash = MainView__Template::New2(this, this);
    MainView__Template1* alerts = MainView__Template1::New2(this, this);
    MainView__Template2* ecans = MainView__Template2::New2(this, this);
    MainView__Template3* camera = MainView__Template3::New2(this, this);
    MainView__Template4* signup = MainView__Template4::New2(this, this);
    MainView__Template5* login = MainView__Template5::New2(this, this);
    MainView__Template6* alertdetail = MainView__Template6::New2(this, this);
    MainView__Template7* impact = MainView__Template7::New2(this, this);
    MainView__Template8* payment = MainView__Template8::New2(this, this);
    MainView__Template9* buyecan = MainView__Template9::New2(this, this);
    MainView__Template10* ecanthanks = MainView__Template10::New2(this, this);
    MainView__Template11* impactthanks = MainView__Template11::New2(this, this);
    Background(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp32->Style(1);
    temp33->Color(::g::Uno::Float4__New2(0.3882353f, 0.3882353f, 0.3921569f, 1.0f));
    temp34->LineNumber(4);
    temp34->FileName(::STRINGS[122/*"MainView.ux"*/]);
    temp34->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::MainViewa74596a0()));
    uPtr(router)->Name(MainView::__selector3());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    temp2->Orientation(0);
    temp2->Alignment(7);
    temp2->Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp2, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp39);
    temp36->Height(::g::Uno::UX::Size__New1(16.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp36, 2);
    temp36->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::greene0b36608f()));
    temp->FontSize(14.0f);
    temp->Margin(::g::Uno::Float4__New2(4.0f, 0.0f, 4.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp37);
    temp1->MaxHeight(::g::Uno::UX::Size__New1(16.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp38);
    temp40->DefaultPath(::STRINGS[123/*"splash"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Templates()), ::TYPES[3/*Uno.Collections.ICollection<Uno.UX.Template>*/]), splash);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Templates()), ::TYPES[3/*Uno.Collections.ICollection<Uno.UX.Template>*/]), alerts);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Templates()), ::TYPES[3/*Uno.Collections.ICollection<Uno.UX.Template>*/]), ecans);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Templates()), ::TYPES[3/*Uno.Collections.ICollection<Uno.UX.Template>*/]), camera);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Templates()), ::TYPES[3/*Uno.Collections.ICollection<Uno.UX.Template>*/]), signup);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Templates()), ::TYPES[3/*Uno.Collections.ICollection<Uno.UX.Template>*/]), login);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Templates()), ::TYPES[3/*Uno.Collections.ICollection<Uno.UX.Template>*/]), alertdetail);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Templates()), ::TYPES[3/*Uno.Collections.ICollection<Uno.UX.Template>*/]), impact);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Templates()), ::TYPES[3/*Uno.Collections.ICollection<Uno.UX.Template>*/]), payment);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Templates()), ::TYPES[3/*Uno.Collections.ICollection<Uno.UX.Template>*/]), buyecan);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Templates()), ::TYPES[3/*Uno.Collections.ICollection<Uno.UX.Template>*/]), ecanthanks);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Templates()), ::TYPES[3/*Uno.Collections.ICollection<Uno.UX.Template>*/]), impactthanks);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
}

// public MainView New() [static] :403
MainView* MainView::New1()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

} // ::g
