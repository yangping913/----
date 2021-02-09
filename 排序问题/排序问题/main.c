#include<stdio.h>
int main()
{
    int a[10],b[10],i,j,t1,t2;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        b[i]=i+1;
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<9-i;j++)
        {
            t1=0;t2=0;
            if(a[j]>a[j+1])
            {
                t1=a[j];a[j]=a[j+1];a[j+1]=t1;
                t2=b[j];b[j]=b[j+1];b[j+1]=t2;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d",a[i]);
        if(i!=9)
        {
            printf(" ");
        }else printf("\n");
    }
    for(i=0;i<10;i++)
    {
        printf("%d",b[i]);
        if(i!=9)
            printf(" ");
    }
}
