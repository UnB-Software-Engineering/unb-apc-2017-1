#include <stdio.h>
#include <math.h>

int main(){
    double num1, num2;

    //printf("Insira dois numeros maiores que zero: ");
    scanf("%lf %lf", &num1, &num2);

    if (num1 > 0 && num2 > 0){
        //printf("\n%.1lf elevado a %.lf = ", num1, num2);
        printf("%.1lf\n", pow(num1, num2));
    }

    return 0;
}
