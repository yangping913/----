#include<stdio.h>
struct node
{
    int p,h;
}arr[1001],t;
int main()
{
    int i,j,m,n;
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++)
    {
        scanf("%d %d",&arr[i].p,&arr[i].h);
        
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m-i-1;j++)
        {
            if(arr[j].p>arr[j+1].p)
            {
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    int a=0;
    for(i=0;i<m;i++)
    {
        if((n*1.0/arr[i].p)<=arr[i].h)
        {
            printf("%.2lf",a+(n*1.0/arr[i].p));
            break;
        }
        else{
            n=n-(arr[i].p*arr[i].h);
            a+=arr[i].h;
        }
    }
}
