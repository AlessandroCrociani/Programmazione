#include <stdio.h>
#define dim 120

int leggi_array(int a[], int maxdim){

 int dl;
 dl=0;
 do {
     scanf("%d", &a[dl]);
     if(a[dl]>=0) dl++;
     
    }
    while (a[dl-1]>= 0 && dl<dim);
    return dl

}

int main (){
    int numeri[dim];
    int dln;
    leggi_array(numeri, dim)
}.