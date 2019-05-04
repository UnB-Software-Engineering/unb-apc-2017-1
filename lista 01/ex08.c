#include <stdio.h>
#include <math.h>

int main(){
    double num1;

    //printf("Insira numero positivo e maior que zero: ");
    scanf("%lf", &num1);

    //printf("\nQuadrado do numero = ");
    printf("%.1lf\n", pow(num1, 2));

    //printf("Cubo do numero = ");
    printf("%.1lf\n", pow(num1, 3));

    //printf("Raiz quadrada do numero = ");
    printf("%.1lf\n", sqrt(num1));

    //printf("Raiz cubica do numero = ");
    printf("%.1lf\n", cbrt(num1));


    return 0;
}
