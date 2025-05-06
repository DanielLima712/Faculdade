#include <stdio.h>
//Exemplo 1: Criando e Escrevendo em um Arquivo
int main() {
    FILE *arquivo;
    arquivo = fopen("exemplo.txt", "w"); // Abre o arquivo para escrita

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    fprintf(arquivo, "Aprendendo manipulação de arquivos em C!\n"); // Escreve no arquivo

    fclose(arquivo); // Fecha o arquivo
    printf("Arquivo criado e escrito com sucesso!\n");
    return 0;
}