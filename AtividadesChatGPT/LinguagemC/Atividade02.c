//Atividade: Manipulação de Valores Usando Ponteiros
//Descrição: Crie um programa em C que:
//Leia dois valores inteiros do usuário.
//Tenha uma função que receba ponteiros para esses dois valores e troque seus conteúdos.
//Tenha outra função que receba ponteiros e retorne o maior valor.
//No main, exiba os valores antes e depois da troca e também o maior valor.
#include <stdio.h>
#include <time.h>

void addPonteiros (int a, int b, int *pont, int *pont2){
    *pont = a;
    *pont2 = b;

}