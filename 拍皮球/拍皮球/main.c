#include<stdio.h>
int main()
{
    int n,i,j;
    double h,l;
    scanf("%lf %d",&h,&n);
    l=0;
    for(j=1;j<=n;j++)
    {
        if(j==1)
            l=h;
        else l=l+2*h;
        h=h/2;
    } printf("%.2lf %.2lf\n",l,h);

   
   
    return 0;
}
