#include <iostream>


using namespace std;


void calc_arm_pos(int *t, int valor, int tam)
{
	int res_pos = valor % tam; // O valor do resto da divisão é o valor que vai definir se a posição do dado "função hash"
	if (t[res_pos] == 0)
		t[res_pos] = valor;
	else
	{
		int controle = t[res_pos];
		
		cout << "Posicao ja ocupada !";
		
	}
		// Colocar um codigo que grave a posição de outro vetor na tabela principal
}


void limpa_tabela(int *t, int tam)  // Limpa a tabela para que não seja impresso lixo no final
{
	for (int c = 0; c < tam; c++)
		t[c] = NULL;
}


int main()
{
	int tam = 0,valor,auxiliar;
	char resp = 'S';

	cout << "Informe o tamanho da tabela: ";
	cin >> tam;
	
	int *tabela = new int[tam];
	//int *vetor = new int[];
	
	limpa_tabela(tabela, tam);
	
	while (resp ==	's' || resp == 'S')
	{
		cout << "Entre com o valor que deseja armazenar: ";
		cin >> valor;
		calc_arm_pos(tabela, valor, tam);
		cout << "Deseja continuar? (S/N) ";
		cin >> resp;
	}

	for (int c = 0; c < tam; c++)
		cout << endl <<"\t"<< tabela[c] << endl;

	
	return 0;
}
