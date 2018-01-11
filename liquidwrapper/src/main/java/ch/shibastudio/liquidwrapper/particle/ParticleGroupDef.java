package ch.shibastudio.liquidwrapper.particle;

import ch.shibastudio.liquidwrapper.AbstractNativeObject;
import ch.shibastudio.liquidwrapper.LiquidWrapperJNI;
import ch.shibastudio.liquidwrapper.collision.shapes.CircleShape;
import ch.shibastudio.liquidwrapper.collision.shapes.Shape;
import ch.shibastudio.liquidwrapper.collision.shapes.ShapeType;
import ch.shibastudio.liquidwrapper.collision.shapes.ShapeUtils;
import ch.shibastudio.liquidwrapper.common.Vec2;

/**
 * Created by shibakaneki on 07.12.17.
 */

public class ParticleGroupDef extends AbstractNativeObject {
	private final short LONG_SIZE = 8;

	public ParticleGroupDef(){
		super(LiquidWrapperJNI.ParticleGroupDef_new());
	}

	public ParticleGroupDef(long ptr){
		super(ptr);
	}

	@Override
	public synchronized void delete(){
		if (super.getPtr() != 0) {
			LiquidWrapperJNI.ParticleGroupDef_delete(super.getPtr());
			super.deletePtr();
		}
	}

	/**
	 * Sets the flags.
	 * @param flags as the flags
	 */
	public void setFlags(int flags){
		LiquidWrapperJNI.ParticleGroupDef_setFlags(super.getPtr(), flags);
	}

	/**
	 * Gets the flags.
	 * @return the flags.
	 */
	public int getFlags(){
		return LiquidWrapperJNI.ParticleGroupDef_getFlags(super.getPtr());
	}

	/**
	 * Sets the group flags.
	 * @param flags as the group flags
	 */
	public void setGroupFlags(int flags){
		LiquidWrapperJNI.ParticleGroupDef_setGroupFlags(super.getPtr(), flags);
	}

	/**
	 * Gets the group flags.
	 * @return the group flags.
	 */
	public int getGroupFlags(){
		return LiquidWrapperJNI.ParticleGroupDef_getGroupFlags(super.getPtr());
	}

	/**
	 * Sets the position.
	 * @param position as the position.
	 */
	public void setPosition(Vec2 position){
		LiquidWrapperJNI.ParticleGroupDef_setPosition(super.getPtr(), position.getPtr());
	}

	/**
	 * Gets the position.
	 * @return the position.
	 */
	public Vec2 getPosition(){
		return new Vec2(LiquidWrapperJNI.ParticleGroupDef_getPosition(super.getPtr()));
	}

	/**
	 * Sets the angle.
	 * @param angle as the angle.
	 */
	public void setAngle(float angle){
		LiquidWrapperJNI.ParticleGroupDef_setAngle(super.getPtr(), angle);
	}

	/**
	 * Gets the angle.
	 * @return the angle.
	 */
	public float getAngle(){
		return LiquidWrapperJNI.ParticleGroupDef_getAngle(super.getPtr());
	}

	/**
	 * Sets the linear velocity.
	 * @param velocity as the linear velocity.
	 */
	public void setLinearVelocity(Vec2 velocity){
		LiquidWrapperJNI.ParticleGroupDef_setLinearVelocity(super.getPtr(), velocity.getPtr());
	}

	/**
	 * Gets the linear velocity.
	 * @return the linear velocity.
	 */
	public Vec2 getLinearVelocity(){
		return new Vec2(LiquidWrapperJNI.ParticleGroupDef_getLinearVelocity(super.getPtr()));
	}

	/**
	 * Sets the angular velocity.
	 * @param velocity as the angular velocity.
	 */
	public void setAngularVelocity(float velocity){
		LiquidWrapperJNI.ParticleGroupDef_setAngularVelocity(super.getPtr(), velocity);
	}

	/**
	 * Gets the angular velocity.
	 * @return the angular velocity.
	 */
	public float getAngularVelocity(){
		return LiquidWrapperJNI.ParticleGroupDef_getAngularVelocity(super.getPtr());
	}

	/**
	 * Sets the color
	 * @param color as the color.
	 */
	public void setColor(ParticleColor color){
		LiquidWrapperJNI.ParticleGroupDef_setColor(super.getPtr(), color.getPtr());
	}

	/**
	 * Gets the color.
	 * @return the color.
	 */
	public ParticleColor getColor(){
		return new ParticleColor(LiquidWrapperJNI.ParticleGroupDef_getColor(super.getPtr()));
	}

	/**
	 * Sets the strength.
	 * @param strength as the strength.
	 */
	public void setStrength(float strength){
		LiquidWrapperJNI.ParticleGroupDef_setStrength(super.getPtr(), strength);
	}

