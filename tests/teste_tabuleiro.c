/*
    Arquivo para teste das funções que manipulam o tabuleiro.
 */
#include <assert.h>
#include <stdbool.h>
#include "../src/tabuleiro.h"

bool comparaVetores(int *vetor_1, int *vetor_2, int tamanho_vetor);
void TesteRetornaCasaVazia_1(void);
void TesteRetornaCasaVazia_2(void);
void TesteRetornaCasaVazia_3(void);

int main(int argc, char *argv[])
{
	/*
	TesteRetornaCasaVazia_1();
	TesteRetornaCasaVazia_2();
	TesteRetornaCasaVazia_3();
	*/

	TesteCasas return 0;
}

bool comparaVetores(int *vetor_1, int *vetor_2, int tamanho_vetor)
{
	int i;

	for (i = 0; i < tamanho_vetor; i++)
	{
		if (vetor_1[i] != vetor_2[i])
		{
			return false;
		}
	}

	return true;
}

void TestePossiveisMovimentos(void)
{
	char tabuleiro[LINHA][COLUNA] = {
		{'I', 'D', 'D', 'I'},
		{'I', 'D', 'D', 'I'},
		{'I', 'I', 'I', 'I'},
		{'I', 'I', 'I', 'I'},
		{'I', '0', '0', 'I'}

	}
}

void TesteRetornaCasaVazia_1(void)
{
	char tabuleiro[LINHA][COLUNA] = {
		{'I', 'D', 'D', 'I'},
		{'I', 'D', 'D', 'I'},
		{'I', 'I', 'I', 'I'},
		{'I', 'I', 'I', 'I'},
		{'I', '0', '0', 'I'}};
	int tabuleiro_livre_1[2] = {4, 1};
	int tabuleiro_livre_2[2] = {4, 2};
	int tabuleiro_livre_check_1[2] = {0, 0};
	int tabuleiro_livre_check_2[2] = {0, 0};

	retornaCasaVazia(tabuleiro, tabuleiro_livre_check_1, tabuleiro_livre_check_2);

	printf("Teste 1\n");
	if (comparaVetores(tabuleiro_livre_1, tabuleiro_livre_check_1, 2) == true)
	{
		printf("Teste aprovado!\n");
	}
	else
	{
		printf("Teste reprovado!\n");
	}

	if (comparaVetores(tabuleiro_livre_2, tabuleiro_livre_check_2, 2) == true)
	{
		printf("Teste aprovado!\n");
	}
	else
	{
		printf("Teste reprovado!\n");
	}
	printf("\n");
}

void TesteRetornaCasaVazia_2(void)
{
	char tabuleiro[LINHA][COLUNA] = {
		{'I', 'D', 'D', '0'},
		{'I', 'D', 'D', 'I'},
		{'0', 'I', 'I', 'I'},
		{'I', 'I', 'I', 'I'},
		{'I', 'I', 'I', 'I'}};
	int tabuleiro_livre_1[2] = {0, 3};
	int tabuleiro_livre_2[2] = {2, 0};
	int tabuleiro_livre_check_1[2] = {0, 0};
	int tabuleiro_livre_check_2[2] = {0, 0};

	retornaCasaVazia(tabuleiro, tabuleiro_livre_check_1, tabuleiro_livre_check_2);

	printf("Teste 2\n");
	if (comparaVetores(tabuleiro_livre_1, tabuleiro_livre_check_1, 2) == true)
	{
		printf("Teste aprovado!\n");
	}
	else
	{
		printf("Teste reprovado!\n");
	}

	if (comparaVetores(tabuleiro_livre_2, tabuleiro_livre_check_2, 2) == true)
	{
		printf("Teste aprovado!\n");
	}
	else
	{
		printf("Teste reprovado!\n");
	}
	printf("\n");
}

void TesteRetornaCasaVazia_3(void)
{
	char tabuleiro[LINHA][COLUNA] = {
		{'I', '0', 'I', 'I'},
		{'I', 'I', '0', 'I'},
		{'I', 'D', 'D', 'I'},
		{'I', 'D', 'D', 'I'},
		{'I', 'I', 'I', 'I'}};
	int tabuleiro_livre_1[2] = {0, 1};
	int tabuleiro_livre_2[2] = {1, 2};

	int tabuleiro_livre_check_1[2] = {0, 0};
	int tabuleiro_livre_check_2[2] = {0, 0};

	retornaCasaVazia(tabuleiro, tabuleiro_livre_check_1, tabuleiro_livre_check_2);

	printf("Teste 3\n");
	if (comparaVetores(tabuleiro_livre_1, tabuleiro_livre_check_1, 2) == true)
	{
		printf("Teste aprovado!\n");
	}
	else
	{
		printf("Teste reprovado!\n");
	}

	if (comparaVetores(tabuleiro_livre_2, tabuleiro_livre_check_2, 2) == true)
	{
		printf("Teste aprovado!\n");
	}
	else
	{
		printf("Teste reprovado!\n");
	}
	printf("\n");
}

void TesteCasasAdjacentes()
{
	char tabuleiro[LINHA][COLUNA] = {
		{'I', '0', 'I', 'I'},
		{'I', 'I', '0', 'I'},
		{'I', 'D', 'D', 'I'},
		{'I', 'D', 'D', 'I'},
		{'I', 'I', 'I', 'I'}};
	int tabuleiro_livre_1[2] = {0, 1};
	int tabuleiro_livre_2[2] = {1, 2};

	int casa_adjacente_1[2][3] = {{0, 0}, {0, 2}, {1, 1}};
	int casa_adjacente_2[2][3] = {{1, 2}, {1, 3}, {0, 2}, {2, 2}};

	int casa_adjacente_check_1[2][3];
	int casa_adjacente_check_2[2][3];

	casasAdjacentes();
}