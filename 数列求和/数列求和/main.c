#include<stdio.h>
int main()
{
    int a,n,s=0,i,m=0;
    scanf("%d\n%d\n",&a,&n);
    
    for(i=1;i<=n;i++)
    {
        m=m*10+a;
        s+=m;
      
    }  printf("%d\n",s);
    return 0;
}
