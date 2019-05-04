#include <stdio.h>

int main(){
    int tempo_melhor, tempo_pior, num = 1, penal = 0;
    int melhor_volta = 0, pior_volta = 0, total = 0;
    int i;

    for (i = 1; num!=0; i++) {
        scanf("%d", &num);
        if (penal !=0) {
            num += penal*(-1);
            penal = 0;
            i--;
        }
        if (num<0) {
            penal = num;
        }

        else if (i == 1) {
            tempo_pior = num;
            pior_volta = i;
            tempo_melhor = num;
            melhor_volta = i;
        }
        else if (num < tempo_melhor && num>0) {
            tempo_melhor = num;
            melhor_volta = i;

        }
       else if (num > tempo_pior && num>0) {
            tempo_pior = num;
            pior_volta = i;
        }

        if (num>0) {
            total += num;
        }
    }
    printf("Melhor volta: %d - %d seg\nPior volta: %d - %d seg\nTempo total: %d seg\n", melhor_volta, tempo_melhor, pior_volta, tempo_pior, total);

    return 0;

}
