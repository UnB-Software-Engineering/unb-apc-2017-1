#include <stdio.h>

int main() {
    double deposito, juros, imposto;

    //printf("Aplicacao inicial: ");
    scanf("%lf", &deposito);

    //printf("Percentual da taxa de juro: ");
    scanf("%lf", &juros);

    //printf("Percentual de imposto dobre o rendimento: ");
    scanf("%lf", &imposto);

    //printf("\nValor do imposto a pagar: ");
    printf("%.2lf\n", deposito * juros * imposto / 10000);

    //printf("Valor liquido final da aplicacao: ");
    printf("%.2lf\n", deposito + deposito * juros / 100 - deposito * imposto * juros / 10000);

    return 0;
}
