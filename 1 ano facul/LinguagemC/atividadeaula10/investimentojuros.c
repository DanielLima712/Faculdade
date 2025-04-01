#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

float juros = 0, dinheiro = 0;

printf("Digite o valor que voce deseja, sabendo que a taxa de juros eh de 5%%: ");
scanf("%f", &dinheiro);

int tempo = 1;

while(tempo <= 1 ){
    printf("Digite quantos meses voce deseja aplicar esse juros: ");
    scanf("%d", &tempo);
    if(tempo <= 1){
        printf("Valor invalido.\n");
    } else{
        juros = (dinheiro * 0.05) * tempo;
        dinheiro += juros;
        printf("Juros = %.2f.\nTotal = %.2f", juros, dinheiro);
    }
}
    return 0;
}