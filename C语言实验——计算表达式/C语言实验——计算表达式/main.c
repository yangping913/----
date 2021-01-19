#include<stdio.h>
#include<math.h>
double f(double x,int n)
{
    double fun=0;
    for(int i=0;i<=n;i++)
    {
        if(i==1)
        {
            fun+=sqrt(i+x);
        }
        else fun=sqrt(i+fun);
    }
    return fun;
}
int main()
{
    double x,r;
    int n;
    scanf("%lf %d",&x,&n);
    r=f(x,n);
    printf("%.2lf\n",r);
    return 0;
}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int n,i;
//    double fun,x;
//    scanf("%lf %d",&x,&n);
//    for(i=1;i<=n;i++)
//    {
//        if(i==1)
//            fun=sqrt(i+x);
//        else
//            fun=sqrt(fun+i);
//    }
//    printf("%.2lf",fun);
//    return 0;
//}
