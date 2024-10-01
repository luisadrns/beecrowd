#include <stdio.h>
 
int main() {
 
    int n,m,i,j,total,linha,a,b,coluna;
    total=0;
    linha=0;
    coluna=0;
    scanf("%d %d/n",&n,&m);
    int matriz [n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d\n",&matriz[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        a=0;
        for(j=0;j<m;j++)
        {
            a+= matriz[i][j];
        }
        if (a>linha)
        {
            linha=a;
        }
    }
    for(j=0;j<m;j++)
    {
        b=0;
        for(i=0;i<n;i++)
        {
            b+= matriz[i][j];
        }
        if (b>coluna)
        {
            coluna=b;
        }
    }
    if (linha>coluna)
    {
        total=linha;
    }
    else
    {
        total=coluna;
    }
    printf("%d\n",total);
 
    return 0;
}
