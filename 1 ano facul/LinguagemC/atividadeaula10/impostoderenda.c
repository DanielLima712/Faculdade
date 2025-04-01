#include <stdio.h>
#include <math.h>

int main(){

float salario = 0, imposto = 0;

printf("Digite seu salario: ");
scanf("%f", &salario);

if(salario <= 2259){
    printf("Seu salario e isento de impostos");
} 
else if( salario <= 2826){
    printf("7,5%% de imposto\n");
        imposto = (0.075 * salario) - 169.44;
        salario = salario - imposto;
    printf("Valor do imposto a partir do seu salario: R$ %.2f\n", imposto);
    printf("Seu novo salario e: R$ %.2f\n", salario);
} 
else if(salario <= 3751){
    printf("15%% de imposto\n");
        imposto = (0.15 * salario) - 381.44;
        salario = salario - imposto;
    printf("Valor do imposto a partir do seu salario: R$ %.2f\n", imposto);
    printf("Seu novo salario e: R$ %.2f\n", salario);    
}
else if(salario <= 4664){
    printf("22,5%% de imposto\n");
        imposto = (0.225 * salario) - 662.77;
        salario = salario - imposto;
    printf("Valor do imposto a partir do seu salario: R$ %.2f\n", imposto);
    printf("Seu novo salario e: R$ %.2f\n", salario);    
}
else{
    printf("27,5%% de imposto\n");
        imposto = (0.275 * salario) - 896.00;
        salario = salario - imposto;
    printf("Valor do imposto a partir do seu salario: R$ %.2f\n", imposto);
    printf("Seu novo salario e: R$ %.2f\n", salario);    
}
    return 0;
}