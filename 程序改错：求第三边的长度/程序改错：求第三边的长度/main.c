#include<stdio.h>
#include<math.h>
int main()
{
    double t,hu,c,a,b;
    scanf("%lf%lf%lf",&a,&b,&t);
    hu=t*3.141592653589793/180;
    c=sqrt(a*a+b*b-2*a*b*cos(hu));
    printf("length=%.2lf\n",c);
}
