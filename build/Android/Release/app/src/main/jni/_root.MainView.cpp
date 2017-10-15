// This file was generated based on '.uno/ux11/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AlertDetailPage.h>
#include <_root.AlertsPage.h>
#include <_root.BarcodePage.h>
#include <_root.BuyEcanPage.h>
#include <_root.CameraPage.h>
#include <_root.Device.h>
#include <_root.emrals_bundle.h>
#include <_root.emrals_FuseElem-82a17684.h>
#include <_root.emrals_FuseElem-b2d8cdff.h>
#include <_root.emrals_FuseRota-f2e4c289.h>
#include <_root.emrals_FuseTran-3c68ee69.h>
#include <_root.emrals_FuseTran-5a456ce.h>
#include <_root.emrals_FuseTrig-13c24fd3.h>
#include <_root.ImpactPage.h>
#include <_root.MainView.h>
#include <_root.MainView.Template.h>
#include <_root.MainView.Template1.h>
#include <_root.MainView.Template10.h>
#include <_root.MainView.Template11.h>
#include <_root.MainView.Template12.h>
#include <_root.MainView.Template13.h>
#include <_root.MainView.Template14.h>
#include <_root.MainView.Template15.h>
#include <_root.MainView.Template16.h>
#include <_root.MainView.Template17.h>
#include <_root.MainView.Template18.h>
#include <_root.MainView.Template2.h>
#include <_root.MainView.Template3.h>
#include <_root.MainView.Template4.h>
#include <_root.MainView.Template5.h>
#include <_root.MainView.Template6.h>
#include <_root.MainView.Template7.h>
#include <_root.MainView.Template8.h>
#include <_root.MainView.Template9.h>
#include <_root.Qreader.h>
#include <_root.Sidebar.h>
#include <_root.Uploader.h>
#include <Basic.Resources.h>
#include <Fuse.Android.StatusBarConfig.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.AppBase.h>
#include <Fuse.Binding.h>
#include <Fuse.Camera.Camera.h>
#include <Fuse.CameraRoll.CameraRoll.h>
#include <Fuse.Controls.ClientPanel.h>
#include <Fuse.Controls.EdgeNavigator.h>
#include <Fuse.Controls.Navigator.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Drawing.BrushConverter.h>
#include <Fuse.Drawing.Brushes.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Elements.ITransformOrigin.h>
#include <Fuse.Elements.TransformOrigins.h>
#include <Fuse.Elements.TranslationModes.h>
#include <Fuse.FileSystem.FileS-3c9ac41b.h>
#include <Fuse.Font.h>
#include <Fuse.GeoLocation.GeoLocation.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.ImageTools.ImageTools.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Navigation.Activ-5bc1c951.h>
#include <Fuse.Navigation.EdgeNavigation.h>
#include <Fuse.Navigation.NavigateTo.h>
#include <Fuse.Navigation.NavigationEdge.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Navigation.WhileActive.h>
#include <Fuse.Navigation.WhileInactive.h>
#include <Fuse.Node.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Platform.StatusBarStyle.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
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
#include <Fuse.Rotation.h>
#include <Fuse.ScalingModes.h>
#include <Fuse.Storage.StorageModule.h>
#include <Fuse.Testing.UnoTestingHelper.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions-7ea0e0be.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.BusyTaskModule.h>
#include <Fuse.Triggers.IScrolledLength.h>
#include <Fuse.Triggers.IScrolledLengths.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileFalse.h>
#include <Fuse.Triggers.WhileKe-99bafeca.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEventHandler.h>
#include <Fuse.WebSocket.WebSoc-2254f404.h>
#include <FuseJS.Base64.h>
#include <FuseJS.Bundle.h>
#include <FuseJS.Environment.h>
#include <FuseJS.FileReaderImpl.h>
#include <FuseJS.Globals.h>
#include <FuseJS.Lifecycle.h>
#include <FuseJS.UserEvents.h>
#include <Polyfills.Window.WindowModule.h>
#include <Uno.Bool.h>
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
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[140];
static uType* TYPES[10];

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :448
static void MainView__cctor_1_fn(uType* __type)
{
    MainView::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"EdgeNavigator"*/], ::STRINGS[2/*"menu"*/], ::STRINGS[3/*"temp_eb0"*/], ::STRINGS[4/*"temp_eb1"*/], ::STRINGS[5/*"content"*/], ::STRINGS[6/*"topRectangle"*/], ::STRINGS[7/*"topMenuTran...*/], ::STRINGS[8/*"topMenuRota...*/], ::STRINGS[9/*"middleRecta...*/], ::STRINGS[10/*"bottomRecta...*/], ::STRINGS[11/*"bottomMenuT...*/], ::STRINGS[12/*"bottomMenuR...*/], ::STRINGS[13/*"mainAppTran...*/]);
    MainView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[14/*"X"*/]);
    MainView::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[15/*"Y"*/]);
    MainView::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[16/*"Opacity"*/]);
    MainView::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[17/*"Degrees"*/]);
    MainView::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[18/*"Width"*/]);
    MainView::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[19/*"Value"*/]);
    MainView::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"router"*/]);
    MainView::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"EdgeNavigator"*/]);
    MainView::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"menu"*/]);
    MainView::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"content"*/]);
    MainView::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"topRectangle"*/]);
    MainView::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"topMenuTran...*/]);
    MainView::__selector12_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"topMenuRota...*/]);
    MainView::__selector13_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"middleRecta...*/]);
    MainView::__selector14_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"bottomRecta...*/]);
    MainView::__selector15_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"bottomMenuT...*/]);
    MainView::__selector16_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[12/*"bottomMenuR...*/]);
    MainView::__selector17_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[13/*"mainAppTran...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::Linear(), ::STRINGS[20/*"Linear"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticIn(), ::STRINGS[21/*"QuadraticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticOut(), ::STRINGS[22/*"QuadraticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticInOut(), ::STRINGS[23/*"QuadraticIn...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicIn(), ::STRINGS[24/*"CubicIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicOut(), ::STRINGS[25/*"CubicOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicInOut(), ::STRINGS[26/*"CubicInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticIn(), ::STRINGS[27/*"QuarticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticOut(), ::STRINGS[28/*"QuarticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticInOut(), ::STRINGS[29/*"QuarticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticIn(), ::STRINGS[30/*"QuinticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticOut(), ::STRINGS[31/*"QuinticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticInOut(), ::STRINGS[32/*"QuinticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalIn(), ::STRINGS[33/*"SinusoidalIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalOut(), ::STRINGS[34/*"SinusoidalOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalInOut(), ::STRINGS[35/*"SinusoidalI...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialIn(), ::STRINGS[36/*"ExponentialIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialOut(), ::STRINGS[37/*"Exponential...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialInOut(), ::STRINGS[38/*"Exponential...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularIn(), ::STRINGS[39/*"CircularIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularOut(), ::STRINGS[40/*"CircularOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularInOut(), ::STRINGS[41/*"CircularInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticIn(), ::STRINGS[42/*"ElasticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticOut(), ::STRINGS[43/*"ElasticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticInOut(), ::STRINGS[44/*"ElasticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackIn(), ::STRINGS[45/*"BackIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackOut(), ::STRINGS[46/*"BackOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackInOut(), ::STRINGS[47/*"BackInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceIn(), ::STRINGS[48/*"BounceIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceOut(), ::STRINGS[49/*"BounceOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceInOut(), ::STRINGS[50/*"BounceInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Transparent()), ::STRINGS[51/*"Transparent"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Transparent(), ::STRINGS[51/*"Transparent"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Black()), ::STRINGS[52/*"Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Black(), ::STRINGS[52/*"Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Silver()), ::STRINGS[53/*"Silver"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Silver(), ::STRINGS[53/*"Silver"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Gray()), ::STRINGS[54/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Gray(), ::STRINGS[54/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::White()), ::STRINGS[55/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::White(), ::STRINGS[55/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Maroon()), ::STRINGS[56/*"Maroon"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Maroon(), ::STRINGS[56/*"Maroon"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Red()), ::STRINGS[57/*"Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Red(), ::STRINGS[57/*"Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Purple()), ::STRINGS[58/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Purple(), ::STRINGS[58/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Fuchsia()), ::STRINGS[59/*"Fuchsia"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Fuchsia(), ::STRINGS[59/*"Fuchsia"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Green()), ::STRINGS[60/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Green(), ::STRINGS[60/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Lime()), ::STRINGS[61/*"Lime"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Lime(), ::STRINGS[61/*"Lime"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Olive()), ::STRINGS[62/*"Olive"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Olive(), ::STRINGS[62/*"Olive"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Yellow()), ::STRINGS[63/*"Yellow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Yellow(), ::STRINGS[63/*"Yellow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Navy()), ::STRINGS[64/*"Navy"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Navy(), ::STRINGS[64/*"Navy"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Blue()), ::STRINGS[65/*"Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Blue(), ::STRINGS[65/*"Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Teal()), ::STRINGS[66/*"Teal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Teal(), ::STRINGS[66/*"Teal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Aqua()), ::STRINGS[67/*"Aqua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Aqua(), ::STRINGS[67/*"Aqua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::TopLeft(), ::STRINGS[68/*"TopLeft"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Center(), ::STRINGS[69/*"Center"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Anchor(), ::STRINGS[70/*"Anchor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::HorizontalBoxCenter(), ::STRINGS[71/*"HorizontalB...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::VerticalBoxCenter(), ::STRINGS[72/*"VerticalBox...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::TransformOriginOffset(), ::STRINGS[73/*"TransformOr...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::PositionOffset(), ::STRINGS[74/*"PositionOff...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::SizeFactor(), ::STRINGS[75/*"SizeFactor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::Size(), ::STRINGS[76/*"Size"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Size(), ::STRINGS[76/*"Size"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::Actions::GiveFocus::Singleton(), ::STRINGS[77/*"GiveFocus"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::WhileKeyboardVisible::Keyboard(), ::STRINGS[78/*"Keyboard"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange(), ::STRINGS[79/*"LayoutChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::SizeLayoutChange(), ::STRINGS[79/*"LayoutChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange(), ::STRINGS[80/*"WorldPositi...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionChange(), ::STRINGS[81/*"PositionCha...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ResizeSizeChange(), ::STRINGS[82/*"SizeChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ScalingSizeChange(), ::STRINGS[82/*"SizeChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Points(), ::STRINGS[83/*"Points"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Pixels(), ::STRINGS[84/*"Pixels"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ContentSize(), ::STRINGS[85/*"ContentSize"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ScrollViewSize(), ::STRINGS[86/*"ScrollViewS...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::PreloadRetain(), ::STRINGS[87/*"PreloadRetain"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadUnused(), ::STRINGS[88/*"UnloadUnused"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::QuickUnload(), ::STRINGS[89/*"QuickUnload"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadInBackgroundPolicy(), ::STRINGS[90/*"UnloadInBac...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Thin(), ::STRINGS[91/*"Thin"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Light(), ::STRINGS[92/*"Light"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Regular(), ::STRINGS[93/*"Regular"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Medium(), ::STRINGS[94/*"Medium"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Bold(), ::STRINGS[95/*"Bold"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::ThinItalic(), ::STRINGS[96/*"ThinItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::LightItalic(), ::STRINGS[97/*"LightItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Italic(), ::STRINGS[98/*"Italic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::MediumItalic(), ::STRINGS[99/*"MediumItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::BoldItalic(), ::STRINGS[100/*"BoldItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::PlatformDefault(), ::STRINGS[101/*"PlatformDef...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::ScalingModes::Identity(), ::STRINGS[102/*"Identity"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Local(), ::STRINGS[103/*"Local"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::ParentSize(), ::STRINGS[104/*"ParentSize"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Width(), ::STRINGS[18/*"Width"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Height(), ::STRINGS[105/*"Height"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Basic::Resources::RobotoRegular(), ::STRINGS[106/*"RobotoRegular"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Basic::Resources::RobotoLight(), ::STRINGS[107/*"RobotoLight"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Basic::Resources::RobotoMedium(), ::STRINGS[108/*"RobotoMedium"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicCLine()), ::STRINGS[109/*"Basic.CLine"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicCFillFore()), ::STRINGS[110/*"Basic.CFill...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicCEmptyFore()), ::STRINGS[111/*"Basic.CEmpt...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicCShadow()), ::STRINGS[112/*"Basic.CShadow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicC50()), ::STRINGS[113/*"Basic.C50"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicC100()), ::STRINGS[114/*"Basic.C100"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicC200()), ::STRINGS[115/*"Basic.C200"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicC300()), ::STRINGS[116/*"Basic.C300"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicC400()), ::STRINGS[117/*"Basic.C400"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicC500()), ::STRINGS[118/*"Basic.C500"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicC600()), ::STRINGS[119/*"Basic.C600"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicC700()), ::STRINGS[120/*"Basic.C700"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicC800()), ::STRINGS[121/*"Basic.C800"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicC900()), ::STRINGS[122/*"Basic.C900"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::Cat_, ::STRINGS[123/*"Cat"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::Dog_, ::STRINGS[124/*"Dog"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::Horse_, ::STRINGS[125/*"Horse"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::Mouse_, ::STRINGS[126/*"Mouse"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::AlertDetailPage::Head(), ::STRINGS[127/*"Head"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::AlertsPage::Header(), ::STRINGS[128/*"Header"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::AlertsPage::PTreal(), ::STRINGS[129/*"PTreal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::BarcodePage::Qreader(), ::STRINGS[130/*"Qreader"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::BuyEcanPage::PTMono(), ::STRINGS[131/*"PTMono"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::CameraPage::PTSerif(), ::STRINGS[132/*"PTSerif"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::CameraPage::PTBold(), ::STRINGS[133/*"PTBold"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::ImpactPage::Curl(), ::STRINGS[134/*"Curl"*/]);
    MainView::Cat_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::PTF55F5dbeddf8()));
    MainView::Dog_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::PTS55Fde1e1a99()));
    MainView::Horse_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::PTS75Fde1d015b()));
    MainView::Mouse_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::PTF75F5dbdc4ba()));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::Cat_, ::STRINGS[123/*"Cat"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::Dog_, ::STRINGS[124/*"Dog"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::Horse_, ::STRINGS[125/*"Horse"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::Mouse_, ::STRINGS[126/*"Mouse"*/]);
}

