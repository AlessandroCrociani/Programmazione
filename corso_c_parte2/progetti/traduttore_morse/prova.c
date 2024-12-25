#include <stdio.h>
#include <string.h>
#define dim1 100
#define dim2 5

void leggi_caratteri(char frase[]){

    int i, t;
    char carattere[dim2];
    i=0;
    t=0;
    
     while(1){
      carattere[0]=frase[i]; carattere[1]=frase[i+1]; carattere[2]=frase[i+2]; carattere[3]=frase[i+3]; carattere[4]=frase[i+4];
      if(frase[i]=='/' && frase[i-1]=='/'){ i++; printf(" ");}
      else while(1) {
         if (carattere[0]=='.'){ t++; if(carattere[1]=='/'){printf("e"); t++; i+=t; t=0; break;} //input: ./
            //else *-*
            
            else{if(carattere[1]=='.'){ t++; if(carattere[2]=='/'){printf("i"); t++; i+=t; t=0; break;} //input: ../
            //else ...
            }
            }
            }
         //else{if (carattere[0]=='-');}
 
      }
        if (frase[i]=='\0') break;
    }
}

int main (){
    char frase[]=".././/./";
    leggi_caratteri(frase);
    printf("\n");
   
    

    
    
}
