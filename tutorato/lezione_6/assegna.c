#include <stdio.h>
#define dim 10
int assegna (int *a, int n) {

return *a=n;
    
}
 
int main(){
 int m[10];
 for( int i=0; i<dim; i++) assegna(&m[i], 5);
 for( int i=0; i<dim; i++) printf("%d\n", m[i]);

}