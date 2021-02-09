#include<stdio.h>
int main()
{
    int a[100][100],m,n,i,j,k,d,h=0;
    scanf("%d %d",&m,&n);
    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[j][i]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<m;k++)
            {
                if(a[i][j]>a[k][j])
                    break;
            }
            for(d=0;d<n;++d)
            {
                if(a[i][j]<a[i][d])
                    break;
            }
            if(k==m&&d==n)
            {
                printf("Array[%d][%d]=%d",i,j,a[i][j]);
                h++;
            }
        }
    }if(h==0)
        printf("None");
}
