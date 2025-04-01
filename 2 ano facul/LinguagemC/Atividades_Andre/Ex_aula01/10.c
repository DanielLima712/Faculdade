#include <stdio.h>
#include <string.h>

int validar_cpf(const char *cpf) {
    return strlen(cpf) == 11;
}

int main() {
    char cpf[12];
    printf("Digite um CPF (somente números): ");
    scanf("%11s", cpf);
    
    if (validar_cpf(cpf)) {
        printf("CPF válido!\n");
    } else {
        printf("CPF inválido!\n");
    }
    
    return 0;
}