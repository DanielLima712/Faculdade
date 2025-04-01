#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int conta = 0, nmrconta = 0, menu = 0, ok = 0; 

    float saldo = 0, sacar = 0, depositar = 0;

    char nome[50], solution[10];

    while(menu != 6){

        menu = 0;
        ok = 0;
        depositar = 0;
        sacar = 0;

        printf("1. Cadastrar nova conta\n2. Exibir informacoes da conta\n3. Depositar\n4. Sacar\n5. Exibir saldo\n6. Sair\n");
        printf("Digite um numero para acessar ou 6 para sair: ");
        scanf("%d", &menu);

        system("cls");

        switch(menu){
            case 1:
                printf("Opcao 1 - Cadastrar nova conta.\n");

                fgets(solution, 10, stdin);

                printf("Digite o nome do titular: ");
                fgets(nome, 50, stdin);
                nome[strlen(nome) - 1] = '\0';

                conta = 0;
                while(conta != 1 && conta != 2){
                    printf("1 - Debito\n2 - Poupanca\n");
                    printf("Selecione o tipo de conta: ");
                    scanf("%d", &conta);              
                }
                
                printf("Digite o numero da conta: ");
                scanf("%d", &nmrconta);
                              
                printf("Digite seu saldo inicial: ");
                scanf("%f", &saldo); 
            break;

            case 2:
                printf("Opcao 2 - Exibir informacoes da conta.\n");

                printf("Nome do titular: %s\n", nome);

                conta >= 2 ?
                    printf("Conta: poupanca\n") : printf("Conta: debito\n");

                printf("Numero da conta: %d\n", nmrconta);

                printf("Saldo atual: R$ %.2f\n", saldo);
            break;

            case 3:
                printf("Opcao 3 - Depositar.\n");  

                while(ok != 1){
                    printf("Digite o valor que deseja depositar: ");
                    scanf("%f", &depositar);
                    printf("Tem certeza que deseja depositar R$ %.2f?\nDigite 1 para 'SIM' e qualquer outra tecla para 'NAO': ", depositar);
                    scanf("%d", &ok);
                }

                saldo += depositar;
            break;

            case 4:
                printf("Opcao 4 - Sacar.\n");

                while(ok != 1){
                    printf("Digite o valor que deseja sacar: ");
                    scanf("%f", &sacar);
                    printf("Tem certeza que deseja sacar R$ %.2f?\nDigite 1 para 'SIM' e qualquer outra tecla para 'NAO': ", sacar);
                    scanf("%d", &ok);
                }
                if(sacar <= saldo){
                    saldo -= sacar;
                }else{
                    printf("Nao tem dinheiro suficiente para sacar esse valor.\n");
                }
            break;

            case 5:
                printf("Opcao 5 - Exibir saldo.\n");
                printf("Seu saldo atual e: R$ %.2f\n", saldo);
            break;
            
            case 6:
                printf("Programa encerrado.\n");
            break;

        }

    }

    return 0;
}