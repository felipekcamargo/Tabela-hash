#include <iostream>
#include "Lista.h"

using namespace std;


void calc_arm_pos(Lista *t, int valor, int tam)
{
	int res_pos = valor % tam; // O valor do resto da divisão é o valor que vai definir se a posição do dado "função hash"
	//if (t[res_pos] == 0)
	//	t[res_pos] = valor;
	//else
	//{
	//	int controle = t[res_pos];
	//	
	//	cout << "Posicao ja ocupada !";
	//	
	//}
	insere_ordenado(t[res_pos], valor);
		// Colocar um codigo que grave a posição de outro vetor na tabela principal
}



int main()
{
	int tam = 0,valor,auxiliar;
	char resp = 'S';

	cout << "Informe o tamanho da tabela: ";
	cin >> tam;
	
	Lista *tabela = new Lista[tam];
	
	while (resp ==	's' || resp == 'S')
	{
		cout << "Entre com o valor que deseja armazenar: ";
		cin >> valor;
		calc_arm_pos(tabela, valor, tam);
		cout << "Deseja continuar? (S/N) ";
		cin >> resp;
	}

	for (int c = 0; c < tam; c++)
		mostra_lista(tabela[c]);
	
	return 0;
}
