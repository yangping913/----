#include<stdio.h>
int main()
{
    int a,b,d;
    char c;
    scanf("%d %c %d\n",&a,&c,&b);
    if(c=='+')
        d=a+b;
    if(c=='-')
        d=a-b;
    if(c=='*')
        d=a*b;
    if(c=='/')
        d=a/b;
    printf("%d",d);
    return 0;
}
