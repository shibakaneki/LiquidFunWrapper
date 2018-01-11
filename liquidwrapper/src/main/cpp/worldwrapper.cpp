#include <jni.h>
#include "../../../libs/liquidfun/include/Box2D/Dynamics/b2World.h"
#include "../../../libs/liquidfun/include/Box2D/Common/b2Math.h"
#include "../../../libs/liquidfun/include/Box2D/Particle/b2ParticleSystem.h"

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_World_1new(
        JNIEnv *env,
        jobject obj,
        jfloat gravityX,
        jfloat gravityY){

    b2Vec2 gravityVector;
    gravityVector.x = (float)gravityX;
    gravityVector.y = (float)gravityY;
    b2World* world = new b2World(gravityVector);

    return (jlong)world;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_World_1delete(
        JNIEnv* env,
        jobject obj,
        jlong worldPtr){

    b2World* world = (b2World*)worldPtr;
    delete world;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_World_1step2(
        JNIEnv* env,
        jobject obj,
        jlong worldPtr,
        jfloat timeStep,
        jint velocityIterations,
        jint positionIterations
){
    b2World* world = (b2World*)worldPtr;
    if(NULL != world){
        world->Step((float)timeStep, (int32)velocityIterations, (int32)positionIterations);
    }
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_World_1step(
        JNIEnv* env,
        jobject obj,
        jlong worldPtr,
        jfloat timeStep,
        jint velocityIterations,
        jint positionIterations,
        jint particleIterations
){
    b2World* world = (b2World*)worldPtr;
    if(NULL != world){
        world->Step((float)timeStep, (int32)velocityIterations, (int32)positionIterations, (int32)particleIterations);
    }
}

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_World_1createBody(
        JNIEnv* env,
        jobject obj,
        jlong worldPtr,
        jlong bodyDefPtr){

    b2World* world = (b2World*)worldPtr;
    b2BodyDef* def = (b2BodyDef*)bodyDefPtr;

    return (jlong)world->CreateBody(def);
}

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_World_1createParticleSystem(
        JNIEnv* env,
        jobject obj,
        jlong worldPtr,
        jlong particleDefPtr){

    b2World* world = (b2World*)worldPtr;
    b2ParticleSystemDef* def = (b2ParticleSystemDef*)particleDefPtr;

    return (jlong)world->CreateParticleSystem(def);
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_World_1destroyParticleSystem(
        JNIEnv* env,
        jobject obj,
        jlong worldPtr,
        jlong particleSystemPtr){

    b2World* world = (b2World*)worldPtr;
    b2ParticleSystem* pSys = (b2ParticleSystem*)particleSystemPtr;

    world->DestroyParticleSystem(pSys);
}

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_World_1getGravity(
        JNIEnv* env,
        jobject obj,
        jlong worldPtr){

    b2World* world = (b2World*)worldPtr;
    b2Vec2 gravity = world->GetGravity();
    b2Vec2* pGravity = new b2Vec2(gravity.x, gravity.y);
    return (jlong)pGravity;
}

#ifdef __cplusplus
}
#endif