#include <stdio.h>

int main() {

    int i;
    double resist, resist2, maior, menor, serie=0, paralelo, media, subtracao;

    scanf ("%lf", &resist);

    maior = resist;
    menor = resist;

    for (i=0;i<5;i++) {
        scanf ("%lf", &resist2);

        if (resist2 > maior) {
            maior=resist2;
    }
        if (resist2 < menor) {
            menor=resist2;
    }
        if (i == 0) {
            serie += resist + resist2;
    }
        else if (i > 0) {
            serie += resist2;
    }

        paralelo = 1 / serie;
        media = serie / 6;
        subtracao = maior - media;
    }

    printf ("%.4lf %.4lf %.4lf\n", serie, paralelo, subtracao);

    return 0;

}
