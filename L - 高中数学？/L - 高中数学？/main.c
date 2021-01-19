#include <stdio.h>
#include <math.h>
int f(int n)
{
   int y;
   if(n==1)
   {
       y=0;
   }
   if(n==2)
   {
       y=1;
   }
   if(n>2&&n<50)
   {
       y=4*f(n-1)-5*f(n-2);
   }
   return y;
}
int main()
{
    int t,n,y;
    scanf("%d",&t);
    while(t>=1)
    {
        scanf("%d",&n);
        y=f(n);
        printf("%d\n",y);
        t--;
    }
    return 0;
}
