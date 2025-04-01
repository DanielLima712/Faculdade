//2)Escrever um programa que preencha 2 matrizes (a e b) de 3 linhas x 4 colunas com números aleatórios e não repetidos 
// (entre 0 e 100). Em seguida, verifique a existência de números iguais nas duas matrizes, imprimindo-os.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    int matriz1[3][4], matriz2[3][4];
    int i, j, k = 0;
    int iguais[12];

    srand(time(NULL));

    //Matriz 1 com numeros aleatorios.
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            matriz1[i][j] = rand() % 100;
        }
    }
    //Matriz 2 com numeros aleatorios.
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            matriz2[i][j] = rand() % 100;
        }
    }
    //Printf da matriz 1.
    printf("Matriz 1:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //Printf da matriz 2.
    printf("Matriz 2:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }
    //Identificação de numeros iguais nas matrizes.
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            if(matriz1[i][j] == matriz2[i][j]){
                iguais[k] = matriz1[i][j];
                k++;
            }
        }
    }
    //Printf de possiveis numeros iguais das matrizes.
    printf("numeros iguais das matrizes:\n");
    for(k; k >= 0; k--){
        printf("%d\n", iguais[k]);
    }
}