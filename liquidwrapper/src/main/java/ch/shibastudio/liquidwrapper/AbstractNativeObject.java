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
