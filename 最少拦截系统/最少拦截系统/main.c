#include<stdio.h>
int main()
{
    int a[300000],b[300000],f,i,n,j,max,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    b[s]=30000;
    for(i=0;i<n;i++)
    {
        for(j=0,f=0;j<=s;j++)
        {
            if(a[i]<=b[j])
            {
                b[j]=a[i];
                f=1;
                break;
            }
        }
        if(f==0)
        {
            s++;
            b[s]=a[i];
        }
    }
    printf("%d",s+1);
}
