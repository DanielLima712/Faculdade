#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int menu = 0;

float h = 0, r = 0, b = 0, area = 0;

while(menu != 4){

    h = 0;
    r = 0; 
    b = 0;
    area = 0;

printf("1 - Triangulo\n2 - Retangulo\n3 - Circulo\n4 - Sair do programa\n");
printf("Escolha qual figura voce deseja encontrar a area: ");
scanf("%d", &menu);
system("cls");

    switch(menu){
        case 1:
            printf("Opcao 1 - Triangulo\n");
            printf("Digite a medida da base 'b' do triangulo: ");
            scanf("%f", &b);
            printf("Digite a medida da altura 'h' do triangulo: ");
            scanf("%f", &h);
            if(b == h){
                printf("Valor invalido, e um triangulo equilatero.\n");
            } else{
                area = (b * h) / 2;
                printf("Area do triangulo = %.2f\n", area);
            }
        break;

        case 2:
            printf("Opcao 2 - Retangulo\n");
            printf("Digite a medida da base 'b' do retangulo: ");
            scanf("%f", &b);
            printf("Digite a medida da altura 'h' do retangulo: ");
            scanf("%f", &h);
            if(b == h){
                printf("Valor invalido, e um quadrado.\n");
            } else{
                area = b * h;
                printf("Area do retangulo = %.2f\n", area);
            }
        break;

        case 3:
            printf("Opcao 3 - Circulo\n");
            printf("Digite a medida do raio 'r' do circulo: ");
            scanf("%f", &r);
            r = pow(r, 2);
            area = 3.14 * r;
            printf("Area do circulo = %.2f\n", area);
        break;

        case 4:
            printf("Programa encerrado.");
        break;
    }
}
    return 0;
}