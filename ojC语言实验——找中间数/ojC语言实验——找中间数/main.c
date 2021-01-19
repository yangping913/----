#include<stdio.h>
int main()
{
    int x,y,z,mid;
    scanf("%d %d %d",&x,&y,&z);
    if(x>y)
    {mid=x;x=y;y=mid;}
    if(x>z)
    {mid=x;x=z;z=mid;}
    if(y>z)
    {mid=y;y=z;z=mid;}
    printf("%d",y);
    return 0;
}
