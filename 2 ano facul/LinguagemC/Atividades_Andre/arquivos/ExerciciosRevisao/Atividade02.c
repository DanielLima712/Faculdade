#include <stdio.h>

int main(){
    int nmr[3];
    int maior = 0;

    printf("Digite no numero 1: ");
    scanf("%d", &nmr[0]);
    printf("Digite no numero 2: ");
    scanf("%d", &nmr[1]);
    printf("Digite no numero 3: ");
    scanf("%d", &nmr[2]);

    for(int i = 0; i < 3; i++){
        if(maior < nmr[i]){
            maior = nmr[i];
        }
    }

    printf("O maior numero e: %d", maior);
    
    return 0;
}