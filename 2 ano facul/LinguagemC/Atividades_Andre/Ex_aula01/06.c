#include <stdio.h>

int main(){
    int dia = 0;
    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &dia);

    if(dia > 0 || dia < 8){
        switch(dia){
            case 1:
                printf("Hoje e domingo!");
            break;
            case 2:
                printf("Hoje e segunda-feira!");
            break;
            case 3:
                printf("Hoje e terca-feira!");
            break;
            case 4:
                printf("Hoje e quarta-feira!");
            break;
            case 5:
                printf("Hoje e quinta-feira!");
            break;
            case 6:
                printf("Hoje e sexta-feira!");
            break;
            case 7:
                printf("Hoje e sabado!");
            break;
        }
    }
    return 0;
}