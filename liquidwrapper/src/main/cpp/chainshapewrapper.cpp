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

