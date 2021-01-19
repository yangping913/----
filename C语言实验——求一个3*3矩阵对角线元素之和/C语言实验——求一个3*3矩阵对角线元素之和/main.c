#include <stdio.h>
int main()
{
    int a[3][3],i,j,b=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
            if(i+j==2)
                b+=a[i][j];
        }
    }printf("%d",b);
}
