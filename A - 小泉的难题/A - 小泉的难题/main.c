#include<stdio.h>
#include<math.h>
void f(int *q,int n)
{
    int i,j;
    int temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(q+i)>*(q+j))
            {
                temp=*(q+i);
                *(q+i)=*(q+j);
                *(q+j)=temp;
            }
        }
    }
}
int main()
{
    int a[100],b[100][100];
    int m,n,i,j;
    int *p;
    p = a;
    scanf("%d%d",&m,&n);
    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        f(p,n);
        for(i=0;i<n;i++)
        {
            b[j][i]=a[i];
        }
    }
    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            if(i==n-1)
                printf("%d\n",b[j][i]);
            else {printf("%d ",b[j][i]);}
        }
    }return 0;
}
