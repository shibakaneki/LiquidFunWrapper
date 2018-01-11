#include <jni.h>
#include "../../../libs/liquidfun/include/Box2D/Common/b2Math.h"

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Transform_1new(
        JNIEnv* env,
        jobject obj){

    return (jlong)new b2Transform;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Transform_1delete(
        JNIEnv* env,
        jobject obj,
        jlong ptr){

    b2Transform* pTransform = (b2Transform*)ptr;
    delete pTransform;
}

#ifdef __cplusplus
}
#endif

