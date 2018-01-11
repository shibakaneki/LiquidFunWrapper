package ch.shibastudio.liquidwrapper.common;

import ch.shibastudio.liquidwrapper.AbstractNativeObject;
import ch.shibastudio.liquidwrapper.LiquidWrapperJNI;

/**
 * Created by shibakaneki on 08.12.17.
 */

public class Transform extends AbstractNativeObject {
	public Transform(){
		super(LiquidWrapperJNI.Transform_new());
	}

	public Transform(long ptr){
		super(ptr);
	}

	@Override
	public synchronized void delete(){
		if (super.getPtr() != 0) {
			LiquidWrapperJNI.Transform_delete(super.getPtr());
			super.deletePtr();
		}
	}
}
