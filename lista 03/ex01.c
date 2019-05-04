#include <stdio.h>

int main(){
    int i;
    double peso, peso_final = 0;

    for (i = 0; i < 25; i++){
        scanf("%lf", &peso);
        peso_final += peso;
    }

    printf("%.1lf\n", peso_final);

    return 0;
}
