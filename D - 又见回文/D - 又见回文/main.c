#include<stdio.h>
#include<string.h>
int f(char a[])
{
    char *p1,*p2;
    int l=strlen(a);
    p1=a;
    p2=a+l-1;
    while(p1<p2)
    {
        if(*p1==' ')
            p1++;
        else if(*p2==' ')
            p2--;
        else if(*p1!=*p2)return 0;
        else
        {
            p1++;
            p2--;
        }
    }
    return 1;
}
int main()
{
    char a[100001];
    while(gets(a)!=NULL)
    {
        if(strcmp(a,"2013")==0)break;
        else if(f(a))printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
