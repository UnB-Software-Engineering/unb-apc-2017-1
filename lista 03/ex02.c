#include <stdio.h>

int main(){
    int i;
    int hora_dia, hora_mes = 0;

    scanf("%d", &hora_dia);

    for (i = 1; i <= 30; i++){
        hora_mes += hora_dia;
    }

    printf("%d\n", hora_mes);

    return 0;
}

