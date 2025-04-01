#include <stdio.h>

int main(){
    int a, b, c;

    printf("Digite o comprimento do lado (a): ");
    scanf("%d", &a);
    printf("Digite o comprimento do lado (b): ");
    scanf("%d", &b);
    printf("Digite o comprimento do lado (c): ");
    scanf("%d", &c);

    if(a == b && b == c){
        printf("Triangulo equilatero!");
    }else if(a == b && b != c){
        printf("Triangulo isosceles");
    }else{
        printf("Triangulo escaleno");
    }
    return 0;
}