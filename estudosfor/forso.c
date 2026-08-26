#include <stdio.h>

int main(){
    int n, soma;
    soma = 0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (int i = 1;i <= n; i++){
        soma = i + soma;
    }
    printf("O numero e: %d\2", soma);
    return 0;
}