#include<stdio.h>
int main()
{
    double x,n,e=1.0,t=0,i,sum,y=1,z,j;
    while(~scanf("%lf %lf",&x,&n))
    {
        
        if(n>0&&x>=0)
        {
            for(i=1.0;i<=n;i++)
          {
              z=x/i;
              y*=z;
              e+=y;
             
              
           }printf("%.6lf",e);
            
        }else printf("error");
    }
}
