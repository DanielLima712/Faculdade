#include <stdio.h>
//Exemplo 2: Lendo um Arquivo
int main() {
    FILE *arquivo;
    char linha[100];

    arquivo = fopen("exemplo.txt", "r"); // Abre o arquivo para leitura

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    while (fgets(linha, sizeof(linha), arquivo) != NULL) { // Lê linha por linha
        printf("%s", linha);
    }

    fclose(arquivo); // Fecha o arquivo
    return 0;
}