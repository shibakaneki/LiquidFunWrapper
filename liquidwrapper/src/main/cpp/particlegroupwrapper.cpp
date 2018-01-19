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
#include "../../../libs/liquidfun/include/Box2D/Particle/b2ParticleGroup.h"
#include "../../../libs/liquidfun/include/Box2D/Common/b2Math.h"

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroup_1getNext(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupPtr){

    b2ParticleGroup* pGroup = (b2ParticleGroup*)particleGroupPtr;
    return (jlong)pGroup->GetNext();
}

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroup_1getParticleSystem(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupPtr){

    b2ParticleGroup* pGroup = (b2ParticleGroup*)particleGroupPtr;
    return (jlong)pGroup->GetParticleSystem();
}

JNIEXPORT jint JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroup_1getParticleCount(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupPtr){

    b2ParticleGroup* pGroup = (b2ParticleGroup*)particleGroupPtr;
    return (jint)pGroup->GetParticleCount();
}

JNIEXPORT jint JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroup_1getBufferIndex(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupPtr){

    b2ParticleGroup* pGroup = (b2ParticleGroup*)particleGroupPtr;
    return (jint)pGroup->GetBufferIndex();
}

JNIEXPORT jboolean JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroup_1containsParticle(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupPtr,
        jint particleIndex){

    b2ParticleGroup* pGroup = (b2ParticleGroup*)particleGroupPtr;
    return (jboolean)pGroup->ContainsParticle((int32)particleIndex);
}

JNIEXPORT jint JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroup_1getAllParticleFlags(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupPtr){

    b2ParticleGroup* pGroup = (b2ParticleGroup*)particleGroupPtr;
    return (jint)pGroup->GetAllParticleFlags();
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroup_1setGroupFlags(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupPtr,
        jint flags){

    b2ParticleGroup* pGroup = (b2ParticleGroup*)particleGroupPtr;
    pGroup->SetGroupFlags((uint32)flags);
}

JNIEXPORT jint JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroup_1getGroupFlags(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupPtr){

    b2ParticleGroup* pGroup = (b2ParticleGroup*)particleGroupPtr;
    return (jint)pGroup->GetGroupFlags();
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroup_1getMass(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupPtr){

    b2ParticleGroup* pGroup = (b2ParticleGroup*)particleGroupPtr;
    return (jlong)pGroup->GetMass();
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroup_1getInertia(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupPtr){

    b2ParticleGroup* pGroup = (b2ParticleGroup*)particleGroupPtr;
    return (jlong)pGroup->GetInertia();
}

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroup_1getCenter(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupPtr){

    b2ParticleGroup* pGroup = (b2ParticleGroup*)particleGroupPtr;
    b2Vec2 center = pGroup->GetCenter();
    return (jlong)new b2Vec2(center.x, center.y);
}

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroup_1getLinearVelocity(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupPtr){

    b2ParticleGroup* pGroup = (b2ParticleGroup*)particleGroupPtr;
    b2Vec2 velocity = pGroup->GetLinearVelocity();
    return (jlong)new b2Vec2(velocity.x, velocity.y);
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroup_1getAngularVelocity(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupPtr){

    b2ParticleGroup* pGroup = (b2ParticleGroup*)particleGroupPtr;
    return (jfloat)pGroup->GetAngularVelocity();
}

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroup_1getTransform(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupPtr){

    b2ParticleGroup* pGroup = (b2ParticleGroup*)particleGroupPtr;
    b2Transform transform = pGroup->GetTransform();
    return (jlong)new b2Transform(transform.p, transform.q);
}

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroup_1getPosition(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupPtr){

    b2ParticleGroup* pGroup = (b2ParticleGroup*)particleGroupPtr;
    b2Vec2 position = pGroup->GetPosition();
    return (jlong)new b2Vec2(position.x, position.y);
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroup_1getAngle(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupPtr){

    b2ParticleGroup* pGroup = (b2ParticleGroup*)particleGroupPtr;
    return (jfloat)pGroup->GetAngle();
}

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroup_1getLinearVelocityFromWorldPoint(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupPtr,
        jlong worldPointPtr){

    b2ParticleGroup* pGroup = (b2ParticleGroup*)particleGroupPtr;
    b2Vec2* pWorldPoint = (b2Vec2*)worldPointPtr;
    b2Vec2 velocity = pGroup->GetLinearVelocityFromWorldPoint(*pWorldPoint);
    return (jlong)new b2Vec2(velocity.x, velocity.y);
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroup_1applyForce(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupPtr,
        jlong forcePtr){

    b2ParticleGroup* pGroup = (b2ParticleGroup*)particleGroupPtr;
    b2Vec2* pForce = (b2Vec2*)forcePtr;
    pGroup->ApplyForce(*pForce);
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroup_1applyLinearImpulse(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupPtr,
        jlong impulsePtr){

    b2ParticleGroup* pGroup = (b2ParticleGroup*)particleGroupPtr;
    b2Vec2* pImpulse = (b2Vec2*)impulsePtr;
    pGroup->ApplyLinearImpulse(*pImpulse);
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroup_1destroyParticles(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupPtr,
        jboolean callDestructionListener){

    b2ParticleGroup* pGroup = (b2ParticleGroup*)particleGroupPtr;
    pGroup->DestroyParticles((bool)callDestructionListener);
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleGroup_1destroyParticles2(
        JNIEnv *env,
        jobject obj,
        jlong particleGroupPtr){

    b2ParticleGroup* pGroup = (b2ParticleGroup*)particleGroupPtr;
    pGroup->DestroyParticles();
}

#ifdef __cplusplus
}
#endif