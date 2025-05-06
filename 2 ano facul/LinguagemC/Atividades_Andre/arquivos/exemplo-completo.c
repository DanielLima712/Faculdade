#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ALUNOS 100

typedef struct {
    int id;
    char nome[50];
    char telefone[20];
    char cidade[30];
    char endereco[50];
    char email[50];
} Aluno;

void salvarAlunosEmArquivo(Aluno novo) {
    FILE *arquivo = fopen("alunos.txt", "a"); // Abre o arquivo para acrescentar

    if (arquivo == NULL) {
        printf("\nErro ao abrir o arquivo para escrita!\n");
        return;
    }

    fprintf(arquivo, "%d;%s;%s;%s;%s;%s\n",
            novo.id, novo.nome, novo.telefone,
            novo.cidade, novo.endereco, novo.email);

    fclose(arquivo);
    printf("\nAluno salvo no arquivo 'alunos.txt'!\n");
}

void cadastrarAluno() {
    Aluno novo;
    FILE *arquivo = fopen("alunos.txt", "r");

    int ultimoID = 0;
    if (arquivo != NULL) {
        while (fscanf(arquivo, "%d\n", &ultimoID) == 1) { // == 1 conseguiu ler um numero inteiro, o valor é armazenado na variavel ultimoID
            fscanf(arquivo, "%*[^\n]\n");  // Descartar os dados dos outros campos (linha), ignora os dados até encontrar o \n
        }
        fclose(arquivo); 
    }

    char solution [10];
    
    novo.id = ultimoID + 1;
    printf("\nDigite o nome: ");
    fgets(solution, 10, stdin);
    fgets(novo.nome, 30, stdin);
    novo.nome[strlen(novo.nome) - 1] = '\0';
    printf("Digite o telefone: ");
    fgets(novo.telefone, 30, stdin);
    novo.telefone[strlen(novo.telefone) - 1] = '\0';
    printf("Digite a cidade: ");
    fgets(novo.cidade, 30, stdin);
    novo.cidade[strlen(novo.cidade) - 1] = '\0';
    printf("Digite o endereco: ");
    fgets(novo.endereco, 30, stdin);
    novo.endereco[strlen(novo.endereco) - 1] = '\0';
    printf("Digite o email: ");
    fgets(novo.email, 30, stdin);
    novo.email[strlen(novo.email) - 1] = '\0';

    salvarAlunosEmArquivo(novo);
    printf("\nAluno cadastrado com sucesso!\n");
}

void listarAlunos() {
    FILE *arquivo = fopen("alunos.txt", "r");
    if (arquivo == NULL) {
        printf("\nNenhum aluno cadastrado.\n");
        return;
    }

    printf("\nLista de Alunos:\n");
    Aluno aluno;
    while (fscanf(arquivo, "%d;%49[^;];%19[^;];%29[^;];%49[^;];%49[^\n]\n",
                  &aluno.id, aluno.nome, aluno.telefone,
                  aluno.cidade, aluno.endereco, aluno.email) == 6) {
        printf("ID: %d | Nome: %s | Telefone: %s | Cidade: %s | Endereco: %s | Email: %s\n",
               aluno.id, aluno.nome, aluno.telefone, aluno.cidade, aluno.endereco, aluno.email);
    }

    fclose(arquivo);
}

void consultarAluno() {
    int id;
    printf("\nDigite o ID do aluno: ");
    scanf("%d", &id);

    FILE *arquivo = fopen("alunos.txt", "r");
    if (arquivo == NULL) {
        printf("\nErro ao abrir o arquivo!\n");
        return;
    }

    Aluno aluno;
    while (fscanf(arquivo, "%d;%49[^;];%19[^;];%29[^;];%49[^;];%49[^\n]\n",
                  &aluno.id, aluno.nome, aluno.telefone,
                  aluno.cidade, aluno.endereco, aluno.email) == 6) {
        if (aluno.id == id) {
            printf("\nAluno encontrado:\n");
            printf("ID: %d\nNome: %s\nTelefone: %s\nCidade: %s\nEndereco: %s\nEmail: %s\n",
                   aluno.id, aluno.nome, aluno.telefone, aluno.cidade, aluno.endereco, aluno.email);
            fclose(arquivo);
            return;
        }
    }

    printf("\nAluno não encontrado.\n");
    fclose(arquivo);
}

void menu() {
    int opcao;
    do {
        printf("\n=== Menu ===\n");
        printf("1. Cadastrar Aluno\n");
        printf("2. Listar Alunos\n");
        printf("3. Consultar Aluno por ID\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarAluno();
                break;
            case 2:
                listarAlunos();
                break;
            case 3:
                consultarAluno();
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 4);
}

int main() {
    menu();
    return 0;
}