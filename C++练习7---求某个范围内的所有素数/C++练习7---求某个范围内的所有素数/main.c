#include<stdio.h>
int main()
{
    int n,i,j,s=0;
    int flag;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(i==2)
        {
            flag=1;
        }
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
       else if(i%j!=0)
        {
            flag=1;
        }
                
        }
    if(flag==1)
    { printf("%d ",i);
        s++;
        if(s%10==0)
        {
            printf("\n");
        }
    }
    }
}
