#include <stdio.h>
#include <string.h>

int main(){
    int n;
    char a[1001], b[1001];

    scanf("%d\n", &n);

    for(int i = 0; i < n; ++i)
    {
        scanf("%s %s\n", &a, &b);

        if(strlen(b) > strlen(a))  
        {
            printf("nao encaixa\n");
        }
        else
        {
            strcpy(a, a + (strlen(a) - strlen(b)));
            if(!strcmp(a, b))   
            {
                printf("encaixa\n");
            }
            else                  
            {
                printf("nao encaixa\n");
            }
        }
    }

    return 0;
}
