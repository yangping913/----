#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char a[100];
    int n,i;
    gets(a);
    n=strlen(a);
    for(i=n-1; i>=0; i--)
    {
        printf("%c",a[i]);
    }
    return 0;
}
