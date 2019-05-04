#include <stdio.h>

int main(){
    int num;
    char nome[5] = {'N', 'o', 'm', 'e', '\0'};
    char sigla[6] = {'S', 'i', 'g', 'l', 'a', '\0'};
    char capital[8] = {'C', 'a', 'p', 'i', 't', 'a', 'l', '\0'};
    char regiao[7] = {'R', 'e', 'g', 'i', 'a', 'o', '\0'};

    scanf("%d", &num);

    if (num == 1 ){
        printf("%s: ACRE\n", nome);
        printf("%s: AC\n", sigla);
        printf("%s: RIO BRANCO\n", capital);
        printf("%s: NORTE\n", regiao);
    } else if (num == 2){
        printf("%s: ALAGOAS\n", nome);
        printf("%s: AL\n", sigla);
        printf("%s: MACEIO\n", capital);
        printf("%s: NORDESTE\n", regiao);
    } else if (num == 3){
        printf("%s: AMAPA\n", nome);
        printf("%s: AM\n", sigla);
        printf("%s: MACAPA\n", capital);
        printf("%s: NORTE\n", regiao);
    } else if (num == 4){
        printf("%s: AMAZONAS\n", nome);
        printf("%s: AM\n", sigla);
        printf("%s: MANAUS\n", capital);
        printf("%s: NORTE\n", regiao);
    } else if (num == 5){
        printf("%s: BAHIA\n", nome);
        printf("%s: BA\n", sigla);
        printf("%s: SALVADOR\n", capital);
        printf("%s: NORDESTE\n", regiao);
    } else if (num == 6){
        printf("%s: CEARA\n", nome);
        printf("%s: CE\n", sigla);
        printf("%s: FORTALEZA\n", capital);
        printf("%s: NORDESTE\n", regiao);
    } else if (num == 7){
        printf("%s: ESPIRITO SANTO\n", nome);
        printf("%s: ES\n", sigla);
        printf("%s: VITORIA\n", capital);
        printf("%s: SUDESTE\n", regiao);
    } else if (num == 8){
        printf("%s: GOIAS\n", nome);
        printf("%s: GO\n", sigla);
        printf("%s: GOIANIA\n", capital);
        printf("%s: CENTRO-OESTE\n", regiao);
    } else if (num == 9){
        printf("%s: MARANHAO\n", nome);
        printf("%s: MA\n", sigla);
        printf("%s: SAO LUIS\n", capital);
        printf("%s: NORDESTE\n", regiao);
    } else if (num == 10){
        printf("%s: MATO GROSSO\n", nome);
        printf("%s: MT\n", sigla);
        printf("%s: CUIABA\n", capital);
        printf("%s: CENTRO-OESTE\n", regiao);
    } else if (num == 11){
        printf("%s: MATO GROSSO DO SUL\n", nome);
        printf("%s: MS\n", sigla);
        printf("%s: CAMPO GRANDE\n", capital);
        printf("%s: CENTRO-OESTE\n", regiao);
    } else if (num == 12){
        printf("%s: MINAS GERAIS\n", nome);
        printf("%s: MG\n", sigla);
        printf("%s: BELO HORIZONTE\n", capital);
        printf("%s: SUDESTE\n", regiao);
    } else if (num == 13){
        printf("%s: PARA\n", nome);
        printf("%s: PA\n", sigla);
        printf("%s: BELEM\n", capital);
        printf("%s: NORTE\n", regiao);
    } else if (num == 14){
        printf("%s: PARAIBA\n", nome);
        printf("%s: PB\n", sigla);
        printf("%s: JOAO PESSOA\n", capital);
        printf("%s: NORDESTE\n", regiao);
    } else if (num == 15){
        printf("%s: PARANA\n", nome);
        printf("%s: PR\n", sigla);
        printf("%s: CURITIBA\n", capital);
        printf("%s: SUL\n", regiao);
    } else if (num == 16){
        printf("%s: PERNAMBUCO\n", nome);
        printf("%s: PE\n", sigla);
        printf("%s: RECIFE\n", capital);
        printf("%s: NORDESTE\n", regiao);
    } else if (num == 17){
        printf("%s: PIAUI\n", nome);
        printf("%s: PI\n", sigla);
        printf("%s: TERESINA\n", capital);
        printf("%s: NORDESTE\n", regiao);
    } else if (num == 18){
        printf("%s: RIO DE JANEIRO\n", nome);
        printf("%s: RJ\n", sigla);
        printf("%s: RIO DE JANEIRO\n", capital);
        printf("%s: SUDESTE\n", regiao);
    } else if (num == 19){
        printf("%s: RIO GRANDE DO NORTE\n", nome);
        printf("%s: RN\n", sigla);
        printf("%s: NATL\n", capital);
        printf("%s: NORDESTE\n", regiao);
    } else if (num == 20){
        printf("%s: RIO GRANDE DO SUL\n", nome);
        printf("%s: RS\n", sigla);
        printf("%s: PORTO ALEGRE\n", capital);
        printf("%s: SUL\n", regiao);
    } else if (num == 21){
        printf("%s: RONDONIA\n", nome);
        printf("%s: RO\n", sigla);
        printf("%s: PORTO VELHO\n", capital);
        printf("%s: NORTE\n", regiao);
    } else if (num == 22){
        printf("%s: RORAIMA\n", nome);
        printf("%s: RR\n", sigla);
        printf("%s: BOA VISTA\n", capital);
        printf("%s: NORTE\n", regiao);
    } else if (num == 23){
        printf("%s: SANTA CATARINA\n", nome);
        printf("%s: SC\n", sigla);
        printf("%s: FLORIANOPOLIS\n", capital);
        printf("%s: SUL\n", regiao);
    } else if (num == 24){
        printf("%s: SAO PAULO\n", nome);
        printf("%s: SP\n", sigla);
        printf("%s: SAO PAULO\n", capital);
        printf("%s: SUDESTE\n", regiao);
    } else if (num == 25){
        printf("%s: SERGIPE\n", nome);
        printf("%s: SE\n", sigla);
        printf("%s: ARACAJU\n", capital);
        printf("%s: PALMAS\n", regiao);
    } else if (num == 26){
        printf("%s: TOCANTINS\n", nome);
        printf("%s: TO\n", sigla);
        printf("%s: PALMAS\n", capital);
        printf("%s: NORTE\n", regiao);
    } else if (num > 26 || num <= 0){
        printf("INEXISTENTE");
    }

    return 0;
}
