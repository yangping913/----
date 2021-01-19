#include<stdio.h>
int main()
{
    int n,m,i=0,x;
    scanf("%d %d",&n,&m);
    while(n>0)
    {
        
        x=n%10;
        n=n/10;
       if(m==x)
       {  i=i+1;}
    }printf("%d",i);
    return 0;
}
