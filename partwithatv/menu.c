#include <stdio.h>

int main() {
    int usurop = 0;

    while(1) {
        printf("Menu %d\n", usurop);
        printf("------------------------\n");
        printf("1. Opcao 1\n");
        printf("2. Opcao 2\n");
        printf("3. Sair\n");
        printf("------------------------\n");
        scanf("%d", &usurop);
        if (usurop == 1)
        {
            printf("Voce escolheu a opcao 1\n");
        }
        else if (usurop == 2)
        {
            printf("Voce escolheu a opcao 2\n");
        }
        else if (usurop == 3)
        {
            printf("Programa encerrado\n");
            break;
        }
        else
        {
            printf("Menu invalido\n");
            usurop = 0;
        }
    }
    return 0;
}