#include<stdio.h>
int main()
{
    int a,b,c,mid;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b)
    {mid=a;a=b;b=mid;}
    if(a<c)
    {mid=a;a=c;c=mid;}
    if(b<c)
    {mid=b;b=c;c=mid;}
    printf("%d %d %d",a,b,c);
    return 0;
}
