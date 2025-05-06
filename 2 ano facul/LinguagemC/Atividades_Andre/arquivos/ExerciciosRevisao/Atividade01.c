#include <stdio.h>

int main() {
    char nome[100];
    int idade;

    // Solicita os dados do usuário
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);  // Lê o nome (incluindo espaços)
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // Abre o arquivo para escrita (modo "a" = append, cria se não existir)
    FILE *arquivo = fopen("dados.txt", "a");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    // Escreve os dados no arquivo
    fprintf(arquivo, "Nome: %sIdade: %d\n\n", nome, idade);

    // Fecha o arquivo
    fclose(arquivo);

    printf("Dados salvos com sucesso em 'dados.txt'.\n");

    return 0;
}
