#include <stdio.h>
#include <stdlib.h>
    //EXPLICACAO ABAIXO NOS COMENTARIOS
    /*
    >>> CONTEXTO: ha duas lampadas e dois interruptores
    o interruptor 1 troca o estado da lampada a;
    o interruptor 2 troca o estado da lampada a e a lampada b;
--------------
    #ENTRADA: 
    - linha 1: um inteiro 'n' q define quantas vezes os interruptores serão apertados.
    - 'n' linhas seguintes: em cada linha vc irá dizer qual interruptor foi apertado. 1 ou 2.

    #SAÍDA:
    - linha 1: um inteiro 'a', q diz o estado final da lampada 'a'
    - linha 2: um inteiro 'b', q diz o estado final da lampada 'b'
    */
int main(){
    //declaracao de variaveis e atribuicao de valores
    int a, b;
    int n, i;
    int A;
    scanf("%d", n);

    //loop
    for(i = 0;i < n; i++){
        scanf("%d",A);
        if(A == 1){
            a = !a;
        }else if(A == 2){
            a = !a;
            b = !b;
        }
    }
    //resultado final
    printf("%d\n%d", a, b);
}