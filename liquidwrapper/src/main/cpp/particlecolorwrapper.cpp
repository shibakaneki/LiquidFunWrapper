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
#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleColor_1new(
        JNIEnv *env,
        jobject obj){

    return (jlong)new b2ParticleColor();
}

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleColor_1new2(
        JNIEnv *env,
        jobject obj,
        jint r,
        jint g,
        jint b,
        jint a){

    return (jlong)new b2ParticleColor((uint8)r, (uint8)g, (uint8)b, (uint8)a);
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleColor_1delete(
        JNIEnv* env,
        jobject obj,
        jlong ptr){

    b2ParticleColor* pParticleColor = (b2ParticleColor*)ptr;
    delete pParticleColor;
}

JNIEXPORT jboolean JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleColor_1isZero(
        JNIEnv *env,
        jobject obj,
        jlong particleColorPtr){

    b2ParticleColor* pColor = (b2ParticleColor*)particleColorPtr;
    return (jboolean)pColor->IsZero();
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleColor_1set(
        JNIEnv *env,
        jobject obj,
        jlong particleColorPtr,
        jint r,
        jint g,
        jint b,
        jint a){

    b2ParticleColor* pColor = (b2ParticleColor*)particleColorPtr;
    pColor->Set((uint8)r, (uint8)g, (uint8)b, (uint8)a);
}

#ifdef __cplusplus
}
#endif