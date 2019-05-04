/* Codifique um software que leia os valores de uma matriz quadrada de ordem 8 de inteiros.
Calcule a soma de sua diagonal SD. Por fim, imprima o número da linha da matriz, cuja soma SL
dos seus elementos dividida por SD tenha o maior resto. */


#include <stdio.h>

int main(){
	int matriz[8][8];
	int i, j;

	for (i=0; i<8; i++){
		for (j=0; j<8; j++){
			scanf("%d", &matriz[i][j]);
		}
	}

	

	return 0;
}