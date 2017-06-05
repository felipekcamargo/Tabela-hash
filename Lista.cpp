#include "Lista.h"
#include <iostream>
#include <cstdio>

using namespace std;

bool vazia(Lista& l){
    if(l.primeiro == NULL)
        return 1;
    else
        return 0;
}

void insere_primeiro(Lista& l,int e){
    No *p = new No();
    p->data = e;
    p->proximo = l.primeiro;
    l.primeiro = p;
    if(l.ultimo == NULL)
        l.ultimo = l.primeiro;
    delete p;
}

No * insere_depois(No* p,int e){
    No *q = new No();
    q->data = e;
    q->proximo = p->proximo;
    p->proximo = q;
    return q;
}

void insere_ultimo(Lista& l,int e){
    No *p = l.ultimo;
    l.ultimo = insere_depois(p,e);
    delete p;
}

void insere_ordenado(Lista& l,int e){
    if(vazia(l))
        insere_primeiro(l,e);
    else{
        No *p = l.ultimo;
        if(e >= p->data)
            insere_ultimo(l,e);
        else{
            p = l.primeiro;
            if(e <= p->data)
                insere_primeiro(l,e);
            else{
                No *q;
                while(p->data < e){
                    q = p;
                    p = p->proximo;
                }
                insere_depois(q, e);
                delete q;
            }
        }
    delete p;
    }
}

void mostra_lista(Lista& l){
    No *p = l.primeiro;
    while(p!=NULL){
        cout<<p->data<<endl;
        p = p->proximo;
    }
    cout<<endl;
    delete p;
}

int ultimo_elemento(Lista& l){
    if(vazia(l))
        return 0;
    else{
        No *p = l.ultimo;
        int aux;
        aux = p->data;

        delete p;
        return aux;
    }
}

bool existeLista(Lista& l,int e){
    No * p = l.primeiro;
    while(p != NULL){
        if(p->data == e)
            return true;
        else
            p = p->proximo;
    }

    return false;
}
