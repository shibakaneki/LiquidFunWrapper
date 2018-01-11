#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNICALL
Java_ch_shibastudio_liquidwrapper_HelloWrapper_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++ Wrapper!!";
    return env->NewStringUTF(hello.c_str());
}
