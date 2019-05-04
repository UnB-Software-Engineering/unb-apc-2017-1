#include <stdio.h>

int main(){
    double saldo_a = 50000, saldo_d = 0, compra = 0, venda = 0, percent = 0, total = 0, saldo_f = 50000, saldo_l = 0;
    int i, j, k;

    for (i = 0, j = 0, k = 0;i<=5; i++) {
        scanf("%lf %lf", &compra, &venda);
        saldo_d = saldo_a - compra + venda;
        saldo_l = saldo_d - 50000;

        if (venda>compra) {
            percent = (venda-compra)/compra;
            j++;
        }
        else if (venda<compra) {
            percent = (venda-compra/compra);
            k++;
        }
       saldo_f += saldo_l;
    }

    total = (((saldo_f)/50000)-1)*100;
    printf("%.2lf %d %d\n", total, j, k);

    return 0;

}
