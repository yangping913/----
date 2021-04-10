#include<stdio.h>
#include<math.h>
int a[100001],tot;
int f(int n)
{
    if(n<2)
        return 0;
    for(int i=2;i<=n/i;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    long long int res;
    int t,n,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        res=0;tot=0;
        int l=sqrt(n);
        if(l*l<n)
            l++;
        while(l<=m/l)
        {
            if(f(l))
            {
                res+=l*l;
                a[++tot]=l*l;
            }
            l++;
        }
        for(int i=1;i<=tot;i++)
        {
            printf("%d",a[i]);
            if(i%10==0||i==tot)
                printf("\n");
            else
                printf("\t");
        }
        printf("%lld\n",res);
    }
}
