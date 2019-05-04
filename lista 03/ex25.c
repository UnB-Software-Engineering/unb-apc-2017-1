#include <stdio.h>

int main(){
    int i, j = 0, a0 = 0, a1 = 0, a2 = 0, teste = 0;
    long int num = 0;
    scanf("%ld", &num);

    for (i = 2; i<=num-1; i++) {
        if (!(num%i == 0) && num%num == 0) {
            teste++;
        }
    }
    if (teste == num-2) {
        //printf("PRIMO\n");
    }
    else {
        //printf("NAO PRIMO\n");
        teste = 0;
    }

    a0 = 1;
    a1 = 1;

    do {
        a2 = a1 + a0;

        if (j>1) {
            a0 = a1;
        }
        a1 = a2;

        if ((num==a0 || num==a1 || num==a2) && teste==num-2) {
            printf("SIM\n");
            break;
        }
        else if ((num != a0 && num != a1 && num != a2 && j<=num)){
            if (j==num || teste == 0) {
                printf("NAO\n");
            break;
            }
            else {
                continue;
            }
        }
        j++;

    } while (j<=num);

    return 0;
}

