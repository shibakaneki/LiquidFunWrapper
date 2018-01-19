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
#include "../../../libs/liquidfun/include/Box2D/Collision/Shapes/b2PolygonShape.h"

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_PolygonShape_1new(
        JNIEnv* env,
        jobject obj){

    return (jlong)new b2PolygonShape();
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_PolygonShape_1delete(
        JNIEnv* env,
        jobject obj,
        jlong ptr){

    b2PolygonShape* pPolygonShape = (b2PolygonShape*)ptr;
    delete pPolygonShape;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_PolygonShape_1set(
        JNIEnv* env,
        jobject obj,
        jlong psPtr,
        jlong pointsPtr,
        jint count){

    b2PolygonShape* shape = (b2PolygonShape*)psPtr;
    b2Vec2* pPoints = (b2Vec2*)pointsPtr;
    shape->Set(pPoints, count);

}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_PolygonShape_1setAsBox(
        JNIEnv* env,
        jobject obj,
        jlong psPtr,
        jfloat x,
        jfloat y){

    b2PolygonShape* shape = (b2PolygonShape*)psPtr;
    shape->SetAsBox((float)x, (float)y);
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_PolygonShape_1setAsBox2(
        JNIEnv* env,
        jobject obj,
        jlong psPtr,
        jfloat x,
        jfloat y,
        jlong centerPtr,
        jfloat angle){

    b2PolygonShape* shape = (b2PolygonShape*)psPtr;
    shape->SetAsBox((float)x, (float)y, *((b2Vec2*)centerPtr), (float)angle);
}

JNIEXPORT jint JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_PolygonShape_1getVertexCount(
        JNIEnv* env,
        jobject obj,
        jlong psPtr){

    b2PolygonShape* shape = (b2PolygonShape*)psPtr;
    return (int)shape->GetVertexCount();
}

#ifdef __cplusplus
}
#endif

