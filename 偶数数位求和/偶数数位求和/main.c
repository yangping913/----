#include<stdio.h>
int main()
{
    int a,sum=0,n;
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
        n=n/10;
        switch(a)
        {
            case 2:sum+=a;break;
            case 4:sum+=a;break;
            case 6:sum+=a;break;
            case 8:sum+=a;break;
        }
    }printf("%d",sum);
    return 0;
}
