/* Codifique um software que leia os valores de uma matriz B (10x5) de inteiros e imprima a linha
de B que possua a maior soma de seus elementos. */

#include <stdio.h> 

int main(){

	int matriz[10][5];
	int sum_row[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int maior_valor_linha = 0, maior_linha = 0; 
	int i, j;

	//printf("Digite os termos de uma matrix 10x5:\n");
	for (i = 0; i < 10; i++){
		for (j = 0; j < 5; j++){
			scanf ("%d", &matriz[i][j]);
		}
	}
	
	for (i = 0; i < 10; i++){
        for (j = 0; j < 5; j++){
        	sum_row[i] += matriz[i][j];

        	if (sum_row[i] > maior_valor_linha) {
                maior_valor_linha = sum_row[i];

				if (i > maior_linha){
					maior_linha = i;
				}
	        }
		}
	}

	//printf("O valor da linha, cuja soma dos elementos seja a maior:\n");
	printf("%d\n", maior_linha);

	return 0;
}