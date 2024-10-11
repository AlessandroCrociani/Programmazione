#include <stdio.h>
int main (){
 // inserimento anno
 int anno, bisestile;
 printf("inserisci\n");
 printf("anno: ");
 scanf("%d",&anno);
 if (anno%4==0 && anno%100!=0 || anno%400==0) bisestile=1;
 else bisestile=0;
 if (bisestile==1 ) printf ("il tuo anno é bisestile\n");
 //mese e giorno
 int mese, giorno, FebBis;
 inserimento_mese:
 printf("mese: ");
 scanf("%d", &mese);
 
 
 if (mese==2) FebBis=1;
 else FebBis=0;

 int a, b;
 if (mese==4 || mese==6 || mese==9) {
    a=1;
    b=0;
    }
 else { 
    if (mese<=12)
    a=0;
    b=1;
    } 
 
 if (mese>12) {
    printf("%d non é un mese valido\n", mese);
    goto inserimento_mese;



    }
}