	/**
	 * Gets the strength.
	 * @return the strength.
	 */
	public float getStrength(){
		return LiquidWrapperJNI.ParticleGroupDef_getStrength(super.getPtr());
	}

	/**
	 * Set the shape.
	 * @param shape as the given shape.
	 */
	public void setShape(Shape shape){
		LiquidWrapperJNI.ParticleGroupDef_setShape(super.getPtr(), shape.getPtr());
	}

	/**
	 * Gets the shape.
	 * @return the shape.
	 */
	public Shape getShape(){
		return ShapeUtils.getShapeFromPointer(LiquidWrapperJNI.ParticleGroupDef_getShape(super.getPtr()));
	}

	/**
	 * Sets the shapes.
	 * @param shapes as the shapes to set.
	 */
	public void setShapes(Shape[] shapes){
		if(null == shapes || shapes[0] == null){
			return;
		}

		LiquidWrapperJNI.ParticleGroupDef_setShapes(super.getPtr(), shapes[0].getPtr());
	}

	/**
	 * Gets the shapes.
	 * @return an array of shapes.
	 */
	public Shape[] getShapes(){
		int shapeCount = LiquidWrapperJNI.ParticleGroupDef_getShapeCount(super.getPtr());
		long shapesPtr = LiquidWrapperJNI.ParticleGroupDef_getShapes(super.getPtr());

		Shape[] shapes = new Shape[shapeCount];

		for(int i=0; i<shapeCount; i++){
			shapes[i] = ShapeUtils.getShapeFromPointer(shapesPtr + i*LONG_SIZE);
		}

		return shapes;
	}

	/**
	 * Sets the shape count.
	 * @param count as the shape count.
	 */
	public void setShapeCount(int count){
		LiquidWrapperJNI.ParticleGroupDef_setShapeCount(super.getPtr(), count);
	}

	/**
	 * Gets the shape count.
	 * @return the shape count.
	 */
	public int getShapeCount(){
		return LiquidWrapperJNI.ParticleGroupDef_getShapeCount(super.getPtr());
	}

	/**
	 * Sets the stride.
	 * @param stride as the given stride.
	 */
	public void setStride(float stride){
		LiquidWrapperJNI.ParticleGroupDef_setStride(super.getPtr(), stride);
	}

	/**
	 * Gets the stride.
	 * @return the stride.
	 */
	public float getStride(){
		return LiquidWrapperJNI.ParticleGroupDef_getStride(super.getPtr());
	}

	/**
	 * Sets the particle count.
	 * @param count as the particle count.
	 */
	public void setParticleCount(int count){
		LiquidWrapperJNI.ParticleGroupDef_setParticleCount(super.getPtr(), count);
	}

	/**
	 * Gets the particle count.
	 * @return the particle count.
	 */
	public int getParticleCount(){
		return LiquidWrapperJNI.ParticleGroupDef_getParticleCount(super.getPtr());
	}

	/**
	 * Sets the position data.
	 * @param positions as the given positions.
	 */
	public void setPositionData(Vec2[] positions){
		if(null == positions){
			return;
		}

		LiquidWrapperJNI.ParticleGroupDef_setPositionData(super.getPtr(), positions[0].getPtr());
		this.setParticleCount(positions.length);
	}

	/**
	 * Gets the position data.
	 * @return an array of positions.
	 */
	public Vec2[] getPositionData(){
		int count = this.getParticleCount();

		if(0 == count){
			return null;
		}

		Vec2[] positions = new Vec2[count];
		long posDataPtr = LiquidWrapperJNI.ParticleGroupDef_getPositionData(super.getPtr());
		for(int i=0; i<count; i++){
			positions[i] = new Vec2(posDataPtr + i*LONG_SIZE);
		}

		return positions;
	}

	/**
	 * Sets the lifetime.
	 * @param lifetime as the given lifetime.
	 */
	public void setLifetime(float lifetime){
		LiquidWrapperJNI.ParticleGroupDef_setLifetime(super.getPtr(), lifetime);
	}

	/**
	 * Gets the lifetime.
	 * @return the lifetime.
	 */
	public float getLifetime(){
		return LiquidWrapperJNI.ParticleGroupDef_getLifetime(super.getPtr());
	}

	/**
	 * Sets the particle group.
	 * @param group as the given particle group.
	 */
	public void setGroup(ParticleGroup group){
		LiquidWrapperJNI.ParticleGroupDef_setGroup(super.getPtr(), group.getPtr());
	}

	/**
	 * Gets the particle group.
	 * @return the particle group.
	 */
	public ParticleGroup getGroup(){
		return new ParticleGroup(LiquidWrapperJNI.ParticleGroupDef_getGroup(super.getPtr()));
	}
}
