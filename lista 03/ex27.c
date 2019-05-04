#include <stdio.h>
#include <stdlib.h>

int main(){
    double xi = 0, yi = 0, p = 0, somaxy = 0, somax = 0, somay = 0, somaxx = 0, somayy = 0;
    int i;

    for (i = 1; i<=10;i++) {
        scanf("%lf %lf", &xi, &yi);
        somaxy += xi * yi;
        somax += xi;
        somaxx += xi*xi;
        somay += yi;
        somayy += yi*yi;
    }
    p = (10 * somaxy - (somax*somay))/((pow(10*somaxx-(somax*somax),0.5))*(pow(10*somayy-(somay*somay),0.5)));
    printf("%.2lf",p);

    return 0;
}
