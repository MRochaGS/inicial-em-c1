#include <stdio.h>

int main(){
    int anos;
    float juros, valorini;

    printf("Qual o valor que voce deseja investir ");
    scanf("%f", &valorini);

    printf("Qual a taxa de juros do investimento ");
    scanf("%f", &juros);

    printf("Quantos anos o dinheiro ficara investido ");
    scanf("%d", &anos);

    for (int i = 0; i <= anos; i++){
        valorini = valorini * (1+juros);

        printf("no ano %d apos o incio da operacao a conta tera %.2f\n", i, valorini);
        }
        
        
}

    