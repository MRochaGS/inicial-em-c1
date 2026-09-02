#include <stdio.h>

int main() {
    int usurnum;

    printf("Digite o numero da contagem: ");
    scanf("%d", &usurnum);

    while(usurnum>=1) {
        printf("%d\n", usurnum);
        usurnum--;
        if (usurnum == 0)
        {
            printf("Contagem encerrada");
        }
        
    }
    return 0;
}