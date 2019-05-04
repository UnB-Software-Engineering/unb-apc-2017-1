#include <stdio.h>

int main(){
    double count;
    int tempmin, tempmax;
    double TempCelsius;

    scanf("%d %d", &tempmin, &tempmax);

    count = tempmin;

    while (count <= tempmax){
        TempCelsius = (count - 32) * 5.0/9.0;

        printf("%.0lf F : %.1lf C\n", count, TempCelsius);

        count++;
    }

    return 0;
}
