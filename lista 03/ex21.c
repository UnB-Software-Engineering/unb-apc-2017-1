#include <stdio.h>

int main(){
    int melhor_tempo, pior_tempo, num = 1, penal = 0, penalty = 0, voltas = 0;
    int pior_volta = 0, melhor_volta = 0, tempo = 0;
    int i;

    scanf ("%d", &voltas);

    for (i = 1; i<=voltas; i++) {
        scanf("%d", &num);
        penalty = 0;

        if (num<0) {
            penalty = num;
            num = 0;
            i--;

            switch (penalty) {
                case -1:
                    penal = 10;
                    break;
                case -2:
                    penal = 25;
                    break;
                case -3:
                    penal = 40;
                    break;
            }
        }

        if (penal != 0 && penalty == 0) {
            num += penal;
            penal = 0;
        }

        if (i == 1 && penal == 0) {
            pior_tempo = num;
            pior_volta = i;
            melhor_tempo = num;
            melhor_volta = i;
        }
        else if (num < melhor_tempo && num>0) {
            melhor_tempo = num;
            melhor_volta = i;

        }
       else if (num > pior_tempo && num>0) {
            pior_tempo = num;
            pior_volta = i;
        }

        if (num>0) {
            tempo+=num;
        }
    }

    printf("Melhor volta: %d - %d seg\nPior volta: %d - %d seg\nTempo total: %d seg\n", melhor_volta, melhor_tempo, pior_volta, pior_tempo, tempo);

    return 0;
}
