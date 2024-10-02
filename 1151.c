#include <stdio.h>
 
int main() {
 
    int n,i,num1,num2,aux;
    scanf("%d",&n);
    num1=0;
    num2=1;
    for(i=1;i<=n;i++)
    {   if (i != n)
    {
        printf("%d ",num1);
    }
    else if(i == n)
    {
        printf("%d\n",num1);
    }
        aux=num1+num2;
        num1=num2;
        num2=aux;
    }
 
    return 0;
}
