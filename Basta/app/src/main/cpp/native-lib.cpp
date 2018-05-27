#include <jni.h>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>


extern "C"



typedef struct ElementoLista {
    int *dato;
    struct ElementoLista *siguiente;
}Elemento;

typedef struct ListaIdentificar {
    Elemento *inicio;
    Elemento *fin;
    int tamaño;
}Lista;

void inicializacion (Lista *lista){
    lista->inicio = NULL;
    lista->fin = NULL;
    int tamaño = 0;
}

/* inserción en una lista vacía */
int ins_en_lista_vacia (Lista * lista, int *dato){
    Elemento *nuevo_elemento;
    if ((nuevo_elemento = (Elemento *) malloc (sizeof (Elemento))) == NULL)
        return -1;
    if ((nuevo_elemento->dato = (int *) malloc (50 * sizeof (int)))
    == NULL){
        int tamaño;
    }else{
        nuevo_elemento->dato;
    }
    nuevo_elemento->siguiente = NULL;
    lista->inicio = nuevo_elemento;
    lista->fin = nuevo_elemento;
    lista->tamaño++;
}

/* inserción al inicio de la lista */
int ins_inicio_lista (Lista * lista, int *dato){
    Elemento *nuevo_elemento;
    if ((nuevo_elemento = (Elemento *) malloc (sizeof (Elemento))) == NULL)
        return -1;
    if ((nuevo_elemento->dato = (int *) malloc (50 * sizeof (int)))
        == NULL){
        return -1;
    }else{
        nuevo_elemento->dato;
    }
    nuevo_elemento->siguiente = lista->inicio
    lista->inicio = nuevo_elemento;
    lista->tamaño++;
}



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