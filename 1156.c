#include <stdio.h>
 
int main() {
 
    double s,i,j,aux;
    i=3.0;
    j=2.0;
    s=1.0;
    for(i=3.0;i<=39;i+=2.0)
    {
        aux=i/j;
        s+=aux;
        j=2.0*j;
    }
    printf("%.2lf\n",s);
    return 0;
}
