//Faça um programa que crie um vetor de números inteiros de 10 posições e uma função preencheVetor que recebe o vetor e o número de elementos.
//A função deve preencher o vetor com números de 1 a 10.No método main, após a chamada, mostre o vetor.

#include <stdio.h>

void preencheVetor(int vet[], int qnt)
{
    int i;
    for(i = 1; i <= qnt; i++)
    {
        vet[i] = i;
    }
    for(i = 1; i <= qnt; i++)
    {
        printf("vetor[%d]: %d\n", i-1, vet[i]);
    }
}

int main()
{
    int vetor[10];
    
    preencheVetor(vetor, 10);

    return 0;
}