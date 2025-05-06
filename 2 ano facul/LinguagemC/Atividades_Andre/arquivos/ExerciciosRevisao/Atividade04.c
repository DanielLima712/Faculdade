#include <stdio.h>
#include <string.h>

typedef struct{
    char titulo[50];
    char autor[50];
    int pg;
} Livro;

int main(){
    
    Livro livro;
    strcpy(livro.titulo, "Harry Potter e a Pedra Filosofal");
    strcpy(livro.autor, "J. K. Rowling");
    livro.pg = 208;

    printf("Nome do livro: %s\n", livro.titulo);
    printf("Autor do livro: %s\n", livro.autor);
    printf("Quantidade de paginas: %d", livro.pg);

    return 0;
}