//Escreva uma função que receba os coeficientes a, b e c de uma equação do segundo grau e
//retorne as duas raízes reais (caso existam) por referência.

#include <stdio.h>
#include <math.h>

void retornoRaiz(float a, float b, float c, float *x1, float *x2, int delta)
{
    delta = (pow(b,2) - (4 * a * c));
    *x1 = (-b + sqrt(delta)) / (2*a);
    *x2 = (-b - sqrt(delta)) / (2*a);

    if(delta < 0)
    {
        printf("O delta e negativo, raiz inexistente.");
    } else if(delta >= 0){
        printf("Delta = %d\n", delta);
        printf("x1 = %.2f. x2 = %.2f", *x1, *x2);
    }
}

int main(){
    float a = 0, b = 0, c = 0;
    float x1, x2;
    int delta;

    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%f", &c);
    printf("\n");

    retornoRaiz(a, b, c, &x1, &x2, delta);

    return 0;
}