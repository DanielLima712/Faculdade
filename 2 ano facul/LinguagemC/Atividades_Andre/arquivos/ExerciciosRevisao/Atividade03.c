#include <stdio.h>

void media(int a, int b, int c){
    int media, soma;
    soma = a + b + c;
    media = soma / 3;
    printf("A media dos numeros e: %d", media);
}

int main(){
    int a = 6, b = 3, c = 3;
    media(a,b,c);
    return 0;
}