static void MainView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("EdgeNavigator");
    ::STRINGS[2] = uString::Const("menu");
    ::STRINGS[3] = uString::Const("temp_eb0");
    ::STRINGS[4] = uString::Const("temp_eb1");
    ::STRINGS[5] = uString::Const("content");
    ::STRINGS[6] = uString::Const("topRectangle");
    ::STRINGS[7] = uString::Const("topMenuTranslation");
    ::STRINGS[8] = uString::Const("topMenuRotation");
    ::STRINGS[9] = uString::Const("middleRectangle");
    ::STRINGS[10] = uString::Const("bottomRectangle");
    ::STRINGS[11] = uString::Const("bottomMenuTranslation");
    ::STRINGS[12] = uString::Const("bottomMenuRotation");
    ::STRINGS[13] = uString::Const("mainAppTranslation");
    ::STRINGS[14] = uString::Const("X");
    ::STRINGS[15] = uString::Const("Y");
    ::STRINGS[16] = uString::Const("Opacity");
    ::STRINGS[17] = uString::Const("Degrees");
    ::STRINGS[18] = uString::Const("Width");
    ::STRINGS[19] = uString::Const("Value");
    ::STRINGS[20] = uString::Const("Linear");
    ::STRINGS[21] = uString::Const("QuadraticIn");
    ::STRINGS[22] = uString::Const("QuadraticOut");
    ::STRINGS[23] = uString::Const("QuadraticInOut");
    ::STRINGS[24] = uString::Const("CubicIn");
    ::STRINGS[25] = uString::Const("CubicOut");
    ::STRINGS[26] = uString::Const("CubicInOut");
    ::STRINGS[27] = uString::Const("QuarticIn");
    ::STRINGS[28] = uString::Const("QuarticOut");
    ::STRINGS[29] = uString::Const("QuarticInOut");
    ::STRINGS[30] = uString::Const("QuinticIn");
    ::STRINGS[31] = uString::Const("QuinticOut");
    ::STRINGS[32] = uString::Const("QuinticInOut");
    ::STRINGS[33] = uString::Const("SinusoidalIn");
    ::STRINGS[34] = uString::Const("SinusoidalOut");
    ::STRINGS[35] = uString::Const("SinusoidalInOut");
    ::STRINGS[36] = uString::Const("ExponentialIn");
    ::STRINGS[37] = uString::Const("ExponentialOut");
    ::STRINGS[38] = uString::Const("ExponentialInOut");
    ::STRINGS[39] = uString::Const("CircularIn");
    ::STRINGS[40] = uString::Const("CircularOut");
    ::STRINGS[41] = uString::Const("CircularInOut");
    ::STRINGS[42] = uString::Const("ElasticIn");
    ::STRINGS[43] = uString::Const("ElasticOut");
    ::STRINGS[44] = uString::Const("ElasticInOut");
    ::STRINGS[45] = uString::Const("BackIn");
    ::STRINGS[46] = uString::Const("BackOut");
    ::STRINGS[47] = uString::Const("BackInOut");
    ::STRINGS[48] = uString::Const("BounceIn");
    ::STRINGS[49] = uString::Const("BounceOut");
    ::STRINGS[50] = uString::Const("BounceInOut");
    ::STRINGS[51] = uString::Const("Transparent");
    ::STRINGS[52] = uString::Const("Black");
    ::STRINGS[53] = uString::Const("Silver");
    ::STRINGS[54] = uString::Const("Gray");
    ::STRINGS[55] = uString::Const("White");
    ::STRINGS[56] = uString::Const("Maroon");
    ::STRINGS[57] = uString::Const("Red");
    ::STRINGS[58] = uString::Const("Purple");
    ::STRINGS[59] = uString::Const("Fuchsia");
    ::STRINGS[60] = uString::Const("Green");
    ::STRINGS[61] = uString::Const("Lime");
    ::STRINGS[62] = uString::Const("Olive");
    ::STRINGS[63] = uString::Const("Yellow");
    ::STRINGS[64] = uString::Const("Navy");
    ::STRINGS[65] = uString::Const("Blue");
    ::STRINGS[66] = uString::Const("Teal");
    ::STRINGS[67] = uString::Const("Aqua");
    ::STRINGS[68] = uString::Const("TopLeft");
    ::STRINGS[69] = uString::Const("Center");
    ::STRINGS[70] = uString::Const("Anchor");
    ::STRINGS[71] = uString::Const("HorizontalBoxCenter");
    ::STRINGS[72] = uString::Const("VerticalBoxCenter");
    ::STRINGS[73] = uString::Const("TransformOriginOffset");
    ::STRINGS[74] = uString::Const("PositionOffset");
    ::STRINGS[75] = uString::Const("SizeFactor");
    ::STRINGS[76] = uString::Const("Size");
    ::STRINGS[77] = uString::Const("GiveFocus");
    ::STRINGS[78] = uString::Const("Keyboard");
    ::STRINGS[79] = uString::Const("LayoutChange");
    ::STRINGS[80] = uString::Const("WorldPositionChange");
    ::STRINGS[81] = uString::Const("PositionChange");
    ::STRINGS[82] = uString::Const("SizeChange");
    ::STRINGS[83] = uString::Const("Points");
    ::STRINGS[84] = uString::Const("Pixels");
    ::STRINGS[85] = uString::Const("ContentSize");
    ::STRINGS[86] = uString::Const("ScrollViewSize");
    ::STRINGS[87] = uString::Const("PreloadRetain");
    ::STRINGS[88] = uString::Const("UnloadUnused");
    ::STRINGS[89] = uString::Const("QuickUnload");
    ::STRINGS[90] = uString::Const("UnloadInBackground");
    ::STRINGS[91] = uString::Const("Thin");
    ::STRINGS[92] = uString::Const("Light");
    ::STRINGS[93] = uString::Const("Regular");
    ::STRINGS[94] = uString::Const("Medium");
    ::STRINGS[95] = uString::Const("Bold");
    ::STRINGS[96] = uString::Const("ThinItalic");
    ::STRINGS[97] = uString::Const("LightItalic");
    ::STRINGS[98] = uString::Const("Italic");
    ::STRINGS[99] = uString::Const("MediumItalic");
    ::STRINGS[100] = uString::Const("BoldItalic");
    ::STRINGS[101] = uString::Const("PlatformDefault");
    ::STRINGS[102] = uString::Const("Identity");
    ::STRINGS[103] = uString::Const("Local");
    ::STRINGS[104] = uString::Const("ParentSize");
    ::STRINGS[105] = uString::Const("Height");
    ::STRINGS[106] = uString::Const("RobotoRegular");
    ::STRINGS[107] = uString::Const("RobotoLight");
    ::STRINGS[108] = uString::Const("RobotoMedium");
    ::STRINGS[109] = uString::Const("Basic.CLine");
    ::STRINGS[110] = uString::Const("Basic.CFillFore");
    ::STRINGS[111] = uString::Const("Basic.CEmptyFore");
    ::STRINGS[112] = uString::Const("Basic.CShadow");
    ::STRINGS[113] = uString::Const("Basic.C50");
    ::STRINGS[114] = uString::Const("Basic.C100");
    ::STRINGS[115] = uString::Const("Basic.C200");
    ::STRINGS[116] = uString::Const("Basic.C300");
    ::STRINGS[117] = uString::Const("Basic.C400");
    ::STRINGS[118] = uString::Const("Basic.C500");
    ::STRINGS[119] = uString::Const("Basic.C600");
    ::STRINGS[120] = uString::Const("Basic.C700");
    ::STRINGS[121] = uString::Const("Basic.C800");
    ::STRINGS[122] = uString::Const("Basic.C900");
    ::STRINGS[123] = uString::Const("Cat");
    ::STRINGS[124] = uString::Const("Dog");
    ::STRINGS[125] = uString::Const("Horse");
    ::STRINGS[126] = uString::Const("Mouse");
    ::STRINGS[127] = uString::Const("Head");
    ::STRINGS[128] = uString::Const("Header");
    ::STRINGS[129] = uString::Const("PTreal");
    ::STRINGS[130] = uString::Const("Qreader");
    ::STRINGS[131] = uString::Const("PTMono");
    ::STRINGS[132] = uString::Const("PTSerif");
    ::STRINGS[133] = uString::Const("PTBold");
    ::STRINGS[134] = uString::Const("Curl");
    ::STRINGS[135] = uString::Const("setSidebarOpen");
    ::STRINGS[136] = uString::Const("setSidebarClosed");
    ::STRINGS[137] = uString::Const("sidebarOpen");
    ::STRINGS[138] = uString::Const("MainView.ux");
    ::STRINGS[139] = uString::Const("alerts");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::AppBase_type, interface0));
    type->SetFields(9,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MainView, __g_nametable1), 0,
        ::g::Fuse::Rotation_typeof(), offsetof(::g::MainView, bottomMenuRotation), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, bottomMenuRotation_Degrees_inst), 0,
        ::g::Fuse::Translation_typeof(), offsetof(::g::MainView, bottomMenuTranslation), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, bottomMenuTranslation_Y_inst), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::MainView, bottomRectangle), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL), offsetof(::g::MainView, bottomRectangle_Width_inst), 0,
        ::g::Fuse::Controls::ClientPanel_typeof(), offsetof(::g::MainView, content), 0,
        ::g::Fuse::Controls::EdgeNavigator_typeof(), offsetof(::g::MainView, EdgeNavigator), 0,
        ::g::Fuse::Translation_typeof(), offsetof(::g::MainView, mainAppTranslation), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, mainAppTranslation_X_inst), 0,
        ::g::Sidebar_typeof(), offsetof(::g::MainView, menu), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::MainView, middleRectangle), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, middleRectangle_Opacity_inst), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::MainView, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb0), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::MainView, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::MainView, temp1_Value_inst), 0,
        ::g::Fuse::Rotation_typeof(), offsetof(::g::MainView, topMenuRotation), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, topMenuRotation_Degrees_inst), 0,
        ::g::Fuse::Translation_typeof(), offsetof(::g::MainView, topMenuTranslation), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, topMenuTranslation_Y_inst), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::MainView, topRectangle), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL), offsetof(::g::MainView, topRectangle_Width_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::MainView::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector12_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector13_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector14_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector15_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector16_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector17_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector9_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::MainView::Cat_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::MainView::Dog_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::MainView::Horse_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::MainView::Mouse_, uFieldFlagsStatic);
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::App_typeof();
    options.FieldCount = 57;
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

