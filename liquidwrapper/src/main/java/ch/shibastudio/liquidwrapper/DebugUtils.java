/**
 Copyright 2018 Clerc Didier

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */
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
