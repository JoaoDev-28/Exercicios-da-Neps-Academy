#include <stdio.h>
#include <stdlib.h>

int main(){
    // variaveis
    int a,b;
    int v1,v2;
    int x;

    // ATRIBUICAO DE VALORES
    scanf("%d",&a);
    scanf("%d",&b);

    // first or last
    if(a<b){
        v1=a;
        v2=b;
    } else {
        v1=b;
        v2=a;
    }

    // LOOP para imprimir os numeros
    for(x=v1;x<=v2;x++){
        printf("%d ",x);
    }
    return 0;
}
