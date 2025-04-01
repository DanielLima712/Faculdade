//Implemente um codigo em c com 4 funções (soma, subtracao, divisao, multiplicacao), todas seven receber dois números inteiros. 
//No método main, colete dois valores do usuário e efetue a chamada das 4 funções, mostrando o resultado das operações.

#include <stdio.h>

void soma(int a, int b){
    int result = 0;
    result = a + b;
    printf("%d + %d: %d\n", a, b, result);
}

void subtracao(int a, int b){
    int result = 0;
    result = a - b;
    printf("%d - %d: %d\n", a, b, result);
}

void divisao(int a, int b){
    int result = 0;
    result = a / b;
    printf("%d / %d: %d\n", a, b, result);
}

void multiplicacao(int a, int b){
    int result = 0;
    result = a * b;
    printf("%d x %d: %d\n", a, b, result);
}

int main(){
    int num1 = 0, num2 = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    soma(num1,num2);
    subtracao(num1,num2);
    divisao(num1,num2);
    multiplicacao(num1,num2);

    return 0;
}