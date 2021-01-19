#include<stdio.h>
int main()
{
    int x,y,max;
    scanf("%d %d",&x,&y);
    max=x;
    if(x<y)
        max=y;
    printf("%d\n",max);
    return 0;
    
        
    
}

