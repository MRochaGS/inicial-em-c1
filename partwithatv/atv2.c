#include <stdio.h>

int main() {
    int nota1, nota2, nota3, media1, ver1, ver2;

    printf("Digite a nota 1: ");
    scanf("%d", &nota1);

    printf("Digite a nota 2: ");
    scanf("%d", &nota2);

    printf("Digite a nota 3: ");
    scanf("%d", &nota3);

    media1 = (nota1 + nota2 + nota3) /3;

    if (nota1 > nota2 && nota1 > nota3){
        printf("A maior nota e %d\n", nota1);
    }
    if (nota2 > nota1 && nota2 > nota3){
        printf("A maior nota e %d\n", nota2);
    }
    if (nota3 > nota2 && nota3 > nota1){
        printf("A maior nota e %d\n", nota3);
    }
    if (nota1 < nota2 && nota1 < nota3){
        printf("A menor nota e %d\n", nota1);
    }
    if (nota2 < nota1 && nota2 < nota3){
        printf("A menor nota e %d\n", nota2);
    }
    if (nota3 < nota2 && nota3 < nota1){
        printf("A menor nota e %d\n", nota3);
    }
    
    }