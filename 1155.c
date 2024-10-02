#include <stdio.h>
 
int main() {
 
   double s,i,aux;
   s=0;
   for(i=1;i<=100;i++)
   {
       aux=1/i;
       s+=aux;
   }
   printf("%.2lf\n",s);
 
    return 0;
}
