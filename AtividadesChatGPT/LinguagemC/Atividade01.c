//Atividade: Manipulação de Matrizes com Funções e Ponteiros
//Descrição: Escreva um programa em C que:
//Leia do usuário uma matriz 3x3.
//Tenha uma função para preencher a matriz.
//Tenha uma função para exibir a matriz.
//Tenha uma função que receba um ponteiro para a matriz e retorne a soma de todos os elementos.

#include <stdio.h>
//preencher a matriz
void preencherM(int vet[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("Digite o valor da matriz de posicao - [%d][%d]: ", i+1, j+1);
            scanf("%d", &vet[i][j]);
        }

    }
}
//exibir a matriz
void exibirM(int vet[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", vet[i][j]);
        }
        printf("\n");
    }
}
//somar os elementos da matriz
void somaM(int vet[3][3])
{
    int somaM = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            somaM += vet[i][j];
        }
        
    }
    printf("A soma dos elementos dessa matriz e: %d", somaM);
}
int main()
{
    int vetor[3][3];

    preencherM (vetor);
    exibirM(vetor);
    somaM(vetor);

    return 0;
}