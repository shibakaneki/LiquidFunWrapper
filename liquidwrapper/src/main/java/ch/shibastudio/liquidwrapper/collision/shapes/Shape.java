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
