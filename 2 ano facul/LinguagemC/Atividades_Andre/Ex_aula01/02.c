#include <stdio.h>

int main(){
    int nmr[5];
    int soma = 0, media = 0, maior = 0;
    for(int i = 0; i < 5; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &nmr[i]);
        soma += nmr[i];
    }

    media = soma/5;

    printf("A media e: %d\n", media);

    for(int i = 0; i < 5; i++){
        if(maior < nmr[i]){
            maior = nmr[i];
        }
    }
    printf("O maior numero digitado e: %d", maior);

    return 0;
}