//#include<stdio.h>
//#include<math.h>
//double f(double x,int n)
//{
//    int i;
//    double fun;
//    for(i=1;i<=n;i++)
//    {
//        if(i==1)
//        {
//            fun=sqrt(x+1);
//        }
//        else
//        {
//            fun=sqrt(fun+i);
//        }
//    }
//    return fun;
//}
//int main()
//{
//    int n;
//    double fun,x;
//    scanf("%lf %d",&x,&n);
//    fun=f(x,n);
//    printf("%.2lf",fun);
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//double f(int n,int m)
//{
//    int i;
//    double fun;
//    for(i=1;i<m;i++)
//    {
//        if(i==1)
//            fun=n;
//        else if(i==2)
//            fun=sqrt(n);
//        else
//            fun=sqrt(fun);
//    }
//    return fun;
//}
//int main()
//{
//    int n,i,m;
//    double fun,y;
//    while(~scanf("%d %d",&n,&m))
//    {
//        fun=0;
//        for(i=1;i<=m;i++)
//        {
//            fun=f(n,i);
//            y+=fun;
//        }
//        printf("%.2lf\n",y);
//    }
//    return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//    int a[100],i,n;
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&a[i]);
//    }
//    for(i=0;i<9;i++)
//    {
//        for(int j=0;j<9-i;j++)
//        {
//            if(a[j]>a[j+1])
//            {
//                n=a[j];a[j]=a[j+1];a[j+1]=n;
//            }
//        }
//    }
//    for(i=0;i<10;i++)
//    {
//        if(i!=9)
//        {
//            printf("%d,",a[i]);
//        }
//        else
//            printf("%d",a[i]);
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//int main()
//{
//    char a[50];
//    int i;
//    gets(a);
//    for(i=strlen(a)-1;i>=0;i--)
//    {
//        printf("%c",a[i]);
//    }
//
//}
//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//    char a[256];
//    int t=1,i;
//    gets(a);
//    for(i=0;i<strlen(a)-1;i++)
//    {
//        if(a[0]==' '&&i==0)
//        {
//            t=t-1;
//        }
//        else if(a[i]==' '&&a[i+1]!=' ')
//        {
//            t++;
//        }
//    }
//    printf("%d",t);
//}
//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//int main()
//{
//    int a,b,i;
//    char c[1000];
//    while(1)
//    {
//        gets(c);
//        a=0;b=0;
//        for(i=0;i<strlen(c);i++)
//        {
//            if(c[i]>='0'&&c[i]<='9')
//                a++;
//            else if((c[i]>='a'&&c[i]<='z')||(c[i]>='A'&&c[i]<='Z'))
//                b++;
//        }
//        printf("letters:%d,digits:%d\n",b,a);
//    }
//}
//
//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//int main()
//{
//    int i,t,j;
//    char s[50];
//    gets(s);
//
//    for(i=0;i<strlen(s);i++)
//    {
//        for (j =t= i + 1; j < strlen(s); j++)
//        {
//            if (s[j] != s[i]||(s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9'))
//                        s[t++] = s[j];
//        }  s[t] = '\0';
//    }
//    puts(s);
//}
//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//double f1(double a,double b,double c)
//{
//    double x1;
//    x1=(-1*b+sqrt(b*b-4*a*c))/(a*2);
//    return x1;
//}
//double f2(double a,double b,double c)
//{
//    double x2;
//    x2=(-1*b-sqrt(b*b-4*a*c))/(a*2);
//    return x2;
//}
//int main()
//{
//    double a,b,c,x1,x2,t;
//    scanf("%lf %lf %lf",&a,&b,&c);
//    x1=f1(a,b,c);
//    x2=f2(a,b,c);
//    if(x1<x2)
//    {
//        t=x1;
//        x1=x2;
//        x2=t;
//    }
//    printf("%.2lf %.2lf",x1,x2);
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//double three(double a,double b,double c)
//{
//    double p,s;
//    p=(a+b+c)/2;
//    s=sqrt(p*(p-a) * (p - b) * (p -c));
//    return s;
//}
//int main()
//{
//    double a,b,c,s;
//    scanf("%lf %lf %lf",&a,&b,&c);
//    s=three(a,b,c);
//    printf("%.3lf",s);
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    double a,b;
//    while(~scanf("%lf",&a))
//    {
//        b=abs(a);
//        printf("%.2lf\n",b);
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//long long int f(int x)
//{
//    long long int y;
//    int i;
//    for(i=1,y=1;i<=x;i++)
//    {
//        y*=i;
//    }
//    return y;
//}
//long long int a(int n,int m)
//{
//    long long int A;
//    A=f(n)/f(n-m);
//    return A;
//}
//long long int c(int n,int m)
//{
//    long long int C;
//    C=f(n)/(f(n-m)*f(m));
//    return C;
//}
//int main()
//{
//    int m,n;
//    long long int A,C;
//    while(~scanf("%d %d",&n,&m))
//    {
//        A=a(n,m);
//        C=c(n,m);
//        printf("%lld %lld\n",A,C);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a[100][100],i,j,sum=0;
//    for(i=0;i<3;i++)
//    {
//        for(j=0;j<3;j++)
//        {
//            scanf("%d",&a[i][j]);
//        }
//    }
//    for(i=0;i<3;i++)
//    {
//        for(j=0;j<3;j++)
//        {
//            if((j==1&&i==1)||(j==i-2)||(j-2==i))
//            {
//                sum+=a[i][j];
//            }
//        }
//    }
//    printf("%d",sum);
//}
//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//int main()
//{
//    char a[1000],b[1000];
//    int i,t=0;
//    gets(a);
//    for(i=0;i<strlen(a);i++)
//    {
//        if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
//        {
//            b[t]=a[i];
//            t++;
//        }
//    }
//    puts(b);
//}
//#include<string.h>
//#include<math.h>
//#include<stdio.h>
//int main()
//{
//    int i;
//    char c[1000],a[1000];
//    gets(a);
//    for(i=0;i<strlen(a);i++)
//    {
//        if(a[i]>='a'&&a[i]<='z')
//            c[i]=a[i]-32;
//        else if(a[i]>='A'&&a[i]<='Z')
//            c[i]=a[i]+32;
//        else c[i]=a[i];
//    }
//    puts(c);
//}
//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//int main()
//{
//    int i,t=0;
//    char c,a[10000],b[10000];
//    scanf("%s\n",a);
//    scanf("%c",&c);
//    for(i=0;i<strlen(a);i++)
//    {
//        if(a[i]!=c)
//        {
//            b[t]=a[i];
//            t++;
//        }
//    }
//    puts(b);
//}
//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//int main()
//{
//    int i,flag=1;
//    char a[100];
//    while(gets(a))
//    {
//        flag=1;
//        for(i=0;i<strlen(a);i++)
//        {
//            if((a[i]<'a'||a[i]>'z')&&(a[i]<'A'||a[i]>'Z')&&a[i]!=' '&&a[strlen(a)-1]!='.')
//            {
//                flag=0;
//            }
//        }
//        if(flag==1)
//            printf("Yes\n");
//        else
//            printf("No\n");
//    }
//}
#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int a[1000][1000],i,j,m,n,k;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
}
