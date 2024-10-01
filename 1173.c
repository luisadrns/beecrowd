#include <stdio.h>
 
int main() {
 
   int N[10];
   int x,i;
   scanf("%d",&x);
   N[0]=x;
   for (i=0;i<=9;i++)
   {
       printf("N[%d] = %d\n",i,N[i]);
       N[i+1]=N[i]*2;
   }
 
    return 0;
}
