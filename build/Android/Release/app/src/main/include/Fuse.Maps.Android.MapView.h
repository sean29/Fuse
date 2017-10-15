// This file was generated based on C:/Users/q/AppData/Local/Fusetools/Packages/Fuse.Maps/1.3.0-rc2/Android/MapView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.IMapView.h>
#include <Fuse.Controls.Native.-98938546.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{struct MapMarker;}}}
namespace g{namespace Fuse{namespace Controls{struct MapView;}}}
namespace g{namespace Fuse{namespace Maps{namespace Android{struct MapView;}}}}
namespace g{namespace Fuse{namespace Maps{struct MarkerIconCache;}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace Collections{struct ObservableList;}}}

namespace g{
namespace Fuse{
namespace Maps{
namespace Android{

// public sealed extern class MapView :18
// {
struct MapView_type : ::g::Fuse::Controls::Native::Android::View_type
{
    ::g::Fuse::Controls::IMapView interface2;
};

MapView_type* MapView_typeof();
void MapView__ctor_9_fn(MapView* __this, ::g::Fuse::Controls::MapView* mapViewHost, ::g::Java::Object* map);
void MapView__get_AllowRotate_fn(MapView* __this, bool* __retval);
void MapView__set_AllowRotate_fn(MapView* __this, bool* value);
void MapView__get_AllowScroll_fn(MapView* __this, bool* __retval);
void MapView__set_AllowScroll_fn(MapView* __this, bool* value);
void MapView__get_AllowTilt_fn(MapView* __this, bool* __retval);
void MapView__set_AllowTilt_fn(MapView* __this, bool* value);
void MapView__get_AllowZoom_fn(MapView* __this, bool* __retval);
void MapView__set_AllowZoom_fn(MapView* __this, bool* value);
void MapView__get_Bearing_fn(MapView* __this, double* __retval);
void MapView__ConfigGestures_fn(MapView* __this);
void MapView__ConfigUI_fn(MapView* __this);
void MapView__Create_fn(::g::Fuse::Controls::MapView* mapViewHost, MapView** __retval);
void MapView__Dispose_fn(MapView* __this);
void MapView__HandleLocationLongPress_fn(MapView* __this, double* latitude, double* longitude);
void MapView__HandleLocationTapped_fn(MapView* __this, double* latitude, double* longitude);
void MapView__HandleMarkerTapped_fn(MapView* __this, int* uid, uString* title);
void MapView__get_IsReady_fn(MapView* __this, bool* __retval);
void MapView__set_IsReady_fn(MapView* __this, bool* value);
void MapView__get_Latitude_fn(MapView* __this, double* __retval);
void MapView__get_Longitude_fn(MapView* __this, double* __retval);
void MapView__get_Markers_fn(MapView* __this, ::g::Uno::Collections::ObservableList** __retval);
void MapView__MoveTo_fn(MapView* __this, double* latitude, double* longitude, double* zoomlevel, double* tilt, double* orientation);
void MapView__New5_fn(::g::Fuse::Controls::MapView* mapViewHost, ::g::Java::Object* map, MapView** __retval);
void MapView__OnAnimationEnd_fn(MapView* __this);
void MapView__OnAnimationStart_fn(MapView* __this);
void MapView__OnMapReady_fn(MapView* __this);
void MapView__get_OnReady_fn(MapView* __this, uDelegate** __retval);
void MapView__set_OnReady_fn(MapView* __this, uDelegate* value);
void MapView__OnTouchEvent_fn(MapView* __this, int* action, float* x, float* y);
void MapView__get_SemanticControl_fn(MapView* __this, ::g::Fuse::Controls::MapView** __retval);
void MapView__SetLocationFromMap_fn(MapView* __this, double* lat, double* lng);
void MapView__get_ShowCompass_fn(MapView* __this, bool* __retval);
void MapView__set_ShowCompass_fn(MapView* __this, bool* value);
void MapView__get_ShowMyLocation_fn(MapView* __this, bool* __retval);
void MapView__set_ShowMyLocation_fn(MapView* __this, bool* value);
void MapView__get_ShowMyLocationButton_fn(MapView* __this, bool* __retval);
void MapView__set_ShowMyLocationButton_fn(MapView* __this, bool* value);
void MapView__get_Style_fn(MapView* __this, int* __retval);
void MapView__set_Style_fn(MapView* __this, int* value);
void MapView__get_Tilt_fn(MapView* __this, double* __retval);
void MapView__UpdateMarkers_fn(MapView* __this);
void MapView__get_Zoom_fn(MapView* __this, double* __retval);

struct MapView : ::g::Fuse::Controls::Native::Android::LeafView
{
    bool _allowRotate;
    bool _allowScroll;
    bool _allowTilt;
    bool _allowZoom;
    int _mapStyleInternal;
    uStrong< ::g::Java::Object*> _mapView;
    uStrong< ::g::Fuse::Controls::MapView*> _mapViewHost;
    uStrong< ::g::Fuse::Maps::MarkerIconCache*> _markerGraphicsCache;
    bool _showCompass;
    bool _showLocation;
    bool _showLocationButton;
    bool _IsReady;
    uStrong<uDelegate*> _OnReady;

    void ctor_9(::g::Fuse::Controls::MapView* mapViewHost, ::g::Java::Object* map);
    bool AllowRotate();
    void AllowRotate(bool value);
    bool AllowScroll();
    void AllowScroll(bool value);
    bool AllowTilt();
    void AllowTilt(bool value);
    bool AllowZoom();
    void AllowZoom(bool value);
    double Bearing();
    void ConfigGestures();
    void ConfigUI();
    void HandleLocationLongPress(double latitude, double longitude);
    void HandleLocationTapped(double latitude, double longitude);
    void HandleMarkerTapped(int uid, uString* title);
    bool IsReady();
    void IsReady(bool value);
    double Latitude();
    double Longitude();
    ::g::Uno::Collections::ObservableList* Markers();
    void MoveTo(double latitude, double longitude, double zoomlevel, double tilt, double orientation);
    void OnAnimationEnd();
    void OnAnimationStart();
    void OnMapReady();
    uDelegate* OnReady();
    void OnReady(uDelegate* value);
    void OnTouchEvent(int action, float x, float y);
    ::g::Fuse::Controls::MapView* SemanticControl();
    void SetLocationFromMap(double lat, double lng);
    bool ShowCompass();
    void ShowCompass(bool value);
    bool ShowMyLocation();
    void ShowMyLocation(bool value);
    bool ShowMyLocationButton();
    void ShowMyLocationButton(bool value);
    int Style();
    void Style(int value);
    double Tilt();
    void UpdateMarkers();
    double Zoom();
    static MapView* Create(::g::Fuse::Controls::MapView* mapViewHost);
    static MapView* New5(::g::Fuse::Controls::MapView* mapViewHost, ::g::Java::Object* map);
};
// }

}}}} // ::g::Fuse::Maps::Android
