#include<stdio.h>
void sort(int *p,int n)
{
    int i,j,temp;
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n-1-i; j++)
        {
            if(*(p+j) > *(p+j+1))
            {
                temp = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = temp;
            }
        }
    }
}
int main()
{
    int n,i,a[100];
    while(~scanf("%d",&n))
    {
        for(i = 0; i < n; i++)
            scanf("%d",a+i);
        sort(a,n);
        for(i = 0; i < n; i++)
        {
            if(i == n - 1)
                printf("%d\n",a[i]);
            else
                printf("%d ",a[i]);
        }
    }
    return 0;
}
