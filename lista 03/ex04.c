#include <stdio.h>

int main(){
    int i;
    int N, fatorial = 1;

    scanf("%d", &N);

    if (N < 0){
        printf("nao existe");
    } else {
        for (i = N; i >= 1; i--){
            fatorial = fatorial * i;
        }

            printf("%d", fatorial);
    }

    return 0;
}


