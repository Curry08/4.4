#include <stdio.h>

int main(){
    float media,voto,sommavoti,nvoti;

    while(voto!=0){
        printf("Inserisci i tuo voti: ");
        scanf("%f",&voto);
        nvoti++;
        sommavoti+=voto;

    }
    nvoti--;
    media=sommavoti/nvoti;
    printf("La media è %f",media);
    return 0;
}
