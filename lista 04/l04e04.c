/* Codifique um software que leia até 87 numeros inteiros diferentes de 0. Assim que o valor 0
for fornecido ou após a leitura do 87o numero, deve-se ler mais um número inteiro, denominado
LIMITE. Por fim, imprima seguindo a ordem de leitura, aqueles numeros, dentre os 87 lidos,
cujo valor supere o valor de LIMITE. */

#include <stdio.h>

int main(){
	int num[87], limite=0;
	int i=0, j, a=1;

	//printf("Digite ate 87 numeros diferentes de 0:\n");
	
	while (a != 0 && i<87){
		scanf("%d", &a);
		num[i] = a;
		i++;
	}

	//printf("\nDigite numero limite: ");
    scanf("%d", &limite);

    for (j=0; j<i; j++){
        if (num[j]>limite){
            printf("%d ", num[j]);
        } 
    }
    printf("\n");

	return 0;
}