#include <stdio.h> 
float modulo (float a ){
    if (a>0)
    return a ;
    else return -a; 
}

float media( float a , float  b){
return (a + b)/ 2; 
}

float radq(  float r ){ 
    float x;
     x = 1.0;
  while (modulo(x * x - r) > 1e-5)
    x = media(x, r/x);
    return x;
}

int main () {
    printf ("%f", radq(2));
}