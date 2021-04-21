#include<stdio.h>;
int main()
{
    double a,b,length,r=6378.137,p=3.141592653589793;
    scanf("%lf %lf",&a,&b);
    length=2.0*r*p*(a-b)/360;
    if(length<0)
    {
        printf("%.3lf\n",-length);
    }
    else
        printf("%.3lf\n",length);
}

//https://pintia.cn/problem-sets/1382681250001350656/problems/1382681349955809280
