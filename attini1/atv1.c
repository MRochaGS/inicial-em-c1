#include <stdio.h>

int main() {
    int medida1;
    int medida2;
    int medida3;
    int varnisos;
    varnisos = 0;

    printf("Digite o primeiro lado do triangulo: ");
    scanf("%d", &medida1);

    printf("Digite o segundo lado do triangulo: ");
    scanf("%d", &medida2);

    printf("Digite o terceiro lado do triangulo: ");
    scanf("%d", &medida3);

    if (medida1 < medida2 + medida3){
        if (medida2 < medida1 + medida3){
            if (medida3 < medida2 + medida1){
                if (medida1 == medida2 && medida1 == medida3 && medida3 == medida2){
                    printf("O triangulo e equilatero");
                    varnisos = 1;
                }

                if (medida1 != medida2 && medida1 != medida3 && medida3 != medida2){
                    printf("O triangulo e escaleno");
                    varnisos = 1;
                }

                if (varnisos == 0){
                    printf("O triangulo e isosceles");
                }

            }
            else{
                printf("Erro");
            }
        }
        else{
            printf("Erro");
        }
    }
    else{
        printf("Erro");
    }
    return 0;
}
