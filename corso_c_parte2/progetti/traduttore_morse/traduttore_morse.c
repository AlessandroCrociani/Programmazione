#include <stdio.h>
#define dim 500

void logo (char logo[]){

    printf("########################\n");
    printf("#   %s   #\n", logo);
    printf("########################\n");
    printf("\n");
}
void morse(char carattere[]){
    int i;
    i=0;
    printf ("/");
    while (i<=dim){
        if(carattere[i-1]==carattere[i]) i++;
        if (carattere[i]=='a') printf(".- /");
        if (carattere[i]=='b') printf("-... /");
        if (carattere[i]=='c') printf("-.-. /");
        if (carattere[i]=='d') printf("-.. /");
        if (carattere[i]=='e') printf(". /");
        if (carattere[i]=='f') printf("..-. /");
        if (carattere[i]=='g') printf("--. /");
        if (carattere[i]=='h') printf("..../");
        if (carattere[i]=='i') printf(".. /");
        if (carattere[i]=='j') printf(".--- /");
        if (carattere[i]=='k') printf("-.- /");
        if (carattere[i]=='l') printf(".-.. /");
        if (carattere[i]=='m') printf("-- /");
        if (carattere[i]=='n') printf("-. /");
        if (carattere[i]=='o') printf("--- /");
        if (carattere[i]=='p') printf(".--. /");
        if (carattere[i]=='q') printf("--.- /");
        if (carattere[i]=='r') printf(".-. /");
        if (carattere[i]=='s') printf("... /");
        if (carattere[i]=='t') printf("- /");
        if (carattere[i]=='u') printf("..- /");
        if (carattere[i]=='v') printf("...- /");
        if (carattere[i]=='w') printf(".-- /");
        if (carattere[i]=='x') printf("-..- /");
        if (carattere[i]=='y') printf("-.-- /");
        if (carattere[i]=='z') printf("--.. /");
        if (carattere [i]=='_') printf("/");
        if (carattere[i]=='\0') break;
        i++;
    }
    printf("\n");
}

int main(){
    logo("traduttore morse");
    int mod;
    while(1){
     printf("inserire modalita`\n");
     printf("premere 1 per tradurre una frase in morse\n");
     printf("premere 2 per tradurre una frase dal morse\n");
     printf("\n");
     scanf("%d", &mod);
     printf("\n");
     if (mod==1) break;
     if (mod==2) break;
     if (mod!=1 || mod !=2) printf("modalita` inesistente\n");
    }
    printf("inserire una frase...\n");
    printf("(per un corretto funzionamento utilizzare '_' al posto della barra spaziatrice)\n");
    printf("\n");
    char frase[dim];
    scanf("%s", frase);
    if (mod==1){ 
        printf("\n");
        logo("   traduzione   ");
        morse(frase);

    }
}