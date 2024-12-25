#include <stdio.h>
#define DIM 5
void scambia(float *a, float* b)
{
    float temp;
    temp = *a;
     *a = *b;
     *b = temp;
}
int main()
{
    float array[DIM];
    float prodotto=1;
    int i;
    for ( i=0; i<DIM; i++) scanf("%f", &array[i]);
    for (i=0; i<DIM; i++) prodotto*=array[i];
    scambia(&array[0], &array[DIM-1]);
    for (i=0; i<DIM; i++) 
    printf("%.2f ", array[i]);
    printf("\n");

    printf("%f\n", prodotto);
}