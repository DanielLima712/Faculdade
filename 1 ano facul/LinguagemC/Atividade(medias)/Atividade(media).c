#include <stdio.h>
int main(){
float nota1, nota2, frequencia, exame, soma, notafinal; 

printf("Digite sua nota do primeiro bimestre:"); 
scanf("%f", &nota1);                                           //nota do 1º bimestre.
printf("Digite sua nota do segundo bimestre:");
scanf("%f", &nota2);                                           //nota do 2º bimestre.
printf("Digite sua frequencia de presenca:");
scanf("%f", &frequencia);                                      //frequencia do aluno.
soma = (nota1 + nota2) / 2;                                    //média das notas.
    if (frequencia <= 59){                                     //se a frequencia for menor que 59%, o aluno é reprovado na hora.
        printf("Aluno reprovado por faltas.");
    }
    else{
        if (soma >= 6 && frequencia >= 75){                    //caso a média seja >=6 e a frequencia  >=75%, o aluno é aprovado na hora.
        printf("Aluno aprovado.");
        }
        else{
            if(soma<=3){                                       //caso o aluno tire um número menor que 4 na média, ele é reprovado na hora.
            printf("Aluno reprovado por media menor que 4.");
            }    
            else{  
                if(soma >=4 || frequencia >=60){               //caso a média do aluno seja >=4 e <=5 ou a frequencia dele seja >59% e <75%, ele terá que fazer o exame.         
                printf("Digite sua nota do exame:");
                scanf("%f", &exame);                           //nota do exame.
                notafinal = exame + soma;                      //soma da média e do exame.
                    if(notafinal >= 10){                       //caso a soma da média e do exame seja >=10, o aluno é aprovado.            
                    printf("Aluno aprovado no exame.");                                                
                    } 
                        else                                   //caso a soma da média e do exame seja <=9, o aluno é reprovado. 
                        printf("Aluno reprovado no exame.");                          
            }
        }           
        }
    }
return 0;
}