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

