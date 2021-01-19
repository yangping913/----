#include<stdio.h>
int main()
{
    int i,n,j;
    double sum,a,b,f,c,x;
    while(~scanf("%lf %d",&x,&n))
    {
        sum=1.0;a=1.0;f=1.0;
        for(i=2;i<=2*n;i+=2)
        {
            f=-f;
            a=a*x*x;
            b=1.0;
            for(j=1;j<=i;j++)
            {
                b*=j;
            }
            c=a/b*f;
            sum=sum+c;
        }
        printf("%.4lf\n",sum);
    }
    return 0;
}
