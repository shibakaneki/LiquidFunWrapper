package ch.shibastudio.liquidwrapper;

import android.util.Log;

/**
 * Created by shibakaneki on 14.12.17.
 */

public class DebugUtils {
	private final static boolean SHOW_LOGS = false;
	public final static String LOG_TAG = "LFUNWRAPPER";
	public final static String MEMLEAK_DEBUG = "MEMLEAK_DEBUG";

	/**
	 * Log the creation of an object.
	 * @param className as the class name.
	 * @param ptrValue as the pointer value.
	 */
	public static void logNew(final String className, long ptrValue){
		if(SHOW_LOGS)
			Log.d(DebugUtils.MEMLEAK_DEBUG, "+ " +className + " (" +ptrValue +")");
	}

	/**
	 * Log the deletion of an object.
	 * @param className as the class name.
	 * @param ptrValue as the pointer value.
	 */
	public static void logDelete(final String className, long ptrValue){
		if(SHOW_LOGS)
			Log.d(DebugUtils.MEMLEAK_DEBUG, "- " +className + " (" +ptrValue +")");
	}
}
