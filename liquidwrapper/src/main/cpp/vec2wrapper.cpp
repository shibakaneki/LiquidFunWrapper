#include <jni.h>
#include "../../../libs/liquidfun/include/Box2D/Common/b2Math.h"

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Vec2_1new(
        JNIEnv* env,
        jobject obj){

    return (jlong)new b2Vec2;
}

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Vec2_1new2(
        JNIEnv* env,
        jobject obj,
        jfloat x,
        jfloat y){

    return (jlong)new b2Vec2((float)x, (float)y);
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Vec2_1delete(
        JNIEnv* env,
        jobject obj,
        jlong ptr){

    b2Vec2* pVec2 = (b2Vec2*)ptr;
    delete pVec2;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Vec2_1setZero(
        JNIEnv* env,
        jobject obj,
        jlong vec2Ptr){

    b2Vec2* vec2 = (b2Vec2*)vec2Ptr;
    vec2->SetZero();
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Vec2_1set(
        JNIEnv* env,
        jobject obj,
        jlong vec2Ptr,
        jfloat x,
        jfloat y){

    b2Vec2* vec2 = (b2Vec2*)vec2Ptr;
    vec2->Set((float)x, (float)y);
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Vec2_1length(
        JNIEnv* env,
        jobject obj,
        jlong vec2Ptr){

    b2Vec2* vec2 = (b2Vec2*)vec2Ptr;
    return (jfloat)vec2->Length();
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Vec2_1lengthSquared(
        JNIEnv* env,
        jobject obj,
        jlong vec2Ptr){

    b2Vec2* vec2 = (b2Vec2*)vec2Ptr;
    return (jfloat)vec2->LengthSquared();
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Vec2_1normalize(
        JNIEnv* env,
        jobject obj,
        jlong vec2Ptr){

    b2Vec2* vec2 = (b2Vec2*)vec2Ptr;
    return (jfloat)vec2->Normalize();
}

JNIEXPORT jboolean JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Vec2_1isValid(
        JNIEnv* env,
        jobject obj,
        jlong vec2Ptr){

    b2Vec2* vec2 = (b2Vec2*)vec2Ptr;
    return (jboolean)vec2->IsValid();
}

JNIEXPORT jlong JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Vec2_1skew(
        JNIEnv* env,
        jobject obj,
        jlong vec2Ptr){

    b2Vec2* vec2 = (b2Vec2*)vec2Ptr;
    b2Vec2 skewedVec = vec2->Skew();

    return (jlong)new b2Vec2(skewedVec.x, skewedVec.y);
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Vec2_1setX(
        JNIEnv* env,
        jobject obj,
        jlong vec2Ptr,
        jfloat x){

    b2Vec2* vec2 = (b2Vec2*)vec2Ptr;
    vec2->x = (float)x;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Vec2_1getX(
        JNIEnv* env,
        jobject obj,
        jlong vec2Ptr){

    b2Vec2* vec2 = (b2Vec2*)vec2Ptr;
    return (jfloat)vec2->x;
}

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Vec2_1setY(
        JNIEnv* env,
        jobject obj,
        jlong vec2Ptr,
        jfloat y){

    b2Vec2* vec2 = (b2Vec2*)vec2Ptr;
    vec2->y = (float)y;
}

JNIEXPORT jfloat JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_Vec2_1getY(
        JNIEnv* env,
        jobject obj,
        jlong vec2Ptr){

    b2Vec2* vec2 = (b2Vec2*)vec2Ptr;
    return (jfloat)vec2->y;
}

#ifdef __cplusplus
}
#endif

