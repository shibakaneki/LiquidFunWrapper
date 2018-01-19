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

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Body_1setActive(
        JNIEnv* env,
        jobject obj,
        jlong bodyPtr,
        jboolean isActive){

    b2Body* pBody = reinterpret_cast<b2Body*>(bodyPtr);
    pBody->SetActive((bool)isActive);
}

JNIEXPORT jboolean JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Body_1isActive(
        JNIEnv* env,
        jobject obj,
        jlong bodyPtr){

    b2Body* pBody = reinterpret_cast<b2Body*>(bodyPtr);
    return (jfloat)pBody->IsActive();
}

#ifdef __cplusplus
}
#endif