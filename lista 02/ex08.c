#include<stdio.h>

int main(){
    double saldo;

    scanf("%lf", &saldo);

    if (saldo <= 500){
        printf("%.2lf\n", saldo * 0);
    } else if (saldo > 500 && saldo <= 1000){
        printf("%.2lf\n", saldo * 0.30);
    } else if (saldo > 1000 && saldo <= 3000){
        printf("%.2lf\n", saldo * 0.40);
    } else if (saldo > 3000){
        printf("%.2lf\n", saldo * 0.50);
    }

    return 0;
}
