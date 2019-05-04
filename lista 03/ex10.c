#include <stdio.h>

int main () {

    double salario, salarionovo, gasto=0;
    scanf("%lf", &salario);

    while (salario >= 0) {
        if (salario < 500) {
            salarionovo = salario*1.15;
            gasto = gasto + (salarionovo - salario);
        }
        else if (salario >= 500 && salario <= 1000) {
            salarionovo = salario*1.10;
            gasto = gasto + (salarionovo - salario);
        }
        else {
            salarionovo = salario*1.05;
            gasto = gasto + (salarionovo - salario);
        }
        printf ("%.2lf \n", salarionovo);
        scanf ("%lf", &salario);
    }
    printf("%.2lf", gasto);

    return 0;
}
