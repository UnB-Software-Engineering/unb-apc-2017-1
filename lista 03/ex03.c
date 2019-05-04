#include <stdio.h>

int main(){
    int i;
    int H = 0, N;

    scanf("%d", &N);

    for (i = 1; i <= N; i++){
        H = i + H;
    }

    printf("%d", H);


    return 0;
}
