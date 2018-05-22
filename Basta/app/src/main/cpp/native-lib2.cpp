//
// Created by Cristina Silva on 12/05/2018.
//
#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL Java_com_example_android_basta_MainActivity_stringFromJNI2(
        JNIEnv *e,
        jobject /* this */) {
    std::string hello1 = "asdfg";
    return e->NewStringUTF(hello1.c_str());
}


