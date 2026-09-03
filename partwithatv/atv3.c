#include <stdio.h>

int main() {
    int imp, par;
    imp = 0;
    par = 0;

    while(1) {
        int num;

        printf("Digite um numero inteiro (se digitar 0 o programa sera encerrado): \n");
        scanf("%d", &num);
        if(num % 2 == 0){
            par++;
        }
        if(num % 2 != 0){
            imp++;
        }
        if(num == 0){
            par -= 1;
            printf("Voce digitou %d numeros impar e voce digitou %d numeros par", imp, par);
            break;
        }
    }
    return 0;
}