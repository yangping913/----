#include <stdio.h>
#include <math.h>
double f(double a,double b,double c)
{
    double p,y;
    p=(a+b+c)/2;
    y=sqrt(p*(p-a)*(p-b)*(p-c));
    return y;
}
int main()
{
    double a,b,c,y;
    scanf("%lf %lf %lf",&a,&b,&c);
    y=f(a,b,c);
    printf("%.3lf",y);
    return 0;
}
