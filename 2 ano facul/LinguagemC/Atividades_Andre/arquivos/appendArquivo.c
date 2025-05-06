#include <stdio.h>
//Exemplo 3: Acrescentando Dados no Arquivo (Modo Append)
int main() {
    FILE *arquivo;
    arquivo = fopen("exemplo.txt", "a"); // Abre o arquivo no modo append

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    fprintf(arquivo, "Adicionando mais uma linha ao arquivo!\n"); // Adiciona texto

    fclose(arquivo);
    printf("Texto adicionado com sucesso!\n");
    return 0;
}