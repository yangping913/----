#include<stdio.h>
int main()
{
    int a,b,max,min,x,y,i,j;
    scanf("%d %d",&a,&b);
    if(a>=b)
    {
        max=a;
        min=b;
    }
    else {
        max=b;
        min=a;
    }
    for(i=1;i<=min;i++)
    {
        if(a%i==0&&b%i==0)
            x=i;
    }
    for(j=a*b;j>=max;j--)
    {
        if(j%a==0&&j%b==0)
            y=j;
    }
    printf("%d\n",x);
    printf("%d\n",y);
    return 0;
}
