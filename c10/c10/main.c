#include<stdio.h>
int main()
{
    int a,b,e,c,x,h;
    scanf("%d",&a);
    b=a/100;c=a%10;e=a%100/10;
    
    x=b;b=c;c=x;
    h=b*100+e*10+c;
    printf("%d\n",h);
    return 0;
}
