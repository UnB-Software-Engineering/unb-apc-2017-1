#include <stdio.h>

int main(){
    int num_lesma = 0, veloc = 0, nivel = 0;
    int i = 0, niv1 = 0, niv2 = 0, niv3 = 0;


    //printf("Insira o numero de lesmas\n");
    scanf("%d", &num_lesma);

    for (i = 0; i<num_lesma;i++) {
        //printf("Insira a velocidade das lesmas:");
        scanf("%d", &veloc);
        if (veloc < 10){
            nivel = 1;
        } else if (veloc >= 10 && veloc <20) {
            nivel = 2;
        } else if (veloc >= 20){
            nivel = 3;
        }

        switch (nivel) {
            case 1:
                niv1++;
                //printf("velocidade < 10cm/h");
                break;
            case 2:
                niv2++;
                //printf("velocidade >= 10cm/h < 20");
                break;
            case 3:
                niv3++;
                //printf("velocidade >= 20cm/h");
                break;
        }
    }

    if (niv3 >= 1) {
        printf("3\n");
    } else if (niv2>=1){
        printf("2\n");
    } else if (niv1>=1) {
        printf("1\n");
    }

   return 0;
}

