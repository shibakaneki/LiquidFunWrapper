#include <jni.h>
#include "../../../libs/liquidfun/include/Box2D/Collision/Shapes/b2EdgeShape.h"

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_EdgeShape_1new(
        JNIEnv* env,
        jobject obj){

    return (jlong)new b2EdgeShape();
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_EdgeShape_1delete(
        JNIEnv* env,
        jobject obj,
        jlong ptr){

    b2EdgeShape* pEdgeShape = (b2EdgeShape*)ptr;
    delete pEdgeShape;
}

#ifdef __cplusplus
}
#endif

