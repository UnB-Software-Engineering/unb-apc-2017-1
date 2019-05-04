#include <stdio.h>

int main(){
    int count;
    int T;
    double D, TJ, rendimento = 0;

    scanf("%lf %lf %d", &D, &TJ, &T);

    for (count = 0; count < T; count++){
        rendimento = D * (TJ/100);
        D += rendimento;
        printf("Rendimento no mes %d: %.2lf\n", count, rendimento);
    }
    printf("Saldo final do investimento: %.2lf\n", D);

    return 0;
}
