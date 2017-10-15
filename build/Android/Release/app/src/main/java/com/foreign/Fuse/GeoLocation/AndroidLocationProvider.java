package com.foreign.Fuse.GeoLocation;

// fuse defined imports
import com.uno.UnoObject;
import com.uno.BoolArray;
import com.uno.ByteArray;
import com.uno.CharArray;
import com.uno.DoubleArray;
import com.uno.FloatArray;
import com.uno.IntArray;
import com.uno.LongArray;
import com.uno.ObjectArray;
import com.uno.ShortArray;
import com.uno.StringArray;
import com.Bindings.UnoHelper;
import com.Bindings.UnoWrapped;
import com.Bindings.ExternedBlockHost;

// user defined imports
import android.location.LocationManager;
import android.location.Location;
import android.util.Log;
import java.util.List;
import fuse.geolocation.UpdateListener;
import android.os.Looper;
import android.content.Context;
import com.uno.StringArray;

public class AndroidLocationProvider
{
    static void debug_log(Object message)
    {
        android.util.Log.d("emrals", (message==null ? "null" : message.toString()));
    }

    public static Object GetLastKnownLocationFromProvider414(final Object handle,final String provider)
    {
        return ((LocationManager)handle).getLastKnownLocation(provider);
    }
    
    public static Object GetLocationManager415()
    {
        return com.fuse.Activity.getRootActivity().getSystemService(Context.LOCATION_SERVICE);
    }
    
    public static int GetNumProviders416(final Object handle)
    {
        return ((LocationManager)handle).getAllProviders().size();
    }
    
    public static Object GetUpdateListener417(final com.foreign.Uno.Action_Object onLocationChanged)
    {
        return new UpdateListener(onLocationChanged);
    }
    
    public static boolean IsGPSEnabled418(final Object locationManager)
    {
        return ((LocationManager)locationManager).isProviderEnabled(LocationManager.GPS_PROVIDER);
    }
    
    public static boolean IsNetworkEnabled419(final Object locationManager)
    {
        return ((LocationManager)locationManager).isProviderEnabled(LocationManager.NETWORK_PROVIDER);
    }
    
    public static void ListProviders420(final Object handle,final com.uno.StringArray output)
    {
        List<String> l = ((LocationManager)handle).getAllProviders();
        for(int i = 0; i<l.size(); i++)
        	output.set(i, l.get(i));
    }
    
    public static void RemoveUpdates421(final Object manager,final Object listener)
    {
        ((LocationManager)manager).removeUpdates((UpdateListener)listener);
    }
    
    public static void RequestGPSLocationUpdates422(final Object handle,final int minimumReportInterval,final double desiredAccuracyInMeters,final Object listener)
    {
        ((LocationManager)handle).requestLocationUpdates(LocationManager.GPS_PROVIDER, (long)minimumReportInterval, (float)desiredAccuracyInMeters, (UpdateListener)listener, Looper.getMainLooper());
    }
    
    public static void RequestNetworkLocationUpdates423(final Object handle,final int minimumReportInterval,final double desiredAccuracyInMeters,final Object listener)
    {
        ((LocationManager)handle).requestLocationUpdates(LocationManager.NETWORK_PROVIDER, (long)minimumReportInterval, (float)desiredAccuracyInMeters, (UpdateListener)listener, Looper.getMainLooper());
    }
    
}
