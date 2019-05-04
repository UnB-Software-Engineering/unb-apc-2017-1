#include<stdio.h>

int main(){
    int entrada, saida, entradaHora, entradaMin, saidaHora, saidaMin, tempo, preco;

    scanf("%d %d", &entrada, &saida);

    entradaHora = entrada / 100;
    entradaMin = entrada % 100;
    saidaHora = saida / 100;
    saidaMin = saida % 100;
    tempo = (saidaHora*60 + saidaMin) - (entradaHora*60 + entradaMin);

    if (tempo <= 15){
        preco = tempo * 0;
        printf("Entrada\n%02d:%02d\nSaida\n%02d:%02d\nDuracao(min)\n%d\nPreco(centavos)\n%d\n", entradaHora, entradaMin, saidaHora, saidaMin, tempo, preco);

    } else if (tempo > 15 && tempo <= 60){
        preco = tempo * 30;
        printf("Entrada\n%02d:%02d\nSaida\n%02d:%02d\nDuracao(min)\n%d\nPreco(centavos)\n%d\n", entradaHora, entradaMin, saidaHora, saidaMin, tempo, preco);
    } else if (tempo > 60 && tempo <= 120){
        preco = (60 * 30) + (tempo - 60) * 20;
        printf("Entrada\n%02d:%02d\nSaida\n%02d:%02d\nDuracao(min)\n%d\nPreco(centavos)\n%d\n", entradaHora, entradaMin, saidaHora, saidaMin, tempo, preco);
    } else {
        preco = (60 * 30) + (60 * 20) + (tempo - 120) * 10;
        printf("Entrada\n%02d:%02d\nSaida\n%02d:%02d\nDuracao(min)\n%d\nPreco(centavos)\n%d\n", entradaHora, entradaMin, saidaHora, saidaMin, tempo, preco);
    }

    return 0;
}
