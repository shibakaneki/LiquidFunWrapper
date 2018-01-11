package ch.shibastudio.liquidwrapper.collision.shapes;

import ch.shibastudio.liquidwrapper.LiquidWrapperJNI;

/**
 * Created by shibakaneki on 08.12.17.
 */

public class ShapeUtils {
	/**
	 * Gets the shape related to the given pointer.
	 * @param ptr as the given shape pointer.
	 * @return a shape object or null if the pointer is invalid.
	 */
	public static Shape getShapeFromPointer(long ptr){
		if(0 < ptr){
			switch(ShapeType.values()[LiquidWrapperJNI.Shape_getType(ptr)]){
				case circle: return new CircleShape(ptr);
				case edge: return new EdgeShape(ptr);
				case polygon: return new PolygonShape(ptr);
				case chain: return new ChainShape(ptr);
			}
		}
		return null;
	}
}
