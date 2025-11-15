#include <stdio.h>
#include <stdlib.h>

int main(){
    //serão digitados 10 valores para atribuir a cada espaço de memoria do vetor
    int vetor[10];
    int i;
    int x;
     //atribuição de vlrs ao vetor[]
    for(i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }
    //x está em vetor[]?
    scanf("%d", &x);
    
    int encontrado = 0;
    for(i = 0; i < 10; i++){
        if(vetor[i] == x){
            encontrado = 1;
        }
    }
    
    if(encontrado == 1){
        printf("SIM");
    }else{
        printf("NAO");
    }
}
