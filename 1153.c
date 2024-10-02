#include <stdio.h>
 
int main() {
 
   int n,i,fat,aux;
   scanf("%d",&n);
   fat=n;
   for (i=1;i<n;i++)
   {
    aux=(n-i);
    fat=fat*aux;
   }
   
   printf("%d\n",fat);
 
    return 0;
}
