#include <stdio.h>

int main(){
    float not1, not2, not3, med, medap;

    printf("Escreva a primeira nota tirada pelo aluno: ");
    scanf("%f", &not1);

    printf("Escreva a segunda nota tirada pelo aluno: ");
    scanf("%f", &not2);

    printf("Escreva a terceira nota tirada pelo aluno: ");
    scanf("%f", &not3);

    med = (not1 + not2 + not3) / 3;
    medap = (not1 + (not2 * 2) + (not3 * 3) + med) / 7;

    if (medap >= 9)
    {
        printf("Nota A");
    }
    if (medap >= 7.5 && medap < 9)
    {
        printf("Nota B");
    }
    if (medap >= 6 && medap < 7.5)
    {
        printf("Nota C");
    }
    if (medap >= 4 && medap < 6)
    {
        printf("Nota D");
    }
    if (medap < 4)
    {
        printf("Nota E");
    }
    
    return 0;
}
