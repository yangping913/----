#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n>=0)
        {  printf("Yes\n");}
        else if(n<0)
        {printf("No\n");}
    }return 0;
}
