#include <stdio.h>
#include <math.h>

int main(){
    double altura, raio;

    //printf("Informe altura cilindro: ");
    scanf("%lf", &altura);

    //printf("Informe raio cilindro: ");
    scanf("%lf", &raio);

    //printf("\nVolume cilindro = ");
    printf("%.1lf\n", 3.1416 * pow(raio, 2) * altura);

    return 0;
}
