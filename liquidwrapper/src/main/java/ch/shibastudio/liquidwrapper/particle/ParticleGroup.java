package ch.shibastudio.liquidwrapper.particle;

import ch.shibastudio.liquidwrapper.AbstractNativeObject;
import ch.shibastudio.liquidwrapper.LiquidWrapperJNI;
import ch.shibastudio.liquidwrapper.common.Transform;
import ch.shibastudio.liquidwrapper.common.Vec2;

/**
 * Created by shibakaneki on 06.12.17.
 */

public class ParticleGroup extends AbstractNativeObject{

	public ParticleGroup(long ptr){
		super(ptr);
	}

	@Override
	public synchronized void delete(){
		// Its destructor is private so the world is responsible to destroy it.
	}

	/**
	 * Gets the next particle group.
	 * @return the next particle group.
	 */
	public ParticleGroup getNext(){
		long nextPtr = LiquidWrapperJNI.ParticleGroup_getNext(super.getPtr());
		return 0 == nextPtr ? null : new ParticleGroup(nextPtr);
	}

	/**
	 * Gets the particle system.
	 * @return the particle system.
	 */
	public ParticleSystem getParticleSystem(){
		long psysPtr = LiquidWrapperJNI.ParticleGroup_getParticleSystem(super.getPtr());
		return 0 == psysPtr ? null : new ParticleSystem(psysPtr);
	}

	/**
	 * Gets the particle count.
	 * @return the particle count.
	 */
	public int getParticleCount(){
		return LiquidWrapperJNI.ParticleGroup_getParticleCount(super.getPtr());
	}

	/**
	 * Gets the buffer index.
	 * @return the buffer index.
	 */
	public int getBufferIndex(){
		return LiquidWrapperJNI.ParticleGroup_getBufferIndex(super.getPtr());
	}

	/**
	 * Gets an indication whether it contains a particle at the given index.
	 * @param index as the particle index.
	 * @return true if it contains the particle; otherwise false.
	 */
	public boolean containsParticle(int index){
		return LiquidWrapperJNI.ParticleGroup_containsParticle(super.getPtr(), index);
	}

	/**
	 * Gets all the particle flags.
	 * @return the particle flags.
	 */
	public int getAllParticleFlags(){
		return LiquidWrapperJNI.ParticleGroup_getAllParticleFlags(super.getPtr());
	}

	/**
	 * Sets the group flags.
	 * @param flags as the given flags.
	 */
	public void setGroupFlags(int flags){
		LiquidWrapperJNI.ParticleGroup_setGroupFlags(super.getPtr(), flags);
	}

	/**
	 * Gets the group flags.
	 * @return the group flags.
	 */
	public int getGroupFlags(){
		return LiquidWrapperJNI.ParticleGroup_getGroupFlags(super.getPtr());
	}

	/**
	 * Gets the mass.
	 * @return the mass.
	 */
	public float getMass(){
		return LiquidWrapperJNI.ParticleGroup_getMass(super.getPtr());
	}

	/**
	 * Gets the inertia.
	 * @return the inertia.
	 */
	public float getInertia(){
		return LiquidWrapperJNI.ParticleGroup_getInertia(super.getPtr());
	}

	/**
	 * Gets the center.
	 * @return the center.
	 */
	public Vec2 getCenter(){
		return new Vec2(LiquidWrapperJNI.ParticleGroup_getCenter(super.getPtr()));
	}

	/**
	 * Gets the linear velocity.
	 * @return the linear velocity.
	 */
	public Vec2 getLinearVelocity(){
		return new Vec2(LiquidWrapperJNI.ParticleGroup_getLinearVelocity(super.getPtr()));
	}

	/**
	 * Gets the angular velocity.
	 * @return the angular velocity.
	 */
	public float getAngularVelocity(){
		return LiquidWrapperJNI.ParticleGroup_getAngularVelocity(super.getPtr());
	}

	/**
	 * Gets the transform.
	 * @return the transform.
	 */
	public Transform getTransform(){
		return new Transform(LiquidWrapperJNI.ParticleGroup_getTransform(super.getPtr()));
	}

	/**
	 * Gets the position.
	 * @return the position.
	 */
	public Vec2 getPosition(){
		return new Vec2(LiquidWrapperJNI.ParticleGroup_getPosition(super.getPtr()));
	}

	/**
	 * Gets angle.
	 * @return the angle.
	 */
	public float getAngle(){
		return LiquidWrapperJNI.ParticleGroup_getAngle(super.getPtr());
	}

	/**
	 * Gets the linear velocity from the given world point.
	 * @param worldPoint as the given world point.
	 * @return the linear velocity vector.
	 */
	public Vec2 getLinearVelocityFromWorldPoint(Vec2 worldPoint){
		return new Vec2(LiquidWrapperJNI.ParticleGroup_getLinearVelocityFromWorldPoint(super.getPtr(), worldPoint.getPtr()));
	}

	/**
	 * Applies the given force on the group.
	 * @param forceVector as the given force vector.
	 */
	public void applyForce(Vec2 forceVector){
		LiquidWrapperJNI.ParticleGroup_applyForce(super.getPtr(), forceVector.getPtr());
	}

	/**
	 * Applies the given impulse on the group.
	 * @param impulse as the given impulse.
	 */
	public void applyLinearImpulse(Vec2 impulse){
		LiquidWrapperJNI.ParticleGroup_applyLinearImpulse(super.getPtr(), impulse.getPtr());
	}

	/**
	 * Destroy the particles.
	 * @param callDestructionListener as an indication whether the destruction listener must be called.
	 */
	public void destroyParticles(boolean callDestructionListener){
		LiquidWrapperJNI.ParticleGroup_destroyParticles(super.getPtr(), callDestructionListener);
	}

	/**
	 * Destroy the particles.
	 */
	public void destroyParticles(){
		LiquidWrapperJNI.ParticleGroup_destroyParticles2(super.getPtr());
	}
}
