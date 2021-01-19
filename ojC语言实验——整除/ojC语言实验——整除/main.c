#include<stdio.h>
int main()
{
    int a,a3,a5;
    scanf("%d",&a);
    a3=a%3;a5=a%5;
    if(a3==0 && a5==0)
        printf("Yes");
        else printf("No");
    return 0;
}
