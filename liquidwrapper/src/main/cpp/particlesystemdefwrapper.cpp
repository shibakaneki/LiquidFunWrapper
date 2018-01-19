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

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1new(
        JNIEnv *env,
        jobject obj){
    return (jlong)new b2ParticleSystemDef();
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1delete(
        JNIEnv* env,
        jobject obj,
        jlong ptr){

    b2ParticleSystemDef* pParticleSystemDef = (b2ParticleSystemDef*)ptr;
    delete pParticleSystemDef;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1setDensity(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr,
        jfloat density){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    pPartSysDef->density = (float)density;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1getDensity(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    return (jfloat)pPartSysDef->density;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1setGravityScale(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr,
        jfloat gravityScale){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    pPartSysDef->gravityScale = (float)gravityScale;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1getGravityScale(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    return (jfloat)pPartSysDef->gravityScale;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1setRadius(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr,
        jfloat radius){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    pPartSysDef->radius = (float)radius;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1getRadius(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    return (jfloat)pPartSysDef->radius;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1setMaxCount(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr,
        jint maxCount){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    pPartSysDef->maxCount = (int)maxCount;
}

JNIEXPORT jint JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1getMaxCount(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    return (jint)pPartSysDef->maxCount;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1setPressureStrength(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr,
        jfloat pressureStrength){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    pPartSysDef->pressureStrength = (float)pressureStrength;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1getPressureStrength(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    return (jfloat)pPartSysDef->pressureStrength;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1setDampingStrength(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr,
        jfloat dampingStrength){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    pPartSysDef->dampingStrength = (float)dampingStrength;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1getDampingStrength(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    return (jfloat)pPartSysDef->dampingStrength;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1setElasticStrength(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr,
        jfloat elasticStrength){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    pPartSysDef->elasticStrength = (float)elasticStrength;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1getElasticStrength(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    return (jfloat)pPartSysDef->elasticStrength;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1setSpringStrength(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr,
        jfloat springStrength){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    pPartSysDef->springStrength = (float)springStrength;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1getSpringStrength(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    return (jfloat)pPartSysDef->springStrength;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1setViscousStrength(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr,
        jfloat viscousStrength){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    pPartSysDef->viscousStrength = (float)viscousStrength;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1getViscousStrength(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    return (jfloat)pPartSysDef->viscousStrength;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1setSurfaceTensionPressureStrength(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr,
        jfloat surfaceTensionPressureStrength){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    pPartSysDef->surfaceTensionPressureStrength = (float)surfaceTensionPressureStrength;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1getSurfaceTensionPressureStrength(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    return (jfloat)pPartSysDef->surfaceTensionPressureStrength;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1setSurfaceTensionNormalStrength(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr,
        jfloat surfaceTensionNormalStrength){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    pPartSysDef->surfaceTensionNormalStrength = (float)surfaceTensionNormalStrength;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1getSurfaceTensionNormalStrength(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    return (jfloat)pPartSysDef->surfaceTensionNormalStrength;
}


JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1setRepulsiveStrength(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr,
        jfloat repulsiveStrength){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    pPartSysDef->repulsiveStrength = (float)repulsiveStrength;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1getRepulsiveStrength(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    return (jfloat)pPartSysDef->repulsiveStrength;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1setPowderStrength(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr,
        jfloat powderStrength){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    pPartSysDef->powderStrength = (float)powderStrength;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1getPowderStrength(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    return (jfloat)pPartSysDef->powderStrength;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1setEjectionStrength(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr,
        jfloat ejectionStrength){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    pPartSysDef->ejectionStrength = (float)ejectionStrength;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1getEjectionStrength(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    return (jfloat)pPartSysDef->ejectionStrength;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1setStaticPressureStrength(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr,
        jfloat staticPressureStrength){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    pPartSysDef->staticPressureStrength = (float)staticPressureStrength;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1getStaticPressureStrength(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    return (jfloat)pPartSysDef->staticPressureStrength;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1setStaticPressureRelaxation(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr,
        jfloat staticPressureRelaxation){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    pPartSysDef->staticPressureRelaxation = (float)staticPressureRelaxation;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1getStaticPressureRelaxation(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    return (jfloat)pPartSysDef->staticPressureRelaxation;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1setStaticPressureIterations(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr,
        jint staticPressureIterations){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    pPartSysDef->staticPressureIterations = (int)staticPressureIterations;
}

JNIEXPORT jint JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1getStaticPressureIterations(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    return (jint)pPartSysDef->staticPressureIterations;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1setColorMixingStrength(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr,
        jfloat colorMixingStrength){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    pPartSysDef->colorMixingStrength = (float)colorMixingStrength;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1getColorMixingStrength(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    return (jfloat)pPartSysDef->colorMixingStrength;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1setDestroyByAge(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr,
        jboolean destroy){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    pPartSysDef->destroyByAge = (bool)destroy;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1isDestroyByAge(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    return (jboolean)pPartSysDef->destroyByAge;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1setLifetimeGranularity(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr,
        jfloat lifetimeGranularity){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    pPartSysDef->lifetimeGranularity = (float)lifetimeGranularity;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ParticleSystemDef_1getLifetimeGranularity(
        JNIEnv *env,
        jobject obj,
        jlong particleSystemDefPtr){

    b2ParticleSystemDef* pPartSysDef = (b2ParticleSystemDef*)particleSystemDefPtr;
    return (jfloat)pPartSysDef->lifetimeGranularity;
}



#ifdef __cplusplus
}
#endif