// public MainView() :596
void MainView__ctor_4_fn(MainView* __this)
{
    __this->ctor_4();
}

// private void InitializeUX() :600
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :596
void MainView__New1_fn(MainView** __retval)
{
    *__retval = MainView::New1();
}

uSStrong<uArray*> MainView::__g_static_nametable1_;
::g::Uno::UX::Selector MainView::__selector0_;
::g::Uno::UX::Selector MainView::__selector1_;
::g::Uno::UX::Selector MainView::__selector10_;
::g::Uno::UX::Selector MainView::__selector11_;
::g::Uno::UX::Selector MainView::__selector12_;
::g::Uno::UX::Selector MainView::__selector13_;
::g::Uno::UX::Selector MainView::__selector14_;
::g::Uno::UX::Selector MainView::__selector15_;
::g::Uno::UX::Selector MainView::__selector16_;
::g::Uno::UX::Selector MainView::__selector17_;
::g::Uno::UX::Selector MainView::__selector2_;
::g::Uno::UX::Selector MainView::__selector3_;
::g::Uno::UX::Selector MainView::__selector4_;
::g::Uno::UX::Selector MainView::__selector5_;
::g::Uno::UX::Selector MainView::__selector6_;
::g::Uno::UX::Selector MainView::__selector7_;
::g::Uno::UX::Selector MainView::__selector8_;
::g::Uno::UX::Selector MainView::__selector9_;
uSStrong< ::g::Fuse::Font*> MainView::Cat_;
uSStrong< ::g::Fuse::Font*> MainView::Dog_;
uSStrong< ::g::Fuse::Font*> MainView::Horse_;
uSStrong< ::g::Fuse::Font*> MainView::Mouse_;

