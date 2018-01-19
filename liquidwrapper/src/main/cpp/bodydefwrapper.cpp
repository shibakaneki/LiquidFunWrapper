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
#include "../../../libs/liquidfun/include/Box2D/Common/b2Math.h"

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_BodyDef_1new(
        JNIEnv* env,
        jobject obj){

    return (jlong)new b2BodyDef;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_BodyDef_1delete(
        JNIEnv* env,
        jobject obj,
        jlong ptr){

    b2BodyDef* pBodyDef = (b2BodyDef*)ptr;
    delete pBodyDef;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_BodyDef_1setType(
        JNIEnv* env,
        jobject obj,
        jlong bodyDefPtr,
        jint type){

    b2BodyDef* pBodyDef = (b2BodyDef*)bodyDefPtr;
    pBodyDef->type = (b2BodyType)type;
}

JNIEXPORT jint JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_BodyDef_1getType(
        JNIEnv* env,
        jobject obj,
        jlong bodyDefPtr){
    b2BodyDef* pBodyDef = (b2BodyDef*)bodyDefPtr;
    return (NULL != pBodyDef) ? (jint)pBodyDef->type : 0;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_BodyDef_1setAngle(
        JNIEnv* env,
        jobject obj,
        jlong bodyDefPtr,
        jfloat angle){

    b2BodyDef* pBodyDef = (b2BodyDef*)bodyDefPtr;
    pBodyDef->angle = (float)angle;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_BodyDef_1getAngle(
        JNIEnv* env,
        jobject obj,
        jlong bodyDefPtr){
    b2BodyDef* pBodyDef = (b2BodyDef*)bodyDefPtr;
    return (NULL != pBodyDef) ? (jfloat)pBodyDef->angle : 0;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_BodyDef_1setAngularVelocity(
        JNIEnv* env,
        jobject obj,
        jlong bodyDefPtr,
        jfloat angularVelocity){

    b2BodyDef* pBodyDef = (b2BodyDef*)bodyDefPtr;
    pBodyDef->angularVelocity = (float)angularVelocity;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_BodyDef_1getAngularVelocity(
        JNIEnv* env,
        jobject obj,
        jlong bodyDefPtr){
    b2BodyDef* pBodyDef = (b2BodyDef*)bodyDefPtr;
    return (NULL != pBodyDef) ? (jfloat)pBodyDef->angularVelocity : 0;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_BodyDef_1setAngularDamping(
        JNIEnv* env,
        jobject obj,
        jlong bodyDefPtr,
        jfloat angularDamping){

    b2BodyDef* pBodyDef = (b2BodyDef*)bodyDefPtr;
    pBodyDef->angularDamping = (float)angularDamping;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_BodyDef_1getAngularDamping(
        JNIEnv* env,
        jobject obj,
        jlong bodyDefPtr){
    b2BodyDef* pBodyDef = (b2BodyDef*)bodyDefPtr;
    return (NULL != pBodyDef) ? (jfloat)pBodyDef->angularDamping : 0;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_BodyDef_1setLinearDamping(
        JNIEnv* env,
        jobject obj,
        jlong bodyDefPtr,
        jfloat linearDamping){

    b2BodyDef* pBodyDef = (b2BodyDef*)bodyDefPtr;
    pBodyDef->linearDamping = (float)linearDamping;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_BodyDef_1getLinearDamping(
        JNIEnv* env,
        jobject obj,
        jlong bodyDefPtr){
    b2BodyDef* pBodyDef = (b2BodyDef*)bodyDefPtr;
    return (NULL != pBodyDef) ? (jfloat)pBodyDef->linearDamping : 0;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_BodyDef_1setGravityScale(
        JNIEnv* env,
        jobject obj,
        jlong bodyDefPtr,
        jfloat gravityScale){

    b2BodyDef* pBodyDef = (b2BodyDef*)bodyDefPtr;
    pBodyDef->gravityScale = (float)gravityScale;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_BodyDef_1getGravityScale(
        JNIEnv* env,
        jobject obj,
        jlong bodyDefPtr){
    b2BodyDef* pBodyDef = (b2BodyDef*)bodyDefPtr;
    return (NULL != pBodyDef) ? (jfloat)pBodyDef->gravityScale : 0;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_BodyDef_1setAllowSleep(
        JNIEnv* env,
        jobject obj,
        jlong bodyDefPtr,
        jboolean allowSleep){

    b2BodyDef* pBodyDef = (b2BodyDef*)bodyDefPtr;
    pBodyDef->allowSleep = (bool)allowSleep;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_BodyDef_1getAllowSleep(
        JNIEnv* env,
        jobject obj,
        jlong bodyDefPtr){
    b2BodyDef* pBodyDef = (b2BodyDef*)bodyDefPtr;
    return (NULL != pBodyDef) ? (jboolean)pBodyDef->allowSleep : 0;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_BodyDef_1setAwake(
        JNIEnv* env,
        jobject obj,
        jlong bodyDefPtr,
        jboolean isAwake){

    b2BodyDef* pBodyDef = (b2BodyDef*)bodyDefPtr;
    pBodyDef->awake = (bool)isAwake;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_BodyDef_1getAwake(
        JNIEnv* env,
        jobject obj,
        jlong bodyDefPtr){
    b2BodyDef* pBodyDef = (b2BodyDef*)bodyDefPtr;
    return (NULL != pBodyDef) ? (jboolean)pBodyDef->awake : 0;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_BodyDef_1setFixedRotation(
        JNIEnv* env,
        jobject obj,
        jlong bodyDefPtr,
        jboolean isFixed){

    b2BodyDef* pBodyDef = (b2BodyDef*)bodyDefPtr;
    pBodyDef->fixedRotation = (bool)isFixed;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_BodyDef_1getFixedRotation(
        JNIEnv* env,
        jobject obj,
        jlong bodyDefPtr){
    b2BodyDef* pBodyDef = (b2BodyDef*)bodyDefPtr;
    return (NULL != pBodyDef) ? (jboolean)pBodyDef->fixedRotation : 0;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_BodyDef_1setBullet(
        JNIEnv* env,
        jobject obj,
        jlong bodyDefPtr,
        jboolean isBullet){

    b2BodyDef* pBodyDef = (b2BodyDef*)bodyDefPtr;
    pBodyDef->bullet = (bool)isBullet;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_BodyDef_1getBullet(
        JNIEnv* env,
        jobject obj,
        jlong bodyDefPtr){
    b2BodyDef* pBodyDef = (b2BodyDef*)bodyDefPtr;
    return (NULL != pBodyDef) ? (jboolean)pBodyDef->bullet : 0;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_BodyDef_1setActive(
        JNIEnv* env,
        jobject obj,
        jlong bodyDefPtr,
        jboolean isActive){

    b2BodyDef* pBodyDef = (b2BodyDef*)bodyDefPtr;
    pBodyDef->active = (bool)isActive;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_BodyDef_1getActive(
        JNIEnv* env,
        jobject obj,
        jlong bodyDefPtr){
    b2BodyDef* pBodyDef = (b2BodyDef*)bodyDefPtr;
    return (NULL != pBodyDef) ? (jboolean)pBodyDef->active : 0;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_BodyDef_1setPosition(
        JNIEnv* env,
        jobject obj,
        jlong bodyDefPtr,
        jfloat x,
        jfloat y){

    b2BodyDef* pBodyDef = (b2BodyDef*)bodyDefPtr;
    pBodyDef->SetPosition(x, y);
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_BodyDef_1setPosition2(
        JNIEnv* env,
        jobject obj,
        jlong bodyDefPtr,
        jlong posPtr){

    b2BodyDef* pBodyDef = (b2BodyDef*)bodyDefPtr;
    b2Vec2* pPos = (b2Vec2*)posPtr;
    pBodyDef->position = *pPos;
}

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_BodyDef_1getPosition(
        JNIEnv* env,
        jobject obj,
        jlong bodyDefPtr){

    b2BodyDef* pBodyDef = (b2BodyDef*)bodyDefPtr;
    return (jlong)&pBodyDef->position;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_BodyDef_1setLinearVelocity(
        JNIEnv* env,
        jobject obj,
        jlong bodyDefPtr,
        jlong linearVelocityPtr){

    b2BodyDef* pBodyDef = (b2BodyDef*)bodyDefPtr;
    b2Vec2* pLinearVelocity = (b2Vec2*)linearVelocityPtr;
    pBodyDef->linearVelocity = *pLinearVelocity;
}

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_BodyDef_1getLinearVelocity(
        JNIEnv* env,
        jobject obj,
        jlong bodyDefPtr){

    b2BodyDef* pBodyDef = (b2BodyDef*)bodyDefPtr;
    return (jlong)&pBodyDef->linearVelocity;
}

#ifdef __cplusplus
}
#endif