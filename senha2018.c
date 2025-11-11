#include <stdio.h>
#include <stdlib.h>

int main(){
    int senha;
    while(senha!=2018){
        printf("Digite a senha:");
        scanf("%d",&senha);
        if(senha!=2018){
            printf("Senha incorreta, tente novamente abaixo.\n");
        }else{
            printf("Parabens! Voce acertou a senha!");
        }
    }

    return 0;
}
