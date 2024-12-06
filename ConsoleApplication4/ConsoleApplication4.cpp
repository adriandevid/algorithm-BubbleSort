// ConsoleApplication4.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <stdio.h>

void bubbleSort(int vetor[], int size) {
	bool trocar = true;

	while (trocar) {
		int trocar_counter = 0;
		int counter = 0;

		while (counter < size) {
			if ((counter + 1) < size) {
				int temp = vetor[counter + 1];

				if (vetor[counter] > vetor[counter + 1])
				{
					vetor[counter + 1] = vetor[counter];
					vetor[counter] = temp;
				}
				else {
					trocar_counter++;
				}
			}
			counter++;
		}

		if (trocar_counter == (size - 1)) {
			trocar = false;
		}

		counter = 0;
	}
}

int main()
{
	int vetor[4] = { 15, 20, 8, 16 };
	int size = sizeof(vetor) / sizeof(int);

	bubbleSort(vetor, size);

	for (int i = 0; i < size; i++)
	{
		printf(" %d ", vetor[i]);
	}
    return 0;
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
