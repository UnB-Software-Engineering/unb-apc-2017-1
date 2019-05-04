/* Codifique um software que leia 135 números inteiros. Após a leitura dos 135,deve-se ler mais
dois números inteiros, denominados LIMITE INFERIOR e LIMITE SUPERIOR. Por
fim, imprima seguindo a ordem de leitura, aqueles numeros, dentre os 135 lidos, que estejam fora
da faixa definida pelos valores de LIMITE INFERIOR e LIMITE SUPERIOR (inclusive
eles próprios). Seu software deve garantir que o valor LIMITE SUPERIOR não seja inferior
ou igual ao valor de LIMITE INFERIOR. */

#include <stdio.h>

int main(){
	int num[135], limiteinf, limitesup;
	int i=0;


	//printf("Digite 135 numeros:\n");
	while (i<135){
		scanf("%d", &num[i]);
		i++;
	}

	//printf("\nLimite Inferior: ");
	scanf("%d", &limiteinf);

	//printf("\nLimite Superior: ");
	scanf("%d", &limitesup);

	while (limitesup <= limiteinf){
		scanf("%d", &limitesup);
	}

	for (i=0; i<135; i++){
		if (num[i]<limiteinf || num[i]>limitesup){
			printf("%d ", num[i]);
		}
	}
	printf("\n");

	return 0;
}