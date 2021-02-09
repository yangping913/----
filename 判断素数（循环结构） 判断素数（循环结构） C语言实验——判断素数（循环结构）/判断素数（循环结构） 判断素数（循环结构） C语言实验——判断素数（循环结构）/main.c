#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    int flag;
    scanf("%d",&n);
    flag=1;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            flag=0;
    }
    if(flag!=0&&n!=1)
        printf("This is a prime.");
    else printf("This is not a prime.");
    return 0;
}
