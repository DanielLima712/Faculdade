#include <stdio.h>

int main(){
int opcao = 0;
float ad = 0, gd = 0, a = 0, g = 0;

printf("Tabela de preco dos combustiveis:\n1 - Alcool = R$ 2,90 (descontos por litro: ate 20 litros 3%%, acima de 20 litros 5%%)\n2 - Gasolina = R$ 3,30 (descontos por litro: ate 20 litros 4%%, acima de 20 litros: 6%%)\n");
printf("Digite o combustivel que deseja escolher: ");
scanf("%d", &opcao);

//Opçao de combustivel e quantos litros vai colocar.
if(opcao == 1){
    printf("1 - Alcool.\n");
    printf("Digite quantos litros deseja colocar: ");
    scanf("%f", &a);
} else if(opcao == 2){
    printf("2 - Gasolina.\n");
    printf("Digite quantos litros deseja colocar: ");
    scanf("%f", &g);
}else{
    printf("Valor digitado invalido.");
}

//Calculo dos descontos a partir do combustivel escolhido.
switch(opcao){
    case 1:
        if(a <= 0){
            printf("Valor digitado invalido.");
        } else if(a <= 20){
            ad = a * 0.087;
            a = a * 2.90;
            a = a - ad;
            printf("Valor ja descontado: R$ %.2f (desconto de R$ %.2f)", a, ad);
        } else{
            ad = a * 0.145;
            a = a * 2.90;
            a = a - ad;
            printf("Valor ja descontado: R$ %.2f (desconto de R$ %.2f)", a, ad);
        }
        break;

    case 2:
        if(g <= 0){
            printf("Valor digitado invalido.");
        } else if(g <= 20){
            gd = g * 0.132;
            g = g * 3.30;
            g = g - gd;
            printf("Valor ja descontado: R$ %.2f (desconto de R$ %.2f)", g, gd);
        } else{
            gd = g * 0.198;
            g = g * 3.30;
            g = g - gd;
            printf("Valor ja descontado: R$ %.2f (desconto de R$ %.2f)", g, gd);
        }
        break;
        
}
    return 0;
}