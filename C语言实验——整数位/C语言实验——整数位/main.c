#include<stdio.h>
int main()
{
    int n,count=0,i,a[5];
    scanf("%d",&n);
    while(1)
    {
        a[count]=n%10;
        n=n/10;
        if(n==0)
        {
            break;
        } count++;
       
    }
    printf("%d\n",count+1);
    for(i=count;i>0;i--)
    {
        printf("%d ",a[i]);
    }
    printf("%d",a[0]);
    printf("\n");
    for(i=0;i<count;i++)
    {
        printf("%d ",a[i]);
    }printf("%d",a[count]);
}
