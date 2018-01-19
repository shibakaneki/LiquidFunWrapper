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

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Fixture_1delete(
        JNIEnv* env,
        jobject obj,
        jlong ptr){

    b2Fixture* pFixture = (b2Fixture*)ptr;
    if(pFixture){
        delete pFixture;
    }
}

JNIEXPORT jint JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Fixture_1getType(
        JNIEnv* env,
        jobject obj,
        jlong fixturePtr){

    b2Fixture* pFixture = (b2Fixture*)fixturePtr;
    return (jint)pFixture->GetType();
}

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Fixture_1getShape(
        JNIEnv* env,
        jobject obj,
        jlong fixturePtr){

    b2Fixture* pFixture = (b2Fixture*)fixturePtr;
    return (jlong)pFixture->GetShape();
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Fixture_1setSensor(
        JNIEnv* env,
        jobject obj,
        jlong fixturePtr,
        jboolean isSensor){

    b2Fixture* pFixture = (b2Fixture*)fixturePtr;
    pFixture->SetSensor(isSensor);
}

JNIEXPORT jboolean JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Fixture_1isSensor(
        JNIEnv* env,
        jobject obj,
        jlong fixturePtr){

    b2Fixture* pFixture = (b2Fixture*)fixturePtr;
    return (jboolean)pFixture->IsSensor();
}

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Fixture_1getBody(
        JNIEnv* env,
        jobject obj,
        jlong fixturePtr){

    b2Fixture* pFixture = (b2Fixture*)fixturePtr;
    return (jlong)pFixture->GetBody();
}

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Fixture_1getNext(
        JNIEnv* env,
        jobject obj,
        jlong fixturePtr){

    b2Fixture* pFixture = (b2Fixture*)fixturePtr;
    return (jlong)pFixture->GetNext();
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Fixture_1setDensity(
        JNIEnv* env,
        jobject obj,
        jlong fixturePtr,
        jfloat density){

    b2Fixture* pFixture = (b2Fixture*)fixturePtr;
    pFixture->SetDensity((float)density);
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Fixture_1getDensity(
        JNIEnv* env,
        jobject obj,
        jlong fixturePtr){

    b2Fixture* pFixture = (b2Fixture*)fixturePtr;
    return (jfloat)pFixture->GetDensity();
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Fixture_1setFriction(
        JNIEnv* env,
        jobject obj,
        jlong fixturePtr,
        jfloat friction){

    b2Fixture* pFixture = (b2Fixture*)fixturePtr;
    pFixture->SetFriction((float)friction);
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Fixture_1getFriction(
        JNIEnv* env,
        jobject obj,
        jlong fixturePtr){

    b2Fixture* pFixture = (b2Fixture*)fixturePtr;
    return (jfloat)pFixture->GetFriction();
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Fixture_1setRestitution(
        JNIEnv* env,
        jobject obj,
        jlong fixturePtr,
        jfloat restitution){

    b2Fixture* pFixture = (b2Fixture*)fixturePtr;
    pFixture->SetRestitution((float)restitution);
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Fixture_1getRestitution(
        JNIEnv* env,
        jobject obj,
        jlong fixturePtr){

    b2Fixture* pFixture = (b2Fixture*)fixturePtr;
    return (jfloat)pFixture->GetRestitution();
}

#ifdef __cplusplus
}
#endif