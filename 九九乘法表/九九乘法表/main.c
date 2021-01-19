#include <stdio.h>
int main()
{
    int a,b,i;
    while(~scanf("%d",&a))
    {
        for(i=1;i<=a;i++)
        {
            for(b=1;b<=i;b++)
            {
                if(b==1)
                    printf("%d*%d=%d",b,i,b*i);
                else
                    printf(" %d*%d=%d",b,i,b*i);
            }
            printf("\n");
        }
    }
    return 0;
}
