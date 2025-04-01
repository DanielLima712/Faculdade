#include <stdio.h>
int main(){
int a;
printf("De 1 a 100: "); // numeros de 1 a 100
    for(a = 1;a <= 100; a++){
    printf("%d ", a);
    }
printf("\nDe 100 a 1: "); // numeros de 100 a 1
    for(a = 100;a >= 1; a--){
    printf("%d ", a);
    }
printf("\nPares de 1 a 100: "); //numeros pares de 1 a 100
    for(a = 1;a <= 100; a++){
        if(a %2 == 0)
        printf("%d ", a);
    }
printf("\nImpares de 1 a 100: "); //numeros impares de 1 a 100
    for(a = 1;a <= 100; a++){
        if(a %2 == 1)
        printf("%d ", a);
    }
    return 0;
}