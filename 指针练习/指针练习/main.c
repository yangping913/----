//#include<stdio.h>
//int main()
//{
//    int m,n,*p1,*p2;
//    m='a';
//    n='b';
//    p1=&m;
//    p2=&n;
//    printf("m=%d n=%d\n",m,n);
//    printf("*p1=%d *p2=%d\n",*p1,*p2);
//    *p2=*p1;
//    printf("m=%d n=%d\n",m,n);
//    printf("*p1=%d *p2=%d\n",*p1,*p2);
//    return 0;
//
#include<stdio.h>
int main()
{
    int *p1,*p2,a,b,temp;
    scanf("%d %d",&a,&b);
    p1=&a;
    p2=&b;
    if(*p1>*p2)
    {
        temp=*p1;
        *p1=*p2;
        *p2=temp;
    }
    printf("a=%d b=%d\n",a,b);
    printf("*p1=%d *p2=%d\n",*p1,*p2);
    return 0;
}

















