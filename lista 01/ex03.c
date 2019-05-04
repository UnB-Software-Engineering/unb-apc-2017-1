#include <stdio.h>

int main() {
    double salario;

    //printf("Salario:\n");
    scanf("%lf", &salario);

    printf("%.2lf\n", salario * 1.25);

    return 0;
}
