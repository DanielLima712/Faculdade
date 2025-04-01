#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Criação da struct.
typedef struct {
    char nome[30];
    float preco;
    int quantidade;
} Produto;

//Função p/ adicionar produtos.
void cadastrarProduto(Produto *produto){
    char solution[10];
    printf("Digite o nome do produto: ");
    fgets(solution, 10, stdin);
    fgets(produto->nome, 30, stdin);
    produto->nome[strlen(produto->nome) - 1] = '\0';

    printf("Digite o preco do produto: R$ ");
    scanf("%f", &produto->preco);

    printf("Digite a quantidade disponivel: ");
    scanf("%d", &produto->quantidade);
    printf("\n");
}

//Função p/ exibir produtos.
void listarProdutos(Produto produtos[], int qnt){
    printf("- Lista dos produtos -\n");
    for(int i = 0; i < qnt; i++){
        printf("Produto [%d]: %s\n", i+1, produtos[i].nome);
        printf("Preco: R$ %.2f\n", produtos[i].preco);
        printf("Quantidade: %d\n", produtos[i].quantidade);
        printf("--==--==--==--==--==--==--==--==--==--==--==--\n");
    }
}

//Função p/ atualizar preço de um produto.
void atualizarPreco(Produto *produto){
    printf("Digite o novo preco de %s: ", produto->nome);
    scanf("%f", &produto->preco);
}

//Main do programa.
int main(){
    int qnt = 0;
    printf("Digite a quantidade de produtos: ");
    scanf("%d", &qnt);
    system("cls");

    Produto produtos[qnt];
    for(int i = 0; i < qnt; i++){
        cadastrarProduto(&produtos[i]);
    }
    system("cls");

    int menu = 0;

    while(menu != 2){
        listarProdutos(produtos, qnt);
        printf("Deseja mudar o preco de algum produto?\n");
        printf("Se sim, digite '1'. Caso deseje finalizar digite '2': ");
        scanf("%d", &menu);

        switch(menu){
            case  1:
                int j = 0;
                printf("Digite o numero do produto que deseja alterar o valor: ");
                scanf("%d", &j);
                printf("\n");

                j = j-1; // para alterar o produto certo.
                atualizarPreco(&produtos[j]);
                system("cls");
                menu == 0; 
                
                break;
            case 2:
                printf("\nPrograma finalizado!");
                break;
        }
    }
    return 0;
}