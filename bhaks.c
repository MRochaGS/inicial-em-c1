#include <stdio.h>
#include <math.h>

int main() {
    int A, B, C;
    float num1;
    float num2;
    float num2a;

    printf("Digite o numero que representara A : ");
    scanf("%d", &A);
    printf("Digite o numero que representara B : ");
    scanf("%d", &B);
    printf("Digite o numero que representara C : ");
    scanf("%d", &C);

    num1 = (B * B) - 4 * A * C;

    num2 = (-B + sqrt(num1)) / (2 * A);
    num2a = (-B - sqrt(num1)) / (2 * A);

    printf("O resultado da formula e %.2f ou/e %.2f", num2, num2a);
    return 0;
}