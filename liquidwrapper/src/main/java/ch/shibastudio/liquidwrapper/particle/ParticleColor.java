package ch.shibastudio.liquidwrapper.particle;

import ch.shibastudio.liquidwrapper.AbstractNativeObject;
import ch.shibastudio.liquidwrapper.LiquidWrapperJNI;

/**
 * Created by shibakaneki on 06.12.17.
 */

public class ParticleColor extends AbstractNativeObject {

	public ParticleColor(){
		super(LiquidWrapperJNI.ParticleColor_new());
	}

	public ParticleColor(long ptr){
		super(ptr);
	}

	public ParticleColor(int r, int g, int b, int a){
		super(LiquidWrapperJNI.ParticleColor_new2(r, g, b, a));
	}

	@Override
	public synchronized void delete(){
		if (super.getPtr() != 0) {
			LiquidWrapperJNI.ParticleColor_delete(super.getPtr());
			super.deletePtr();
		}
	}

	/**
	 * Gets an information whether it is zero.
	 * @return true if zero; otherwise false.
	 */
	public boolean isZero(){
		return LiquidWrapperJNI.ParticleColor_isZero(super.getPtr());
	}

	/**
	 * Sets the color components.
	 * @param r as the red component.
	 * @param g as the green component.
	 * @param b as the blue component.
	 * @param a as the alpha component.
	 */
	public void set(int r, int g, int b, int a){
		LiquidWrapperJNI.ParticleColor_set(super.getPtr(), r, g, b, a);
	}
}
