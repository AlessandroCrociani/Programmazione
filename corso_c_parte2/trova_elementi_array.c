#include <stdio.h>
#define dim 5
int main (){
    int a[]= {1, 3, 4, 6};
    int trovato =0 , i, elemento;
    scanf("%d", &elemento);
    i=0;
    while (!trovato && i<elemento){
    if (a[i]==elemento) trovato=1;
    else i++; 
    }
    
    if (trovato) printf("trovato\n");
    else printf("non trovato\n");
} 