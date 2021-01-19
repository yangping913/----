#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int c,d,g=0;
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    gets(a);
    d=strlen(a);

    for(c=d-1; c>=0; c--)
    {
        b[g]=a[c];
        g++;
    }
    if(strcmp(a,b)==0)
        printf("yes");
    else
        printf("no");
    return 0;
}

