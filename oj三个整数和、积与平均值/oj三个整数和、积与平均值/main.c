#include<stdio.h>
int main()
{
    
    float a,b,c,d;
    
    scanf("%f %f %f",&a,&b,&c);
    d=(a+b+c)/3;
    printf("%.0f %.0f %.2f\n",a+b+c,a*b*c,d);
    return 0;
}
