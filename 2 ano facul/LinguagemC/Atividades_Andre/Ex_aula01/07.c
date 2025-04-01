#include <stdio.h>

int main(){
    int nmr[3];
    int maior = 0;

    printf("Digite 3 numeros inteiros:\n");
    for(int i = 0; i < 3; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &nmr[i]);
        if(maior < nmr[i]){
            maior = nmr[i];
        }
    }
    printf("O maior numero digitado foi: %d", maior);
    return 0;
}