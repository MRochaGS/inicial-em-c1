#include <stdio.h>
int main() {
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
    int num11;
    int rest1;
    int rest2;
    int dv1;
    int dv2;

    printf("Digite o numero 1 do cpf : ");
    scanf("%d", &num1);

    printf("Digite o numero 2 do cpf : ");
    scanf("%d", &num2);

    printf("Digite o numero 3 do cpf : ");
    scanf("%d", &num3);

    printf("Digite o numero 4 do cpf : ");
    scanf("%d", &num4);

    printf("Digite o numero 5 do cpf : ");
    scanf("%d", &num5);

    printf("Digite o numero 6 do cpf : ");
    scanf("%d", &num6);

    printf("Digite o numero 7 do cpf : ");
    scanf("%d", &num7);

    printf("Digite o numero 8 do cpf : ");
    scanf("%d", &num8);

    printf("Digite o numero 9 do cpf : ");
    scanf("%d", &num9);

    num10 = (num1 * 10) + (num2 * 9) + (num3 * 8) + (num4 * 7) + (num5 * 6) + (num6 * 5) + (num7 * 4) + (num8 * 3) + (num9 * 2);
    rest1 = num10 % 11;
    if (rest1 < 2){
        dv1 = 0;
    }
    else{
        dv1 = 11 - rest1;
    }

    num11 = (num2 * 10) + (num3 * 9) + (num4 * 8) + (num5 * 7) + (num6 * 6) + (num7 * 5) + (num8 * 4) + (num9 * 3) + (dv1 * 2);
     rest2 = num11 % 11;
    if (rest2 < 2){
        dv2 = 0;
    }
    else{
        dv2 = 11 - rest2;
    }

    printf("Os digitos verificadores sao %d\n %d\n", dv1, dv2);
    return 0;
}
