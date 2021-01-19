#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char a[1000],b;
    int c;
    while(~scanf("%s %c",a,&b))
    {
        for(c=0; c<strlen(a); c++)
        {
            if(a[c]==b)
                a[c]='\n';
        }
        for(c=0; c<strlen(a); c++)
        {
            printf("%c",a[c]);
        }
        printf("\n");
    }
    return 0;
}
