#include<stdio.h>
int main()
{
    int a,b,c,i;
    scanf("%d\n",&c);
    for(i=1;i<=c;++i)
    {
        scanf("%d %d\n",&a,&b);
        printf("%d\n",a+b);
    }return 0;
}
