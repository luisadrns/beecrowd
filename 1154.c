#include <stdio.h>
 
int main() {
 
    double i,count,med;
    count=0;
    med=0;
    do
    {
        scanf("%lf",&i);
        if (i>0)
        {
            med=med+i;
            count++;
        }
    }
    while (i>0);
    printf("%.2lf\n",med/count);
 
    return 0;
}
