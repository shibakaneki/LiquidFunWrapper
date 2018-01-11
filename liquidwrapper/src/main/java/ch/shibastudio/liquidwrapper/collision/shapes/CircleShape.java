package ch.shibastudio.liquidwrapper.collision.shapes;

import ch.shibastudio.liquidwrapper.LiquidWrapperJNI;

/**
 * Created by shibakaneki on 05.12.17.
 */

public class CircleShape extends Shape {
	public CircleShape(){
		super(LiquidWrapperJNI.CircleShape_new());
	}

	public CircleShape(long ptr){
		super(ptr);
	}

	@Override
	public synchronized void delete(){
		if (super.getPtr() != 0) {
			LiquidWrapperJNI.CircleShape_delete(super.getPtr());
			super.deletePtr();
		}
	}
}
