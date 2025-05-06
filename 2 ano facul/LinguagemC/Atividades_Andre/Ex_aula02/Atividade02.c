#include <stdio.h>

#define SIZE 5

int main() {
    int vetor1[SIZE] = {3, 8, 15, 2, 10};
    int vetor2[SIZE] = {7, 14, 6, 20, 9};
    int vetor3[SIZE] = {4, 12, 18, 5, 11};

    int maior = 0;
    
    // Verificar
    for (int i = 0; i < SIZE; i++) {
        if (vetor1[i] > maior) {
            maior = vetor1[i];
        }
        if (vetor2[i] > maior) {
            maior = vetor2[i];
        }
        if (vetor3[i] > maior) {
            maior = vetor3[i];
        }
    }

    printf("O maior numero entre os vetores e: %d\n", maior);

    return 0;
}