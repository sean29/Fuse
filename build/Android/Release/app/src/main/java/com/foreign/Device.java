package com.foreign;

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
import android.app.Activity;
import android.provider.Settings;
import android.telephony.TelephonyManager;
import android.content.*;
import android.net.wifi.*;
import java.security.*;
import java.util.regex.*;
import java.util.*;
import java.net.*;
import java.nio.*;
import java.io.*;

public class Device
{
    static void debug_log(Object message)
    {
        android.util.Log.d("emrals", (message==null ? "null" : message.toString()));
    }

    public static String GetCurrentLocale441()
    {
        Locale loc = java.util.Locale.getDefault();
        
            final char separator = '-';
            String language = loc.getLanguage();
            String region   = loc.getCountry();
            String variant  = loc.getVariant();
        
            // special case for Norwegian Nynorsk since "NY" cannot be a variant as per BCP 47
            // this goes before the string matching since "NY" wont pass the variant checks
            if (language.equals("no") && region.equals("NO") && variant.equals("NY")) {
                language = "nn";
                region   = "NO";
                variant  = "";
            }
        
            if (language.isEmpty() || !language.matches("\\p{Alpha}{2,8}")) {
                language = "und"; // "und" for Undetermined
            } else if (language.equals("iw")) {
                language = "he";  // correct deprecated "Hebrew"
            } else if (language.equals("in")) {
                language = "id";  // correct deprecated "Indonesian"
            } else if (language.equals("ji")) {
                language = "yi";   // correct deprecated "Yiddish"
            }
        
            // ensure valid country code, if not well formed, it's omitted
            if (!region.matches("\\p{Alpha}{2}|\\p{Digit}{3}")) {
                region = "";
            }
        
             // variant subtags that begin with a letter must be at least 5 characters long
            if (!variant.matches("\\p{Alnum}{5,8}|\\p{Digit}\\p{Alnum}{3}")) {
                variant = "";
            }
        
            StringBuilder bcp47Tag = new StringBuilder(language);
            if (!region.isEmpty()) {
                bcp47Tag.append(separator).append(region);
            }
        
            if (!variant.isEmpty()) {
                bcp47Tag.append(separator).append(variant);
            }
        
            return bcp47Tag.toString();
    }
    
    public static String GetModel442()
    {
        return android.os.Build.MODEL;
    }
    
    public static int GetNumProcessorCores443()
    {
        int cores = 1;
        if (android.os.Build.VERSION.SDK_INT >= 17) {
            cores = Runtime.getRuntime().availableProcessors();
        } else {
            try {
                Process proc = Runtime.getRuntime().exec("/usr/bin/nproc");
                BufferedReader input = new BufferedReader(new InputStreamReader(proc.getInputStream()));
        
                String line;
                while ((line = input.readLine()) != null)
                    cores = line.length() > 0 ? Integer.parseInt(line) : 1;
        
                input.close();
                proc.waitFor();
        
            } catch (Throwable e) {}
        }
        
        // in some devices any method return wrong huge number so we fix that case
        if (cores > 8) {
            cores = 4;
        }
        
        return cores;
    }
    
    public static String GetSDKVersion444()
    {
        return android.os.Build.VERSION.SDK;
    }
    
    public static String GetSystem445()
    {
        if (android.os.Build.MANUFACTURER.equals("Amazon")) {
            return "AmazonFireOS";
        }
        return "Android";
    }
    
    public static String GetSystemVersion446()
    {
        return android.os.Build.VERSION.RELEASE;
    }
    
    public static String GetUUID447()
    {
        final android.app.Activity context = com.fuse.Activity.getRootActivity();
        final TelephonyManager tm = (TelephonyManager)context.getSystemService(Context.TELEPHONY_SERVICE);
        final String deviceId     = "" + tm.getDeviceId();
        final String serialNum    = "" + tm.getSimSerialNumber();
        final String androidId    = "" + android.provider.Settings.Secure.getString(
                                            context.getContentResolver(),
                                            android.provider.Settings.Secure.ANDROID_ID
                                         );
        
        int macAdressId;
        
        try {
            // try to get MAC-address via NetworkInterface
            final InetAddress ip = InetAddress.getLocalHost();
            final NetworkInterface network = NetworkInterface.getByInetAddress(ip);
            macAdressId = network.getHardwareAddress().hashCode();
        } catch (Throwable e) {
            // else get MAC-address via WifiManager
            final WifiManager wifiManager = (WifiManager)context.getSystemService(Context.WIFI_SERVICE);
            final boolean     wifiEnabled = wifiManager.isWifiEnabled();
        
            if (!wifiEnabled)
                wifiManager.setWifiEnabled(true);
        
            macAdressId = wifiManager.getConnectionInfo().getMacAddress().hashCode();
        
            if (!wifiEnabled)
                wifiManager.setWifiEnabled(false);
        }
        
        byte[] bytes = ByteBuffer.allocate(16)
                       .putInt(androidId.hashCode())
                       .putInt(macAdressId)
                       .putInt(serialNum.hashCode())
                       .putInt(deviceId.hashCode())
                       .array();
        
        return UUID.nameUUIDFromBytes(bytes).toString().toUpperCase();
    }
    
    public static String GetVendor448()
    {
        return android.os.Build.MANUFACTURER;
    }
    
}
