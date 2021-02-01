#include<stdio.h>
struct node{
    int k,g;
}a[10001],t;
void f(int p,int b)
{
    t=a[p];
    int i=p,j=b;
    if(p>=b)
        return ;
    while(i<j)
    {
        while((a[j].k>t.k||(a[j].k==t.k&&a[j].g<=t.g))&&i<j)
            j--;
        a[i]=a[j];
        while((a[i].k<t.k||(a[i].k==t.k&&a[i].g>=t.g))&&i<j)
            i++;
        a[j]=a[i];
    }
    a[i]=t;
    f(p,i-1);
    f(i+1,b);
}
int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i].k,&a[i].g);
    }
    f(0,n-1);
    int sum=0;
    for(i=0;i<m;i++)
    {
        sum=sum+a[i].g;
    }
    printf("%d",sum);
}
