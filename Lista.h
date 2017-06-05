#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include <iostream>

using namespace std;

struct No{
    int data;
    No *proximo;
    No(){};
    ~No(){delete proximo;};
};

struct Lista{
    No *primeiro;
    No *ultimo;
};

bool vazia(Lista& l); //Verifica se a lista está vazia

void insere_primeiro(Lista& l,int e); //Insere o elemento como primeiro da lista

No * insere_depois(No * p,int e); //Insere o elemento depois do nó p

void insere_ultimo(Lista& l,int e);  //Insere o elemento como ultimo da lista

void insere_ordenado(Lista& l,int e); //Insere ordenadamente o elemento na lista

void mostra_lista(Lista& l);  //Imprime a lista

int ultimo_elemento(Lista& l);  //Retorna o ultimo elemento da lista

bool existeLista(Lista& l,int e) //Procura se existe o elemento e na lista

#endif // LISTA_H_INCLUDED