// public MainView() [instance] :596
void MainView::ctor_4()
{
    ctor_3();
    InitializeUX();
}

// private void InitializeUX() [instance] :600
void MainView::InitializeUX()
{
    ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule* temp2 = ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule::New2();
    ::g::Fuse::Reactive::FuseJS::Http* temp3 = ::g::Fuse::Reactive::FuseJS::Http::New2();
    ::g::Fuse::Reactive::FuseJS::TimerModule* temp4 = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();
    ::g::Fuse::Reactive::FuseJS::Email* temp5 = ::g::Fuse::Reactive::FuseJS::Email::New2();
    ::g::Fuse::Reactive::FuseJS::InterApp* temp6 = ::g::Fuse::Reactive::FuseJS::InterApp::New3();
    ::g::Fuse::Reactive::FuseJS::Maps* temp7 = ::g::Fuse::Reactive::FuseJS::Maps::New2();
    ::g::Fuse::Reactive::FuseJS::Phone* temp8 = ::g::Fuse::Reactive::FuseJS::Phone::New2();
    ::g::Fuse::Drawing::BrushConverter* temp9 = ::g::Fuse::Drawing::BrushConverter::New1();
    ::g::Fuse::Triggers::BusyTaskModule* temp10 = ::g::Fuse::Triggers::BusyTaskModule::New2();
    ::g::Fuse::Testing::UnoTestingHelper* temp11 = ::g::Fuse::Testing::UnoTestingHelper::New2();
    ::g::Fuse::FileSystem::FileSystemModule* temp12 = ::g::Fuse::FileSystem::FileSystemModule::New2();
    ::g::Fuse::Storage::StorageModule* temp13 = ::g::Fuse::Storage::StorageModule::New2();
    ::g::Fuse::WebSocket::WebSocketClientModule* temp14 = ::g::Fuse::WebSocket::WebSocketClientModule::New2();
    ::g::Fuse::ImageTools::ImageTools* temp15 = ::g::Fuse::ImageTools::ImageTools::New2();
    ::g::Fuse::Camera::Camera* temp16 = ::g::Fuse::Camera::Camera::New2();
    ::g::Fuse::CameraRoll::CameraRoll* temp17 = ::g::Fuse::CameraRoll::CameraRoll::New2();
    ::g::Fuse::GeoLocation::GeoLocation* temp18 = ::g::Fuse::GeoLocation::GeoLocation::New3();
    ::g::Polyfills::Window::WindowModule* temp19 = ::g::Polyfills::Window::WindowModule::New3();
    ::g::FuseJS::Globals* temp20 = ::g::FuseJS::Globals::New2();
    ::g::FuseJS::Lifecycle* temp21 = ::g::FuseJS::Lifecycle::New3();
    ::g::FuseJS::Environment* temp22 = ::g::FuseJS::Environment::New2();
    ::g::FuseJS::Base64* temp23 = ::g::FuseJS::Base64::New2();
    ::g::FuseJS::Bundle* temp24 = ::g::FuseJS::Bundle::New2();
    ::g::FuseJS::FileReaderImpl* temp25 = ::g::FuseJS::FileReaderImpl::New2();
    ::g::FuseJS::UserEvents* temp26 = ::g::FuseJS::UserEvents::New2();
    ::g::Device* temp27 = ::g::Device::New2();
    ::g::Uploader* temp28 = ::g::Uploader::New2();
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MainView::__g_static_nametable1());
    mainAppTranslation = ::g::Fuse::Translation::New2();
    mainAppTranslation_X_inst = ::g::emrals_FuseTranslation_X_Property::New1(mainAppTranslation, MainView::__selector0());
    topMenuTranslation = ::g::Fuse::Translation::New2();
    topMenuTranslation_Y_inst = ::g::emrals_FuseTranslation_Y_Property::New1(topMenuTranslation, MainView::__selector1());
    bottomMenuTranslation = ::g::Fuse::Translation::New2();
    bottomMenuTranslation_Y_inst = ::g::emrals_FuseTranslation_Y_Property::New1(bottomMenuTranslation, MainView::__selector1());
    middleRectangle = ::g::Fuse::Controls::Rectangle::New3();
    middleRectangle_Opacity_inst = ::g::emrals_FuseElementsElement_Opacity_Property::New1(middleRectangle, MainView::__selector2());
    topMenuRotation = ::g::Fuse::Rotation::New2();
    topMenuRotation_Degrees_inst = ::g::emrals_FuseRotation_Degrees_Property::New1(topMenuRotation, MainView::__selector3());
    bottomMenuRotation = ::g::Fuse::Rotation::New2();
    bottomMenuRotation_Degrees_inst = ::g::emrals_FuseRotation_Degrees_Property::New1(bottomMenuRotation, MainView::__selector3());
    topRectangle = ::g::Fuse::Controls::Rectangle::New3();
    topRectangle_Width_inst = ::g::emrals_FuseElementsElement_Width_Property::New1(topRectangle, MainView::__selector4());
    bottomRectangle = ::g::Fuse::Controls::Rectangle::New3();
    bottomRectangle_Width_inst = ::g::emrals_FuseElementsElement_Width_Property::New1(bottomRectangle, MainView::__selector4());
    ::g::Fuse::Reactive::Data* temp29 = ::g::Fuse::Reactive::Data::New1(::STRINGS[135/*"setSidebarO...*/]);
    ::g::Fuse::Reactive::Data* temp30 = ::g::Fuse::Reactive::Data::New1(::STRINGS[136/*"setSidebarC...*/]);
    ::g::Fuse::Triggers::WhileTrue* temp = ::g::Fuse::Triggers::WhileTrue::New2();
    temp_Value_inst = ::g::emrals_FuseTriggersWhileBool_Value_Property::New1(temp, MainView::__selector5());
    ::g::Fuse::Reactive::Data* temp31 = ::g::Fuse::Reactive::Data::New1(::STRINGS[137/*"sidebarOpen"*/]);
    ::g::Fuse::Triggers::WhileFalse* temp1 = ::g::Fuse::Triggers::WhileFalse::New2();
    temp1_Value_inst = ::g::emrals_FuseTriggersWhileBool_Value_Property::New1(temp1, MainView::__selector5());
    ::g::Fuse::Reactive::Data* temp32 = ::g::Fuse::Reactive::Data::New1(::STRINGS[137/*"sidebarOpen"*/]);
    ::g::Fuse::iOS::StatusBarConfig* temp33 = ::g::Fuse::iOS::StatusBarConfig::New2();
    ::g::Fuse::Android::StatusBarConfig* temp34 = ::g::Fuse::Android::StatusBarConfig::New2();
    ::g::Fuse::Reactive::JavaScript* temp35 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    router = ::g::Fuse::Navigation::Router::New2();
    EdgeNavigator = ::g::Fuse::Controls::EdgeNavigator::New4();
    menu = ::g::Sidebar::New5();
    ::g::Fuse::Navigation::ActivatingAnimation* temp36 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Change* temp37 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], mainAppTranslation_X_inst);
    ::g::Fuse::Animations::Change* temp38 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], topMenuTranslation_Y_inst);
    ::g::Fuse::Animations::Change* temp39 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], bottomMenuTranslation_Y_inst);
    ::g::Fuse::Animations::Change* temp40 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], middleRectangle_Opacity_inst);
    ::g::Fuse::Animations::Change* temp41 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], topMenuRotation_Degrees_inst);
    ::g::Fuse::Animations::Change* temp42 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], bottomMenuRotation_Degrees_inst);
    ::g::Fuse::Animations::Change* temp43 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<Uno.UX.Size>*/], topRectangle_Width_inst);
    ::g::Fuse::Animations::Change* temp44 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<Uno.UX.Size>*/], bottomRectangle_Width_inst);
    ::g::Fuse::Navigation::WhileActive* temp45 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp46 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp29, __g_nametable1);
    ::g::Fuse::Navigation::WhileInactive* temp47 = ::g::Fuse::Navigation::WhileInactive::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp48 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp30, __g_nametable1);
    content = ::g::Fuse::Controls::ClientPanel::New5();
    ::g::Fuse::Controls::Panel* temp49 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Gestures::Clicked* temp50 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::NavigateTo* temp51 = ::g::Fuse::Navigation::NavigateTo::New2();
    ::g::Fuse::Reactive::DataBinding* temp52 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp31, __g_nametable1, 3);
    ::g::Fuse::Gestures::Clicked* temp53 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::NavigateTo* temp54 = ::g::Fuse::Navigation::NavigateTo::New2();
    ::g::Fuse::Reactive::DataBinding* temp55 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp32, __g_nametable1, 3);
    ::g::Fuse::Controls::Navigator* temp56 = ::g::Fuse::Controls::Navigator::New4();
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
    MainView__Template12* solution = MainView__Template12::New2(this, this);
    MainView__Template13* profile = MainView__Template13::New2(this, this);
    MainView__Template14* maps = MainView__Template14::New2(this, this);
    MainView__Template15* barcode = MainView__Template15::New2(this, this);
    MainView__Template16* newsitems = MainView__Template16::New2(this, this);
    MainView__Template17* buyemrals = MainView__Template17::New2(this, this);
    MainView__Template18* emralsthanks = MainView__Template18::New2(this, this);
    Background(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp33->Style(0);
    temp34->Color(::g::Uno::Float4__New2(0.3882353f, 0.3882353f, 0.3921569f, 1.0f));
    temp35->LineNumber(4);
    temp35->FileName(::STRINGS[138/*"MainView.ux"*/]);
    temp35->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::MainView3b2b3b48()));
    uPtr(router)->Name(MainView::__selector6());
    uPtr(EdgeNavigator)->Name(MainView::__selector7());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(EdgeNavigator)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), menu);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(EdgeNavigator)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), content);
    uPtr(menu)->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    uPtr(menu)->Name(MainView::__selector8());
    ::g::Fuse::Navigation::EdgeNavigation::SetEdge(menu, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp44);
    ::g::Fuse::Animations::Change__set_Value_fn(temp37, uCRef(200.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp38, uCRef(0.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp39, uCRef(0.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp40, uCRef(0.0f));
    temp40->Easing(::g::Fuse::Animations::Easing::CircularOut());
    ::g::Fuse::Animations::Change__set_Value_fn(temp41, uCRef(45.0f));
    temp41->Easing(::g::Fuse::Animations::Easing::ExponentialIn());
    ::g::Fuse::Animations::Change__set_Value_fn(temp42, uCRef(-45.0f));
    temp42->Easing(::g::Fuse::Animations::Easing::ExponentialIn());
    ::g::Fuse::Animations::Change__set_Value_fn(temp43, uCRef(::g::Uno::UX::Size__New1(28.0f, 1)));
    ::g::Fuse::Animations::Change__set_Value_fn(temp44, uCRef(::g::Uno::UX::Size__New1(28.0f, 1)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb0);
    temp46->add_Handler(uDelegate::New(::TYPES[7/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb1);
    temp48->add_Handler(uDelegate::New(::TYPES[7/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    uPtr(content)->Name(MainView::__selector9());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(content)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(content)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), mainAppTranslation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(content)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp56);
    temp49->HitTestMode(2);
    temp49->Width(::g::Uno::UX::Size__New1(32.0f, 1));
    temp49->Height(::g::Uno::UX::Size__New1(32.0f, 1));
    temp49->Alignment(5);
    temp49->Margin(::g::Uno::Float4__New2(7.0f, 5.0f, 5.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), topRectangle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), middleRectangle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), bottomRectangle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Nodes()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp51);
    temp51->Target(content);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Nodes()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp55);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp54);
    temp54->Target(menu);
    uPtr(topRectangle)->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    uPtr(topRectangle)->Width(::g::Uno::UX::Size__New1(26.0f, 1));
    uPtr(topRectangle)->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    uPtr(topRectangle)->Name(MainView::__selector10());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topRectangle)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), topMenuTranslation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topRectangle)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), topMenuRotation);
    uPtr(topMenuTranslation)->Y(-9.0f);
    uPtr(topMenuTranslation)->Name(MainView::__selector11());
    uPtr(topMenuRotation)->Name(MainView::__selector12());
    uPtr(middleRectangle)->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    uPtr(middleRectangle)->Width(::g::Uno::UX::Size__New1(26.0f, 1));
    uPtr(middleRectangle)->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    uPtr(middleRectangle)->Name(MainView::__selector13());
    uPtr(bottomRectangle)->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    uPtr(bottomRectangle)->Width(::g::Uno::UX::Size__New1(26.0f, 1));
    uPtr(bottomRectangle)->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    uPtr(bottomRectangle)->Name(MainView::__selector14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(bottomRectangle)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), bottomMenuTranslation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(bottomRectangle)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), bottomMenuRotation);
    uPtr(bottomMenuTranslation)->Y(9.0f);
    uPtr(bottomMenuTranslation)->Name(MainView::__selector15());
    uPtr(bottomMenuRotation)->Name(MainView::__selector16());
    uPtr(mainAppTranslation)->Name(MainView::__selector17());
    temp56->DefaultPath(::STRINGS[139/*"alerts"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::TYPES[8/*Uno.Collections.ICollection<Uno.UX.Template>*/]), splash);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::TYPES[8/*Uno.Collections.ICollection<Uno.UX.Template>*/]), alerts);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::TYPES[8/*Uno.Collections.ICollection<Uno.UX.Template>*/]), ecans);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::TYPES[8/*Uno.Collections.ICollection<Uno.UX.Template>*/]), camera);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::TYPES[8/*Uno.Collections.ICollection<Uno.UX.Template>*/]), signup);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::TYPES[8/*Uno.Collections.ICollection<Uno.UX.Template>*/]), login);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::TYPES[8/*Uno.Collections.ICollection<Uno.UX.Template>*/]), alertdetail);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::TYPES[8/*Uno.Collections.ICollection<Uno.UX.Template>*/]), impact);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::TYPES[8/*Uno.Collections.ICollection<Uno.UX.Template>*/]), payment);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::TYPES[8/*Uno.Collections.ICollection<Uno.UX.Template>*/]), buyecan);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::TYPES[8/*Uno.Collections.ICollection<Uno.UX.Template>*/]), ecanthanks);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::TYPES[8/*Uno.Collections.ICollection<Uno.UX.Template>*/]), impactthanks);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::TYPES[8/*Uno.Collections.ICollection<Uno.UX.Template>*/]), solution);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::TYPES[8/*Uno.Collections.ICollection<Uno.UX.Template>*/]), profile);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::TYPES[8/*Uno.Collections.ICollection<Uno.UX.Template>*/]), maps);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::TYPES[8/*Uno.Collections.ICollection<Uno.UX.Template>*/]), barcode);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::TYPES[8/*Uno.Collections.ICollection<Uno.UX.Template>*/]), newsitems);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::TYPES[8/*Uno.Collections.ICollection<Uno.UX.Template>*/]), buyemrals);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::TYPES[8/*Uno.Collections.ICollection<Uno.UX.Template>*/]), emralsthanks);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), EdgeNavigator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), menu);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), temp_eb0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), temp_eb1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), content);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), topRectangle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), topMenuTranslation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), topMenuRotation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), middleRectangle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), bottomRectangle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), bottomMenuTranslation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), bottomMenuRotation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), mainAppTranslation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), EdgeNavigator);
}

// public MainView New() [static] :596
MainView* MainView::New1()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

} // ::g
