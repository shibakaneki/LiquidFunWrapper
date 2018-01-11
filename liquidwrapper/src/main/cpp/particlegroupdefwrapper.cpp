#include <jni.h>
#include "../../../libs/liquidfun/include/Box2D/Particle/b2ParticleGroup.h"
#include "../../../libs/liquidfun/include/Box2D/Particle/b2Particle.h"
#include "../../../libs/liquidfun/include/Box2D/Common/b2Math.h"
#include "../../../libs/liquidfun/include/Box2D/Collision/Shapes/b2Shape.h"

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroupDef_1new(
        JNIEnv *env,
        jobject obj){

    return (jlong)new b2ParticleGroupDef();
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroupDef_1delete(
        JNIEnv *env,
        jobject obj,
        jlong ptr){

    delete (b2ParticleGroupDef*)ptr;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroupDef_1setFlags(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupDefPtr,
        jint flags){

    b2ParticleGroupDef* pPartGroupDef = (b2ParticleGroupDef*)particleGroupDefPtr;
    pPartGroupDef->flags = (uint32)flags;
}

JNIEXPORT jint JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroupDef_1getFlags(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupDefPtr){

    b2ParticleGroupDef* pPartGroupDef = (b2ParticleGroupDef*)particleGroupDefPtr;
    return (jint)pPartGroupDef->flags;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroupDef_1setGroupFlags(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupDefPtr,
        jint flags){

    b2ParticleGroupDef* pPartGroupDef = (b2ParticleGroupDef*)particleGroupDefPtr;
    pPartGroupDef->groupFlags = (uint32)flags;
}

JNIEXPORT jint JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroupDef_1getGroupFlags(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupDefPtr){

    b2ParticleGroupDef* pPartGroupDef = (b2ParticleGroupDef*)particleGroupDefPtr;
    return (jint)pPartGroupDef->groupFlags;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroupDef_1setPosition(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupDefPtr,
        jlong position){

    b2ParticleGroupDef* pPartGroupDef = (b2ParticleGroupDef*)particleGroupDefPtr;
    b2Vec2* pPos = (b2Vec2*)position;
    pPartGroupDef->position = *pPos;
}

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroupDef_1getPosition(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupDefPtr){

    b2ParticleGroupDef* pPartGroupDef = (b2ParticleGroupDef*)particleGroupDefPtr;
    b2Vec2 position = pPartGroupDef->position;
    return (jlong)new b2Vec2(position.x, position.y);
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroupDef_1setAngle(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupDefPtr,
        jfloat angle){

    b2ParticleGroupDef* pPartGroupDef = (b2ParticleGroupDef*)particleGroupDefPtr;
    pPartGroupDef->angle = (float32) angle;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroupDef_1getAngle(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupDefPtr){

    b2ParticleGroupDef* pPartGroupDef = (b2ParticleGroupDef*)particleGroupDefPtr;
    return (jfloat)pPartGroupDef->angle;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroupDef_1setLinearVelocity(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupDefPtr,
        jlong velocityPtr){

    b2ParticleGroupDef* pPartGroupDef = (b2ParticleGroupDef*)particleGroupDefPtr;
    b2Vec2* pVelocity = (b2Vec2*)velocityPtr;
    pPartGroupDef->linearVelocity = *pVelocity;
}

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroupDef_1getLinearVelocity(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupDefPtr){

    b2ParticleGroupDef* pPartGroupDef = (b2ParticleGroupDef*)particleGroupDefPtr;
    b2Vec2 velocity = pPartGroupDef->linearVelocity;
    return (jlong)new b2Vec2(velocity.x, velocity.y);
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroupDef_1setAngularVelocity(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupDefPtr,
        jfloat velocity){

    b2ParticleGroupDef* pPartGroupDef = (b2ParticleGroupDef*)particleGroupDefPtr;
    pPartGroupDef->angularVelocity = (float32)velocity;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroupDef_1getAngularVelocity(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupDefPtr){

    b2ParticleGroupDef* pPartGroupDef = (b2ParticleGroupDef*)particleGroupDefPtr;
    return (jfloat)pPartGroupDef->angularVelocity;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroupDef_1setColor(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupDefPtr,
        jlong colorPtr){

    b2ParticleGroupDef* pPartGroupDef = (b2ParticleGroupDef*)particleGroupDefPtr;
    b2ParticleColor* pColor = (b2ParticleColor*)colorPtr;
    pPartGroupDef->color = *pColor;
}

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroupDef_1getColor(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupDefPtr){

    b2ParticleGroupDef* pPartGroupDef = (b2ParticleGroupDef*)particleGroupDefPtr;
    return (jlong)new b2ParticleColor(pPartGroupDef->color);
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroupDef_1setStrength(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupDefPtr,
        jfloat strength){

    b2ParticleGroupDef* pPartGroupDef = (b2ParticleGroupDef*)particleGroupDefPtr;
    pPartGroupDef->strength = (float32)strength;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroupDef_1getStrength(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupDefPtr){

    b2ParticleGroupDef* pPartGroupDef = (b2ParticleGroupDef*)particleGroupDefPtr;
    return (jfloat)pPartGroupDef->strength;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroupDef_1setShape(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupDefPtr,
        jlong shapePtr){

    b2ParticleGroupDef* pPartGroupDef = (b2ParticleGroupDef*)particleGroupDefPtr;
    b2Shape* pShape = (b2Shape*)shapePtr;
    pPartGroupDef->shape = pShape;
}

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroupDef_1getShape(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupDefPtr){

    b2ParticleGroupDef* pPartGroupDef = (b2ParticleGroupDef*)particleGroupDefPtr;
    return (jlong)pPartGroupDef->shape;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroupDef_1setShapes(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupDefPtr,
        jlong shapePtr){

    b2ParticleGroupDef* pPartGroupDef = (b2ParticleGroupDef*)particleGroupDefPtr;
    const b2Shape* pShape = (b2Shape*)shapePtr;
    pPartGroupDef->shapes = &pShape;
}

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroupDef_1getShapes(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupDefPtr){

    b2ParticleGroupDef* pPartGroupDef = (b2ParticleGroupDef*)particleGroupDefPtr;
    return (jlong)pPartGroupDef->shapes;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroupDef_1setShapeCount(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupDefPtr,
        jint count){

    b2ParticleGroupDef* pPartGroupDef = (b2ParticleGroupDef*)particleGroupDefPtr;
    pPartGroupDef->shapeCount = (int32)count;
}

JNIEXPORT jint JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroupDef_1getShapeCount(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupDefPtr){

    b2ParticleGroupDef* pPartGroupDef = (b2ParticleGroupDef*)particleGroupDefPtr;
    return (jint)pPartGroupDef->shapeCount;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroupDef_1setStride(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupDefPtr,
        jfloat stride){

    b2ParticleGroupDef* pPartGroupDef = (b2ParticleGroupDef*)particleGroupDefPtr;
    pPartGroupDef->stride = (float32)stride ;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroupDef_1getStride(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupDefPtr){

    b2ParticleGroupDef* pPartGroupDef = (b2ParticleGroupDef*)particleGroupDefPtr;
    return (jfloat)pPartGroupDef->stride;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroupDef_1setParticleCount(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupDefPtr,
        jint count){

    b2ParticleGroupDef* pPartGroupDef = (b2ParticleGroupDef*)particleGroupDefPtr;
    pPartGroupDef->particleCount = (int32)count;
}

JNIEXPORT jint JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroupDef_1getParticleCount(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupDefPtr){

    b2ParticleGroupDef* pPartGroupDef = (b2ParticleGroupDef*)particleGroupDefPtr;
    return (jint)pPartGroupDef->particleCount;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroupDef_1setPositionData(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupDefPtr,
        jlong posPtr){

    b2ParticleGroupDef* pPartGroupDef = (b2ParticleGroupDef*)particleGroupDefPtr;
    b2Vec2* pPos = (b2Vec2*)posPtr;
    pPartGroupDef->positionData = pPos;
}

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroupDef_1getPositionData(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupDefPtr){

    b2ParticleGroupDef* pPartGroupDef = (b2ParticleGroupDef*)particleGroupDefPtr;
    return (jlong)pPartGroupDef->positionData;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroupDef_1setLifetime(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupDefPtr,
        jfloat lifetime){

    b2ParticleGroupDef* pPartGroupDef = (b2ParticleGroupDef*)particleGroupDefPtr;
    pPartGroupDef->lifetime = (float32)lifetime ;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroupDef_1getLifetime(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupDefPtr){

    b2ParticleGroupDef* pPartGroupDef = (b2ParticleGroupDef*)particleGroupDefPtr;
    return (jfloat)pPartGroupDef->lifetime;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroupDef_1setGroup(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupDefPtr,
        jlong groupPtr){

    b2ParticleGroupDef* pPartGroupDef = (b2ParticleGroupDef*)particleGroupDefPtr;
    b2ParticleGroup* pGroup = (b2ParticleGroup*)groupPtr;
    pPartGroupDef->group = pGroup;
}

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroupDef_1getGroup(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupDefPtr){

    b2ParticleGroupDef* pPartGroupDef = (b2ParticleGroupDef*)particleGroupDefPtr;
    return (jlong)pPartGroupDef->group;
}


#ifdef __cplusplus
}
#endif