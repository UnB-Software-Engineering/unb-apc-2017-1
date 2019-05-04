/* Codifique um software que leia 10 valores inteiros e os armazene no array X e leia 10 valores
inteiros e os armazene em Y. Calcule e mostre os seguintes arrays resultantes:
- a união de X e Y (todos os elementos de X e de Y sem repetições);
- a diferença de X e Y (todos os elementos de X que não existam em Y, sem repetições);
- a interseção de X e Y (apenas os elementos que aparecem nos dois vetores, sem repetições). */

#include <stdio.h>

int main(){
    int arrayX[10], arrayY[10], uniaoXY[20], diferencaXY[10], intersecaoXY[10];
    int i, j, l=0, k=0, u, d, t;

    //scans

    //arrayX

    for(i=0; i<10; i++){
        scanf("%d", &arrayX[i]);
    }

    //arrayY
    for(i=0; i<10; i++){
        scanf("%d", &arrayY[i]);
    }

    //formando os conjuntos//

    //uniao//
    u=-1;
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            if(arrayX[i]==uniaoXY[j]){
                k++;
            }
        }
        if(k==0){
            u++;
            uniaoXY[u] = arrayX[i];
        }
        k=0;
    }

    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            if (arrayY[i]==uniaoXY[j]){
                k++;
            }
        }
        if (k==0){
            u++;
            uniaoXY[u] = arrayY[i];
        }
        k=0;
    }

    //diferenca (elementos em x que nao tem em y)//
    d=-1;
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            if (arrayX[i]==arrayY[j]){
                k++;
            }
        }
        if(k==0){
            d++;
            diferencaXY[d] = arrayX[i];
        }
        k=0;
    }

    //intersecao
    t=-1;
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            if(arrayX[i]==diferencaXY[j]){
                k++;
            }
        }
        for(j=0; j<10; j++){
            if(arrayX[i]==intersecaoXY[j]){
                k++;
            }
        }
        for(j=0; j<10; j++){
            if(arrayX[i]==arrayY[j]){
                l++;
            }
        }
        if (k==0){
            if(l!=0){
                t++;
                intersecaoXY[t] = arrayX[i];
            }
        }
        k=0;
        l=0;
    }

    //prints

    //uniao
    for(i=0; i<u; i++){
        printf("%d ", uniaoXY[i]);
    }
    printf("%d\n", uniaoXY[u]);

    //diferenca
    for(i=0; i<d; i++){
        printf("%d ", diferencaXY[i]);
    }
    printf("%d\n", diferencaXY[d]);

    //intersecao
    for(i=0; i<t; i++){
        printf("%d ", intersecaoXY[i]);
    }
    printf("%d\n", intersecaoXY[t]);

    return 0;
}