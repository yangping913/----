#include<stdio.h>
int main()
{
    int L,W,s;
    while(scanf("%d %d",&L,&W)!=EOF)
    {
        s=L/W;
        printf("%d\n",s);
    }
    return 0;
}
