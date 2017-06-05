#include "TabelaHash.h"

TabelaHash * criaTabela(long int n){
    TabelaHash *tabela = new TabelaHash;

    tabela->TH = new Lista[n];

    for(int i=0; i<n; i++)
        tabela->TH[i];

    tabela->tamanho = n;
    tabela->qtdColisoes = 0;

    return tabela;
}

long int posicao(TabelaHash * tabela, long int elemento){
    return (elemento%tabela->tamanho);
}

void insereTabela(TabelaHash * tabela, long int elemento){
    long int posicao = posicao(tabela, elemento);

    if(existeLista(tabela->TH[posicao], elemento))
        return;

    else if(!vazia(&tabela->TH[posicao]))
        tabela->qtdColisoes++;

    insere_ordenado(tabela->TH[posicao], elemento);
}

bool existeTabela(TabelaHash * tabela, long int elemento){
    long int posicao = posicao(tabela, elemento);

    return existeLista(tabela->TH[posicao], elemento);
}
