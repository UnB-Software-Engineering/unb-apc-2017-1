#include <stdio.h>

int main(){
    int Q = 1;
    double PR;
    double total;

    while (Q > 0){
        scanf("%d", &Q);
        if (Q <= 0){
            break;
        }
        scanf("%lf",&PR);

        while (PR < 0){
            scanf("%lf", &PR);
        }
        total = total + (Q * PR);
    }

    printf("%.2lf\n", total);

    return 0;
}
