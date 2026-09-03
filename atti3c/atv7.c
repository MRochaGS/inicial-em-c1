#include <stdio.h>

int main(){
    int num1, test1;

    test1 = 0;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    for (int i = 2; i <= num1; i++)
    {
        if (num1 % i == 0)
        {
            test1 += 1;
        }
    }
    if (test1 >= 2)
    {
        printf("O valor nao e primo");
    }
    else if (test1 <= 0){
        printf("Nao pode ser negativo");
    }
    else
    {
        printf("O valor e primo");
    }
    return 0;
}