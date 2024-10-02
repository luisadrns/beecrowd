#include <stdio.h>
 
int main() {
 
   int n,a,i,sum;
   sum=0;
   scanf("%d",&a);
   do
   {
       scanf("%d",&n);
   }
   while (n<=0);
   for (i=0;i<n;i++)
   {
       sum+=a+i;
   }
 printf("%d\n",sum);
    return 0;
}
