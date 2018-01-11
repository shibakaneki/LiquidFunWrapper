package ch.shibastudio.liquidwrapper.dynamics;

import ch.shibastudio.liquidwrapper.AbstractNativeObject;
import ch.shibastudio.liquidwrapper.LiquidWrapperJNI;
import ch.shibastudio.liquidwrapper.collision.shapes.Shape;
import ch.shibastudio.liquidwrapper.common.Vec2;

/**
 * Created by shibakaneki on 27.11.17.
 */

public class Body extends AbstractNativeObject{

	public Body(long ptr) {
		super(ptr);
	}

	@Override
	public synchronized void delete(){
		// Its destructor is private so the world is responsible to destroy it.
	}

	/**
	 * Creates a fixture.
	 * @param fixtureDef as the fixture definition.
	 * @return the fixture.
	 */
	public Fixture createFixture(FixtureDef fixtureDef){
		return new Fixture(LiquidWrapperJNI.Body_createFixture(super.getPtr(), fixtureDef.getPtr()));
	}

	/**
	 * Creates a fixture.
	 * @param shape as the shape.
	 * @param density as the density.
	 * @return the fixture.
	 */
	public Fixture createFixture(Shape shape, float density){
		return new Fixture(LiquidWrapperJNI.Body_createFixture2(super.getPtr(), shape.getPtr(), density));
	}

	/**
	 * Destroy a fixture.
	 * @param fixture as the fixture to destroy.
	 */
	public void destroyFixture(Fixture fixture){
		LiquidWrapperJNI.Body_destroyFixture(super.getPtr(), fixture.getPtr());
	}

	/**
	 * Set the position of the body's origin and rotation.
	 * @param position as the position of the body origin.
	 * @param angle as the rotation angle.
	 */
	public void setTransform(Vec2 position, float angle){
		LiquidWrapperJNI.Body_setTransform2(super.getPtr(), position.getPtr(), angle);
	}

	/**
	 * Set the position of the body's origin and rotation.
	 * @param x as X coordinate of the body origin position.
	 * @param y as Y coordinate of the body origin position.
	 * @param angle as the rotation angle.
	 */
	public void setTransform(float x, float y, float angle){
		LiquidWrapperJNI.Body_setTransform(super.getPtr(), x, y, angle);
	}

	/**
	 * Gets the position.
	 * @return the position.
	 */
	public Vec2 getPosition(){
		return new Vec2(LiquidWrapperJNI.Body_getPosition(super.getPtr()));
	}
	/**
	 * Gets the angle.
	 * @return the angle.
	 */
	public float getAngle(){
		return LiquidWrapperJNI.Body_getAngle(super.getPtr());
	}

	/**
	 * Gets the position X coordinate.
	 * @return the X coordinate.
	 */
	public float getPositionX(){
		return LiquidWrapperJNI.Body_getPositionX(super.getPtr());
	}

	/**
	 * Gets the position Y coordinate.
	 * @return the Y coordinate.
	 */
	public float getPositionY(){
		return LiquidWrapperJNI.Body_getPositionY(super.getPtr());
	}

	/**
	 * Sets the linear velocity.
	 * @param velocity as the velocity.
	 */
	public void setLinearVelocity(Vec2 velocity){
		LiquidWrapperJNI.Body_setLinearVelocity(super.getPtr(), velocity.getPtr());
	}

	/**
	 * Sets the angular velocity.
	 * @param velocity as the velocity.
	 */
	public void setAngularVelocity(float velocity){
		LiquidWrapperJNI.Body_setAngularVelocity(super.getPtr(), velocity);
	}

	/**
	 * Sets the gravity scale.
	 * @param scale as the scale.
	 */
	public void setGravityScale(float scale){
		LiquidWrapperJNI.Body_setGravityScale(super.getPtr(), scale);
	}

	/**
	 * Gets the gravity scale.
	 * @return the gravity scale.
	 */
	public float getGravityScale(){
		return LiquidWrapperJNI.BodyDef_getGravityScale(super.getPtr());
	}
}
