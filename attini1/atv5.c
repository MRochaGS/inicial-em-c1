#include <stdio.h>

int main() {
    int segun;
    int num1, num2, num3, num4;

    printf("Digite a quantidade de segundos : ");
    scanf("%d", &segun);

    num1 = segun / 604800;
    num2 = segun / 86400;
    num3 = segun / 3600;
    num4 = segun / 60;

    printf("Os segundos que o usuario colocou e equivalente a %d semanas, %d dias, %d horas, %d minutos e %d segundos", num1, num2, num3, num4, segun);
    
    return 0;
}