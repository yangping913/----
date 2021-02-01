#include<stdio.h>
struct node
{
    int f,m;
    double money;
}a[10001],t;
void sort(int l,int r)
{
    int i=l,j=r;
    t=a[i];
    if(i>=j)
        return ;
    while(i<j)
    {
        while(i<j&&a[j].money<=t.money)
            j--;
        a[i]=a[j];
        while(i<j&&a[i].money>=t.money)
            i++;
        a[j]=a[i];
    }
    a[i]=t;sort(l,i-1);sort(i+1,r);
}
int main()
{
    int n,m,i,sum=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++)
    {
        scanf("%d %d",&a[i].f,&a[i].m);
        a[i].money=a[i].f*1.0/a[i].m*1.0;
    }
    sort(0,m-1);
    double d;
    for(i=0;i<m;i++)
    {
        if(a[i].m<=n)
        {
            d+=a[i].f;
            n-=a[i].m;
        }
        else{
            d=d+n*a[i].money;
            break;
        }
    }
    printf("%.3f\n",d);
}
