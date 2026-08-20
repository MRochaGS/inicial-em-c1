#include <stdio.h>

int main() {
    int valor;
    int num1, num2, num3, num4;

    printf("Digite o valor que deseja sacar: ");
    scanf("%d", &valor);

    num1 = valor / 50;
    num2 = (valor - (num1 * 50)) / 20;
    num3 = (valor - (num1 * 50 + num2 * 20)) / 10;
    num4 = (valor - (num1 * 50 + num2 * 20 + num3 * 10)) / 5;

    if (num1 == 0 && num2 == 0 && num3 == 0 && num4 == 0){
        printf("ERRO");
    }
    else{
        printf("Voce sacara %d notas de 50 reais, %d notas de 20 reais, %d notas de 10 reais e %d notas de 5 reais.", num1, num2, num3, num4);
    }
    
    return 0;
}