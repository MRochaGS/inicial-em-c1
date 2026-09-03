#include <stdio.h>

int main(){
    int senha = 2026, senhausur, ver1 = 3;

    while (1){
        printf("Digite a senha para acessar a conta (%d tentativas restantes): ", ver1);
        scanf("%d", &senhausur);

        if (senha != senhausur){
            ver1--;
            if (ver1 == 0){
                printf("Conta bloqueada");
                break;
            }
        }
        if (senha == senhausur){
            printf("Acesso liberado");
            break;
        }
        
    }
    
}