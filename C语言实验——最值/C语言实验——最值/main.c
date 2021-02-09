#include<stdio.h>
int main()
{
    int n,m[100],max,min,a,b;
    scanf("%d",&n);
    for(m[0]=1;m[0]<=n;m[0]++)
    {
        scanf("%d",&m[m[0]]);
    }
    for(m[0]=1,max=min=m[1];m[0]<=n;m[0]++)
    {
        if(min>m[m[0]])
        {
            min=m[m[0]];
            a=m[0];
        }
        if(max<m[m[0]])
        {
            max=m[m[0]];
            b=m[0];
        }
    }
    m[0]=m[1];
    m[1]=min;
    m[a]=m[0];
    m[0]=m[n];
    m[n]=max;
    m[b]=m[0];
    for(m[0]=1;m[0]<=n;m[0]++)
    {
        printf("%d",m[m[0]]);
        if(m[0]<n)
            printf(" ");
    }
}

