#include <stdio.h>

int main(){
    int altura1, altura2;
    int count = 0;

    scanf("%d %d", &altura1, &altura2);

    while (altura1 > altura2){
        altura1 = altura1 + 2;
        altura2 = altura2 + 3;

        count++;

    } printf("%d\n", count);

    return 0;
}
