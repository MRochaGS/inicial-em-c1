#include <stdio.h>

int main() {
    int sala, idad, media = 0;
    int men, mai, ver1 = 0;

    for (int i = 1;i<=15;i++){
        printf("Digite o salario da pessoa %d: ", i);
        scanf("%d", &sala);

        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idad);

        if (i == 1) {
            men = idad;
            mai = idad;
        }
        if (idad < men) {
            men = idad;
        }
        if (idad > mai) {
            mai = idad;
        }
        media += sala;
        if (sala < 2000){
            ver1 +=1;
        }
        
        if (i == 15){
            media = media / 15;
            printf("A media dos salarios e: %d\n", media);
            printf("O mais novo tem %d\n", men);
            printf("O mais velho tem %d\n", mai);
            printf("Tem %d que ganham menos de 2000R$", ver1);
        }
    }
    return 0;
}