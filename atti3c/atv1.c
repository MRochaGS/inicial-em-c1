#include <stdio.h>

int main(){
    int passos, med, min = 0;
    float medreal;
    med = 0;

    while (1){
        min++;

        printf("Quantos passos voce deu no minuto %d: ", min);
        scanf("%d", &passos);

        med = med + passos;

        if (min == 10){
            medreal = med / 10;
            printf("Voce deu %d passos e sua media de passos foi de %.1f\n", med, medreal);
            break;
        }
    }
    return 0;
}