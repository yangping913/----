#include<stdio.h>
int main()
{
    int a,b,c,x,y,z,m;
    scanf("%d %d %d",&a,&b,&c);
    x=a+b;y=a+c;z=c+b;
    m=x;
    if(x<y)
        m=y;
    {
        if(m<z)
            m=z;
    }
    printf("%d\n",m);
    return 0;
}
