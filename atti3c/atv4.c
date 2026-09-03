#include <stdio.h>

int main() {
    int usurop, itens = 100, nten;

    while(1) {
        printf("Menu \n");
        printf("------------------------\n");
        printf("1. Adicionar item\n");
        printf("2. Remover item\n");
        printf("3. Exibir quantidade atual\n");
        printf("4. Sair\n");
        printf("------------------------\n");
        scanf("%d", &usurop);
        if (usurop == 1)
        {
            printf("Quantos itens voce deseja adicionar ao estoque ");
            scanf("%d", &nten);
            itens += nten;
        }
        if (usurop == 2)
        {
            printf("Quantos itens voce deseja retirar do estoque ");
            scanf("%d", &nten);
            itens -= nten;
        }
        if (usurop == 3)
        {
            printf("O estoque tem %d de itens\n", itens);
        }
        if (usurop == 4){
            break;
        }
    }
    return 0;
}