#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    int idade;
    float salario;
} Funcionario;

void cadastrar(Funcionario funcionarios[], int qnt){
    char solution[10];
    for(int i = 0; i < qnt; i++){
        printf("\nFuncionario - %d: \n", i+1);
        printf("Nome: ");
        fgets(solution, 10, stdin);
        fgets(funcionarios[qnt].nome, 50, stdin);
        funcionarios[qnt].nome[strlen(funcionarios[qnt].nome) - 1] = '\0';

        printf("Idade: ");
        scanf("%d", &funcionarios[qnt].idade);

        printf("Salario: ");
        scanf("%f", &funcionarios[qnt].salario);
    }
}

// void alterarSalario(Funcionario *funcionarios){
//     printf("Salario atual: %.2f\n", funcionarios->salario);
//     printf("Digite o novo salario: ");
//     scanf("%f", &funcionarios->salario);
// }

void imprimir(Funcionario *funcionarios, int qnt){
    for(int i = 0; i < qnt; i++){
        printf("\nFuncionario %d\n", i+1);
        printf("Nome: %s", funcionarios[i]->nome);
        printf("Idade: %d", funcionarios[i]->idade);
        printf("Salario: %.2f", funcionarios[i]->salario);
    }
}

void ordenar(){

}

int main(){
    int altera = 1;
    Funcionario funcionarios[2];

    printf("Cadastre os %d funcionarios.\n", qnt);
    cadastrar(funcionarios, qnt);

    // printf("Altere o salario do(a) funcionario(a) 1.\n");
    // alterarSalario(&funcionarios[altera]);

    imprimir(&funcionarios[qnt], qnt);

}