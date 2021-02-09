#include<stdio.h>
#define PI 3.1415927
int main()
{
    double r,v;
    while( scanf("%lf",&r)!=EOF)
    {

        v=(4.0*PI*r*r*r)/3.0;
        printf("%.3lf\n",v);
        
    }return 0;
}
