#include<stdio.h>
int main()
{
    int a,b,c,max;
    scanf("%d,%d,%d",&a,&b,&c);
    max=a;
    if(a<b)
        max=b;
    {
        if(max<c)
        max=c;
        printf("max=%d\n",max);
        
    }
    return 0;
}
