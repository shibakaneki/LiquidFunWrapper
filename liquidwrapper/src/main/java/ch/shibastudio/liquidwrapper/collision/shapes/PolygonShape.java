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

import ch.shibastudio.liquidwrapper.DebugUtils;
import ch.shibastudio.liquidwrapper.LiquidWrapperJNI;
import ch.shibastudio.liquidwrapper.common.Vec2;

/**
 * Created by shibakaneki on 27.11.17.
 */

public class PolygonShape extends Shape{
	public PolygonShape(){
		super(LiquidWrapperJNI.PolygonShape_new());
		DebugUtils.logNew(getClass().getSimpleName(), super.getPtr());
	}

	public PolygonShape(long ptr){
		super(ptr);
	}

	@Override
	public synchronized void delete(){
		if (super.getPtr() != 0) {
			DebugUtils.logDelete(getClass().getSimpleName(), super.getPtr());
			LiquidWrapperJNI.PolygonShape_delete(super.getPtr());
			super.deletePtr();
		}
	}

	/**
	 * Sets the polygon points.
	 * @param points as the list of coordinates.
	 */
	public void set(Vec2[] points){
		if(null == points || points.length == 0){
			return;
		}

		LiquidWrapperJNI.PolygonShape_set(super.getPtr(), points[0].getPtr(), points.length);
	}

	/**
	 * Builds vertices to represent an axis-aligned box centered on the local origin.
	 * @param hx as the half width.
	 * @param hy as the half height.
	 */
	public void setAsBox(float hx, float hy){
		LiquidWrapperJNI.PolygonShape_setAsBox(super.getPtr(), hx, hy);
	}

	/**
	 * Builds vertices to represent an oriented box.
	 * @param hx as the half width.
	 * @param hy as the half height.
	 * @param center as the center coordinate.
	 * @param angle as the angle.
	 */
	public void setAsBox(float hx, float hy, Vec2 center, float angle){
		LiquidWrapperJNI.PolygonShape_setAsBox2(super.getPtr(), hx, hy, center.getPtr(), angle);
	}

	/**
	 * Gets the vertex count.
	 * @return the vertex count.
	 */
	public int getVertexCount(){
		return LiquidWrapperJNI.PolygonShape_getVertexCount(super.getPtr());
	}
}
