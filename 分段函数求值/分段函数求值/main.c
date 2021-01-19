#include<stdio.h>
int main()
{
    double x,y;
    while(scanf("%lf\n",&x)!=EOF)
    {
       
        if(x==0)
        {y=100.0;}
        else if(x>0)
        
        {y=x*x+1;}
        else {y=-x;}
        printf("%.1lf\n",y);
    }return 0;
}
