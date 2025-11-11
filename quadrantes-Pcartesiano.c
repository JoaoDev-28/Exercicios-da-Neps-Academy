#include <stdio.h>
#include <stdlib.h>

int main(){                    //QUADRANTES E POSIÇÕES
    // Seu código vai aqui            //Q1|Q2
    int x,y;
    scanf("%d %d",&x,&y);             //Q3|Q4
    if(x==0 || y==0){
        printf("eixos");

//Quadrante 1
    }
    if(x<0 && y>0){
        printf("Q1");

//Quadrante 2
    }
    if(x>0 && y>0){
        printf("Q2");

//Quadrante 3
    }
    if(x<0 && y<0){
        printf("Q3");

//Quadrante 4
    }
    if(x>0 && y<0){
        printf("Q4");
    }
}
