#include <stdio.h>

int main(){
    double dep = 0, rend = 0, inv = 0, lucro = 0;
    int i = 0;

    while (i<12) {
        i++;
        scanf("%lf", &dep);
        rend += dep;
        inv += dep;
        if (rend<10000) {
            rend*=1.0175;
        }
        else if (rend>=10000){
            rend*=1.0225;
        }
    }
    lucro = rend - inv;
    printf("%.2lf\n",lucro);

    return 0;
}
