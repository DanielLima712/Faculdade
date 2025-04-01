//Escrever um programa que leia em uma matriz uma sequência de 40 fichas, contendo cada uma: 
//- Quatro notas bimestrais de um aluno. 
//-  O número de aulas que o aluno assistiu. 
//Leia, em seguida, o número de aulas dadas pelo professor e imprima uma mensagem informando se o aluno está
//aprovado, reprovado ou em recuperação. Utilize os critérios de aprovação desta instituição de ensino.

#include <stdio.h>
 int main()
 {
    int aulasfeitas = 15;

    typedef struct
    {
        float notas[4];
        int aulas;
    } info;

    info alunos[3];

    for(int i = 0; i <= 3; i++){
        printf(" -- Aluno %d --\n", i+1);
        printf("Digite a nota do %d bimestre: ", i+1);
        scanf("%f", alunos[i].notas[i]);
    }

    return 0;
 }