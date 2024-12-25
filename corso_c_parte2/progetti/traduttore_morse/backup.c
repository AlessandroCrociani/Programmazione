#include <stdio.h>
#include <string.h>
#define dim1 100
#define dim2 5
void morse (char frase[]){
    char carattere[dim2];
    int i = 0;
    int j = 0;
    
    for (i=0; i<=dim1;i++){
     for (j=0; j<=dim2;j++) carattere[i]=frase[i];
     if(carattere[0]=='.') if(carattere[1]=='/') {
         printf("e");
         break;
        }
    }    
    
    
    printf("\n");


}


int main (){
    char f[]="././";
    morse(f);
    
    
}
