/* Codifique um software que leia os valores de uma matriz quadrada de ordem 10 de inteiros e
calcule e escreva a soma dos elementos que estão na área marcada com ‘*’: (uma escadinha) */

#include <stdio.h> 
int main(){

	int matriz[10][10];
	int i, j;
	int sum_row[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int sum = 0;

	//printf("Digite uma sequência de 100 inteiros referente a matriz.\n");
	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			scanf ("%d", &matriz[i][j]);
		}
	}

	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			sum_row[i] += matriz[i][j];
			if (i == j){
				break;
			}
		}
	}

	for (i = 0; i < 10; i++){
		sum += sum_row[i];
	}	

	//printf("Soma dos elementos abaixo da diagonal principal.\n");
	printf("%d\n", sum);

	return 0;
}