#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node
{
    int b,e,num;
}a[101],t;
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i].b,&a[i].e);
        a[i].num=i+1;
    }
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j].e>a[j+1].e)
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    int now=a[0].e;
    printf("%d",a[0].num);
    for(i=1;i<n;i++)
    {
        if(a[i].b>=now)
        {
            printf(",%d",a[i].num);
            now=a[i].e;
        }
    }
}
