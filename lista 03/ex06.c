#include <stdio.h>

int main(){
    int count = 0;
    int num;
    int soma = 0;
    double media = 1;

    while (1){
        scanf("%d", &num);

        if (num < 0){
            break;
        }
        soma += num;
        count++;
        media = (double) soma / count;
    }

    printf("%d\n", soma);
    printf("%.1lf\n", media);

    return 0;
}
