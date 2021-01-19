#include<stdio.h>
int main()
{
    int n,a=0,b=0,c=0,d=0,e=0,i=1,t;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d\n",&t);
        if(t>=90&&t<=100)
        {
            a++;
        }else if(t<90&&t>=80)
        {
            b++;
        }else if(t<80&&t>=70)
        {
            c++;
        }else if(t<70&&t>=60)
        {
            d++;
        }else if(t>=0&&t<60)
        {
            e++;
        }
    }printf("A %d\n",a);
    printf("B %d\n",b);
    printf("C %d\n",c);
    printf("D %d\n",d);
    printf("E %d\n",e);
}
