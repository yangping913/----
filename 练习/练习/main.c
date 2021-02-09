#include<stdio.h>
#define PI 3.1415926
int main()
{
    double h,r,c,v,s,z;
    scanf("%lf %lf",&r,&h);
    z=2*PI*r;
    s=PI*r*r;
    v=s*h;
    c=z*h;
    printf("%.2lf %.2lf %.2lf %.2lf",z,s,c,v);
}
