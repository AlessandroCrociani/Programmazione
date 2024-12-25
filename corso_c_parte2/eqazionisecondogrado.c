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

int main (){
    float a, b , c;
    float delta ;
    float soluzione ;
    float x1, x2;
    printf("eqazione: ax^2+bx+c=0 \n");
    printf("inserisci a, b, c\n");
    scanf ("%f%f%f", &a,&b,&c);
    if (a!=0){ 
        delta = ((b*b) - (4*a*c));
        if (delta<0) {
            printf ("non esistono soluzioni reali\n");
        }
    else {
         if (delta == 0) { soluzione = (-b)/(2*a);
            printf("x = %.2f\n", soluzione);
        }
        else {
            x1 =  (-b + radq(delta))/(2*a);
            x2 =  (-b - radq(delta))/(2*a);
            printf ("x1= %.2f x2= %.2f\n", x1 , x2);
        }
    
    
    }
    }

    else {
        if (b==0){
            if (c==0) printf("equazione indeterminata\n");
            else printf("eqazione impossibile\n");
        
        }
        else soluzione = -c / b;
        printf ("x = %.2f\n", soluzione);
    }
    
return 0;
 }