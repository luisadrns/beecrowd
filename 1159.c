#include <stdio.h>
 
int main() {
 
   int x,i,j,sum1,sum2;
   sum1=0;
   sum2=0;
   do
   {
       scanf("%d",&x);
       if(x!=0)
       {
           if(x%2 == 0)
           {
               for(i=1;i<=5;i++)
               {
                   sum1+=x;
                   x+=2;
               }
               printf("%d\n",sum1);
               sum1=0;
           }
       else if(x%2 != 0)
       {
           ++x;
           for(j=1;j<=5;j++)
           {
               sum2+=x;
               x+=2;
           }
           printf("%d\n",sum2);
           sum2=0;
       }
   }
   }
   while (x != 0);
 
    return 0;
}
