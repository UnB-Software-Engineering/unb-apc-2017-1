#include <stdio.h>

int main() {
    double salario, percentual, aumento;

    //printf("Salario:\n");
    scanf("%lf", &salario);

    //printf("Percentual de aumento:\n")
    scanf("%lf", &percentual);

    aumento = salario * percentual / 100;

    printf("%.2lf %.2lf", aumento, salario + aumento);

    return 0;
}
