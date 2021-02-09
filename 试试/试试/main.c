#include<stdio.h>
int main()
{
    float n=0,a=1.0,b=1.0,c,m=0,x,i;
    scanf("%f",&x);
    for(i=1;;i++)
    {
        
        b*=(2*i-1);
        c=a/b;
        a*=i;
        n+=c*2;
        if(n-m<=x)
        {
            printf("%.100f",n);break;
        }else m=n;
    }
}
