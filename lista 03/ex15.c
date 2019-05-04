#include <stdio.h>

int main(){
    int N;
    int largura, comprimento;
    int comodo = 0;
    int somacomodo = 0;
    int area = 0;
    int count;

    scanf("%d", &N);

    for (count = 1; count <= N; count++){
        scanf("%d", &largura);
        scanf("%d", &comprimento);

        comodo = largura * comprimento;
        somacomodo += comodo;
        area = somacomodo;
    }

    printf("%d\n", area);

    return 0;
}
