#include <stdio.h>
int main (){
    int nota;
    double salario;

    printf("Digite seu salario:");
    scanf("%lf", &salario);
    printf("Digite sua nota:");
    scanf("%d", &nota);

    switch (nota){
        case 1:
        printf("O salario permanece o mesmo: %.2lf reais.", salario);
        break;
        case 2:
        salario = salario * 1.05;
        printf("Aumento de 5 porcento no salario, seu salario atual e: %.2lf reais.", salario);
        break;
        case 3:
        salario = salario * 1.10;
        printf("Aumento de 10 porcento no salario, seu salario atual e: %.2lf reais.", salario);
        break;
        case 4:
        salario = salario * 1.15;
        printf("Aumento de 15 porcento no salario, seu salario atual e: %.2lf reais.", salario);
        break;
        case 5:
        salario = salario * 1.20;
        printf("Aumento de 20 porcento no salario, seu salario atual e: %.2lf reais.", salario);
        break;
    }
    return 0;
}