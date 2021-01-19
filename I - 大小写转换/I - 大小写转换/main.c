#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
    char a[80];
    int b,c;
    while(~scanf("%s",a))
    {
        c=strlen(a);
        for(b=0; b<c; b++)
        {
            if(a[b]<='z'&&a[b]>='a')
                printf("%c",a[b]-32);
            else if(a[b]<='Z'&&a[b]>='A')
                printf("%c",a[b]+32);
            else printf("%c",a[b]);

            if(b==c-1)printf("\n");
        }
    }
    return 0;
}
