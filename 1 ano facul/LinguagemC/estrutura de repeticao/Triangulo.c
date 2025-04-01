#include <stdio.h>
int main(){
int a  = 0, b = 0, nmr = 0;
printf("Digite a atltura do triangulo:");
scanf("%d", &nmr);

    for(a = 1;a < nmr;a++){
        for(b = 0;b <= a;b++){
        printf("*");
    }
        printf("\n");
    }
    return 0;
}