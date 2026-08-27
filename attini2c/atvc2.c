#include <stdio.h>

int main(){
    int num1, num2, j;
    float verif;
    char cod = printf("   ");

    printf("Apresente o numero maximo que sera mostrado: ");
    scanf("%d", &num1);

    verif = num1 % 2;

    num2 = num1 / 2;
    num2 += 1; 

    if (verif == 0)
    {
        printf("ERRO");
    }
    else{
        num1 += 1;
        for (int i = 1; i <= num2; i++)
        {
            for (j = 1; j < i; j++)
            {
                printf("  ");
            }
            for (j = i; j <= num1 - i; j++)
            {
                printf("%d ", j);
            }
            
            printf("\n");
            
        }
        
    }
    return 0;
}