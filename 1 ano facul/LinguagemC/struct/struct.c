#include <stdio.h>

int main(){

struct ficha_do_carro{
    char nome[50], marca[50];
    float preco;
    int id, placa, ano;
} carro;

    printf("-- Cadastro de carro --\n");

    printf("Marca do carro: ");
    fflush(stdin);
    fgets(carro.marca, 40, stdin);

    printf("Nome do carro: ");
    fflush(stdin);
    fgets(carro.nome, 40, stdin);

    printf("ID do carro: ");
    scanf("%d", &carro.id);

    printf("Placa do carro: ");
    scanf("%d", &carro.placa);

    printf("Ano do carro: ");
    scanf("%d", &carro.ano);

    printf("Preco do carro: ");
    scanf("%f", &carro.preco);

    //

    printf("-- Informacoes do carro --\n");
    printf("Marca do carro: %s", carro.marca);
    printf("Nome do carro: %s", carro.nome);
    printf("ID do carro: %d\n", carro.id);
    printf("Placa do carro: %d\n", carro.placa);
    printf("Ano do carro: %d\n", carro.ano);
    printf("Preco do carro: %.2f\n", carro.preco);
    return 0;
}