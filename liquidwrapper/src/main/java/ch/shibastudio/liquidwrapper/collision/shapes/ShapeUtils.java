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
