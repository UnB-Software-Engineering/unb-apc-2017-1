/* Codifique um software que leia 500 numeros inteiros e imprima a primeira ocorrência de cada
um. */

#include <stdio.h>

int main(){
    int num[500];
    int i,j;
    int a =-1;

    //printf("Digite uma sequencia de 500 numeros:\n");
    for(i=0;i<500;i++){
        scanf("%d",&num[i]);
    }
    
    //printf("Saida:\n");   
    for(i=0;i<500;i++){        
        for(j=0;j<i;j++){            
            if(num[i] == num[j])
            
            a = 1;
        }

        if(a == -1){
            printf("%d ",num[i]);
        }
        a=-1;
    }
    return 0;
}