// This file was generated based on C:/Users/q/AppData/Local/Fusetools/Packages/Fuse.Maps/1.3.0-rc2/MapView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{

// internal abstract interface IMapView :89
// {
uInterfaceType* IMapView_typeof();

struct IMapView
{
    void(*fp_get_AllowRotate)(uObject*, bool*);
    void(*fp_set_AllowRotate)(uObject*, bool*);
    void(*fp_get_AllowScroll)(uObject*, bool*);
    void(*fp_set_AllowScroll)(uObject*, bool*);
    void(*fp_get_AllowTilt)(uObject*, bool*);
    void(*fp_set_AllowTilt)(uObject*, bool*);
    void(*fp_get_AllowZoom)(uObject*, bool*);
    void(*fp_set_AllowZoom)(uObject*, bool*);
    void(*fp_get_Bearing)(uObject*, double*);
    void(*fp_get_Latitude)(uObject*, double*);
    void(*fp_get_Longitude)(uObject*, double*);
    void(*fp_MoveTo)(uObject*, double*, double*, double*, double*, double*);
    void(*fp_get_OnReady)(uObject*, uDelegate**);
    void(*fp_set_OnReady)(uObject*, uDelegate*);
    void(*fp_get_ShowCompass)(uObject*, bool*);
    void(*fp_set_ShowCompass)(uObject*, bool*);
    void(*fp_get_ShowMyLocation)(uObject*, bool*);
    void(*fp_set_ShowMyLocation)(uObject*, bool*);
    void(*fp_get_ShowMyLocationButton)(uObject*, bool*);
    void(*fp_set_ShowMyLocationButton)(uObject*, bool*);
    void(*fp_get_Style)(uObject*, int*);
    void(*fp_set_Style)(uObject*, int*);
    void(*fp_get_Tilt)(uObject*, double*);
    void(*fp_UpdateMarkers)(uObject*);
    void(*fp_get_Zoom)(uObject*, double*);
    static bool AllowRotate(const uInterface& __this) { bool __retval; return __this.VTable<IMapView>()->fp_get_AllowRotate(__this, &__retval), __retval; }
    static void AllowRotate(const uInterface& __this, bool value) { __this.VTable<IMapView>()->fp_set_AllowRotate(__this, &value); }
    static bool AllowScroll(const uInterface& __this) { bool __retval; return __this.VTable<IMapView>()->fp_get_AllowScroll(__this, &__retval), __retval; }
    static void AllowScroll(const uInterface& __this, bool value) { __this.VTable<IMapView>()->fp_set_AllowScroll(__this, &value); }
    static bool AllowTilt(const uInterface& __this) { bool __retval; return __this.VTable<IMapView>()->fp_get_AllowTilt(__this, &__retval), __retval; }
    static void AllowTilt(const uInterface& __this, bool value) { __this.VTable<IMapView>()->fp_set_AllowTilt(__this, &value); }
    static bool AllowZoom(const uInterface& __this) { bool __retval; return __this.VTable<IMapView>()->fp_get_AllowZoom(__this, &__retval), __retval; }
    static void AllowZoom(const uInterface& __this, bool value) { __this.VTable<IMapView>()->fp_set_AllowZoom(__this, &value); }
    static double Bearing(const uInterface& __this) { double __retval; return __this.VTable<IMapView>()->fp_get_Bearing(__this, &__retval), __retval; }
    static double Latitude(const uInterface& __this) { double __retval; return __this.VTable<IMapView>()->fp_get_Latitude(__this, &__retval), __retval; }
    static double Longitude(const uInterface& __this) { double __retval; return __this.VTable<IMapView>()->fp_get_Longitude(__this, &__retval), __retval; }
    static void MoveTo(const uInterface& __this, double latitude, double longitude, double zoomlevel, double tilt, double orientation) { __this.VTable<IMapView>()->fp_MoveTo(__this, &latitude, &longitude, &zoomlevel, &tilt, &orientation); }
    static uDelegate* OnReady(const uInterface& __this) { uDelegate* __retval; return __this.VTable<IMapView>()->fp_get_OnReady(__this, &__retval), __retval; }
    static void OnReady(const uInterface& __this, uDelegate* value) { __this.VTable<IMapView>()->fp_set_OnReady(__this, value); }
    static bool ShowCompass(const uInterface& __this) { bool __retval; return __this.VTable<IMapView>()->fp_get_ShowCompass(__this, &__retval), __retval; }
    static void ShowCompass(const uInterface& __this, bool value) { __this.VTable<IMapView>()->fp_set_ShowCompass(__this, &value); }
    static bool ShowMyLocation(const uInterface& __this) { bool __retval; return __this.VTable<IMapView>()->fp_get_ShowMyLocation(__this, &__retval), __retval; }
    static void ShowMyLocation(const uInterface& __this, bool value) { __this.VTable<IMapView>()->fp_set_ShowMyLocation(__this, &value); }
    static bool ShowMyLocationButton(const uInterface& __this) { bool __retval; return __this.VTable<IMapView>()->fp_get_ShowMyLocationButton(__this, &__retval), __retval; }
    static void ShowMyLocationButton(const uInterface& __this, bool value) { __this.VTable<IMapView>()->fp_set_ShowMyLocationButton(__this, &value); }
    static int Style(const uInterface& __this) { int __retval; return __this.VTable<IMapView>()->fp_get_Style(__this, &__retval), __retval; }
    static void Style(const uInterface& __this, int value) { __this.VTable<IMapView>()->fp_set_Style(__this, &value); }
    static double Tilt(const uInterface& __this) { double __retval; return __this.VTable<IMapView>()->fp_get_Tilt(__this, &__retval), __retval; }
    static void UpdateMarkers(const uInterface& __this) { __this.VTable<IMapView>()->fp_UpdateMarkers(__this); }
    static double Zoom(const uInterface& __this) { double __retval; return __this.VTable<IMapView>()->fp_get_Zoom(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Controls
