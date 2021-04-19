#include <stdio.h>
#include <stdlib.h>
int a[1000001];
int n;
void reverse(int left,int right)
{
    int t;
    while(left<=right)
    {
        t=a[left++];
        a[left-1]=a[right];
        a[right--]=t;
    }
}
void print()
{
    int i;
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            printf("%d",a[i]);
        }
        else
        {
            printf(" %d",a[i]);
        }
    }
    printf("\n");
}
int main()
{
    int i,t,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&m);
        reverse(0,m-1);
        reverse(m,n-1);
        reverse(0,n-1);
        print();
    }
    return 0;
}

