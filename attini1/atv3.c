#include <stdio.h>

int main() {
    float salario;
    float salliq;
    float salarred;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    salliq = 0;

    if (4000 >= salario){
        if (salario > 2000){
            salliq = (salario - 2000) * 0.15;
            salarred = salario - salliq;
        };
    };
    if (salario > 4000){
        salliq = ((salario - 4000) * 0.225) - 300;
        salarred = salario - salliq;
    };

    printf("O salario bruto e de %.2f e o liquido e %.2f, o valor gasto em impostos foi de %.2f", salario, salarred, salliq);
    return 0;
}