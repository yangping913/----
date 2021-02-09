#include<stdio.h>
int main()
{
    int a,b,c,n,m,i,f,s;
    while(scanf("%d %d",&m,&n)!=EOF)
    {
        f=0;s=1;
        for(i=m; i<=n; i++)
        {
            a=i/100;
            b=(i/10)%10;
            c=i%10;
            if(i==a*a*a+b*b*b+c*c*c)
            {
                if(s)
                {
                    s=0;
                    printf("%d",i);
                    f=1;
                }
                else
                {
                    printf(" ");
                    printf("%d",i);
                }
            }
        }
        if(f==1) printf("\n");
        if(f==0) printf("no\n");
    }
    return 0;
}
