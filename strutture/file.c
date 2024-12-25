#include <stdio.h>
#include <string.h>

typedef struct{
        char nome[20];
        char cognome[20];
        char eta[20];
    } Persona;

void leggipersona(Persona p){
    scanf("%s", p.nome);
    scanf("%s", p.cognome);
    scanf("%s", p.eta);
}

Persona restituiscipersona(){
    Persona p;
    scanf("%s", p.nome);
    scanf("%s", p.cognome);
    scanf("%s", p.eta);
    return p;
}

void stampapersona(Persona a ){
    printf("%s%s%s\n", a.nome, a.cognome, a.eta );
}   
int main (){
    Persona p1, p2; 
    leggipersona(p1);
    stampapersona(p1);
    return 0;


}