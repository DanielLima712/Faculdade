#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    int menu = 0, i = 0, ok = 0;
    
    float notaA1[3], notaA2[3], notaA3[3], notaA4[3], notaA5[3];
    
    float somaA1 = 0, somaA2 = 0, somaA3 = 0, somaA4 = 0, somaA5 = 0;
    
    float mediaA1 = 0, mediaA2 = 0, mediaA3 = 0, mediaA4 = 0, mediaA5 = 0;
    
    char solution[10];
    
    char nome1[30], nome2[30], nome3[30], nome4[30], nome5[30];

    while(menu != 5) {
        printf("Menu do usuario:\n1 - Cadastrar alunos.\n2 - Inserir notas.\n3 - Calcular medias.\n4 - Exibir resultados.\n5 - Sair do programa.\n");
        
        printf("Digite um numero para acessar ou 5 para sair: ");
        scanf("%d", &menu);
        system("cls");
        
        switch(menu) {
            case 1:
                printf("Opcao 1 - Cadastrar alunos.\n");
                
                // quando nao usa essa entrada aqui, o programa nao
                // solicita o primeiro fgets, apenas printa na tela o prinf e pula para o segundo fgets
                fgets(solution, 10, stdin);
                
                printf("Digite o primeiro nome: ");
                fgets(nome1, 30, stdin);
                 nome1[strlen(nome1) - 1] = '\0'; 
                                                  
                printf("Digite o segundo nome: ");
                fgets(nome2, 30, stdin);
                 nome2[strlen(nome2) - 1] = '\0';
                
                printf("Digite o terceiro nome: ");
                fgets(nome3, 30, stdin);
                 nome3[strlen(nome3) - 1] = '\0';
                
                printf("Digite o quarto nome: ");
                fgets(nome4, 30, stdin);
                 nome4[strlen(nome4) - 1] = '\0';
                
                printf("Digite o quinto nome: ");
                fgets(nome5, 30, stdin);
                 nome5[strlen(nome5) - 1] = '\0';
                
                printf("1- %s\n2- %s\n3- %s\n4- %s\n5- %s\n", nome1, nome2, nome3, nome4, nome5);
            break;
            
            case 2:
                printf("Opcao 2 - Inserir notas: \n");
                
                // Aluno 1
                ok = 0;
                
                while(ok != 1) {
                    somaA1 = 0;
                    
                    printf("Digite as 3 notas do/a aluno/a %s \n", nome1);
                    
                    for(i = 0; i <= 2; i++) {
                        printf("Nota %d: ", (i+1));
                        scanf("%f", &notaA1[i]);
                    
                        somaA1 = notaA1[i] + somaA1;
                    }
                
                    printf("Digite '1' para confirmar ou qualquer outro numero para re-digitar as notas: ");
                    scanf("%d", &ok);
                
                }
                
                printf("A nota final foi de: %.2f\n", somaA1);
                
                // Aluno 2
                ok = 0;
                
                while(ok != 1) {
                    somaA2 = 0;
                    
                    printf("Digite as 3 notas do/a aluno/a %s: \n", nome2);
                    
                    for(i = 0; i <= 2; i++) {
                        printf("Nota %d: ", (i+1));
                        scanf("%f", &notaA2[i]);
                        
                        somaA2 = notaA2[i] + somaA2;
                    }
                    
                    printf("Digite '1' para confirmar ou qualquer outro numero para re-digitar as notas: ");
                    scanf("%d", &ok);
                }
                
                printf("A nota final foi de: %.2f\n", somaA2);
                
                // Aluno 3
                ok = 0;
                
                while(ok != 1) {
                    somaA3 = 0;
                    
                    printf("Digite as 3 notas do/a aluno/a %s: \n", nome3);
                    
                    for(i = 0; i <= 2; i++){
                        printf("Nota %d: ", (i+1));
                        scanf("%f", &notaA3[i]);
                        
                        somaA3 = notaA3[i] + somaA3;
                    }
                    
                    printf("Digite '1' para confirmar ou qualquer outro numero para re-digitar as notas: ");
                    scanf("%d", &ok);
                }
                
                printf("A nota final foi de: %.2f\n", somaA3);
                
                //Aluno 4
                ok = 0;
                
                while(ok != 1) {
                    somaA4 = 0;
                    
                    printf("Digite as 3 notas do/a aluno/a %s: \n", nome4);
                    
                    for(i = 0; i <= 2; i++){
                        printf("Nota %d: ", (i+1));
                        scanf("%f", &notaA4[i]);
                        somaA4 = notaA4[i] + somaA4;
                    }
                    
                    printf("Digite '1' para confirmar ou qualquer outro numero para re-digitar as notas: ");
                    scanf("%d", &ok);
                }
                
                printf("A nota final foi de: %.2f\n", somaA4);
                
                // Aluno 5
                ok = 0;
                
                while(ok != 1) {
                    somaA5 = 0;
                    
                    printf("Digite as 3 notas do/a aluno/a %s: \n", nome5);
                    
                    for(i = 0; i <= 2; i++){
                        printf("Nota %d: ", (i+1));
                        scanf("%f", &notaA5[i]);
                        somaA5 = notaA5[i] + somaA5;
                    }
                    
                    printf("Digite '1' para confirmar ou qualquer outro numero para re-digitar as notas: ");
                    scanf("%d", &ok);
                }
                
                printf("A nota final foi de: %.2f\n", somaA5);
            break;
            
            case 3:
                printf("Opcao 3 - Calcular medias.\n");
                
                // calculo das medias dos alunos.
                
                mediaA1 = somaA1/3;
                mediaA2 = somaA2/3;
                mediaA3 = somaA3/3;
                mediaA4 = somaA4/3;
                mediaA5 = somaA5/3;
                
                // mostrar se o aluno foi reprovado ou aprovado.
                printf("Media do/a aluno/a %s foi: %.2f - ", nome1, mediaA1);
                mediaA1 >= 7 ? printf("Aluno aprovado.\n") : printf("Aluno reprovado.\n");
                
                printf("Media do/a aluno/a %s foi: %.2f - ", nome2, mediaA2);
                mediaA2 >= 7 ? printf("Aluno aprovado.\n") : printf("Aluno reprovado.\n");
                
                printf("Media do/a aluno/a %s foi: %.2f - ", nome3, mediaA3);
                mediaA3 >= 7 ? printf("Aluno aprovado.\n") : printf("Aluno reprovado.\n");
                
                printf("Media do/a aluno/a %s foi: %.2f - ", nome4, mediaA4);
                mediaA4 >= 7 ? printf("Aluno aprovado.\n") : printf("Aluno reprovado.\n");
                
                printf("Media do/a aluno/a %s foi: %.2f - ", nome5, mediaA5);
                mediaA5 >= 7 ? printf("Aluno aprovado.\n") : printf("Aluno reprovado.\n");
                
            break;
            
            case 4:
                printf("Opcao 4 - Resultados finais:\n");
                
                // aluno 1
                mediaA1 >= 7 ? 
                printf("Nome: %s - notas: 1- %.2f, 2- %.2f, 3- %.2f, media: %.2f, situacao: aprovado!\n", nome1, notaA1[0], notaA1[1], notaA1[2], mediaA1) : 
                printf("Nome: %s - notas: 1- %.2f, 2- %.2f, 3- %.2f, media: %.2f, situacao: reprovado!\n", nome1, notaA1[0], notaA1[1], notaA1[2], mediaA1);
    
                // aluno 2
                mediaA2 >= 7 ? 
                printf("Nome: %s - notas: 1- %.2f, 2- %.2f, 3- %.2f, media: %.2f, situacao: aprovado!\n", nome2, notaA2[0], notaA2[1], notaA2[2], mediaA2) : 
                printf("Nome: %s - notas: 1- %.2f, 2- %.2f, 3- %.2f, media: %.2f, situacao: reprovado!\n", nome2, notaA2[0], notaA2[1], notaA2[2], mediaA2);
    
                
                // aluno 3
                mediaA3 >= 7 ? 
                printf("Nome: %s - notas: 1- %.2f, 2- %.2f, 3- %.2f, media: %.2f, situacao: aprovado!\n", nome3, notaA3[0], notaA3[1], notaA3[2], mediaA3) : 
                printf("Nome: %s - notas: 1- %.2f, 2- %.2f, 3- %.2f, media: %.2f, situacao: reprovado!\n", nome3, notaA3[0], notaA3[1], notaA3[2], mediaA3);
    
                
                // aluno 4
                mediaA4 >= 7 ? 
                printf("Nome: %s - notas: 1- %.2f, 2- %.2f, 3- %.2f, media: %.2f, situacao: aprovado!\n", nome4, notaA4[0], notaA4[1], notaA4[2], mediaA4) : 
                printf("Nome: %s - notas: 1- %.2f, 2- %.2f, 3- %.2f, media: %.2f, situacao: reprovado!\n", nome4, notaA4[0], notaA4[1], notaA4[2], mediaA4);
    
                
                // aluno 5
                mediaA5 >= 7 ? 
                printf("Nome: %s - notas: 1- %.2f, 2- %.2f, 3- %.2f, media: %.2f, situacao: aprovado!\n", nome5, notaA5[0], notaA5[1], notaA5[2], mediaA5) : 
                printf("Nome: %s - notas: 1- %.2f, 2- %.2f, 3- %.2f, media: %.2f, situacao: reprovado!\n", nome5, notaA5[0], notaA5[1], notaA5[2], mediaA5);
    
            break;
            
            case 5:
                printf("Programa encerrado.");
            break;
        }
    }


    return 0;
}