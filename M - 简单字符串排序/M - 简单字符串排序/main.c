#include <stdio.h>
#include <string.h>
int main()
{
    int a[10], c = 0, i, j;
    char b[20][20];
    char s[10];
    while (c < 10)
    {
        scanf("%s", b[c]);
        c++;
    }
    getchar();
    c = 0;
    while(c < 10)
    {
        scanf("%d", &a[c]);
        c++;
    }
    for(i = 0; i < 9; i++)
    {
        for(j = 0; j < 9 - i; j++)
        {
            if(strcmp(b[j],b[j+1]) > 0)
            {
                strcpy(s, b[j]);
                strcpy(b[j],b[j+1]);
                strcpy(b[j+1], s);
                c = a[j];
                a[j] = a[j+1];
                a[j+1] = c;
            }
        }
    }
    for(i = 0; i < 10; i++)
    {
        printf("%s,%d\n", b[i], a[i]);
    }
    return 0;
}
