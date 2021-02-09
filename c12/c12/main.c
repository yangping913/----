#include<stdio.h>
int main()
{
    
  float a,b,c,d,e,h;
   
    scanf("%f %f %f",&a,&b,&c);
    d=a+b+c;
    e=a*b*c;
    h=(a+b+c)/3;
   
    printf("%.0f %.0f %.2f",d,e,h);
    return 0;
}
