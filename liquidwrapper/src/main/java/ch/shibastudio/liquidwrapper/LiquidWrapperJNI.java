package ch.shibastudio.liquidwrapper;

import java.nio.ByteBuffer;

import ch.shibastudio.liquidwrapper.common.Vec2;

/**
 * Created by shibakaneki on 27.11.17.
 */

public class LiquidWrapperJNI {
	// Global
	public final static native void delete(long cPtr);

	// World
	public final static native long World_new(float gravityX, float gravityY);
	public final static native void World_delete(long worldPtr);
	public final static native void World_step2(long worldPtr, float timeStep, int velocityIterations, int positionIterations);
	public final static native void World_step(long worldPtr, float timeStep, int velocityIterations, int positionIterations, int particleIterations);
	public final static native long World_createBody(long worldPtr, long bodyDefPtr);
	public final static native long World_createParticleSystem(long worldPtr, long particleSystemDefPtr);
	public final static native void World_destroyParticleSystem(long worldPtr, long particleSystemPtr);
	public final static native long World_getGravity(long worldPtr);

	// Vec2
	public final static native long Vec2_new();
	public final static native long Vec2_new2(float x, float y);
	public final static native void Vec2_delete(long vec2Ptr);
	public final static native void Vec2_setZero(long vec2Ptr);
	public final static native void Vec2_set(long vec2Ptr, float x, float y);
	public final static native float Vec2_length(long vec2Ptr);
	public final static native float Vec2_lengthSquared(long vec2Ptr);
	public final static native float Vec2_normalize(long vec2Ptr);
	public final static native boolean Vec2_isValid(long vec2Ptr);
	public final static native long Vec2_skew(long vec2Ptr);
	public final static native void Vec2_setX(long vec2Ptr, float x);
	public final static native float Vec2_getX(long vec2Ptr);
	public final static native void Vec2_setY(long vec2Ptr, float y);
	public final static native float Vec2_getY(long vec2Ptr);

	// Color
	public final static native long Color_new(float r, float g, float b);
	public final static native void Color_delete(long colorPtr);
	public final static native void Color_set(long colorPtr, float r, float g, float b);
	public final static native void Color_setRed(long colorPtr, float r);
	public final static native float Color_getRed(long colorPtr);
	public final static native void Color_setGreen(long colorPtr, float g);
	public final static native float Color_getGreen(long colorPtr);
	public final static native void Color_setBlue(long colorPtr, float b);
	public final static native float Color_getBlue(long colorPtr);

	// BodyDef
	public final static native long BodyDef_new();
	public final static native void BodyDef_delete(long bodyDefPtr);
	public final static native void BodyDef_setType(long bodyDefPtr, int type);
	public final static native int BodyDef_getType(long bodyDefPtr);
	public final static native void BodyDef_setAngle(long bodyDefPtr, float angle);
	public final static native float BodyDef_getAngle(long bodyDefPtr);
	public final static native void BodyDef_setAngularVelocity(long bodyDefPtr, float angularVelocity);
	public final static native float BodyDef_getAngularVelocity(long bodyDefPtr);
	public final static native void BodyDef_setAngularDamping(long bodyDefPtr, float angularDamping);
	public final static native float BodyDef_getAngularDamping(long bodyDefPtr);
	public final static native void BodyDef_setLinearDamping(long bodyDefPtr, float linearDamping);
	public final static native float BodyDef_getLinearDamping(long bodyDefPtr);
	public final static native void BodyDef_setGravityScale(long bodyDefPtr, float gravityScale);
	public final static native float BodyDef_getGravityScale(long bodyDefPtr);
	public final static native void BodyDef_setAllowSleep(long bodyDefPtr, boolean allowSleep);
	public final static native boolean BodyDef_getAllowSleep(long bodyDefPtr);
	public final static native void BodyDef_setAwake(long bodyDefPtr, boolean isAwake);
	public final static native boolean BodyDef_getAwake(long bodyDefPtr);
	public final static native void BodyDef_setFixedRotation(long bodyDefPtr, boolean isFixed);
	public final static native boolean BodyDef_getFixedRotation(long bodyDefPtr);
	public final static native void BodyDef_setBullet(long bodyDefPtr, boolean isBullet);
	public final static native boolean BodyDef_getBullet(long bodyDefPtr);
	public final static native void BodyDef_setActive(long bodyDefPtr, boolean isActive);
	public final static native boolean BodyDef_getActive(long bodyDefPtr);
	public final static native void BodyDef_setPosition(long bodyDefPtr, float x, float y);
	public final static native void BodyDef_setPosition2(long bodyDefPtr, long vec2PosPtr);
	public final static native long BodyDef_getPosition(long bodyDefPtr);
	public final static native void BodyDef_setLinearVelocity(long bodyDefPtr, long linearVelocityPtr);
	public final static native long BodyDef_getLinearVelocity(long bodyDefPtr);

