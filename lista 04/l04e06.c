/* Codifique um software que leia 53 números inteiros. Após a leitura do 53o numero, deve-se
ler mais um número inteiro, denominado LIMITE. Por fim, imprima a media daqueles números,
dentre os 53 lidos, cujo valor não supere o valor de LIMITE. */

#include <stdio.h>

int main(){
	int num[53];
	int limite;
	int i=0, j=0;
	double sum=0, media=0;

	//printf("Digite 53 numeros inteiros:\n");
	while (i<53){
		scanf("%d", &num[i]);
		i++;
	}

	//printf("\nDigite numero limite: ");
	scanf("%d", &limite);

	for (i=0; i<53; i++){
        if (num[i] <= limite){  
        	sum += num[i];
        	j++;        	    	
        } 
    }
    media = sum/j;

    //printf("Media: ");
    printf("%.1lf", media);

    printf("\n");

	return 0;
}
