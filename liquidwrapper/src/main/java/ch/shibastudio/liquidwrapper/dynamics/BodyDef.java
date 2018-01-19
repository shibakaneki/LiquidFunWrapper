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
package ch.shibastudio.liquidwrapper.dynamics;

import ch.shibastudio.liquidwrapper.AbstractNativeObject;
import ch.shibastudio.liquidwrapper.DebugUtils;
import ch.shibastudio.liquidwrapper.LiquidWrapperJNI;
import ch.shibastudio.liquidwrapper.common.Vec2;

/**
 * Created by shibakaneki on 27.11.17.
 */

public class BodyDef extends AbstractNativeObject {
	public BodyDef(){
		super(LiquidWrapperJNI.BodyDef_new());
		DebugUtils.logNew(getClass().getSimpleName(), super.getPtr());
	}

	@Override
	public synchronized void delete(){
		if (super.getPtr() != 0) {
			DebugUtils.logDelete(getClass().getSimpleName(), super.getPtr());
			LiquidWrapperJNI.BodyDef_delete(super.getPtr());
			super.deletePtr();
		}
	}

	/**
	 * Sets the body type.
	 * @param type as the body type.
	 */
	public void setType(BodyType type){
		LiquidWrapperJNI.BodyDef_setType(super.getPtr(), type.ordinal());
	}

	/**
	 * Gets the body type.
	 * @return the body type.
	 */
	public BodyType getType(){
		return BodyType.values()[LiquidWrapperJNI.BodyDef_getType(super.getPtr())];
	}

	/**
	 * Sets the position.
	 * @param position as the position.
	 */
	public void setPosition(Vec2 position){
		LiquidWrapperJNI.BodyDef_setPosition2(super.getPtr(), position.getPtr());
	}

	/**
	 * Sets the position.
	 * @param x as the X coordinate.
	 * @param y as the Y coordinate.
	 */
	public void setPosition(float x, float y){
		LiquidWrapperJNI.BodyDef_setPosition(super.getPtr(), x, y);
	}

	/**
	 * Gets the position.
	 * @return the position.
	 */
	public Vec2 getPosition(){
		long posPtr = LiquidWrapperJNI.BodyDef_getPosition(super.getPtr());
		return new Vec2(posPtr);
	}

	/**
	 * Sets the angle.
	 * @param angle as the angle.
	 */
	public void setAngle(float angle){
		LiquidWrapperJNI.BodyDef_setAngle(super.getPtr(), angle);
	}

	/**
	 * Gets the angle.
	 * @return the angle.
	 */
	public float getAngle(){
		return LiquidWrapperJNI.BodyDef_getAngle(super.getPtr());
	}

	/**
	 * Sets the linear velocity.
	 * @param linearVelocity as the linear velocity.
	 */
	public void setLinearVelocity(Vec2 linearVelocity){
		LiquidWrapperJNI.BodyDef_setLinearVelocity(super.getPtr(), linearVelocity.getPtr());
	}

	/**
	 * Gets the linear velocity.
	 * @return the linear velocity.
	 */
	public Vec2 getLinearVelocity(){
		return new Vec2(LiquidWrapperJNI.BodyDef_getLinearVelocity(super.getPtr()));
	}

	/**
	 * Sets the angular velocity.
	 * @param angularVelocity as the angular velocity.
	 */
	public void setAngularVelocity(float angularVelocity){
		LiquidWrapperJNI.BodyDef_setAngularVelocity(super.getPtr(), angularVelocity);
	}

	/**
	 * Gets the angular velocity.
	 * @return the angular velocity.
	 */
	public float getAngularVelocity(){
		return LiquidWrapperJNI.BodyDef_getAngularVelocity(super.getPtr());
	}

	/**
	 * Sets the linear damping.
	 * @param linearDamping as the linear damping.
	 */
	public void setLinearDamping(float linearDamping){
		LiquidWrapperJNI.BodyDef_setLinearDamping(super.getPtr(), linearDamping);
	}

	/**
	 * Gets the linear damping.
	 * @return the linear damping.
	 */
	public float getLinearDamping(){
		return LiquidWrapperJNI.BodyDef_getLinearDamping(super.getPtr());
	}

	/**
	 * Sets the angular damping.
	 * @param angularDamping as the angular damping.
	 */
	public void setAngularDamping(float angularDamping){
		LiquidWrapperJNI.BodyDef_setAngularDamping(super.getPtr(), angularDamping);
	}

	/**
	 * Gets the angular dampoing.
	 * @return the angular damping.
	 */
	public float getAngularDamping(){
		return LiquidWrapperJNI.BodyDef_getAngularDamping(super.getPtr());
	}

	/**
	 * Sets the gravity scale.
	 * @param gravityScale as the gravity scale.
	 */
	public void setGravityScale(float gravityScale){
		LiquidWrapperJNI.BodyDef_setGravityScale(super.getPtr(), gravityScale);
	}

	/**
	 * Gets the gravity scale.
	 * @return the gravity scale.
	 */
	public float getGravityScale(){
		return LiquidWrapperJNI.BodyDef_getGravityScale(super.getPtr());
	}

	/**
	 * Sets an indicator of sleep allowance.
	 * @param allowSleep as the sleep allowance.
	 */
	public void setAllowSleep(boolean allowSleep){
		LiquidWrapperJNI.BodyDef_setAllowSleep(super.getPtr(), allowSleep);
	}

	/**
	 * Gets an indicator whether the body allow sleep.
	 * @return true if allowing sleep; otherwise false.
	 */
	public boolean isAllowingSleep(){
		return LiquidWrapperJNI.BodyDef_getAllowSleep(super.getPtr());
	}

	/**
	 * Sets the awake state.
	 * @param awake as the awake state.
	 */
	public void setAwake(boolean awake){
		LiquidWrapperJNI.BodyDef_setAwake(super.getPtr(), awake);
	}

	/**
	 * Gets an indication whether the body is awake.
	 * @return true if awake; otherwise false.
	 */
	public boolean isAwake(){
		return LiquidWrapperJNI.BodyDef_getAwake(super.getPtr());
	}

	/**
	 * Sets the rotation state.
	 * @param isFixed as the rotation state.
	 */
	public void setFixedRotation(boolean isFixed){
		LiquidWrapperJNI.BodyDef_setFixedRotation(super.getPtr(), isFixed);
	}

	/**
	 * Gets an indication whether the rotation is fixed.
	 * @return true if the rotation is fixed; otherwise false.
	 */
	public boolean isFixedRotation(){
		return LiquidWrapperJNI.BodyDef_getFixedRotation(super.getPtr());
	}

	/**
	 * Sets the bullet state.
	 * @param isBullet as the bullet state.
	 */
	public void setBullet(boolean isBullet){
		LiquidWrapperJNI.BodyDef_setBullet(super.getPtr(), isBullet);
	}

	/**
	 * Gets an indication whether the body is a bullet.
	 * @return true if the body is a bullet; otherwise false.
	 */
	public boolean isBullet(){
		return LiquidWrapperJNI.BodyDef_getBullet(super.getPtr());
	}

	/**
	 * Sets the active state.
	 * @param isActive as the active state.
	 */
	public void setActive(boolean isActive){
		LiquidWrapperJNI.BodyDef_setActive(super.getPtr(), isActive);
	}

	/**
	 * Gets an indication whether the body is active.
	 * @return true if the body is active; otherwise false.
	 */
	public boolean isActive(){
		return LiquidWrapperJNI.BodyDef_getActive(super.getPtr());
	}
}
