/* Seja A uma matriz de inteiros 15x5. Faça um programa que leia os valores de A e subtraia cada
elemento da matriz A pelo menor elemento da linha correspondente. Imprima este resultado. */

#include <stdio.h> 
int main(){

	int matriz[15][5];
	int i, j;
	int menor[15] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	//printf("Digite os termos de uma matriz 15x5\n");
    for (i = 0; i < 15; i++){
    	for (j = 0; j < 5; j++){
    		scanf ("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 15; i++){
        menor[i] = matriz[i][0];

    	for (j = 0; j < 5; j++){
    		if (matriz[i][j] < menor[i]){
    			menor[i] = matriz[i][j];
            }
    	}
    }

    //printf("Nova matriz:\n");
    for (i = 0; i < 15; i++){
        for (j = 0; j < 5; j++){
            matriz[i][j] = matriz[i][j] - menor[i];

            printf("%02d\n", matriz[i][j]);
        }
    }

	return 0;
}