#include<stdio.h>
int main()
{
    int n,m,i;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&m);
        for(i=0;;i++)
        {
            if(m==1)
            {
                break;
            }
            if(m%3!=0)
            {
                i=-1;
                break;
            }
            
            if(m%6==0)
                m/=6;
            else
                m*=2;
        }
        
            printf("%d\n",i);
    }
}
