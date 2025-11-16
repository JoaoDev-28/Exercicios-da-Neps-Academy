#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[10];
    int i;
    int x;
    
    for(i = 0; i < 10; i++){
        if(scanf("%d", &vetor[i]) != 1) return 0;
    }
    if(scanf("%d", &x) != 1) return 0;
    
    int count = 0;
    for(i = 0; i < 10; i++){
        if(vetor[i] == x){
            count++;
        }
    }
    
    if(count == 0){
        printf("Mia x\n");
    } else {
        printf("%d\n", count);
        int first = 1;
        for(i = 0; i < 10; i++){
            if(vetor[i] == x){
                if(!first) printf(" ");
                printf("%d", i);
                first = 0;
            }
        }
        printf("\n");
    }
    
    return 0;
}
