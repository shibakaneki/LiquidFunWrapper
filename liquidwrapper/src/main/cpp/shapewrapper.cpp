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
#include "../../../libs/liquidfun/include/Box2D/Collision/Shapes/b2Shape.h"

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Shape_1setType(
        JNIEnv* env,
        jobject obj,
        jlong shapePtr,
        jint type){

    b2Shape* shape = (b2Shape*)shapePtr;
    shape->m_type = (b2Shape::Type)type;
}

JNIEXPORT jint JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Shape_1getType(
        JNIEnv* env,
        jobject obj,
        jlong shapePtr){

    b2Shape* shape = (b2Shape*)shapePtr;
    return (int)shape->m_type;
}

JNIEXPORT jint JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Shape_1getChildCount(
        JNIEnv* env,
        jobject obj,
        jlong shapePtr){

    b2Shape* shape = (b2Shape*)shapePtr;
    return (jint)shape->GetChildCount();
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Shape_1setRadius(
        JNIEnv* env,
        jobject obj,
        jlong shapePtr,
        jfloat radius){

    b2Shape* shape = (b2Shape*)shapePtr;
    shape->m_radius = (float)radius;
}

JNIEXPORT jint JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Shape_1getRadius(
        JNIEnv* env,
        jobject obj,
        jlong shapePtr){

    b2Shape* shape = (b2Shape*)shapePtr;
    return (jfloat)shape->m_radius;
}

#ifdef __cplusplus
}
#endif

