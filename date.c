#include <stdio.h>
int main (){
 // inserimento anno
 int anno, bisestile;
 printf("inserisci\n");
 printf("anno: ");
 scanf("%d",&anno);
 if (anno%4==0 && anno%100!=0 || anno%400==0) bisestile=1;
 else bisestile=0;
 if (bisestile==1 ) printf ("l'anno é bisestile\n");
 //mese e giorno
 int mese, giorno, FebBis, Feb;
 
 printf("mese: ");
 
 
 inserimento_mese:
scanf("%d", &mese);
 int a;
 if (mese==2 && bisestile!=1) Feb=1;
 if (mese==2 && bisestile==1) FebBis=1;
 

 
 if (mese==4 || mese==6 || mese==9) {
    //a=0 il mese ha 30 giorni
    a=0;
    }
 else { 
    if (mese<=12 && mese!=2)
    //a=1 il mese ha 31 giorni 
    a=1;
    } 
 
 if (mese>12) {
    printf("%d non é un mese valido\n", mese);
    goto inserimento_mese;
   }

 inserimento_giorno:
 printf("giorno: ");
 scanf("%d",&giorno); 
  
 // 31 giorni
 if (a==1) 
    if (giorno>31) {
    printf("%d non é un giorno valido\n", giorno);
    goto inserimento_giorno;
    }
 // 30 giorni
 if (a==0) 
    if (giorno>30) {
    printf("%d non é un giorno valido\n", giorno);
    goto inserimento_giorno;
    }
 // 28 giorni
 if (Feb==1)
   if (giorno>28) {
   printf("%d non é un giorno valido\n", giorno);
    goto inserimento_giorno;
   }  
  
   // 29 giorni
 if (FebBis==1)
   if (giorno>29) {
   printf("%d non é un giorno valido\n", giorno);
    goto inserimento_giorno;
   }

 // compilazione data
 printf("il giorno che segue il %d/%d/%d é il ", giorno, mese, anno);

 // calcolo giorno dopo
 calcolo: {
 if (giorno==31 && a==1 && mese!=12 ){
   giorno=1;
   mese+=1;
   }

 if (giorno==30 && a==0 && mese!=12 ){
   giorno=1;
   mese+=1;
   }

 if (giorno==28 && Feb==1 ){
   giorno=1;
   mese+=1;
   }

 if (giorno==29 && FebBis==1 ){
   giorno=1;
   mese+=1;
   }  
if (mese==12 && giorno==31) {
   giorno=1;
   mese=1;
   anno+=1;
   }
   
 else giorno+=1;
 }

 printf("%d/%d/%d\n", giorno, mese, anno);
 printf("continuo?\n");
 si_o_no:
 printf("(digita 1 per continuare o 0 per terminare il programma)\n");
 int si_o_no;
 scanf("%d", &si_o_no);
 if (si_o_no==1)
 goto calcolo;
 
 if (si_o_no==0) printf ("arrivederci :)\n");
 else {printf("errore\n");
      goto si_o_no;}
}
