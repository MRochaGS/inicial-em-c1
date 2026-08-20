#include <stdio.h>

int main() {
    int ano;
    int num1, num2, num3;
    
    printf("Coloque o ano que sera analizado : ");
    scanf("%d", &ano);

    num1 = ano % 4;
    num2 = ano % 100;
    num3 = ano % 400;

    if ((num3 == 0) || (num1 == 0 && num2 != 0)){
        printf("O ano e bissexto");
    }
    else{
        printf("O ano nao e bissexto");
    }
    return 0;
}