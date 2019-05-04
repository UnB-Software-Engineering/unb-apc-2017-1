/*Codiﬁque um software que leia 150 numeros inteiros. Apos a leitura
dos 150, deve-se ler mais um numero inteiro, denominado LIMITE.
Por ﬁm, imprima seguindo a ordem de leitura, aqueles numeros, dentre
os 150 lidos, cujo valor nao supere LIMITE*/

#include <stdio.h>

int main(){
    int num[150], limite;
    int i;

    //printf("Digite 10 numeros:\n");
    
    for (i=0; i<150 ; i++){
        scanf("%d", &num[i]);
    }

    //printf("\nDigite numero limite: ");
    scanf("%d", &limite);

    for (i=0; i<150; i++){
        if (num[i]<=limite){
            printf("%d ", num[i]);
        }
    }
    printf("\n");

    return 0;
}
