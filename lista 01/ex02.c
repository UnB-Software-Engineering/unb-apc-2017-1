#include <stdio.h>

int main() {
    double num1, num2, num3;

    //printf("Informe 3 notas:\n");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    printf("%.1lf\n", (num1+ num2+ num3) / 3);

    return 0;
}
