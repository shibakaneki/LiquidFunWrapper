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
#include "../../../libs/liquidfun/include/Box2D/Particle/b2Particle.h"
#include "../../../libs/liquidfun/include/Box2D/Particle/b2ParticleGroup.h"
#include "../../../libs/liquidfun/include/Box2D/Common/b2Math.h"

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleDef_1new(
        JNIEnv *env,
        jobject obj){

    return (jlong)new b2ParticleDef();
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleDef_1delete(
        JNIEnv* env,
        jobject obj,
        jlong ptr){

    b2ParticleDef* pParticleDef = (b2ParticleDef*)ptr;
    delete pParticleDef;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleDef_1setFlags(
        JNIEnv *env,
        jobject obj,
        jlong particleDefPtr,
        jint flags){

    b2ParticleDef* pPdef = (b2ParticleDef*)particleDefPtr;
    pPdef->flags = flags;
}

JNIEXPORT jint JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleDef_1getFlags(
        JNIEnv *env,
        jobject obj,
        jlong particleDefPtr){

    b2ParticleDef* pPdef = (b2ParticleDef*)particleDefPtr;
    return (jint)pPdef->flags;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleDef_1setPosition(
        JNIEnv *env,
        jobject obj,
        jlong particleDefPtr,
        jfloat x,
        jfloat y){

    b2ParticleDef* pPdef = (b2ParticleDef*)particleDefPtr;
    pPdef->SetPosition((float)x, (float)y);
}

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleDef_1getPosition(
        JNIEnv *env,
        jobject obj,
        jlong particleDefPtr){

    b2ParticleDef* pPdef = (b2ParticleDef*)particleDefPtr;
    b2Vec2 position = pPdef->position;
    return (jlong)new b2Vec2(position.x, position.y);
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleDef_1setVelocity(
        JNIEnv *env,
        jobject obj,
        jlong particleDefPtr,
        jlong velocityPtr){

    b2ParticleDef* pPdef = (b2ParticleDef*)particleDefPtr;
    b2Vec2* pVelocity = (b2Vec2*)velocityPtr;
    pPdef->velocity = *pVelocity;
}

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleDef_1getVelocity(
        JNIEnv *env,
        jobject obj,
        jlong particleDefPtr){

    b2ParticleDef* pPdef = (b2ParticleDef*)particleDefPtr;
    b2Vec2 velocity = pPdef->velocity;
    return (jlong)new b2Vec2(velocity.x, velocity.y);
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleDef_1setColor(
        JNIEnv *env,
        jobject obj,
        jlong particleDefPtr,
        jlong colorPtr){

    b2ParticleDef* pPdef = (b2ParticleDef*)particleDefPtr;
    b2ParticleColor* pColor = (b2ParticleColor*)colorPtr;
    pPdef->color = *pColor;
}

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleDef_1getColor(
        JNIEnv *env,
        jobject obj,
        jlong particleDefPtr){

    b2ParticleDef* pPdef = (b2ParticleDef*)particleDefPtr;
    b2ParticleColor color = pPdef->color;
    return (jlong)new b2ParticleColor(color);
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleDef_1setLifetime(
        JNIEnv *env,
        jobject obj,
        jlong particleDefPtr,
        jfloat lifetime){

    b2ParticleDef* pPdef = (b2ParticleDef*)particleDefPtr;
    pPdef->lifetime = (float)lifetime;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleDef_1getLifetime(
        JNIEnv *env,
        jobject obj,
        jlong particleDefPtr){

    b2ParticleDef* pPdef = (b2ParticleDef*)particleDefPtr;
    return (jfloat)pPdef->lifetime;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleDef_1setParticleGroup(
        JNIEnv *env,
        jobject obj,
        jlong particleDefPtr,
        jlong particleGroupPtr){

    b2ParticleDef* pPdef = (b2ParticleDef*)particleDefPtr;
    b2ParticleGroup* pGroup = (b2ParticleGroup*)particleGroupPtr;
    pPdef->group = pGroup;
}

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleDef_1getParticleGroup(
        JNIEnv *env,
        jobject obj,
        jlong particleDefPtr){

    b2ParticleDef* pPdef = (b2ParticleDef*)particleDefPtr;
    return (jlong)pPdef->group;
}

#ifdef __cplusplus
}
#endif