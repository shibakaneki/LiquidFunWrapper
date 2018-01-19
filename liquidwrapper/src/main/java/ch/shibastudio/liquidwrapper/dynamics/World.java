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
import ch.shibastudio.liquidwrapper.LiquidWrapperJNI;
import ch.shibastudio.liquidwrapper.common.Vec2;
import ch.shibastudio.liquidwrapper.particle.ParticleSystem;
import ch.shibastudio.liquidwrapper.particle.ParticleSystemDef;

/**
 * Created by shibakaneki on 27.11.17.
 */

public class World extends AbstractNativeObject{
	/**
	 * Constructor.
	 * @param gravityX as the X axis gravity.
	 * @param gravityY as the Y axis gravity.
	 */
	public World(float gravityX, float gravityY){
		super(LiquidWrapperJNI.World_new(gravityX, gravityY));
	}

	@Override
	public synchronized void delete(){
		if (super.getPtr() != 0) {
			LiquidWrapperJNI.World_delete(super.getPtr());
			super.deletePtr();
		}
	}

	/**
	 * Take a time step.
	 * @param timeStep as the time step.¨
	 * @param velocityIterations as the velocity iteration count.
	 * @param positionIterations as the position iteration count.
	 */
	public void step(float timeStep, int velocityIterations, int positionIterations){
		LiquidWrapperJNI.World_step2(super.getPtr(), timeStep, velocityIterations, positionIterations);
	}

	/**
	 * Take a time step.
	 * @param timeStep as the time step.
	 * @param velocityIterations as the velocity iteration count.
	 * @param positionIterations as the position iteration count.
	 * @param particleIterations as the particle iteration count.
	 */
	public void step(float timeStep, int velocityIterations, int positionIterations, int particleIterations){
		LiquidWrapperJNI.World_step(super.getPtr(), timeStep, velocityIterations, positionIterations, particleIterations);
	}

	/**
	 * Creates a body.
	 * @param bodyDef as the body definition.
	 * @return the created body.
	 */
	public Body createBody(BodyDef bodyDef){
		return new Body(LiquidWrapperJNI.World_createBody(super.getPtr(), bodyDef.getPtr()));
	}

	/**
	 * Creates a particle system.
	 * @param particleSystemDef as the particle system definition.
	 * @return the created particle system.
	 */
	public ParticleSystem createParticleSystem(ParticleSystemDef particleSystemDef){
		return new ParticleSystem(LiquidWrapperJNI.World_createParticleSystem(super.getPtr(), particleSystemDef.getPtr()));
	}

	/**
	 * Destroy a particle system.
	 * @param particleSystem as the given particle system.
	 */
	public void destroyParticleSystem(ParticleSystem particleSystem){
		LiquidWrapperJNI.World_destroyParticleSystem(super.getPtr(), particleSystem.getPtr());
	}

	/**
	 * Gets the gravity vector.
	 * @return the gravity vector.
	 */
	public Vec2 getGravityVector(){
		return new Vec2(LiquidWrapperJNI.World_getGravity(super.getPtr()));
	}
}
