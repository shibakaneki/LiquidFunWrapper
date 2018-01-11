package ch.shibastudio.liquidwrapper.collision.shapes;

import ch.shibastudio.liquidwrapper.AbstractNativeObject;
import ch.shibastudio.liquidwrapper.LiquidWrapperJNI;

/**
 * Created by shibakaneki on 05.12.17.
 */

public abstract class Shape extends AbstractNativeObject {
	protected Shape(long ptr){
		super(ptr);
	}

	/**
	 * Sets the type of the shape.
	 * @param type as the shape type.
	 */
	public void setType(ShapeType type){
		LiquidWrapperJNI.Shape_setType(super.getPtr(), type.ordinal());
	}

	/**
	 * Gets the type of the shape.
	 * @return the type of the shape.
	 */
	public ShapeType getType(){
		return ShapeType.values()[LiquidWrapperJNI.Shape_getType(super.getPtr())];
	}

	/**
	 * Gets the number of child primitives.
	 * @return the number of child primitives.
	 */
	public int getChildCount(){
		return LiquidWrapperJNI.Shape_getChildCount(super.getPtr());
	}

	/**
	 * Sets the shape radius.
	 * @param radius as the radius.
	 */
	public void setRadius(float radius){
		LiquidWrapperJNI.Shape_setRadius(super.getPtr(), radius);
	}

	/**
	 * Gets the radius.
	 * @return the shape radius.
	 */
	public float getRadius(){
		return LiquidWrapperJNI.Shape_getRadius(super.getPtr());
	}
}
