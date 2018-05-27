#include <jni.h>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>


extern "C"
JNIEXPORT jint JNICALL
Java_com_example_android_basta_MainActivity_leerpuntaje(JNIEnv *env, jobject instance,
                                                        jintArray puntaje_) {
    jint *puntaje = env->GetIntArrayElements(puntaje_, NULL);
    jint *puntajetraido = env->GetIntArrayElements(puntaje_, NULL);
    int contadorpuntos=0;
    std::string resultado ="";
    // TODO
    for(int i=0;i<5;i++){
        contadorpuntos=puntaje[i]+contadorpuntos;
    }
    //resultado=contadorpuntos;
    env->ReleaseIntArrayElements(puntaje_, puntaje, 0);
    return contadorpuntos;
}