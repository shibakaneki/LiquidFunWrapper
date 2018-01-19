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
#include "../../../libs/liquidfun/include/Box2D/Collision/Shapes/b2ChainShape.h"

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ChainShape_1new(
        JNIEnv* env,
        jobject obj){

    return (jlong)new b2ChainShape();
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_ChainShape_1delete(
        JNIEnv* env,
        jobject obj,
        jlong ptr){

    b2ChainShape* pChainShape = (b2ChainShape*)ptr;
    delete pChainShape;
}

#ifdef __cplusplus
}
#endif

