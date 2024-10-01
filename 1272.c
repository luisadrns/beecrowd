#include <string.h>
#include <stdio.h>

int main(){
    int n, p, primeiraletra;
    char frase[51], resp[51];

    scanf("%d\n", &n);

    for(int i = 0; i < n; ++i)
    {
        gets(frase);

        p = 0;
        primeiraletra = 1;
        memset(resp, '\0', sizeof(resp));

        for(int j = 0; j < strlen(frase); ++j)
        {
            if(primeiraletra && frase[j] != ' ')
            {
                resp[p++] = frase[j];
                primeiraletra = 0;
            }
            else if(!primeiraletra && frase[j] == ' ')
            {
                primeiraletra = 1;
            }
        }

        printf("%s\n", resp);
    }

    return 0;
}
