#include <jni.h>
#include "../../../libs/liquidfun/include/Box2D/Collision/Shapes/b2CircleShape.h"

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_CircleShape_1new(
        JNIEnv* env,
        jobject obj){

    return (jlong)new b2CircleShape();
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_CircleShape_1delete(
        JNIEnv* env,
        jobject obj,
        jlong ptr){

    b2CircleShape* pCircleShape = (b2CircleShape*)ptr;
    delete pCircleShape;
}

#ifdef __cplusplus
}
#endif

