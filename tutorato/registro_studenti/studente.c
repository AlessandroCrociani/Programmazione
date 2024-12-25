#include <stdio.h>
#include <stdlib.h>
#include "studente.h"

void leggi_studente(char* pt){
    FILE *pf;
    Studente studente;
    pf=fopen("registro.txt", "rt");
    if (pf==NULL){printf("errore apertura file %s \n", pt); exit(1);}
    while(fscanf(pf, "%s %s", studente.nome, studente.cognome)==2);
    fclose(pf);
    if (pf!=NULL){printf("errore chiusura file %s", pt); exit(2);}
}