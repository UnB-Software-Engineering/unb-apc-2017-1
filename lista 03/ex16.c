#include <stdio.h>

int main(){
    int i = 0, idade = 0, op = 0;
    double op1 = 0, op2 = 0, op3 = 0, op4 = 0, op5 = 0;
    double soma_id = 0, media_id = 0, pc1 = 0, pc2 = 0, pc3 = 0, pc4 = 0, pc5 = 0;

    while (idade>=0) {
        op = 0;
        scanf("%d", &idade);
        if (idade<0) {
            break;
        }

        while (op>5 || op<1) {
            scanf("%d", &op);
            switch (op) {
                case 1:
                    op1++;
                    break;
                case 2:
                    op2++;
                    break;
                case 3:
                    op3++;
                    break;
                case 4:
                    op4++;
                    break;
                case 5:
                    op5++;
                    break;
                default:
                    break;
            }
        }

        soma_id += idade;
        i++;
    }

    pc1 = op1/i * 100;
    pc2 = op2/i * 100;
    pc3 = op3/i * 100;
    pc4 = op4/i * 100;
    pc5 = op5/i * 100;

    media_id = soma_id/i;

    printf("qtde de participantes: %d\nidade media dos participantes: %.1lf\nOtimo: %.1lf%%\nBom: %.1lf%%\nRegular: %.1lf%%\nRuim: %.1lf%%\nPessimo: %.1lf%%\n",i,media_id, pc1, pc2, pc3, pc4 ,pc5);

    return 0;

}

