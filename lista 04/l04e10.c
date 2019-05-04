/* Codifique um software que leia 28 numeros inteiros. Após a leitura dos 28, deve-se imprimir a
média dos valores resultantes do conjunto de cada numero subtraı́do da média de todos os numeros
fornecidos, sendo o resultado dessa subtração elevado ao quadrado. Além disso o seu software deve
imprimir a raiz quadrada do valor impresso anteriormente. Ou seja o seu software apresentará
primeiro a variância e depois o desvio padrão dos 28 números. */

#include <stdio.h>
#include <math.h>

int main(){
	int num[28];
	int i, sum; 
	double media=0.0, soma=0.0, variancia=0.0;

	//printf("Informe 28 numeros inteiros:\n");	
	for (i=0; i<28; i++){
		scanf("%d", &num[i]);
		sum += num[i];
	}

	media = sum/28;

	for(i=0;i<28;i++){
		soma += pow(num[i]-media,2);
	}

	variancia = soma/28;

	//printf("\nVariancia: ");
	printf("%.1lf\n", variancia);

	//printf("Desvio padrao: ");
	printf("%.1lf\n", sqrt(variancia));

	return 0;
}