#include <stdio.h>

int main() {
    double salario;

    //printf("Informe salario-base: ");
    scanf("%lf", &salario);

    //printf("Salario a receber: ");
    printf("%.2lf\n", salario * 0.98);

    return 0;
}
