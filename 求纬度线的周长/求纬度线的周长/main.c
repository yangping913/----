#include<stdio.h>
#include<math.h>
int main()
{
    double t,length;
    scanf("%lf",&t);
    length=6371.393*cos(t*3.141592653589793/180);
    printf("%.3lf",length);
}
