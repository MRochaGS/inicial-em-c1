#include <stdio.h>

int main() {
    int nota, media = 0;
    int men, mai;

    for (int i = 1;i<=10;i++){
        printf("Digite a nota %d: ", i);
        scanf("%d", &nota);

        if (i == 1) {
            men = nota;
            mai = nota;
        }
        if (nota < men) {
            men = nota;
        }
        if (nota > mai) {
            mai = nota;
        }
        media += nota;
        if (nota < 0 || nota > 10){
            printf("Nota invalida, digite novamente\n");
            i--;
        }
        if (i == 10){
            media = media / 10;
            printf("A media das notas e: %d\n", media);
            printf("A menor nota e: %d\n", men);
            printf("A maior nota e: %d\n", mai);
        }
    }
    return 0;
}