#include<stdio.h>
int main()
{
    int a,b,c,max,min;
    scanf("%d,%d,%d",&a,&b,&c);
    max =a;
    min=a;
    if (b>a)max=b;
    else min=b;
    if (c>max)max=c;
    else if(c<min)min=c;
    printf("%d %d\n",max,min);
    return 0;
}
