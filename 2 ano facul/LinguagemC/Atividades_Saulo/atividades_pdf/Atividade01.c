#include <stdio.h>
#include <string.h>

//Criação do struct.
typedef struct{
    char nome[50];
    int idade;
    float nota;
} Aluno;

//Função p/ ler dados dos alunos.
void LerDados(Aluno *aluno){
    char solution[10];
    printf("Digite o nome do aluno: ");
    fgets(solution, 10, stdin);
    fgets(aluno->nome, 50, stdin);
    aluno->nome[strlen(aluno->nome) - 1] = '\0';

    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno->idade);

    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno->nota);
}

//Função p/  imprimir dados dos alunos.
void ImprimirDados(Aluno alunos[], int qnt){
    for(int i = 0; i < qnt; i++){
        printf("---------------------------------------\n");
        printf("Informacoes do aluno[%d]\n", i+1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Nota: %.2f\n", alunos[i].nota);
    }
}

//Função p/ calcular média da turma.
void MediaAlunos(Aluno alunos[], int qnt){
    float media = 0;
    float soma = 0;
    for(int i = 0; i < qnt; i++){
        soma += alunos[i].nota;
    }
    media = soma / qnt;
    printf("---------------------------------------\n");
    printf("A media da turma foi: %.2f", media);
}

// Int main do programa.
int main(){
    int qnt = 0;
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qnt);

    Aluno alunos[qnt];
    for(int i = 0; i < qnt; i++){
        printf("\nPreencher dados do aluno[%d]\n", i+1);
        LerDados(&alunos[i]);
    }

    ImprimirDados(alunos, qnt);
    MediaAlunos(alunos, qnt);

    return 0; 
}