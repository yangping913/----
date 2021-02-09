#include<stdio.h>
struct
{
    int c,p;
}k[1000001],t;
int l[1000001];
void asort(int left,int right)
{
    int a=l[left],i=left,j=right;
    if(left>right)
        return ;
    while(i<j)
    {
        while(i<j&&l[j]<=a)
            j--;
        l[i]=l[j];
        while(i<j&&l[i]>=a)
            i++;
        l[j]=l[i];
    }
    l[i]=a;
    asort(left,i-1);
    asort(i+1,right);
}
int main()
{
    int n,m,i,sum=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&k[i].c,&k[i].p);
        l[i]=k[i].p-k[i].c;
    }
    asort(0,n-1);
    for(i=0;i<m;i++)
    {
        sum+=l[i];
    }
    printf("%d\n",sum);
}
