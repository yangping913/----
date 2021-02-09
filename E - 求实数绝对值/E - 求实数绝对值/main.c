#include <stdio.h>
#include <math.h>
double f(double x)
{
    double y;
    if(x>=0)
    {
        y=x;
    }
    else
    {
        y=fabs(x);
    }
    return y;
}
int main()
{
    double x,y;
    while(~scanf("%lf",&x))
    {
        y=f(x);
        printf("%.2lf\n",y);
    }
    return 0;
}
