
#include<stdio.h>
#include<stdio.h>
int main()
{
    int i,n,m,sum,T,j,z,k;
    scanf("%d",&T);
    
    for(i=1;i<=T;i++)
    {
        scanf("%d %d",&n,&m);
        sum=0;
        if(n>m)
        {
            z=n;n=m;m=z;
        }
        for(j=n;j<=m;j++)
        {
            for(k=0;k<=j;k++)
            {
                if(k*k==j)
                {sum+=k*k;}
            }
        }printf("%d\n",sum);
    }
}
