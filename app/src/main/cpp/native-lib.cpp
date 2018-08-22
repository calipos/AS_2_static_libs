#include <jni.h>
#include <string>
#include "s2.h"
extern "C" JNIEXPORT jstring

JNICALL
Java_uner_ii_twostatic_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    int c=s2(100);
    std::string hello=std::to_string(c);
    return env->NewStringUTF(hello.c_str());
}
