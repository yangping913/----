#include<stdio.h>
#include<stdlib.h>
struct f
{
    int a,b;
}arr[10001],t;
int main()
{
    int i,n,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&arr[i].a,&arr[i].b);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(arr[j].b<arr[j+1].b)
            {
                t=arr[j];arr[j]=arr[j+1];arr[j+1]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d %d\n",arr[i].a,arr[i].b);
    }
}
