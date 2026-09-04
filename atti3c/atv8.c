#include <stdio.h>

int main(){
    int pira;

    printf("Qual sera o tamanho da piramide: ");
    scanf("%d", &pira);

    for (int i = 1; i <= pira; i++) {

        for (int j = 1; j <= i; j++) {
            printf("*");
        }
            
            printf("\n");
        }
}