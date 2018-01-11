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