	// Body
	public final static native long Body_createFixture(long bodyPtr, long fixtureDefPtr);
	public final static native long Body_createFixture2(long bodyPtr, long shapePtr, float density);
	public final static native void Body_destroyFixture(long bodyPtr, long fixturePtr);
	public final static native long Body_getPosition(long bodyPtr);
	public final static native float Body_getAngle(long bodyPtr);
	public final static native void Body_setTransform(long bodyPtr, float x, float y, float angle);
	public final static native void Body_setTransform2(long bodyPtr, long posPtr, float angle);
	public final static native void Body_setLinearVelocity(long bodyPtr, long velocityPtr);
	public final static native void Body_setAngularVelocity(long bodyPtr, float velocity);
	public final static native void Body_setGravityScale(long bodyPtr, float scale);
	public final static native float Body_getGravityScale(long bodyPtr);
	public final static native float Body_getPositionX(long bodyPtr);
	public final static native float Body_getPositionY(long bodyPtr);
	public final static native float Body_getPosition2(long bodyPtr, Vec2 pos);
	public final static native void Body_setActive(long bodyPtr, boolean isActive);
	public final static native boolean Body_isActive(long bodyPtr);

	// FixtureDef
	public final static native long FixtureDef_new();
	public final static native void FixtureDef_delete(long fixtureDefPtr);
	public final static native void FixtureDef_setShape(long fixtureDefPtr, long shapePtr);
	public final static native long FixtureDef_getShape(long fixtureDefPtr);
	public final static native void FixtureDef_setFriction(long fixtureDefPtr, float friction);
	public final static native float FixtureDef_getFriction(long fixtureDefPtr);
	public final static native void FixtureDef_setRestitution(long fixtureDefPtr, float restitution);
	public final static native float FixtureDef_getRestitution(long fixtureDefPtr);
	public final static native void FixtureDef_setDensity(long fixtureDefPtr, float density);
	public final static native float FixtureDef_getDensity(long fixtureDefPtr);
	public final static native void FixtureDef_setSensor(long fixtureDefPtr, boolean isSensor);
	public final static native boolean FixtureDef_isSensor(long fixtureDefPtr);

	// Fixture
	public final static native void Fixture_delete(long fixturePtr);
	public final static native int Fixture_getType(long fixturePtr);
	public final static native long Fixture_getShape(long fixturePtr);
	public final static native void Fixture_setSensor(long fixturePtr, boolean isSensor);
	public final static native boolean Fixture_isSensor(long fixturePtr);
	public final static native long Fixture_getBody(long fixturePtr);
	public final static native long Fixture_getNext(long fixturePtr);
	public final static native void Fixture_setDensity(long fixturePtr, float density);
	public final static native float Fixture_getDensity(long fixturePtr);
	public final static native void Fixture_setFriction(long fixturePtr, float density);
	public final static native float Fixture_getFriction(long fixturePtr);
	public final static native void Fixture_setRestitution(long fixturePtr, float density);
	public final static native float Fixture_getRestitution(long fixturePtr);

	// Shape
	public final static native void Shape_setType(long shapePtr, int type);
	public final static native int Shape_getType(long shaptPtr);
	public final static native int Shape_getChildCount(long shaptPtr);
	public final static native float Shape_getRadius(long shapePtr);
	public final static native void Shape_setRadius(long shapePtr, float radius);

	// PolygonShape
	public final static native long PolygonShape_new();
	public final static native void PolygonShape_delete(long pshapePtr);
	public final static native void PolygonShape_set(long pshapePtr, long pointsPtr, int count);
	public final static native void PolygonShape_setAsBox(long pshapePtr, float x, float y);
	public final static native void PolygonShape_setAsBox2(long pshapePtr, float x, float y, long centerPtr, float angle);
	public final static native int PolygonShape_getVertexCount(long pshapePtr);

