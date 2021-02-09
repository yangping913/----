#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    gets(a);
    gets(b);
    if(!strcmp(a,b))
    {
        printf("%s=%s",a,b);
    }
    else if(strcmp(a,b) < 0)
    {
        printf("%s<%s",a,b);
    }
    else
    {
        printf("%s>%s",a,b);
    }
    return 0;
}
