#include <stdio.h>

int main(){
    int cod_maior = 0, cod_menor = 0, codigo = 0;
    double vendas = 0, vendas_maior = 0, vendas_menor = 0, comissao = 0, com_maior = 0, com_menor = 0;
    int i;

    for (i = 0; i<=9; i++) {
        scanf ("%d %lf", &codigo, &vendas);

        if (vendas > vendas_maior && i>0) {
            cod_maior = codigo;
            vendas_maior = vendas;
        }
        if (vendas < vendas_menor && i>0) {
            cod_menor = codigo;
            vendas_menor = vendas;
        }
        if (vendas<=5000) {
            comissao = vendas * 0.015;
        }

        else if (vendas > 5000 && vendas <15000) {
            comissao = vendas * 0.035;
        }
        else if (vendas >=15000){
            comissao = vendas * 0.047;
        }
        if (i == 0) {
            cod_maior = codigo;
            cod_menor = codigo;
            vendas_maior = vendas;
            vendas_menor = vendas;
            com_maior = comissao;
            com_menor = comissao;
        }
        if (comissao > com_maior && i>0) {
            com_maior = comissao;
        }
        else if (comissao < com_menor && i>0) {
            com_menor = comissao;
        }
    }
    printf("%d %.2lf %d %.2lf\n", cod_maior, com_maior, cod_menor, com_menor);

    return 0;

}

