//1) Escreva um programa que leia uma matriz 3x3 de números inteiros. Calcule e escreva:
//a) A soma dos elementos da primeira linha (Da para ser resolvido com um único "for")
//b) A soma dos elementos da segunda coluna  (Da para ser resolvido com um único "for")
//c) O maior valor da matriz (Precisa de dois "for")
//d) As posições "i", e "j" do menor valor da matriz (Precisa de dois "for").
#include <stdio.h>

void main(){

    int matriz [3][3];
    int i, j;
    int somaL = 0, somaC = 0, maior = 0; 
    int menor = 1, menorI = 0, menorJ = 0;

    //1) Escreva um programa que leia uma matriz 3x3 de números inteiros.
    printf("Escreva os numeros de uma matriz 3x3.\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
        printf("Digite o valor da matriz[%d][%d]: ", i, j);
        scanf("%d", &matriz[i][j]); 
        }  
    }
    printf("\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
        printf("%d ", matriz[i][j]);
        }     
    printf("\n");
    }

    //a) A soma dos elementos da primeira linha (Da para ser resolvido com um único "for")
    printf("\n");
    for(j = 0; j < 3; j++){
        somaL += matriz[0][j];
    }
    printf("A soma da primeira linha da matriz e: %d\n", somaL);

    //b) A soma dos elementos da segunda coluna  (Da para ser resolvido com um único "for")
    for(i = 0; i < 3; i++){
        somaC += matriz[i][1];
    }
    printf("A soma da segunda coluna da matriz e: %d\n", somaC);

    //O maior valor da matriz (Precisa de dois "for")
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(maior < matriz[i][j]){
                maior = matriz[i][j];
            }
        }  
    }
    printf("O maior valor da matriz e: %d\n", maior);

    //d) As posições "i", e "j" do menor valor da matriz (Precisa de dois "for").
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(menor >= matriz[i][j]){
                menor = matriz[i][j];
                menorI = i;
                menorJ = j;
            }
        }       
    }
    printf("As posicoes de i e j do menor valor da matriz e: i-%d e j-%d\n", menorI, menorJ);
}