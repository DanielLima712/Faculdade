#include <stdio.h>
//Exemplo 4: Gravando e Lendo Números de um Arquivo
int main() {
    FILE *arquivo;
    int num, i;

    // Gravando números no arquivo
    arquivo = fopen("numeros.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    for (i = 1; i <= 5; i++) {
        fprintf(arquivo, "%d\n", i * 10); // Grava os números 10, 20, 30, ...
    }

    fclose(arquivo);

    // Lendo os números do arquivo
    arquivo = fopen("numeros.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    printf("Números lidos do arquivo:\n");
    while (fscanf(arquivo, "%d", &num) != EOF) { // Lê número por número
        printf("%d\n", num);
    }

    fclose(arquivo);
    return 0;
}