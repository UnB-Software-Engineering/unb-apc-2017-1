#include <stdio.h>

int main(){
    int N, i, total;

    scanf("%d", &N);

    for (i = 1; i <= 10; i++){
        total = N * i;
        printf("%dx%d=%d\n", N, i, total);
    }

    return 0;
}
