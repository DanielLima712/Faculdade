#include <stdio.h>
#include <math.h> // biblioteca p/ matemática.

int main(){
float x1, x2, xpos, xneg; 
int a, b, c, delta, raiz;
    printf("Digite valor a:");
    scanf("%d", &a);
    if(a == 0){ // se valor digitado de a for 0, o programa acaba com a msg abaixo.
        printf("Nao e equacao de segundo grau.");
    }
    else{
    printf("Digite valor b:");
    scanf("%d", &b);
    printf("Digite valor c:");
    scanf("%d", &c);

    delta = (b*b) - 4 * a * c; // definição da função "delta".
    if(delta < 0){ // se delta for <0 (negativo), o programa acaba com a msg abaixo.
        printf("O valor de delta e negativo, nao e um numero real.");
    }
    else if(delta == 0){ // se delta for igual a 0, o programa acaba com a msg abaixo.
        printf("A equação possui raizes reais e iguais.");
    }
    else{ // caso não ocorra nenhuma das alterações acima, o programa exibira o valor de delta.
    printf("O valor de delta e:%d\n", delta);

    // x = -b +- raiz quadrada de delta / 2*a

    raiz = sqrt(delta); // definindo a raiz de delta (função sqrt = raiz).
    printf("O valor da raiz e:%d\n", raiz);

    x1 = -(b) + raiz;
    xpos = x1 / (2 * a);
    x2 = -(b) - raiz;
    xneg = x2 / (2 * a); 
    printf("O valor de x1 e: %.2f\n", xpos);
    printf("O valor de x2 e: %.2f\n", xneg);
    }
    }
    return 0;
}