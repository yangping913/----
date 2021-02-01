#include<stdio.h>
struct node
{
    int p,h,x;
}a[100001],t;
void sort(int l,int r)
{
    t=a[l];
    int i=l,j=r;
    if(l>=r)
        return ;
    while(i<j)
    {
        while(a[j].x<=t.x&&i<j)
            j--;
        a[i]=a[j];
        while(a[i].x>=t.x&&i<j)
            i++;
        a[j]=a[i];
    }
    a[i]=t;
    sort(l,i-1);
    sort(i+1,r);
}
int main()
{
    int m,i,j,ans=0;
    scanf("%d",&m);
    for(i=0;i<10;i++)
    {
        scanf("%d %d",&a[i].p,&a[i].h);
        a[i].x=a[i].p/a[i].h;
    }
    sort(0,9);
    for(i=0;i<10;i++)
    {
        if(a[i].h<m)
        {
            ans+=a[i].p;
            m-=a[i].h;
        }
        else
        {
            ans+=m*a[i].x;
            break;
        }
    }
    printf("%d\n",ans);
}
