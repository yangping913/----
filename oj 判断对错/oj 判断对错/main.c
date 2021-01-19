#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d\n",&a,&b);
    d=a+b;
    scanf("%d",&c);
    if(c==d)
        printf("YES");
    else printf("NO");
    return 0;
}
