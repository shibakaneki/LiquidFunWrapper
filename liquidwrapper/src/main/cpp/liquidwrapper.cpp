#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT void JNICALL Java_ch_shibastudio_liquidwrapper_LiquidWrapperJNI_delete(
        JNIEnv* env,
        jobject obj,
        jlong ptr){

    if(0 != ptr){
        delete (void*)ptr;
    }
}

#ifdef __cplusplus
}
#endif