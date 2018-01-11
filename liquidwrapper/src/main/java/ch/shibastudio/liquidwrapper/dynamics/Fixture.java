package ch.shibastudio.liquidwrapper.dynamics;

import ch.shibastudio.liquidwrapper.AbstractNativeObject;
import ch.shibastudio.liquidwrapper.LiquidWrapperJNI;
import ch.shibastudio.liquidwrapper.collision.shapes.ChainShape;
import ch.shibastudio.liquidwrapper.collision.shapes.CircleShape;
import ch.shibastudio.liquidwrapper.collision.shapes.EdgeShape;
import ch.shibastudio.liquidwrapper.collision.shapes.PolygonShape;
import ch.shibastudio.liquidwrapper.collision.shapes.Shape;
import ch.shibastudio.liquidwrapper.collision.shapes.ShapeType;
import ch.shibastudio.liquidwrapper.collision.shapes.ShapeUtils;

/**
 * Created by shibakaneki on 04.12.17.
 */

public class Fixture extends AbstractNativeObject{
	public Fixture(long ptr){
		super(ptr);
	}

	@Override
	public synchronized void delete(){
		if (super.getPtr() != 0) {
			// NOTE: 	The fixtures are automatically destroyed when the Body is destroyed.
			//			This is managed by the World when it destroys the bodies.
			//LiquidWrapperJNI.Fixture_delete(super.getPtr());
			super.deletePtr();
		}
	}

	/**
	 * Gets the shape type.
	 * @return the shape type.
	 */
	public ShapeType getType(){
		return ShapeType.values()[LiquidWrapperJNI.Fixture_getType(super.getPtr())];
	}

	/**
	 * Gets the shape.
	 * @return the shape.
	 */
	public Shape getShape(){
		return ShapeUtils.getShapeFromPointer(LiquidWrapperJNI.Fixture_getShape(super.getPtr()));
	}

	/**
	 * Set if this fixture is a sensor.
	 * @param isSensor as true if the fixture is a sensor; otherwise false.
	 */
	public void setSensor(boolean isSensor){
		LiquidWrapperJNI.Fixture_setSensor(super.getPtr(), isSensor);
	}

	/**
	 * Gets an indication whether it is a sensor.
	 * @return true if it is a sensor; otherwise false.
	 */
	public boolean isSensor(){
		return LiquidWrapperJNI.Fixture_isSensor(super.getPtr());
	}

	/**
	 * Gets the body.
	 * @return the body.
	 */
	public Body getBody(){
		return new Body(LiquidWrapperJNI.Fixture_getBody(super.getPtr()));
	}

	/**
	 * Gets the next fixture.
	 * @return the next fixture.
	 */
	public Fixture getNext(){
		return new Fixture(LiquidWrapperJNI.Fixture_getNext(super.getPtr()));
	}

	/**
	 * Sets the density.
	 * @param density as the density.
	 */
	public void setDensity(float density){
		LiquidWrapperJNI.Fixture_setDensity(super.getPtr(), density);
	}

	/**
	 * Gets the density.
	 * @return the density.
	 */
	public float getDensity(){
		return LiquidWrapperJNI.Fixture_getDensity(super.getPtr());
	}

	/**
	 * Sets the friction.
	 * @param friction as the friction.
	 */
	public void setFriction(float friction){
		LiquidWrapperJNI.Fixture_setFriction(super.getPtr(), friction);
	}

	/**
	 * Gets the friction.
	 * @return the friction.
	 */
	public float getFriction(){
		return LiquidWrapperJNI.Fixture_getFriction(super.getPtr());
	}

	/**
	 * Sets the restitution.
	 * @param restitution as the restitution.
	 */
	public void setRestitution(float restitution){
		LiquidWrapperJNI.Fixture_setRestitution(super.getPtr(), restitution);
	}

	/**
	 * Gets the restitution.
	 * @return the restitution.
	 */
	public float getRestitution(){
		return LiquidWrapperJNI.Fixture_getRestitution(super.getPtr());
	}
}
