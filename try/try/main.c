#include<stdio.h>
int main()
{
    int a[10000],sum,i=0,n=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   scanf("%d",&sum);
    int t=0,j=0,f;
    for(i=0;i<n;i++)
    {
        
            t+=a[i];
        if(t>sum)
            for(;j<i;)
        {
            t-=a[j];
            j++;
           
            if(t<=sum)
                break;
            
        }
        
         if(t==sum)
        {
            for(f=j;f<=i;f++)
            {
                printf("%d ",a[f]);
                
            }
            break;
        }
        
    }
}
