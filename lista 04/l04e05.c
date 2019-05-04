/* Codifique um software que leia até 106 numeros inteiros diferentes de 0. Assim que o valor 0
for fornecido ou após a leitura do 106o numero, deve-se ler mais um número inteiro, denominado
LIMITE. Por fim, imprima a soma daqueles números, dentre os 106 lidos, cujo valor não supere
o valor de LIMITE. */

#include <stdio.h>

int main (){
	int num[106], limite=0;
	int i=0, j=0, a=1, sum=0;

	//printf("Digite 106 numeros diferentes de 0:\n");
	while (a != 0 && i < 106){
		scanf("%d", &a);
		num[i] = a;
		i++;
	}

	//printf("\nDigite numero limite: ");
    scanf("%d", &limite);

    for (j=0; j<i; j++){
        if (num[j]<=limite){  
        	sum += num[j];      	
        } 
    }

    //printf("Soma: ");
    printf("%d", sum);

    printf("\n");

	return 0;
}