/* Codifique um software que leia uma String com até 109 caracteres e imprima a mesma String,
substituindo todas vogais não acentuadas por a, depois por e, depois por i, por o e depois u. */

#include <stdio.h>

int main(){

    char string[109];
    int i, j=0, k, l;

    //printf("Digite uma string:\n");
    scanf("%s", string);

    for(i=0;string[i]!='\0';i++){
        j++;
    }
    
    for(i=0;i<j;i++){
        if(string[i]=='e'|| string[i]=='i'|| string[i]=='o'|| string[i]=='u'|| string[i]=='E'|| string[i]=='I'|| string[i]=='O'|| string[i]=='U'){
            string[i]= 'a';
            printf("%c", string[i]);
        } else {
            printf("%c", string[i]);
        }
    }
    printf("\n");

    for(i=0;i<j;i++){
        if(string[i]=='a'|| string[i]=='i'|| string[i]=='o'|| string[i]=='u'|| string[i]=='A'|| string[i]=='I'|| string[i]=='O'|| string[i]=='U'){
            string[i]= 'e';
            printf("%c", string[i]);
        } else {
            printf("%c", string[i]);
        }
    }
    printf("\n");

    for(i=0;i<j;i++){
        if(string[i]=='e'|| string[i]=='A'|| string[i]=='o'|| string[i]=='u'|| string[i]=='E'|| string[i]=='A'|| string[i]=='O'|| string[i]=='U'){
            string[i]= 'i';
            printf("%c", string[i]);
        } else {
            printf("%c", string[i]);
        }
    }
    printf("\n");

    for(i=0;i<j;i++){
        if(string[i]=='e'|| string[i]=='i'|| string[i]=='o'|| string[i]=='u'|| string[i]=='E'|| string[i]=='I'|| string[i]=='O'|| string[i]=='U'){
            string[i]= 'o';
            printf("%c", string[i]);
        } else {
            printf("%c", string[i]);
        }
    }
    printf("\n");

    for(i=0;i<j;i++){
        if(string[i]=='e'|| string[i]=='i'|| string[i]=='o'|| string[i]=='A'|| string[i]=='E'|| string[i]=='I'|| string[i]=='O'|| string[i]=='A'){
            string[i]= 'u';
            printf("%c", string[i]);
        } else {
            printf("%c", string[i]);
        }
    }
    printf("\n");

    return 0;
}