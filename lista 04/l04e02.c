/*Codiﬁque um software que leia ate 300 numeros inteiros positivos e
os imprima em ordem contraria a da leitura. Quando for fornecido
um numero negativo, o program deve encerrar a leitura.*/


#include <stdio.h>

int main (){
    int num [300];
    int i, j, a;

    for (i=0; i<300; i++){
        scanf("%d", &a);
        if (a>=0){
            num[i] = a;
        } else {
            break;
        }
    }
    for (j=i-1; j>=0; j--){
        printf("%d ", num[j]);
    }
    printf("\n");


    return 0;
}
