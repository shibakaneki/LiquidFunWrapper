#include <jni.h>
#include "../../../libs/liquidfun/include/Box2D/Dynamics/b2Body.h"
#include "../../../libs/liquidfun/include/Box2D/Dynamics/b2Fixture.h"
#include "../../../libs/liquidfun/include/Box2D/Collision/Shapes/b2Shape.h"

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Body_1createFixture(
        JNIEnv* env,
        jobject obj,
        jlong bodyPtr,
        jlong fixtureDefPtr){

    b2Body* pBody = reinterpret_cast<b2Body*>(bodyPtr);
    b2FixtureDef* pFixtureDef = (b2FixtureDef*)fixtureDefPtr;
    return reinterpret_cast<jlong>(pBody->CreateFixture(pFixtureDef));
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Body_1destroyFixture(
        JNIEnv* env,
        jobject obj,
        jlong bodyPtr,
        jlong fixturePtr){

    b2Body* pBody = reinterpret_cast<b2Body*>(bodyPtr);
    b2Fixture* pFixture = (b2Fixture*)fixturePtr;
    pBody->DestroyFixture(pFixture);
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Body_1setTransform(
        JNIEnv* env,
        jobject obj,
        jlong bodyPtr,
        float x,
        jfloat y,
        jfloat angle){

    b2Body* pBody = reinterpret_cast<b2Body*>(bodyPtr);
    pBody->SetTransform((float32)x, (float32)y, angle);
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Body_1setTransform2(
        JNIEnv* env,
        jobject obj,
        jlong bodyPtr,
        jlong posPtr,
        jfloat angle){

    b2Body* pBody = reinterpret_cast<b2Body*>(bodyPtr);
    b2Vec2* pPos = (b2Vec2*)posPtr;
    pBody->SetTransform(*pPos, angle);
}

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Body_1createFixture2(
        JNIEnv* env,
        jobject obj,
        jlong bodyPtr,
        jlong shapePtr,
        jfloat density){

    b2Body* pBody = reinterpret_cast<b2Body*>(bodyPtr);
    b2Shape* pShape = (b2Shape*)shapePtr;
    return reinterpret_cast<jlong>(pBody->CreateFixture(pShape, (float)density));
}

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Body_1getPosition(
        JNIEnv* env,
        jobject obj,
        jlong bodyPtr){

    b2Body* pBody = reinterpret_cast<b2Body*>(bodyPtr);
    const b2Vec2& position = pBody->GetPosition();
    b2Vec2* pPosition = new b2Vec2(position.x, position.y);
    return reinterpret_cast<jlong>(pPosition);
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Body_1getAngle(
        JNIEnv* env,
        jobject obj,
        jlong bodyPtr){

    b2Body* pBody = reinterpret_cast<b2Body*>(bodyPtr);
    return (jfloat)pBody->GetAngle();
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Body_1setLinearVelocity(
        JNIEnv* env,
        jobject obj,
        jlong bodyPtr,
        jlong velocityPtr){

    b2Body* pBody = reinterpret_cast<b2Body*>(bodyPtr);
    b2Vec2* pVelocity = (b2Vec2*)velocityPtr;
    pBody->SetLinearVelocity(*pVelocity);
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Body_1setAngularVelocity(
        JNIEnv* env,
        jobject obj,
        jlong bodyPtr,
        jfloat velocity){

    b2Body* pBody = reinterpret_cast<b2Body*>(bodyPtr);
    pBody->SetAngularVelocity((float32)velocity);
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Body_1setGravityScale(
        JNIEnv* env,
        jobject obj,
        jlong bodyPtr,
        jfloat scale){

    b2Body* pBody = reinterpret_cast<b2Body*>(bodyPtr);
    pBody->SetGravityScale((float32)scale);
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Body_1getGravityScale(
        JNIEnv* env,
        jobject obj,
        jlong bodyPtr){

    b2Body* pBody = reinterpret_cast<b2Body*>(bodyPtr);
    return (jfloat)pBody->GetGravityScale();
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Body_1getPositionX(
        JNIEnv* env,
        jobject obj,
        jlong bodyPtr){

    b2Body* pBody = reinterpret_cast<b2Body*>(bodyPtr);
    return (jfloat)pBody->GetPositionX();
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Body_1getPositionY(
        JNIEnv* env,
        jobject obj,
        jlong bodyPtr){

    b2Body* pBody = reinterpret_cast<b2Body*>(bodyPtr);
    return (jfloat)pBody->GetPositionY();
}

#ifdef __cplusplus
}
#endif