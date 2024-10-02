#include <stdio.h>
 
int main() {
    int x,z,i,count;
    count=0;
 
    scanf("%d\n",&x);
    do 
    {
        scanf("%d\n",&z);
    }
    while (z<=x);
for(i=1;i<=z;i++)
{
    i+=x;
    count++;
}
printf("%d\n",count);
 return 0;
}
