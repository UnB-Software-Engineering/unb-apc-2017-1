#include <stdio.h>
int main () {

	int matriz[3][3];
	int i, j; 

	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			scanf("%d", &matriz[i][j]);
		}
	}

		for (i = 2; i >= 0; i--){
			for (j = 0; j > 3; j++) {
				printf ("%d\t", matriz[i][j]);
			}
		}	

	return 0;
}