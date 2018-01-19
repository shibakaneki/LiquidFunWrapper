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

import static ch.shibastudio.liquidwrapper.DebugUtils.MEMLEAK_DEBUG;

/**
 * Created by shibakaneki on 04.12.17.
 */

public abstract class AbstractNativeObject {
	private long cPtr = 0;

	protected AbstractNativeObject(long ptr){
		this.cPtr = ptr;
	}

	/**
	 * Finalizes the object.
	 */
	protected void finalize(){
		this.delete();
	}

	/**
	 * Deletes the object.
	 */
	public abstract void delete();

	/**
	 * Gets the pointer to the object.
	 * @return the pointer.
	 */
	public long getPtr(){
		return this.cPtr;
	}

	/**
	 * Deletes the C pointer.
	 */
	protected void deletePtr(){
		this.cPtr = 0;
	}
}
