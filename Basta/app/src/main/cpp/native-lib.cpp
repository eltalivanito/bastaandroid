#include <jni.h>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>


extern "C"{


struct Nodo{
    int dato;
    Nodo *siguiente;
};


void insertarlista(Nodo *&lista,int n){
Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato=n;

    Nodo *aux1 = lista;
    Nodo *aux2;

    while((aux1 != NULL)&& (aux1->dato < n)){
        aux2=aux1;
        aux1=aux1->siguiente;
    }
    if(lista==aux1){
        lista=nuevo_nodo;
    } else
    {
        aux2->siguiente=nuevo_nodo;
    }
    nuevo_nodo->siguiente=aux1;
}

int imprimirpuntaje(Nodo *lista){
 Nodo *actual = new Nodo();
    actual = lista;
    int puntajetotal=0;
    while(actual!=NULL){
        puntajetotal=actual->dato + puntajetotal;
        actual=actual->siguiente;
    }
    return puntajetotal;
}


JNIEXPORT jint JNICALL
Java_com_example_android_basta_MainActivity_leerpuntaje(JNIEnv *env, jobject instance,
                                                        jintArray puntaje_) {
    jint *puntaje = env->GetIntArrayElements(puntaje_, NULL);

    int contadorpuntos=0;
    //std::string resultado ="";
    // TODO

    for(int i=0;i<5;i++){
        contadorpuntos=puntaje[i]+contadorpuntos;
    }
    //resultado=contadorpuntos;
    Nodo *lista = NULL;



    for(int i=0;i<5;i++){
        insertarlista (lista, puntaje[i]);
        contadorpuntos=puntaje[i]+contadorpuntos;
    }

    //ins_en_lista_vacia (Lista * lista, int *dato);
    //env->ReleaseIntArrayElements(puntaje_, puntaje, 0);
    //return visualizacion(lista);
    int resultadofinal=0;
    contadorpuntos=imprimirpuntaje(lista);
    //return contadorpuntos;
    return contadorpuntos;
}


}