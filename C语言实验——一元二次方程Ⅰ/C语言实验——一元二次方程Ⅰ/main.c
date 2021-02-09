#include<stdio.h>
#include<math.h>
double f(double a,double b,double c)
{
    double y;
    y=(-b+sqrt(b*b-4*a*c))/(2*a);
    return y;
}
double g(double a,double b,double c)
{
    double y;
    y=(-b-sqrt(b*b-4*a*c))/(2*a);
    return y;
}
int main()
{
    double a,b,c,x1,x2,t;
    scanf("%lf %lf %lf",&a,&b,&c);
    x1=f(a,b,c);x2=g(a,b,c);
    if(x1<x2)
    {
        t=x1;
        x1=x2;
        x2=t;
    }printf("%.2lf %.2lf",x1,x2);
    return 0;
}
