#include <stdio.h>

int main(){
    int nmr = 0;
    int mult = 0;
    
    printf("Digite um numero: ");
    scanf("%d", &nmr);

    for(int i = 1; i < 11; i++){
        mult = nmr * i;
        if(mult %2 != 0){
            printf("%dx%d: %d\n", nmr, i, mult);
        }else if(nmr %2 == 0){
            printf("Essa tabuada nao tem nenhum numero impar.");
            break;
        }
        mult == 0;
    }
    return 0;
}