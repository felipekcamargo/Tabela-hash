#ifndef TABELAHASH_H_INCLUDED
#define TABELAHASH_H_INCLUDED

#include "Lista.h"

struct TabelaHash{
    long int tamanho, qtdColisoes;
    Lista *TH;
};

TabelaHash * criaTabela(long int n);

long int posicao(TabelaHash * tabela, long int elemento);

void insereTabela(TabelaHash * tabela, long int elemento);

bool existeTabela(TabelaHash * tabela, long int elemento);

#endif // TABELAHASH_H_INCLUDED
