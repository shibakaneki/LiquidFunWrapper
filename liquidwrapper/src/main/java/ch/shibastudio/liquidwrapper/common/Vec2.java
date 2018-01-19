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
package ch.shibastudio.liquidwrapper.common;

import ch.shibastudio.liquidwrapper.AbstractNativeObject;
import ch.shibastudio.liquidwrapper.LiquidWrapperJNI;

/**
 * Created by shibakaneki on 27.11.17.
 */

public class Vec2 extends AbstractNativeObject{
	public Vec2(){
		super(LiquidWrapperJNI.Vec2_new());
	}

	public Vec2(long ptr){
		super(ptr);
	}

	public Vec2(float x, float y){
		super(LiquidWrapperJNI.Vec2_new2(x, y));
	}

	@Override
	public synchronized void delete(){
		if (super.getPtr() != 0) {
			LiquidWrapperJNI.Vec2_delete(super.getPtr());
			super.deletePtr();
		}
	}

	/**
	 * Sets this vector to all zeros.
	 */
	public void setZero(){
		LiquidWrapperJNI.Vec2_setZero(super.getPtr());
	}

	/**
	 * Sets the vector coordinates.
	 * @param x as the X coordinate.
	 * @param y as the Y coordinate.
	 */
	public void set(float x, float y){
		LiquidWrapperJNI.Vec2_set(super.getPtr(), x, y);
	}

	/**
	 * Gets the length of the vector.
	 * @return the length of the vector.
	 */
	public float length(){
		return LiquidWrapperJNI.Vec2_length(super.getPtr());
	}

	/**
	 * Gets the squared length of the vector.
	 * @return the squared length.
	 */
	public float lengthSquared(){
		return LiquidWrapperJNI.Vec2_lengthSquared(super.getPtr());
	}

	/**
	 * Converts the vector in unit vector.
	 * @return the length of the unit vector.
	 */
	public float normalize(){
		return LiquidWrapperJNI.Vec2_normalize(super.getPtr());
	}

	/**
	 * Gets an indication whether the vector is valid (= contains finite coordinates)
	 * @return true if valide; otherwise false.
	 */
	public boolean isValid(){
		return LiquidWrapperJNI.Vec2_isValid(super.getPtr());
	}

	/**
	 * Gets the skew vector such as:
	 * dot(skew_vec, other) == cross(vec, other)
	 * @return the skew vector.
	 */
	public Vec2 skew(){
		long skewedVecPtr = LiquidWrapperJNI.Vec2_skew(super.getPtr());
		Vec2 skewedVec = new Vec2(skewedVecPtr);
		return new Vec2(skewedVecPtr);
	}

	/**
	 * Sets the X coordinate.
	 * @param x as the X coordinate.
	 */
	public void setX(float x){
		LiquidWrapperJNI.Vec2_setX(super.getPtr(), x);
	}

	/**
	 * Gets the X coordinate.
	 * @return the X coordinate.
	 * */
	public float getX(){
		return LiquidWrapperJNI.Vec2_getX(super.getPtr());
	}

	/**
	 * Sets the Y coordinate.
	 * @param y as the Y coordinate.
	 */
	public void setY(float y){
		LiquidWrapperJNI.Vec2_setY(super.getPtr(), y);
	}

	/**
	 * Gets the Y coordinate.
	 * @return the Y coordinate.
	 * */
	public float getY(){
		return LiquidWrapperJNI.Vec2_getY(super.getPtr());
	}
}