	// CircleShape
	public final static native long CircleShape_new();
	public final static native void CircleShape_delete(long circleShapePtr);

	// ChainShape
	public final static native long ChainShape_new();
	public final static native void ChainShape_delete(long chainShapePtr);

	// EdgeShape
	public final static native long EdgeShape_new();
	public final static native void EdgeShape_delete(long edgeShapePtr);

	// ParticleDef
	public final static native long ParticleDef_new();
	public final static native void ParticleDef_delete(long particleDefPtr);
	public final static native void ParticleDef_setFlags(long particleDefPtr, int flag);
	public final static native int ParticleDef_getFlags(long particleDefPtr);
	public final static native void ParticleDef_setPosition(long particleDefPtr, float x, float y);
	public final static native long ParticleDef_getPosition(long particleDefPtr);
	public final static native void ParticleDef_setVelocity(long particleDefPtr, long velocityPtr);
	public final static native long ParticleDef_getVelocity(long particleDefPtr);
	public final static native void ParticleDef_setColor(long particleDefPtr, long colorPtr);
	public final static native long ParticleDef_getColor(long particleDefPtr);
	public final static native void ParticleDef_setLifetime(long particleDefPtr, float lifetime);
	public final static native float ParticleDef_getLifetime(long particleDefPtr);
	public final static native void ParticleDef_setParticleGroup(long particleDefPtr, long particleGroupPtr);
	public final static native long ParticleDef_getParticleGroup(long particleDefPtr);

	// ParticleColor
	public final static native long ParticleColor_new();
	public final static native long ParticleColor_new2(int r, int g, int b, int a);
	public final static native void ParticleColor_delete(long particleColorPtr);
	public final static native boolean ParticleColor_isZero(long particleColorPtr);
	public final static native void ParticleColor_set(long particleColorPtr, int r, int g, int b, int a);

	// ParticleSystemDef
	public final static native long ParticleSystemDef_new();
	public final static native void ParticleSystemDef_delete(long particleSystemDefPtr);
	public final static native void ParticleSystemDef_setDensity(long particleSystemDefPtr, float density);
	public final static native float ParticleSystemDef_getDensity(long particleSystemDefPtr);
	public final static native void ParticleSystemDef_setGravityScale(long particleSystemDefPtr, float gravityScale);
	public final static native float ParticleSystemDef_getGravityScale(long particleSystemDefPtr);
	public final static native void ParticleSystemDef_setRadius(long particleSystemDefPtr, float radius);
	public final static native float ParticleSystemDef_getRadius(long particleSystemDefPtr);
	public final static native void ParticleSystemDef_setMaxCount(long particleSystemDefPtr, int maxCount);
	public final static native int ParticleSystemDef_getMaxCount(long particleSystemDefPtr);
	public final static native void ParticleSystemDef_setPressureStrength(long particleSystemDefPtr, float pressureStrength);
	public final static native float ParticleSystemDef_getPressureStrength(long particleSystemDefPtr);
	public final static native void ParticleSystemDef_setDampingStrength(long particleSystemDefPtr, float dampingStrength);
	public final static native float ParticleSystemDef_getDampingStrength(long particleSystemDefPtr);
	public final static native void ParticleSystemDef_setElasticStrength(long particleSystemDefPtr, float elasticStrength);
	public final static native float ParticleSystemDef_getElasticStrength(long particleSystemDefPtr);
	public final static native void ParticleSystemDef_setSpringStrength(long particleSystemDefPtr, float springStrength);
	public final static native float ParticleSystemDef_getSpringStrength(long particleSystemDefPtr);
	public final static native void ParticleSystemDef_setViscousStrength(long particleSystemDefPtr, float viscousStrength);
	public final static native float ParticleSystemDef_getViscousStrength(long particleSystemDefPtr);
	public final static native void ParticleSystemDef_setSurfaceTensionPressureStrength(long particleSystemDefPtr, float surfaceTensionPressureStrength);
	public final static native float ParticleSystemDef_getSurfaceTensionPressureStrength(long particleSystemDefPtr);
	public final static native void ParticleSystemDef_setSurfaceTensionNormalStrength(long particleSystemDefPtr, float surfaceTensionNormalStrength);
	public final static native float ParticleSystemDef_getSurfaceTensionNormalStrength(long particleSystemDefPtr);
	public final static native void ParticleSystemDef_setRepulsiveStrength(long particleSystemDefPtr, float repulsiveStrength);
	public final static native float ParticleSystemDef_getRepulsiveStrength(long particleSystemDefPtr);
	public final static native void ParticleSystemDef_setPowderStrength(long particleSystemDefPtr, float powderStrength);
	public final static native float ParticleSystemDef_getPowderStrength(long particleSystemDefPtr);
	public final static native void ParticleSystemDef_setEjectionStrength(long particleSystemDefPtr, float ejectionStrength);
	public final static native float ParticleSystemDef_getEjectionStrength(long particleSystemDefPtr);
	public final static native void ParticleSystemDef_setStaticPressureStrength(long particleSystemDefPtr, float staticPressureStrength);
	public final static native float ParticleSystemDef_getStaticPressureStrength(long particleSystemDefPtr);
	public final static native void ParticleSystemDef_setStaticPressureRelaxation(long particleSystemDefPtr, float staticPressureRelaxation);
	public final static native float ParticleSystemDef_getStaticPressureRelaxation(long particleSystemDefPtr);
	public final static native void ParticleSystemDef_setStaticPressureIterations(long particleSystemDefPtr, int staticPressureIterations);
	public final static native int ParticleSystemDef_getStaticPressureIterations(long particleSystemDefPtr);
	public final static native void ParticleSystemDef_setColorMixingStrength(long particleSystemDefPtr, float colorMixingStrength);
	public final static native float ParticleSystemDef_getColorMixingStrength(long particleSystemDefPtr);
	public final static native void ParticleSystemDef_setDestroyByAge(long particleSystemDefPtr, boolean destroy);
	public final static native boolean ParticleSystemDef_isDestroyByAge(long particleSystemDefPtr);
	public final static native void ParticleSystemDef_setLifetimeGranularity(long particleSystemDefPtr, float lifetimeGranularity);
	public final static native float ParticleSystemDef_getLifetimeGranularity(long particleSystemDefPtr);

