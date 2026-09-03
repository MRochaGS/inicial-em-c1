#include <stdio.h>

int main(){
    int pira;

    printf("Qual sera o tamanho da piramide: ");
    scanf("%d", &pira);

    //for (int i = 0; i <= pira; i++){
    while (1){
        int i;
        i = 20;

        if (i >= 0){
            i--;
            printf("*");
        }
        else{
            printf("\n");
        }
        
    }
    
}