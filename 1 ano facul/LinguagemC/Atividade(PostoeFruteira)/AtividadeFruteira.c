#include <stdio.h>

int main(){

int opcao = 0, morangokg = 0, macakg = 0;
float morango = 0, maca = 0;

printf("Tabela de preco das frutas:\n1 - Morango = R$ 2,50 por KG (ate 5KG) ou R$ 2,20 por KG (acima de 5KG)\n2 - Maca = R$ 1,80 por KG (ate 5KG) ou R$ 1,50 por KG (acima de 5KG)\n");
printf("Digite a fruta que deseja comprar: ");
scanf("%d", &opcao);

//Opçao da fruta e quantos KG vai comprar.
if(opcao == 1){
    printf("1 - Morango.\n");
    printf("Digite quantos KG deseja comprar: ");
    scanf("%d", &morangokg);
} else if(opcao == 2){
    printf("2 - Maca.\n");
    printf("Digite quantos KG deseja comprar: ");
    scanf("%d", &macakg);
}else{
    printf("Valor digitado invalido.");
}

//Calculo dos preços.
switch(opcao){
    case 1:
        if(morangokg <= 0){
            printf("Valor digitado invalido.");
        } else if (morangokg <= 5){
            morango = morangokg * 2.50;
            printf("Valor para pagar: R$ %.2f", morango);
        } else{
            morango = morangokg * 2.20;
            printf("Valor para pagar: R$ %.2f", morango);
        }
    break;

    case 2:
        if(macakg <= 0){
            printf("Valor digitado invalido.");
        } else if (macakg <= 5){
            maca = macakg * 1.80;
            printf("Valor para pagar: R$ %.2f", maca);
        } else{
            maca = macakg * 1.50;
            printf("Valor para pagar: R$ %.2f", maca);
        }
    break;
}

    return 0;
}