	// ParticleGroupDef
	public final static native long ParticleGroupDef_new();
	public final static native void ParticleGroupDef_delete(long particleGroupDefPtr);
	public final static native void ParticleGroupDef_setFlags(long particleGroupDefPtr, int flags);
	public final static native int ParticleGroupDef_getFlags(long particleGroupDefPtr);
	public final static native void ParticleGroupDef_setGroupFlags(long particleGroupDefPtr, int flags);
	public final static native int ParticleGroupDef_getGroupFlags(long particleGroupDefPtr);
	public final static native void ParticleGroupDef_setPosition(long particleGroupDefPtr, long posPtr);
	public final static native long ParticleGroupDef_getPosition(long particleGroupDefPtr);
	public final static native void ParticleGroupDef_setAngle(long particleGroupDefPtr, float angle);
	public final static native float ParticleGroupDef_getAngle(long particleGroupDefPtr);
	public final static native void ParticleGroupDef_setLinearVelocity(long particleGroupDefPtr, long velocityPtr);
	public final static native long ParticleGroupDef_getLinearVelocity(long particleGroupDefPtr);
	public final static native void ParticleGroupDef_setAngularVelocity(long particleGroupDefPtr, float velocity);
	public final static native float ParticleGroupDef_getAngularVelocity(long particleGroupDefPtr);
	public final static native void ParticleGroupDef_setColor(long particleGroupDefPtr, long colorPtr);
	public final static native long ParticleGroupDef_getColor(long particleGroupDefPtr);
	public final static native void ParticleGroupDef_setStrength(long particleGroupDefPtr, float strength);
	public final static native float ParticleGroupDef_getStrength(long particleGroupDefPtr);
	public final static native void ParticleGroupDef_setShape(long particleGroupDefPtr, long shapePtr);
	public final static native long ParticleGroupDef_getShape(long particleGroupDefPtr);
	public final static native void ParticleGroupDef_setShapes(long particleGroupDefPtr, long shapesPtr);
	public final static native long ParticleGroupDef_getShapes(long particleGroupDefPtr);
	public final static native void ParticleGroupDef_setShapeCount(long particleGroupDefPtr, int count);
	public final static native int ParticleGroupDef_getShapeCount(long particleGroupDefPtr);
	public final static native void ParticleGroupDef_setStride(long particleGroupDefPtr, float stride);
	public final static native float ParticleGroupDef_getStride(long particleGroupDefPtr);
	public final static native void ParticleGroupDef_setParticleCount(long particleGroupDefPtr, int count);
	public final static native int ParticleGroupDef_getParticleCount(long particleGroupDefPtr);
	public final static native void ParticleGroupDef_setPositionData(long particleGroupDefPtr, long positionsPtr);
	public final static native long ParticleGroupDef_getPositionData(long particleGroupDefPtr);
	public final static native void ParticleGroupDef_setLifetime(long particleGroupDefPtr, float lifetime);
	public final static native float ParticleGroupDef_getLifetime(long particleGroupDefPtr);
	public final static native void ParticleGroupDef_setGroup(long particleGroupDefPtr, long groupPtr);
	public final static native long ParticleGroupDef_getGroup(long particleGroupDefPtr);

