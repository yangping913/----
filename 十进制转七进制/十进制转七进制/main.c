#include<stdio.h>
#include<math.h>
int main()
{
    int n10,n7=0,r,x=1;
    scanf("%d",&n10);
    while(n10!=0)
    {
        r=n10%7;
        n7+=(x*r);
        x*=10;
        n10=n10/7;
    }
    printf("%d\n",n7);
}
