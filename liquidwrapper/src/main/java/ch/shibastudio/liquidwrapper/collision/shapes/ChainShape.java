package ch.shibastudio.liquidwrapper.collision.shapes;

import ch.shibastudio.liquidwrapper.LiquidWrapperJNI;

/**
 * Created by shibakaneki on 05.12.17.
 */

public class ChainShape extends Shape {
	public ChainShape(long ptr){
		super(ptr);
	}

	@Override
	public synchronized void delete(){
		if (super.getPtr() != 0) {
			LiquidWrapperJNI.ChainShape_delete(super.getPtr());
			super.deletePtr();
		}
	}
}
