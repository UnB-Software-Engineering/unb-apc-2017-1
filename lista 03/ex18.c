#include <stdio.h>

int main(){
    int DN = 0, MN = 0, AN = 0;
    int DH = 0, MH = 0, AH = 0, tempo1 = 0, tempo2 = 0, tempo3 = 0;
    int tempo_ano = 0, tempo_mes = 0, tempo_dia = 0;

    while (DN<1 || DN>30) {
        scanf("%d", &DN);
    }

    while (MN>12 || MN<1) {
        scanf("%d", &MN);
    }

    while (AN<=0 || AN>=2020) {
        scanf("%d", &AN);
    }

    while (DH<1 || DH>30) {
        scanf("%d", &DH);
    }
    while (MH>12 || MH<1) {
        scanf("%d", &MH);
    }
    while (AH<AN || AH>=2020 || AH<=0) {
        scanf("%d", &AH);
    }


    if (DH<DN && MH<MN) {
        MH--;
        tempo_dia = (30-DN)+DH;
        tempo3 = tempo_dia;
    }

    if (DH<DN && MH>MN) {
        MH--;
        tempo_dia = (30-DN)+DH;
        tempo3 = tempo_dia;
    }

    if (MH>MN) {
        tempo_mes = MH - MN;
        tempo2 = tempo_mes * 30;
    }

    if (MH<MN) {
        AH--;
        tempo_mes = (12-MN) + MH;
        tempo2 = tempo_mes*30;
    }

    if (DH>DN) {
        tempo_dia = DH - DN;
        tempo3 = tempo_dia;
    }

    tempo_ano = AH - AN;
    tempo1 = tempo_ano * 360;

    printf("%d\n", tempo1+tempo2+tempo3);

   return 0;
}
