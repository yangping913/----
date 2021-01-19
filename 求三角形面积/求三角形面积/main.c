
#include<stdio.h>
#include<math.h>
double mianji (double a,double b,double c)
{
    double p,s;
    p=(a+b+c)/2.0;
    s=sqrtf(p*(p-a)*(p-b)*(p-c));
    return s;
 }
 int main ()
 {
     double a,b,c;
     
     scanf("%lf %lf %lf",&a,&b,&c);
     
     printf("%.3lf",mianji(a,b,c));
     
     return 0;
 }
