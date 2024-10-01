#include <stdio.h>
 
int main() {
 
    int n[20];
    int i,j;
    j=19;
    for (i=0;i<=19;i++)
    {
        scanf("%d",&n[j]);
        j--;
    }
    for (i=0;i<=19;i++)
    {
        printf("N[%d] = %d\n",i,n[i]);
    }
 
    return 0;
}
