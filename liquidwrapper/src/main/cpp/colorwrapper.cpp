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
#include "../../../libs/liquidfun/include/Box2D/Common/b2Draw.h"
#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Color_1new(
        JNIEnv *env,
        jobject obj,
        jfloat r,
        jfloat g,
        jfloat b){

    return (jlong)new b2Color((float)r, (float)g, (float)b);
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Color_1delete(
        JNIEnv* env,
        jobject obj,
        jlong ptr){

    b2Color* pColor = (b2Color*)ptr;
    delete pColor;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Color_1set(
        JNIEnv *env,
        jobject obj,
        jlong colorPtr,
        jfloat r,
        jfloat g,
        jfloat b){

    b2Color* pColor = (b2Color*)colorPtr;
    pColor->Set((float)r, (float)g, (float)b);
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Color_1setRed(
        JNIEnv *env,
        jobject obj,
        jlong colorPtr,
        jfloat r){

    b2Color* pColor = (b2Color*)colorPtr;
    pColor->r = (float)r;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Color_1getRed(
        JNIEnv *env,
        jobject obj,
        jlong colorPtr){

    b2Color* pColor = (b2Color*)colorPtr;
    return (jfloat)pColor->r;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Color_1setGreen(
        JNIEnv *env,
        jobject obj,
        jlong colorPtr,
        jfloat g){

    b2Color* pColor = (b2Color*)colorPtr;
    pColor->r = (float)g;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Color_1getGreen(
        JNIEnv *env,
        jobject obj,
        jlong colorPtr){

    b2Color* pColor = (b2Color*)colorPtr;
    return (jfloat)pColor->g;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Color_1setBlue(
        JNIEnv *env,
        jobject obj,
        jlong colorPtr,
        jfloat b){

    b2Color* pColor = (b2Color*)colorPtr;
    pColor->r = (float)b;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Color_1getBlue(
        JNIEnv *env,
        jobject obj,
        jlong colorPtr){

    b2Color* pColor = (b2Color*)colorPtr;
    return (jfloat)pColor->b;
}

#ifdef __cplusplus
}
#endif