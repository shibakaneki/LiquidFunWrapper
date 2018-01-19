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
#include "../../../libs/liquidfun/include/Box2D/Dynamics/b2Fixture.h"

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_FixtureDef_1new(
        JNIEnv* env,
        jobject obj){

    return (jlong)new b2FixtureDef;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_FixtureDef_1delete(
        JNIEnv* env,
        jobject obj,
        jlong ptr){

    b2FixtureDef* pFixtureDef = (b2FixtureDef*)ptr;
    delete pFixtureDef;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_FixtureDef_1setShape(
        JNIEnv* env,
        jobject obj,
        jlong fdPtr,
        jlong shapePtr){

    b2FixtureDef* pFixtureDef = (b2FixtureDef*)fdPtr;
    pFixtureDef->shape = (b2Shape*)shapePtr;
}

JNIEXPORT long JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_FixtureDef_1getShape(
        JNIEnv* env,
        jobject obj,
        jlong fdPtr){

    b2FixtureDef* pFixtureDef = (b2FixtureDef*)fdPtr;
    return (jlong)pFixtureDef->shape;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_FixtureDef_1setFriction(
        JNIEnv* env,
        jobject obj,
        jlong fdPtr,
        jfloat friction){

    b2FixtureDef* pFixtureDef = (b2FixtureDef*)fdPtr;
    pFixtureDef->friction = (float)friction;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_FixtureDef_1getFriction(
        JNIEnv* env,
        jobject obj,
        jlong fdPtr){

    b2FixtureDef* pFixtureDef = (b2FixtureDef*)fdPtr;
    return pFixtureDef->friction;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_FixtureDef_1setRestitution(
        JNIEnv* env,
        jobject obj,
        jlong fdPtr,
        jfloat restitution){

    b2FixtureDef* pFixtureDef = (b2FixtureDef*)fdPtr;
    pFixtureDef->restitution = (float)restitution;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_FixtureDef_1getRestitution(
        JNIEnv* env,
        jobject obj,
        jlong fdPtr){

    b2FixtureDef* pFixtureDef = (b2FixtureDef*)fdPtr;
    return pFixtureDef->restitution;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_FixtureDef_1setDensity(
        JNIEnv* env,
        jobject obj,
        jlong fdPtr,
        jfloat density){

    b2FixtureDef* pFixtureDef = (b2FixtureDef*)fdPtr;
    pFixtureDef->density = (float)density;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_FixtureDef_1getDensity(
        JNIEnv* env,
        jobject obj,
        jlong fdPtr){

    b2FixtureDef* pFixtureDef = (b2FixtureDef*)fdPtr;
    return pFixtureDef->density;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_FixtureDef_1setSensor(
        JNIEnv* env,
        jobject obj,
        jlong fdPtr,
        jboolean isSensor){

    b2FixtureDef* pFixtureDef = (b2FixtureDef*)fdPtr;
    pFixtureDef->isSensor = (bool)isSensor;
}

JNIEXPORT jboolean JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_FixtureDef_1isSensor(
        JNIEnv* env,
        jobject obj,
        jlong fdPtr){

    b2FixtureDef* pFixtureDef = (b2FixtureDef*)fdPtr;
    return (jboolean)pFixtureDef->isSensor;
}

#ifdef __cplusplus
}
#endif