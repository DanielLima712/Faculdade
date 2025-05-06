#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    int id;
    char nome[50];
    char tipo[50];
    float preco;
}Produto;

void inserirProduto(Produto *produtos, int k){
    char solution[10]; // p/ nao bugar
    printf("Produto - %d\n", k+1);
    printf("Digite o ID do produto: ");
    scanf("%d", &produtos->id);

    printf("Digite o nome do produto: ");
    fgets(solution, 10, stdin);
    fgets(produtos->nome, 50, stdin);
    produtos->nome[strlen(produtos->nome) - 1] = '\0';

    printf("Digite o tipo do produto: ");
    fgets(produtos->tipo, 50, stdin);
    produtos->tipo[strlen(produtos->tipo) - 1] = '\0';

    printf("Digite o preco do produto: R$ ");
    scanf("%f", &produtos->preco);

}
void alterarProduto(){
}
void excluirProduto(){
}
void listarProdutos(Produto produtos[], int k){
    printf("         ---=== Lista de produtos ===---\n");
    int prod = 1; 
    for(int i = 0; i < k; i++){
    printf("Produto - %d\n", prod);
    printf("ID: %d\n", produtos[i].id);
    printf("Nome: %s\n", produtos[i].nome);
    printf("Tipo: %s\n", produtos[i].tipo);
    printf("Preco: R$ %.2f\n", produtos[i].preco);
    printf("----------------------------------------------------\n");
    prod++;
    }
}
void pesquisarProduto(Produto produtos[], int locID, int k){
    int prodlocalizado = 0;
    for(int i = 0; i < k; i++){
        if(produtos[i].id == locID){
            printf("\nProduto encontrado:\n");
            printf("ID: %d\n", produtos[i].id);
            printf("Nome: %s\n", produtos[i].nome);
            printf("Tipo: %s\n", produtos[i].tipo);
            printf("Preco: R$ %.2f\n", produtos[i].preco);
            prodlocalizado = 1;
        }
    }
    if(prodlocalizado == 1){
    }else{
    printf("\nNenhum produto registrado com esse ID.\n");
    }
}

int main(){
    int qnt = 100; // Modificar o limite de produtos.
    Produto produtos[qnt];
    int menu = 0; // Controle do menu.
    int k = 0; // "k" serve para quando adicionar 1 produto, nao adicionar o proximo no msm array.
    int locID = 0; // Localizar ID (menu 5).

    do{
        // printf("%d k\n", k);
        printf("\n-= Menu do usuario =-\n");
        printf("1- Inserir produto\n");
        printf("2- Alterar produto\n");
        printf("3- Excluir produto\n");
        printf("4- Listar produtos\n");
        printf("5- Pesquisar produto por ID\n");
        printf("6- Sair\n");
        printf("Escolha uma das opcoes ou digite '6' para sair: ");
        scanf("%d", &menu);
        system("cls"); // apaga o menu do terminal (para deixar mais fluido p/ o usuário).
        switch(menu){
            case 1: // Inserir produto.
                printf("1- Inserir produto\n");
                inserirProduto(&produtos[k], k);
                k++;
            break;

            case 2: // Alterar produto.
                printf("2- Alterar produto\n");
            break;
                
            case 3: // Excluir produto.
                printf("3- Excluir produto\n");
            break;

            case 4: // Listar produto.
                printf("4- Listar produto\n\n");
                listarProdutos(produtos, k);
            break;

            case 5: // Pesquisar por ID.
                printf("5- Pesquisar produto por ID\n");
                printf("Digite o ID do produto que deseja consultar: ");
                scanf("%d", &locID);
                pesquisarProduto(produtos, locID, k);
                locID = 0;
            break;

            case 6: // Fecha o programa.
                printf("Programa encerrado!");
            break;

            default: // Quando o usuario digita algum numero q não é entre 1 a 6.
                printf("Numero invalido.\n");
            break;

        }
    }while(menu != 6);

    return 0;
}