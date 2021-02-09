#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,x,o,p,q,y,z;
    scanf("%d:%d:%d",&a,&b,&c);
    scanf("%d:%d:%d",&d,&e,&f);
    x=3600*a+60*b+c;y=3600*d+60*e+f;
    if (y>x)
        z=y-x;
    else  z=x-y;
    o=z/3600;p=(z-o*3600)/60;
    q=z-o*3600-p*60;
    printf("%02d:%02d:%02d\n",o,p,q);
    return 0;
}
