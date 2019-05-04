#include <stdio.h>

int main(){
    float peso, altura, imc;

    scanf("%f %f", &peso, &altura);

    imc = peso / (altura * altura);

    if (imc < 20){
        printf("ABAIXO");
    } else if (imc >= 20 && imc < 25){
        printf("NORMAL");
    } else if (imc >= 25 && imc < 30){
        printf("SOBREPESO");
    } else if (imc >= 30 && imc <40){
        printf("OBESO");
    } else if (imc >= 40){
        printf("MORBIDO");
    }

    return 0;
}

