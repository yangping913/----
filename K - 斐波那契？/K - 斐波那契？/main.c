#include <stdio.h>
#include <math.h>
int f(int n)
{
   int y;
   if(n==1)
   {
       y=2;
   }
   if(n==2)
   {
       y=3;
   }
   if(n==3)
   {
       y=5;
   }
   if(n>3)
   {
       y=f(n-1)+f(n-2)-f(n-3);
   }
   return y;
}
int main()
{
    int n,y;
    scanf("%d",&n);
    y=f(n);
    printf("%d\n",y);
    return 0;
}
