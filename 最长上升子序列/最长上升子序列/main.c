#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int list[n],max[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&list[i]);
        max[i]=1;
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(list[j]<list[i]&&max[j]>=max[i])
                max[i]=max[j]+1;
        }
    }
    j=-1;
    for(i=0;i<n;i++)
    {
        if(max[i]>j)
            j=max[i];
    }
    printf("%d\n",j);
}
