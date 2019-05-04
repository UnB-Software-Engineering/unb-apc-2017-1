/* Codifique um software que leia duas strings de até 100 caracteres cada e imprima uma string in-
tercalando as letras das duas strings. Se uma for menor que a outra, deve-se prosseguir imprimindo
a maior. */

#include <stdio.h>
#include <string.h>

int main(){
    char A[100], B[100];
    char i, j, k, l;

    //printf("Digite duas strings:\n");
    scanf("%s", A);
    scanf("%s", B);

    i=strlen(A);

    j=strlen(B);

    if(i>=j){
        k=i;
    }

    else{
        k=j;
    }

    //printf("As duas strings intercaladas:\n");
    for(l=0;l<k;l++){
        if(i-1 >= l){
        	printf("%c", A[l]);
        }

        if(j-1 >= l){
        	printf("%c", B[l]);
        }
	}

    return 0;
}