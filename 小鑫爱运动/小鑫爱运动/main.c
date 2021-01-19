#include<stdio.h>
int main()
{
    int x;
    while(~scanf("%d",&x))
    {
        int a[10],i;
        for(i=0;i<10;i++)
        {
            scanf("%d",&a[i]);
        }
        int n=1,j;
        for(j=1;j<10;j++)
        {
            if(a[0]>a[j])
                n+=1;
        }
        printf("%d\n",n);
    }
}
