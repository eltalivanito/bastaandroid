#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_example_android_basta_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());

}
 extern "C"
JNIEXPORT jstring JNICALL Java_com_example_android_basta_MainActivity_stringFromJNI2(
        JNIEnv *e,
        jobject /* this */) {
    std::string hello1 = "asdfg";
    return e->NewStringUTF(hello1.c_str());
}


extern "C"
JNIEXPORT jint JNICALL
Java_com_example_android_basta_MainActivity_leerpuntaje(JNIEnv *env, jobject instance,
                                                        jobjectArray respuestas) {

    // TODO

}