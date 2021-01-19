
#include<stdio.h>
#define W 3.1415926
int main()
{
    float r,h,a,b,c,d;
    scanf("%f %f",&r,&h);
    a=2*W*r;
    b=W*r*r;
    c=a*h;
    d=b*h;
    printf("%.2f %.2f %.2f %.2f\n",a,b,c,d);
    return 0;
    
}
