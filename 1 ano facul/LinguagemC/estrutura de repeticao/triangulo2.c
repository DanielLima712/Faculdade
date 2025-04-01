#include <stdio.h>
int main(){
int altura = 0, a = 0, b = 0, inv = 0;
printf("Digite a altura do triangulo: ");
scanf("%d", &altura);
    for(inv = altura; inv >= 0; inv--){
        printf(" ");
        for(a = 0; a < inv; a--){
            for(b = 0; b <= a; b--){
            printf("*");
            }
        printf("\n");
        }
    }        
    return 0;
}