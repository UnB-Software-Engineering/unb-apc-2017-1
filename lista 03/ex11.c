#include <stdio.h>

int main(){
    int i,num,maior,menor,total;

    scanf("%d",&total);
    scanf("%d",&num);

    maior = num;
    menor = num;

    for (i=1; i<=total-1; i++){     //Programa verifica a quantidade de números estipuladas e
                                    //verifica se, a cada loop, a variavel i atingiu a variavel total
        scanf ("%d",&num);
        if (num > maior)            //sempre que um numero novo eh colocado, checa-se a condicao
            maior = num;            //num>maior, se num for maior ela eh salva na variavel maior
        if (num < menor)            //se num for menor, eh salva na variavel menor
            menor = num;
    }
    printf ("Menor: %d\n", menor);  //retorna os valores menor
    printf ("Maior: %d\n", maior);  //e maior

    return 0;
}
