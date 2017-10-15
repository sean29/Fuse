package com.foreign.Fuse.GeoLocation.Android;

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
import android.location.Location;

public class LocationHelpers
{
    static void debug_log(Object message)
    {
        android.util.Log.d("emrals", (message==null ? "null" : message.toString()));
    }

    public static float GetAccuracy408(final Object handle)
    {
        Location l = (Location)handle;
        return l.getAccuracy();
    }
    
    public static double GetAltitude409(final Object handle)
    {
        Location l = (Location)handle;
        return l.getAltitude();
    }
    
    public static double GetLatitude410(final Object handle)
    {
        Location l = (Location)handle;
        return l.getLatitude();
    }
    
    public static double GetLongitude411(final Object handle)
    {
        Location l = (Location)handle;
        return l.getLongitude();
    }
    
    public static double GetSpeed412(final Object handle)
    {
        Location l = (Location)handle;
        return l.getSpeed();
    }
    
    public static int GetTime413(final Object handle)
    {
        Location l = (Location)handle;
        return (int)l.getTime();
    }
    
}
