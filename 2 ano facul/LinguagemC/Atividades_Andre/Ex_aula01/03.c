#include <stdio.h>

int main(){
    int temp = 0, temp2 = 0;

    printf("Digite a temperatura em Celsius: ");
    scanf("%d", &temp);

    temp2 = (temp * 1.8) + 32;

    printf("Temperatura em Celsius: %d\nTemperatura em Fahrenheit: %d", temp, temp2);
    return 0;
}