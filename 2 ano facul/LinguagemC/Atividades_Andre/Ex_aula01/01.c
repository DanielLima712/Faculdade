#include <stdio.h>

int main(){
    int nmr[5];
    int soma = 0;
    for(int i = 0; i < 5; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &nmr[i]);
        soma += nmr[i];
    }

    printf("A soma dos numeros e: %d", soma);

    printf("\n%d", nmr[3]);
    return 0;
}