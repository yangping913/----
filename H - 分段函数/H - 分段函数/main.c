#include <stdio.h>
#include <math.h>
double f(double x)
{
    double y;
    if(x>0&&x<10)
    {
        y=log2(x);
    }
    else if(x<0)
    {
        y=fabs(x)+sin(x);
    }
    else if(x==0)
    {
        y=0;
    }
    else if(x>=10)
    {
        y=x*x;
    }
    return y;
}
int main()
{
    int t;
    double x,y;
    scanf("%d",&t);
    while(t>=1)
    {scanf("%lf",&x);
        y=f(x);
        printf("%.2lf\n",y);
        t--;
    }
    return 0;
}
