#include<stdio.h>
int main()
{
    int n,max,min,ave,i,m,sum;
    scanf("%d\n",&n);
    scanf("%d",&m);
    max=m;
    min=m;
    sum=m;
    for(i=1;i<n;i++)
    {
        scanf("%d",&m);
        if(max<m)
        { max=m;}
        else if(min>m)
        {min=m;}
        sum+=m;
        ave=sum/n;
    }

    printf("%d %d %d",max,min,ave);
    return 0;
}
