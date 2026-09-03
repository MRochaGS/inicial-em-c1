#include <stdio.h>

int main(){
    int n, fib1, fib2, ver1 = 0;

    printf("Quantos numeros voce deseja saber da sequencia de Fibonacci: ");
    scanf("%d", &n);

    n = n/2;

    for (int i = 0; i <= n; i++){
        if (i == 0){
            fib1 = 0;
            printf("%d ", fib1);
        }
        if (i == 1){
            fib2 = 1;
            printf("%d ", fib2);
        }

        if (ver1 == 0 && i >= 2){
            ver1++;
            fib1 = fib1 + fib2;
            printf("%d ", fib1);
        }
        if (ver1 == 1 && i >= 2){
            ver1--;
            fib2 = fib1 + fib2;
            printf("%d ", fib2);
        }
    }
}