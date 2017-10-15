// This file was generated based on '.uno/ux13/MainView.g.uno'.
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
#include <_root.MainView.Templa-5000826e.h>
#include <_root.MainView.Templa-5014aaed.h>
#include <_root.MainView.Templa-50914476.h>
#include <_root.MainView.Templa-50a56cf5.h>
#include <_root.MainView.Templa-50d5447a.h>
#include <_root.MainView.Templa-50e96cf9.h>
#include <_root.MainView.Templa-50f99574.h>
#include <_root.MainView.Templa-510dbdf3.h>
#include <_root.MainView.Templa-513d9578.h>
#include <_root.MainView.Templa-5151bdf7.h>
#include <_root.MainView.Templa-5bc53bf2.h>
#include <_root.MainView.Templa-5e7de19b.h>
#include <_root.MainView.Templa-6a4f8d8d.h>
#include <_root.MainView.Templa-6e147d94.h>
#include <_root.MainView.Templa-72582936.h>
#include <_root.MainView.Templa-80e27ad1.h>
#include <_root.MainView.Templa-dab40f2f.h>
#include <_root.MainView.Templa-f1de5000.h>
#include <_root.MainView.Templa-fd18a865.h>
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

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :676
static void MainView__cctor_1_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    ::g::Uno::UX::Resource_typeof()->Init();
    ::g::Fuse::Animations::Easing_typeof()->Init();
    ::g::Fuse::Drawing::Colors_typeof()->Init();
    ::g::Fuse::Drawing::Brushes_typeof()->Init();
    ::g::Fuse::Elements::TransformOrigins_typeof()->Init();
    ::g::Fuse::Elements::TranslationModes_typeof()->Init();
    ::g::Fuse::TranslationModes_typeof()->Init();
    ::g::Fuse::Triggers::Actions::GiveFocus_typeof()->Init();
    ::g::Fuse::Triggers::WhileKeyboardVisible_typeof()->Init();
    ::g::Fuse::Triggers::LayoutTransition_typeof()->Init();
    ::g::Fuse::Triggers::IScrolledLengths_typeof()->Init();
    ::g::Fuse::Resources::MemoryPolicy_typeof()->Init();
    ::g::Fuse::Font_typeof()->Init();
    ::g::Fuse::ScalingModes_typeof()->Init();
    MainView::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 14, uString::Const("router"), uString::Const("EdgeNavigator"), uString::Const("menu"), uString::Const("temp_eb0"), uString::Const("temp_eb1"), uString::Const("content"), uString::Const("topRectangle"), uString::Const("topMenuTranslation"), uString::Const("topMenuRotation"), uString::Const("middleRectangle"), uString::Const("bottomRectangle"), uString::Const("bottomMenuTranslation"), uString::Const("bottomMenuRotation"), uString::Const("mainAppTranslation"));
    MainView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("X"));
    MainView::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Y"));
    MainView::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Opacity"));
    MainView::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Degrees"));
    MainView::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Width"));
    MainView::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Value"));
    MainView::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("router"));
    MainView::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("EdgeNavigator"));
    MainView::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("menu"));
    MainView::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("content"));
    MainView::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("topRectangle"));
    MainView::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("topMenuTranslation"));
    MainView::__selector12_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("topMenuRotation"));
    MainView::__selector13_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("middleRectangle"));
    MainView::__selector14_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("bottomRectangle"));
    MainView::__selector15_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("bottomMenuTranslation"));
    MainView::__selector16_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("bottomMenuRotation"));
    MainView::__selector17_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("mainAppTranslation"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::Linear_, uString::Const("Linear"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticIn_, uString::Const("QuadraticIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticOut_, uString::Const("QuadraticOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticInOut_, uString::Const("QuadraticInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicIn_, uString::Const("CubicIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicOut_, uString::Const("CubicOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicInOut_, uString::Const("CubicInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticIn_, uString::Const("QuarticIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticOut_, uString::Const("QuarticOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticInOut_, uString::Const("QuarticInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticIn_, uString::Const("QuinticIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticOut_, uString::Const("QuinticOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticInOut_, uString::Const("QuinticInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalIn_, uString::Const("SinusoidalIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalOut_, uString::Const("SinusoidalOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalInOut_, uString::Const("SinusoidalInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialIn_, uString::Const("ExponentialIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialOut_, uString::Const("ExponentialOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialInOut_, uString::Const("ExponentialInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularIn_, uString::Const("CircularIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularOut_, uString::Const("CircularOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularInOut_, uString::Const("CircularInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticIn_, uString::Const("ElasticIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticOut_, uString::Const("ElasticOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticInOut_, uString::Const("ElasticInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackIn_, uString::Const("BackIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackOut_, uString::Const("BackOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackInOut_, uString::Const("BackInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceIn_, uString::Const("BounceIn"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceOut_, uString::Const("BounceOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceInOut_, uString::Const("BounceInOut"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Transparent_), uString::Const("Transparent"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Transparent_, uString::Const("Transparent"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Black_), uString::Const("Black"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Black_, uString::Const("Black"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Silver_), uString::Const("Silver"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Silver_, uString::Const("Silver"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Gray_), uString::Const("Gray"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Gray_, uString::Const("Gray"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::White_), uString::Const("White"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::White_, uString::Const("White"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Maroon_), uString::Const("Maroon"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Maroon_, uString::Const("Maroon"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Red_), uString::Const("Red"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Red_, uString::Const("Red"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Purple_), uString::Const("Purple"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Purple_, uString::Const("Purple"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Fuchsia_), uString::Const("Fuchsia"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Fuchsia_, uString::Const("Fuchsia"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Green_), uString::Const("Green"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Green_, uString::Const("Green"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Lime_), uString::Const("Lime"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Lime_, uString::Const("Lime"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Olive_), uString::Const("Olive"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Olive_, uString::Const("Olive"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Yellow_), uString::Const("Yellow"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Yellow_, uString::Const("Yellow"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Navy_), uString::Const("Navy"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Navy_, uString::Const("Navy"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Blue_), uString::Const("Blue"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Blue_, uString::Const("Blue"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Teal_), uString::Const("Teal"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Teal_, uString::Const("Teal"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Aqua_), uString::Const("Aqua"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Aqua_, uString::Const("Aqua"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::TopLeft_, uString::Const("TopLeft"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Center_, uString::Const("Center"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Anchor_, uString::Const("Anchor"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::HorizontalBoxCenter_, uString::Const("HorizontalBoxCenter"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::VerticalBoxCenter_, uString::Const("VerticalBoxCenter"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::TransformOriginOffset_, uString::Const("TransformOriginOffset"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::PositionOffset_, uString::Const("PositionOffset"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::SizeFactor_, uString::Const("SizeFactor"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::Size_, uString::Const("Size"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Size_, uString::Const("Size"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::Actions::GiveFocus::Singleton_, uString::Const("GiveFocus"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::WhileKeyboardVisible::Keyboard_, uString::Const("Keyboard"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange_, uString::Const("LayoutChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::SizeLayoutChange_, uString::Const("LayoutChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange_, uString::Const("WorldPositionChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionChange_, uString::Const("PositionChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ResizeSizeChange_, uString::Const("SizeChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ScalingSizeChange_, uString::Const("SizeChange"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Points_, uString::Const("Points"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Pixels_, uString::Const("Pixels"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ContentSize_, uString::Const("ContentSize"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ScrollViewSize_, uString::Const("ScrollViewSize"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::PreloadRetain_, uString::Const("PreloadRetain"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadUnused_, uString::Const("UnloadUnused"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::QuickUnload_, uString::Const("QuickUnload"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadInBackgroundPolicy_, uString::Const("UnloadInBackground"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Thin_, uString::Const("Thin"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Light_, uString::Const("Light"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Regular_, uString::Const("Regular"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Medium_, uString::Const("Medium"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Bold_, uString::Const("Bold"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::ThinItalic_, uString::Const("ThinItalic"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::LightItalic_, uString::Const("LightItalic"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Italic_, uString::Const("Italic"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::MediumItalic_, uString::Const("MediumItalic"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::BoldItalic_, uString::Const("BoldItalic"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::PlatformDefault(), uString::Const("PlatformDefault"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::ScalingModes::Identity_, uString::Const("Identity"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Local_, uString::Const("Local"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::ParentSize_, uString::Const("ParentSize"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Width_, uString::Const("Width"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Height_, uString::Const("Height"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Basic::Resources::RobotoRegular(), uString::Const("RobotoRegular"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Basic::Resources::RobotoLight(), uString::Const("RobotoLight"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Basic::Resources::RobotoMedium(), uString::Const("RobotoMedium"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicCLine()), uString::Const("Basic.CLine"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicCFillFore()), uString::Const("Basic.CFillFore"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicCEmptyFore()), uString::Const("Basic.CEmptyFore"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicCShadow()), uString::Const("Basic.CShadow"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicC50()), uString::Const("Basic.C50"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicC100()), uString::Const("Basic.C100"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicC200()), uString::Const("Basic.C200"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicC300()), uString::Const("Basic.C300"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicC400()), uString::Const("Basic.C400"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicC500()), uString::Const("Basic.C500"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicC600()), uString::Const("Basic.C600"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicC700()), uString::Const("Basic.C700"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicC800()), uString::Const("Basic.C800"));
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Basic::Resources::BasicC900()), uString::Const("Basic.C900"));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::Cat_, uString::Const("Cat"));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::Dog_, uString::Const("Dog"));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::Horse_, uString::Const("Horse"));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::Mouse_, uString::Const("Mouse"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::AlertDetailPage::Head(), uString::Const("Head"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::AlertsPage::Header(), uString::Const("Header"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::AlertsPage::PTreal(), uString::Const("PTreal"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::BarcodePage::Qreader(), uString::Const("Qreader"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::BuyEcanPage::PTMono(), uString::Const("PTMono"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::CameraPage::PTSerif(), uString::Const("PTSerif"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::CameraPage::PTBold(), uString::Const("PTBold"));
    ::g::Uno::UX::Resource::SetGlobalKey(::g::ImpactPage::Curl(), uString::Const("Curl"));
    MainView::Cat_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::PTF55F7486d4bd()));
    MainView::Dog_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::PTS55F749096a8()));
    MainView::Horse_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::PTS75F3f802c1e()));
    MainView::Mouse_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::PTF75F3f766a33()));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::Cat_, uString::Const("Cat"));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::Dog_, uString::Const("Dog"));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::Horse_, uString::Const("Horse"));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::Mouse_, uString::Const("Mouse"));
}

static void MainView_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::Fuse::Navigation::EdgeNavigation_typeof());
    type->SetInterfaces(
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::AppBase_type, interface0));
    type->SetFields(9,
        ::g::Uno::UX::NameTable_typeof(), offsetof(MainView, __g_nametable1), 0,
        ::g::Fuse::Rotation_typeof(), offsetof(MainView, bottomMenuRotation), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(MainView, bottomMenuRotation_Degrees_inst), 0,
        ::g::Fuse::Translation_typeof(), offsetof(MainView, bottomMenuTranslation), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(MainView, bottomMenuTranslation_Y_inst), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(MainView, bottomRectangle), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL), offsetof(MainView, bottomRectangle_Width_inst), 0,
        ::g::Fuse::Controls::ClientPanel_typeof(), offsetof(MainView, content), 0,
        ::g::Fuse::Controls::EdgeNavigator_typeof(), offsetof(MainView, EdgeNavigator), 0,
        ::g::Fuse::Translation_typeof(), offsetof(MainView, mainAppTranslation), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(MainView, mainAppTranslation_X_inst), 0,
        ::g::Sidebar_typeof(), offsetof(MainView, menu), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(MainView, middleRectangle), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(MainView, middleRectangle_Opacity_inst), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(MainView, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb0), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(MainView, temp1_Value_inst), 0,
        ::g::Fuse::Rotation_typeof(), offsetof(MainView, topMenuRotation), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(MainView, topMenuRotation_Degrees_inst), 0,
        ::g::Fuse::Translation_typeof(), offsetof(MainView, topMenuTranslation), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(MainView, topMenuTranslation_Y_inst), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(MainView, topRectangle), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL), offsetof(MainView, topRectangle_Width_inst), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&MainView::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector12_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector13_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector14_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector15_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector16_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector17_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector9_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&MainView::Cat_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&MainView::Dog_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&MainView::Horse_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&MainView::Mouse_, uFieldFlagsStatic);
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::App_typeof();
    options.FieldCount = 57;
    options.InterfaceCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->fp_build_ = MainView_build;
    type->fp_ctor_ = (void*)MainView__New1_fn;
    type->fp_cctor_ = MainView__cctor_1_fn;
    type->interface0.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::AppBase__get_Properties_fn;
    return type;
}

// public MainView() :824
void MainView__ctor_4_fn(MainView* __this)
{
    __this->ctor_4();
}

// private void InitializeUX() :828
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :824
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

// public MainView() [instance] :824
void MainView::ctor_4()
{
    ctor_3();
    InitializeUX();
}

// private void InitializeUX() [instance] :828
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
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MainView::__g_static_nametable1_);
    mainAppTranslation = ::g::Fuse::Translation::New2();
    mainAppTranslation_X_inst = ::g::emrals_FuseTranslation_X_Property::New1(mainAppTranslation, MainView::__selector0_);
    topMenuTranslation = ::g::Fuse::Translation::New2();
    topMenuTranslation_Y_inst = ::g::emrals_FuseTranslation_Y_Property::New1(topMenuTranslation, MainView::__selector1_);
    bottomMenuTranslation = ::g::Fuse::Translation::New2();
    bottomMenuTranslation_Y_inst = ::g::emrals_FuseTranslation_Y_Property::New1(bottomMenuTranslation, MainView::__selector1_);
    middleRectangle = ::g::Fuse::Controls::Rectangle::New3();
    middleRectangle_Opacity_inst = ::g::emrals_FuseElementsElement_Opacity_Property::New1(middleRectangle, MainView::__selector2_);
    topMenuRotation = ::g::Fuse::Rotation::New2();
    topMenuRotation_Degrees_inst = ::g::emrals_FuseRotation_Degrees_Property::New1(topMenuRotation, MainView::__selector3_);
    bottomMenuRotation = ::g::Fuse::Rotation::New2();
    bottomMenuRotation_Degrees_inst = ::g::emrals_FuseRotation_Degrees_Property::New1(bottomMenuRotation, MainView::__selector3_);
    topRectangle = ::g::Fuse::Controls::Rectangle::New3();
    topRectangle_Width_inst = ::g::emrals_FuseElementsElement_Width_Property::New1(topRectangle, MainView::__selector4_);
    bottomRectangle = ::g::Fuse::Controls::Rectangle::New3();
    bottomRectangle_Width_inst = ::g::emrals_FuseElementsElement_Width_Property::New1(bottomRectangle, MainView::__selector4_);
    ::g::Fuse::Reactive::Data* temp29 = ::g::Fuse::Reactive::Data::New1(uString::Const("setSidebarOpen"));
    ::g::Fuse::Reactive::Data* temp30 = ::g::Fuse::Reactive::Data::New1(uString::Const("setSidebarClosed"));
    ::g::Fuse::Triggers::WhileTrue* temp = ::g::Fuse::Triggers::WhileTrue::New2();
    temp_Value_inst = ::g::emrals_FuseTriggersWhileBool_Value_Property::New1(temp, MainView::__selector5_);
    ::g::Fuse::Reactive::Data* temp31 = ::g::Fuse::Reactive::Data::New1(uString::Const("sidebarOpen"));
    ::g::Fuse::Triggers::WhileFalse* temp1 = ::g::Fuse::Triggers::WhileFalse::New2();
    temp1_Value_inst = ::g::emrals_FuseTriggersWhileBool_Value_Property::New1(temp1, MainView::__selector5_);
    ::g::Fuse::Reactive::Data* temp32 = ::g::Fuse::Reactive::Data::New1(uString::Const("sidebarOpen"));
    ::g::Fuse::iOS::StatusBarConfig* temp33 = ::g::Fuse::iOS::StatusBarConfig::New2();
    ::g::Fuse::Android::StatusBarConfig* temp34 = ::g::Fuse::Android::StatusBarConfig::New2();
    ::g::Fuse::Reactive::JavaScript* temp35 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    router = ::g::Fuse::Navigation::Router::New2();
    EdgeNavigator = ::g::Fuse::Controls::EdgeNavigator::New4();
    menu = ::g::Sidebar::New5();
    ::g::Fuse::Navigation::ActivatingAnimation* temp36 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Change* temp37 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), mainAppTranslation_X_inst);
    ::g::Fuse::Animations::Change* temp38 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), topMenuTranslation_Y_inst);
    ::g::Fuse::Animations::Change* temp39 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), bottomMenuTranslation_Y_inst);
    ::g::Fuse::Animations::Change* temp40 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), middleRectangle_Opacity_inst);
    ::g::Fuse::Animations::Change* temp41 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), topMenuRotation_Degrees_inst);
    ::g::Fuse::Animations::Change* temp42 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), bottomMenuRotation_Degrees_inst);
    ::g::Fuse::Animations::Change* temp43 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL), topRectangle_Width_inst);
    ::g::Fuse::Animations::Change* temp44 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL), bottomRectangle_Width_inst);
    ::g::Fuse::Navigation::WhileActive* temp45 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp46 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp29);
    ::g::Fuse::Navigation::WhileInactive* temp47 = ::g::Fuse::Navigation::WhileInactive::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp48 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp30);
    content = ::g::Fuse::Controls::ClientPanel::New5();
    ::g::Fuse::Controls::Panel* temp49 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Gestures::Clicked* temp50 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::NavigateTo* temp51 = ::g::Fuse::Navigation::NavigateTo::New2();
    ::g::Fuse::Reactive::DataBinding* temp52 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp31, 3);
    ::g::Fuse::Gestures::Clicked* temp53 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::NavigateTo* temp54 = ::g::Fuse::Navigation::NavigateTo::New2();
    ::g::Fuse::Reactive::DataBinding* temp55 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp32, 3);
    ::g::Fuse::Controls::Navigator* temp56 = ::g::Fuse::Controls::Navigator::New4();
    MainView__Template1__Factory1* splash = MainView__Template1__Factory1::New2(this);
    MainView__Template2__Factory1* alerts = MainView__Template2__Factory1::New2(this);
    MainView__Template3__Factory1* ecans = MainView__Template3__Factory1::New2(this);
    MainView__Template4__Factory1* camera = MainView__Template4__Factory1::New2(this);
    MainView__Template5__Factory1* signup = MainView__Template5__Factory1::New2(this);
    MainView__Template6__Factory1* login = MainView__Template6__Factory1::New2(this);
    MainView__Template7__Factory1* alertdetail = MainView__Template7__Factory1::New2(this);
    MainView__Template8__Factory1* impact = MainView__Template8__Factory1::New2(this);
    MainView__Template9__Factory1* payment = MainView__Template9__Factory1::New2(this);
    MainView__Template10__Factory1* buyecan = MainView__Template10__Factory1::New2(this);
    MainView__Template11__Factory1* ecanthanks = MainView__Template11__Factory1::New2(this);
    MainView__Template12__Factory1* impactthanks = MainView__Template12__Factory1::New2(this);
    MainView__Template13__Factory1* solution = MainView__Template13__Factory1::New2(this);
    MainView__Template14__Factory1* profile = MainView__Template14__Factory1::New2(this);
    MainView__Template15__Factory1* maps = MainView__Template15__Factory1::New2(this);
    MainView__Template16__Factory1* barcode = MainView__Template16__Factory1::New2(this);
    MainView__Template17__Factory1* newsitems = MainView__Template17__Factory1::New2(this);
    MainView__Template18__Factory1* buyemrals = MainView__Template18__Factory1::New2(this);
    MainView__Template19__Factory1* emralsthanks = MainView__Template19__Factory1::New2(this);
    Background(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp33->Style(0);
    temp34->Color(::g::Uno::Float4__New2(0.3882353f, 0.3882353f, 0.3921569f, 1.0f));
    temp35->LineNumber(4);
    temp35->FileName(uString::Const("MainView.ux"));
    temp35->File(::g::Uno::UX::BundleFileSource::New1(::g::emrals_bundle::MainViewfa9a6fc0()));
    uPtr(router)->Name(MainView::__selector6_);
    uPtr(EdgeNavigator)->Name(MainView::__selector7_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(EdgeNavigator)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), menu);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(EdgeNavigator)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), content);
    uPtr(menu)->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    uPtr(menu)->Name(MainView::__selector8_);
    ::g::Fuse::Navigation::EdgeNavigation::SetEdge(menu, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp44);
    ::g::Fuse::Animations::Change__set_Value_fn(temp37, uCRef(200.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp38, uCRef(0.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp39, uCRef(0.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp40, uCRef(0.0f));
    temp40->Easing(::g::Fuse::Animations::Easing::CircularOut_);
    ::g::Fuse::Animations::Change__set_Value_fn(temp41, uCRef(45.0f));
    temp41->Easing(::g::Fuse::Animations::Easing::ExponentialIn_);
    ::g::Fuse::Animations::Change__set_Value_fn(temp42, uCRef(-45.0f));
    temp42->Easing(::g::Fuse::Animations::Easing::ExponentialIn_);
    ::g::Fuse::Animations::Change__set_Value_fn(temp43, uCRef(::g::Uno::UX::Size__New1(28.0f, 1)));
    ::g::Fuse::Animations::Change__set_Value_fn(temp44, uCRef(::g::Uno::UX::Size__New1(28.0f, 1)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb0);
    temp46->add_Handler(uDelegate::New(::g::Fuse::VisualEventHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb1);
    temp48->add_Handler(uDelegate::New(::g::Fuse::VisualEventHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    uPtr(content)->Name(MainView::__selector9_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(content)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(content)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), mainAppTranslation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(content)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp56);
    temp49->HitTestMode(2);
    temp49->Width(::g::Uno::UX::Size__New1(32.0f, 1));
    temp49->Height(::g::Uno::UX::Size__New1(32.0f, 1));
    temp49->Alignment(5);
    temp49->Margin(::g::Uno::Float4__New2(7.0f, 5.0f, 5.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), topRectangle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), middleRectangle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), bottomRectangle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp51);
    temp51->Target(content);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp55);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp54);
    temp54->Target(menu);
    uPtr(topRectangle)->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    uPtr(topRectangle)->Width(::g::Uno::UX::Size__New1(26.0f, 1));
    uPtr(topRectangle)->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    uPtr(topRectangle)->Name(MainView::__selector10_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topRectangle)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), topMenuTranslation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topRectangle)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), topMenuRotation);
    uPtr(topMenuTranslation)->Y(-9.0f);
    uPtr(topMenuTranslation)->Name(MainView::__selector11_);
    uPtr(topMenuRotation)->Name(MainView::__selector12_);
    uPtr(middleRectangle)->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    uPtr(middleRectangle)->Width(::g::Uno::UX::Size__New1(26.0f, 1));
    uPtr(middleRectangle)->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    uPtr(middleRectangle)->Name(MainView::__selector13_);
    uPtr(bottomRectangle)->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    uPtr(bottomRectangle)->Width(::g::Uno::UX::Size__New1(26.0f, 1));
    uPtr(bottomRectangle)->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    uPtr(bottomRectangle)->Name(MainView::__selector14_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(bottomRectangle)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), bottomMenuTranslation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(bottomRectangle)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), bottomMenuRotation);
    uPtr(bottomMenuTranslation)->Y(9.0f);
    uPtr(bottomMenuTranslation)->Name(MainView::__selector15_);
    uPtr(bottomMenuRotation)->Name(MainView::__selector16_);
    uPtr(mainAppTranslation)->Name(MainView::__selector17_);
    temp56->DefaultPath(uString::Const("alerts"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), splash);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), alerts);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), ecans);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), camera);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), signup);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), login);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), alertdetail);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), impact);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), payment);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), buyecan);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), ecanthanks);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), impactthanks);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), solution);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), profile);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), maps);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), barcode);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), newsitems);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), buyemrals);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), emralsthanks);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), EdgeNavigator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), menu);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), content);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), topRectangle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), topMenuTranslation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), topMenuRotation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), middleRectangle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), bottomRectangle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), bottomMenuTranslation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), bottomMenuRotation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), mainAppTranslation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), EdgeNavigator);
}

// public MainView New() [static] :824
MainView* MainView::New1()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

} // ::g
