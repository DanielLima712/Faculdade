#include <stdio.h>
#include <string.h>

#define MAX_CONTATOS 100

typedef struct {
    char nome[50];
    char telefone[15];
    char email[50];
} Contato;

// Função p/ adicionar contato
void adicionarContato(Contato *contato) {
    printf("Digite o nome: ");
    fgets(contato->nome, sizeof(contato->nome), stdin);
    contato->nome[strcspn(contato->nome, "\n")] = '\0'; 

    printf("Digite o telefone: ");
    fgets(contato->telefone, sizeof(contato->telefone), stdin);
    contato->telefone[strcspn(contato->telefone, "\n")] = '\0';

    printf("Digite o email: ");
    fgets(contato->email, sizeof(contato->email), stdin);
    contato->email[strcspn(contato->email, "\n")] = '\0';
}

// Função p/ listar contatos
void listarContatos(Contato contatos[], int quantidade) {
    if (quantidade == 0) {
        printf("Nenhum contato cadastrado.\n");
        return;
    }

    for (int i = 0; i < quantidade; i++) {
        printf("\nContato %d:\n", i + 1);
        printf("Nome: %s\n", contatos[i].nome);
        printf("Telefone: %s\n", contatos[i].telefone);
        printf("Email: %s\n", contatos[i].email);
    }
}

// Função p/ buscar contato pelo nome
void buscarContato(Contato contatos[], int quantidade, char nomeBuscado[]) {
    int encontrado = 0;
    for (int i = 0; i < quantidade; i++) {
        if (strcmp(contatos[i].nome, nomeBuscado) == 0) {
            printf("\nContato encontrado:\n");
            printf("Nome: %s\n", contatos[i].nome);
            printf("Telefone: %s\n", contatos[i].telefone);
            printf("Email: %s\n", contatos[i].email);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Contato com nome '%s' não encontrado.\n", nomeBuscado);
    }
}

int main() {
    Contato contatos[MAX_CONTATOS];
    int quantidade = 0;
    int opcao;
    char nomeBusca[50];

    do {
        printf("\nMenu:\n");
        printf("1 - Adicionar contato\n");
        printf("2 - Listar contatos\n");
        printf("3 - Buscar contato\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar(); 

        switch (opcao) {
            case 1:
                if (quantidade < MAX_CONTATOS) {
                    adicionarContato(&contatos[quantidade]);
                    quantidade++;
                } else {
                    printf("Limite de contatos atingido.\n");
                }
                break;
            case 2:
                listarContatos(contatos, quantidade);
                break;
            case 3:
                printf("Digite o nome a ser buscado: ");
                fgets(nomeBusca, sizeof(nomeBusca), stdin);
                nomeBusca[strcspn(nomeBusca, "\n")] = '\0';
                buscarContato(contatos, quantidade, nomeBusca);
                break;
            case 0:
                printf("Encerrando programa.\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}
