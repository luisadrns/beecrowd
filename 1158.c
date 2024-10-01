#include <stdio.h>
 
int main() {
 
    int n,i,x,y,j,k,sum1,sum2;
    sum1=0;
    sum2=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&x,&y);
        if (x%2 != 0)
        {
            for(j=1;j<=y;j++)
            {
                sum1+=x;
                x+=2;
            }
            printf("%d\n",sum1);
            sum1=0;
        }
        else if(x%2 == 0)
        {
            ++x;
            for(k=1;k<=y;k++)
            {
                sum2+=x;
                x+=2;
            }
            printf("%d\n",sum2);
            sum2=0;
        }
        
    }
 
    return 0;
}