	// ParticleGroup
	public final static native long ParticleGroup_getNext(long particleGroupPtr);
	public final static native long ParticleGroup_getParticleSystem(long particleGroupPtr);
	public final static native int ParticleGroup_getParticleCount(long particleGroupPtr);
	public final static native int ParticleGroup_getBufferIndex(long particleGroupPtr);
	public final static native boolean ParticleGroup_containsParticle(long particleGroupPtr, int particleIndex);
	public final static native int ParticleGroup_getAllParticleFlags(long particleGroupPtr);
	public final static native void ParticleGroup_setGroupFlags(long particleGroupPtr, int flags);
	public final static native int ParticleGroup_getGroupFlags(long particleGroupPtr);
	public final static native float ParticleGroup_getMass(long particleGroupPtr);
	public final static native float ParticleGroup_getInertia(long particleGroupPtr);
	public final static native long ParticleGroup_getCenter(long particleGroupPtr);
	public final static native long ParticleGroup_getLinearVelocity(long particleGroupPtr);
	public final static native float ParticleGroup_getAngularVelocity(long particleGroupPtr);
	public final static native long ParticleGroup_getTransform(long particleGroupPtr);
	public final static native long ParticleGroup_getPosition(long particleGroupPtr);
	public final static native float ParticleGroup_getAngle(long particleGroupPtr);
	public final static native long ParticleGroup_getLinearVelocityFromWorldPoint(long particleGroupPtr, long worldPointPtr);
	public final static native void ParticleGroup_applyForce(long particleGroupPtr, long forcePtr);
	public final static native void ParticleGroup_applyLinearImpulse(long particleGroupPtr, long impulsePtr);
	public final static native void ParticleGroup_destroyParticles(long particleGroupPtr, boolean callDestructionListener);
	public final static native void ParticleGroup_destroyParticles2(long particleGroupPtr);

	// ParticleSystem
	public final static native int ParticleSystem_createParticle(long particleSystemPtr, long particleDefPtr);
	public final static native void ParticleSystem_destroyParticle(long particleSystemPtr, int particleIndex);
	public final static native void ParticleSystem_getPositionBuffer(long particleSystemPtr, int startIndex, int particleCount, ByteBuffer outBuffer);
	public final static native void ParticleSystem_getWeightBuffer(long particleSystemPtr, ByteBuffer outBuffer);
	public final static native void ParticleSystem_getVelocityBuffer(long particleSystemPtr, ByteBuffer outBuffer);
	public final static native void ParticleSystem_getColorBuffer(long particleSystemPtr, int startIndex, int particleCount, ByteBuffer outBuffer);
	public final static native void ParticleSystem_getStuckCandidates(long particleSystemPtr, ByteBuffer outBuffer);
	public final static native int ParticleSystem_getStuckCandidatesCount(long particleSystemPtr);
	public final static native void ParticleSystem_setDestructionByAge(long particleSystemPtr, boolean isDestroyingByAge);
	public final static native int ParticleSystem_getParticleCount(long particleSystemPtr);
	public final static native int ParticleSystem_getParticleGroupCount(long particleSystemPtr);
	public final static native long ParticleSystem_getParticleGroupList(long particleSystemPtr);
	public final static native void ParticleSystem_setMaxParticleCount(long particleSystemPtr, int maxCount);
	public final static native int ParticleSystem_getMaxParticleCount(long particleSystemPtr);
	public final static native long ParticleSystem_createParticleGroup(long particleSystemPtr, long particleGroupDefPtr);
	public final static native void ParticleSystem_setParticleLifetime(long particleSystemPtr, int particleIndex, float lifetime);

	// Transform
	public final static native long Transform_new();
	public final static native void Transform_delete(long transformPtr);



}
