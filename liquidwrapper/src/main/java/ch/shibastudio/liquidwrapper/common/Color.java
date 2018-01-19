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
 * Created by shibakaneki on 06.12.17.
 */

public class Color extends AbstractNativeObject {
	public Color(float r, float g, float b){
		super(LiquidWrapperJNI.Color_new(r, g, b));
	}

	@Override
	public synchronized void delete(){
		if (super.getPtr() != 0) {
			LiquidWrapperJNI.Color_delete(super.getPtr());
			super.deletePtr();
		}
	}

	/**
	 * Sets the color components.
	 * @param red as the red component.
	 * @param green as the green component.
	 * @param blue as the blue component.
	 */
	public void set(float red, float green, float blue){
		LiquidWrapperJNI.Color_set(super.getPtr(), red, green, blue);
	}

	/**
	 * Sets the red.
	 * @param red as the red value.
	 */
	public void setRed(float red){
		LiquidWrapperJNI.Color_setRed(super.getPtr(), red);
	}

	/**
	 * Gets the red value.
	 * @return the red value.
	 */
	public float getRed(){
		return LiquidWrapperJNI.Color_getRed(super.getPtr());
	}

	/**
	 * Sets the green.
	 * @param green as the green value.
	 */
	public void setGreen(float green){
		LiquidWrapperJNI.Color_setGreen(super.getPtr(), green);
	}

	/**
	 * Gets the green value.
	 * @return the green value.
	 */
	public float getGreen(){
		return LiquidWrapperJNI.Color_getGreen(super.getPtr());
	}

	/**
	 * Sets the blue.
	 * @param blue as the blue value.
	 */
	public void setBlue(float blue){
		LiquidWrapperJNI.Color_setBlue(super.getPtr(), blue);
	}

	/**
	 * Gets the blue value.
	 * @return the blue value.
	 */
	public float getBlue(){
		return LiquidWrapperJNI.Color_getBlue(super.getPtr());
	}
}
