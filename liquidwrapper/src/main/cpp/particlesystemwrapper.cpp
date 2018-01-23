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
#include "../../../libs/liquidfun/include/Box2D/Particle/b2ParticleSystem.h"
#include "../../../libs/liquidfun/include/Box2D/Particle/b2Particle.h"

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jint JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystem_1createParticle(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemPtr,
        jlong particleDefPtr){

    b2ParticleSystem* pPartSys = (b2ParticleSystem*)particleSystemPtr;
    b2ParticleDef* pPartDef = (b2ParticleDef*)particleDefPtr;
    return (jint)pPartSys->CreateParticle(*pPartDef);
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystem_1destroyParticle(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemPtr,
        jint particleIndex){

    b2ParticleSystem* pPartSys = (b2ParticleSystem*)particleSystemPtr;
    pPartSys->DestroyParticle((int32)particleIndex);
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystem_1getPositionBuffer(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemPtr,
        jint startIndex,
        jint particleCount,
        jobject outBuffer){

    const int PARTICLE_ELEMENT_SIZE = sizeof(float32);
    const int PARTICLE_STRIDE = 2*PARTICLE_ELEMENT_SIZE;

    int partCount = (int)particleCount;
    int start = (int)startIndex;
    jbyte* outBuf = (jbyte*)env->GetDirectBufferAddress(outBuffer);

    b2ParticleSystem* pPartSys = (b2ParticleSystem*)particleSystemPtr;
    b2Vec2 *positions = pPartSys->GetPositionBuffer();

    memcpy(outBuf, &positions->x + start * PARTICLE_STRIDE, partCount * PARTICLE_STRIDE);
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystem_1getWeightBuffer(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemPtr,
        jobject outBuffer){

    const int PARTICLE_ELEMENT_SIZE = sizeof(float32);
    const int PARTICLE_STRIDE = 2*PARTICLE_ELEMENT_SIZE;

    jbyte* outBuf = (jbyte*)env->GetDirectBufferAddress(outBuffer);
    b2ParticleSystem* pPartSys = (b2ParticleSystem*)particleSystemPtr;
    float32* weights = pPartSys->GetWeightBuffer();
    int partCount = (int)pPartSys->GetParticleCount();

    memcpy(outBuf, &weights, partCount * PARTICLE_STRIDE);
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystem_1getVelocityBuffer(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemPtr,
        jobject outBuffer){

    const int PARTICLE_ELEMENT_SIZE = sizeof(float32);
    const int PARTICLE_STRIDE = 2*PARTICLE_ELEMENT_SIZE;

    jbyte* outBuf = (jbyte*)env->GetDirectBufferAddress(outBuffer);
    b2ParticleSystem* pPartSys = (b2ParticleSystem*)particleSystemPtr;
    b2Vec2 *velocities = pPartSys->GetVelocityBuffer();
    int partCount = (int)pPartSys->GetParticleCount();

    memcpy(outBuf, &velocities->x, partCount * PARTICLE_STRIDE);
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystem_1getColorBuffer(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemPtr,
        jint startIndex,
        jint particleCount,
        jobject outBuffer){

    const int COLOR_ELEMENT_SIZE = sizeof(float32);

    int partCount = (int)particleCount;
    int start = (int)startIndex;
    jbyte* outBuf = (jbyte*)env->GetDirectBufferAddress(outBuffer);

    b2ParticleSystem* pPartSys = (b2ParticleSystem*)particleSystemPtr;
    b2ParticleColor *colors = pPartSys->GetColorBuffer();

    memcpy(outBuf, &colors->r + start * COLOR_ELEMENT_SIZE, partCount * COLOR_ELEMENT_SIZE);
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystem_1getStuckCandidates(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemPtr,
        jobject outBuffer){

    const int PARTICLE_INDEX_SIZE = sizeof(int32);
    jbyte* outBuf = (jbyte*)env->GetDirectBufferAddress(outBuffer);

    b2ParticleSystem* pPartSys = (b2ParticleSystem*)particleSystemPtr;
    int32 stuckCount = pPartSys->GetStuckCandidateCount();
    const int32 *candidates = pPartSys->GetStuckCandidates();

    memcpy(outBuf, &candidates, stuckCount * PARTICLE_INDEX_SIZE);
}

JNIEXPORT jint JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystem_1getStuckCandidatesCount(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemPtr){

    b2ParticleSystem* pPartSys = (b2ParticleSystem*)particleSystemPtr;
    return (jint)pPartSys->GetStuckCandidateCount();
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystem_1setDestructionByAge(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemPtr,
        jboolean isDestroyingByAge){

    b2ParticleSystem* pPartSys = (b2ParticleSystem*)particleSystemPtr;
    pPartSys->SetDestructionByAge(isDestroyingByAge);
}

JNIEXPORT jint JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystem_1getParticleCount(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemPtr){

    b2ParticleSystem* pPartSys = (b2ParticleSystem*)particleSystemPtr;
    return (jint)pPartSys->GetParticleCount();
}

JNIEXPORT jint JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystem_1getParticleGroupCount(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemPtr){

    b2ParticleSystem* pPartSys = (b2ParticleSystem*)particleSystemPtr;
    return (jint)pPartSys->GetParticleGroupCount();
}

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystem_1getParticleGroupList(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemPtr){

    b2ParticleSystem* pPartSys = (b2ParticleSystem*)particleSystemPtr;
    return (jlong)pPartSys->GetParticleGroupList();
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystem_1setMaxParticleCount(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemPtr,
        jint maxCount){

    b2ParticleSystem* pPartSys = (b2ParticleSystem*)particleSystemPtr;
    pPartSys->SetMaxParticleCount((int32)maxCount);
}

JNIEXPORT jint JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystem_1getMaxParticleCount(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemPtr){

    b2ParticleSystem* pPartSys = (b2ParticleSystem*)particleSystemPtr;
    return (jint)pPartSys->GetMaxParticleCount();
}

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystem_1createParticleGroup(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemPtr,
        jlong particleGroupDefPtr){

    b2ParticleSystem* pPartSys = (b2ParticleSystem*)particleSystemPtr;
    b2ParticleGroupDef* pParticleGroupDef = (b2ParticleGroupDef*) particleGroupDefPtr;
    return (jlong)pPartSys->CreateParticleGroup(*pParticleGroupDef);
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystem_1setParticleLifetime(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemPtr,
        jint particleIndex,
        jfloat lifetime){

    b2ParticleSystem* pPartSys = (b2ParticleSystem*)particleSystemPtr;
    pPartSys->SetParticleLifetime((int32)particleIndex, (float32)lifetime);
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystem_1setDensity(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemPtr,
        jfloat density){

    b2ParticleSystem* pPartSys = (b2ParticleSystem*)particleSystemPtr;
    pPartSys->SetDensity((float32)density);
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystem_1getDensity(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemPtr){

    b2ParticleSystem* pPartSys = (b2ParticleSystem*)particleSystemPtr;
    return (jfloat)pPartSys->GetDensity();
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystem_1setPaused(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemPtr,
        jboolean isPaused){

    b2ParticleSystem* pPartSys = (b2ParticleSystem*)particleSystemPtr;
    pPartSys->SetPaused((bool)isPaused);
}

JNIEXPORT jboolean JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystem_1isPaused(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemPtr){

    b2ParticleSystem* pPartSys = (b2ParticleSystem*)particleSystemPtr;
    return (jboolean)pPartSys->GetPaused();
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystem_1setGravityScale(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemPtr,
        jfloat gravityScale){

    b2ParticleSystem* pPartSys = (b2ParticleSystem*)particleSystemPtr;
    pPartSys->SetGravityScale((float32)gravityScale);
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystem_1getGravityScale(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemPtr){

    b2ParticleSystem* pPartSys = (b2ParticleSystem*)particleSystemPtr;
    return (jfloat)pPartSys->GetGravityScale();
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystem_1setDamping(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemPtr,
        jfloat damping){

    b2ParticleSystem* pPartSys = (b2ParticleSystem*)particleSystemPtr;
    pPartSys->SetDamping((float32)damping);
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystem_1getDamping(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemPtr){

    b2ParticleSystem* pPartSys = (b2ParticleSystem*)particleSystemPtr;
    return (jfloat)pPartSys->GetDamping();
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystem_1setRadius(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemPtr,
        jfloat radius){

    b2ParticleSystem* pPartSys = (b2ParticleSystem*)particleSystemPtr;
    pPartSys->SetRadius((float32)radius);
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystem_1getRadius(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemPtr){

    b2ParticleSystem* pPartSys = (b2ParticleSystem*)particleSystemPtr;
    return (jfloat)pPartSys->GetRadius();
}




#ifdef __cplusplus
}
#endif