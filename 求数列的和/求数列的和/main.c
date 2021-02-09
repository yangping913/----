#include<stdio.h>
#include<math.h>
double f(double n,int m)
{
    double y;
    if(m==1)
    {
        y=n;
    }
    else
    {
        y=sqrt(f(n,m-1));
    }
    return y;
}
int main()
{
    double n,y,sum;
    int m,i;
    while(~scanf("%lf %d",&n,&m))
    {
        sum=0.0;
        for(i=1;i<=m;i++)
        {
            y=f(n,i);
            sum+=y;
        }
        printf("%.2lf\n",sum);
    }
    return 0;
}

