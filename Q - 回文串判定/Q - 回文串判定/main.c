#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int c,d,t=0,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        gets(a);
        d=strlen(a);
        for(c=d-1; c>=0; c--)
        {
            b[t]=a[c];
            t++;
        }
        if(strcmp(a,b)==0)
            printf("yes");
        else
            printf("no");
    }
    return 0;
}
