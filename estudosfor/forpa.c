#include <stdio.h>

int main(){
    int p, n, f, valores_atuais;

    printf("Digite o valor da inicial: ");
    scanf("%d", &p);

    printf("Digite o valor da razao: ");
    scanf("%d", &n);

    printf("Digite a quantidade de valores do resultado: ");
    scanf("%d", &f);

    valores_atuais = p;
    if (n <= 0){
        printf("A quantidade de termos tem que ser maior que 0.");
    }
    else{
        for (int i = 1;i <= f; i++){
            printf("%d ", valores_atuais);
            valores_atuais = valores_atuais + n;
        }
    }
    return 0;
}