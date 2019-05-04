/* Seja R uma matriz 4x5 de números inteiros. Faça um programa que leia os valores de R e
imprima seu maior elemento e a sua posição. */

#include <stdio.h>

int main(){
	int matriz[4][5];
	int i, j, maior=0, x, y;

	//printf("Digite os termos da matriz 4x5:\n");
	for (i=0; i< 4; i++){
		for (j=0; j<5; j++){
			scanf("%d", &matriz[i][j]);
		}
	}

	//printf("\nMaior valor da matriz, linha e coluna:\n");
	for (i=0; i< 4; i++){
		for (j=0; j<5; j++){
			if(matriz[i][j] > maior){
				maior = matriz[i][j];
				x=i;
				y=j;
			}
		}
	}

	printf("%d %d %d\n", maior, x, y);

	return 0;
}