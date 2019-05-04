#include <stdio.h>

int main(){
    long int i, num = 0, a = 0, b = 0, c = 0,soma = 0;

    scanf ("%ld", &num);

    if (num%3 !=0) {
        printf("SEM SOMA\n");
    }
    for (i=0;i<num/3;i++) {
        a = 2 * pow (2,i);
        b = 7 * pow (3,i);
        c = 3 * pow (4,i);
        soma += a + b + c;
    }
    printf("%ld\n", soma);

    return 0;
}
