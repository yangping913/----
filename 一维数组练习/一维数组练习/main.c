//#include<stdio.h>
//int main()
//{
//    int a[10],m,i,t=0,k=0,n;
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&a[i]);
//    }
//    for(i=1;i<n;i++)
//    {
//        if(a[i]>a[k])
//            k=i;
//        if(a[i]<a[t])
//            t=i;
//    }
//    m=a[k];
//    a[k]=a[n-1];
//    a[n-1]=m;
//    m=a[t];
//    a[t]=a[0];
//    a[0]=m;
//    for(i=0;i<n;i++)
//    {
//        printf("%d ",a[i]);
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int i=0,n,a[5];
//    scanf("%d",&n);
//    while(n)
//    {
//        a[i++]=n%10;
//        n=n/10;
//    }
//    printf("%d\n",i);
//    for(int j=i-1;j>=0;j--)
//    {
//        if(j==i-1)
//            printf("%d",a[j]);
//        else printf(" %d",a[j]);
//    }
//    printf("\n");
//    for(int j=0;j<i;j++)
//    {
//        if(j==0)
//            printf("%d",a[j]);
//        else printf(" %d",a[j]);
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int n,i,ave,max,min,a[10],sum,d;
//    while(~scanf("%d",&n))
//    {
//        sum=0;max=0;min=0;d=0;
//        for(i=0;i<n;i++)
//        {
//            scanf("%d",&a[i]);
//            sum+=a[i];
//        }
//        ave=sum/n;
//        for(i=0;i<n;i++)
//        {
//            if(a[i]==ave)
//                d++;
//            else if(a[i]>ave)
//                max++;
//            else min++;
//        }
//        printf("%d %d %d\n",min,d,max);
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int i,n,L,R,a[10000],sum=0;
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&a[i]);
//    }
//    scanf("%d %d",&L,&R);
//    for(i=L-1;i<=R-1;i++)
//    {
//        sum+=a[i];
//    }
//    printf("%d",sum);
//}
//
//#include<stdio.h>
//int main()
//{
//    int n,i=0,a[10];
//    scanf("%d",&n);
//    while(n)
//    {
//        a[i++]=n%10;
//        n=n/10;
//    }
//    for(int j=i-1;j>=0;j--)
//    {
//        printf("%d ",a[j]);
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int a[10001],n,i,t=0,b;
//    while(~scanf("%d",&n))
//    {
//        t=0;
//        int a[10001]={0};
//        for(i=1;i<=n;i++)
//        {
//            scanf("%d",&b);
//            a[b]++;
//        }
//        for(i=0;i<10001;i++)
//        {
//            if(a[i]>a[t])
//                t=i;
//        }
//        printf("%d\n",t);
//    }
//
//
//}
//#include<stdio.h>
//int main()
//{
//    int n,a[10],i,j;
//    while(~scanf("%d",&n))
//    {
//        for(i=0;i<10;i++)
//        {
//            scanf("%d",&a[i]);
//        }
//        int t=1;
//        for(i=0;i<10;i++)
//        {
//            if(a[0]>a[i])
//                t++;
//        }
//        printf("%d\n",t);
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int y,m,a[12]={31,28,31,30,31,30,31,31,30,31,30,31},d,n,i,sum;
//    scanf("%d",&n);
//    for(int j=0;j<n;j++)
//    {
//        scanf("%d %d %d",&y,&m,&d);
//        sum=d;
//        for(i=0;i<m-1;i++)
//        {
//            sum+=a[i];
//        }
//        if((y%100!=0&&y%4==0)||y%400==0)
//        {
//            if(m<=2&&d!=29)
//                printf("%d\n",sum);
//            else printf("%d\n",sum+1);
//        }else printf("%d\n",sum);
//
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int i,j,n,a[100],t;
//    while(~scanf("%d",&n))
//    {
//        t=0;
//        for(i=0;i<n;i++)
//        {
//            scanf("%d",&a[i]);
//        }
//        for(j=1;j<n-1;j++)
//        {
//            if(a[j - 1]<a[j]&&a[j]>a[j + 1])
//                t++;
//        }
//        printf("%d\n",t);
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int a[100],j,i,t,n;
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&a[i]);
//    }
//    for(i=0;i<n-1;i++)
//    {
//        for(j=0;j<n-1-i;j++)
//        {
//            if(a[j]>a[j+1])
//            {
//                t=a[j];
//                a[j]=a[j+1];
//                a[j+1]=t;
//            }
//        }
//    }
//    for(i=0;i<n;i++)
//    {
//        printf("%d ",a[i]);
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int j,i,a[10],c[10],t;
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&a[i]);
//        c[i]=i+1;
//    }
//    for(i=0;i<9;i++)
//    {
//        for(j=0;j<9-i;j++)
//        {
//            if(a[j]>a[j+1])
//            {
//                t=a[j];
//                a[j]=a[j+1];
//                a[j+1]=t;
//                t=c[j];
//                c[j]=c[j+1];
//                c[j+1]=t;
//            }
//        }
//    }
//    for(i=0;i<10;i++)
//    {
//       if(i==9)
//           printf("%d\n",a[i]);
//       else printf("%d ",a[i]);
//    }
//    for(i=0;i<=9;i++)
//    {
//        if(i==9)
//            printf("%d\n",c[i]);
//        else printf("%d ",c[i]);
//    }
//
//}
//#include<stdio.h>
//int main()
//{
//    int i,j,m,a[100],n;
//    while(~scanf("%d %d",&n,&m)&&(n||m))
//    {
//
//        for(i=0;i<n;i++)
//        {
//            scanf("%d",&a[i]);
//        }
//        for(i=0;i<n;i++)
//        {
//            if(m>a[i])
//            {
//                printf("%d ",a[i]);
//                j=i;
//            }
//            else break;
//        }
//        printf("%d",m);
//        for(;i<n;i++)
//        {
//            printf(" %d",a[i]);
//        }
//        printf("\n");
//
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int n,i,j;
//    double a[1000],z,t;
//    while(~scanf("%d",&n))
//    {
//        for(i=0;i<n;i++)
//        {
//            scanf("%lf",&a[i]);
//        }
//        for(i=0;i<n-1;i++)
//        {
//            for(j=0;j<n-1-i;j++)
//            {
//                if(a[j]>a[j+1])
//                {
//                    t=a[j];a[j]=a[j+1];a[j+1]=t;
//                }
//            }
//        }
//        if(n%2!=0)
//        {
//            z=a[n/2];
//        }else z=(a[n/2]+a[n/2-1])/2;
//        printf("%.1lf\n",z);
//    }
//
//}
//#include<stdio.h>
//int main()
//{
//    int a[10],i,j,t,x,n,b[10];
//    while(~scanf("%d",&n)&&n)
//    {
//
//        for(i=0;i<n;i++)
//        {
//            b[i]=0;
//        }
//        for(i=0;i<n;i++)
//        {
//            scanf("%d",&a[i]);
//            t=a[i];
//            while(t)
//            {
//                x=t%10;
//                t=t/10;
//                b[i]+=x;
//            }
//
//        }
//        for(i=0;i<n-1;i++)
//        {
//            for(j=0;j<n-1-i;j++)
//            {
//                if(b[j]>b[1+j])
//                {
//                    t=b[j];b[j]=b[j+1];b[j+1]=t;
//                    t=a[j];a[j]=a[j+1];a[j+1]=t;
//                }
//            }
//
//        }
//        for(i=0;i<n;i++)
//        {
//            if(i==n-1)
//                printf("%d\n",a[i]);
//            else printf("%d ",a[i]);
//        }
//
//    }
//}

//#include<stdio.h>
//int main()
//{
//    int n,a[100],t,i,j,x,y,z;
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//    {
//        scanf("%d %d %d",&x,&y,&z);
//        a[i]=x+y+z;
//    }
//    for(i=0;i<n-1;i++)
//    {
//        for(j=0;j<n-1-i;j++)
//        {
//            if(a[j]<a[j+1])
//            {
//                t=a[j];a[j]=a[j+1];a[j+1]=t;
//            }
//        }
//    }
//    for(i=0;i<n;i++)
//    {
//        printf("%d\n",a[i]);
//    }
//}
//#include<stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int a[1006]={0},i,t,n,T,j,I;
//    scanf("%d",&T);
//    for(I=0;I<T;I++)
//    {
//        scanf("%d",&n);
//        for(i=0;i<n;i++)
//        {
//            scanf("%d",&a[i]);
//        }
//        for(i=0;i<n-1;i++)
//        {
//            for(j=0;j<n-1-i;j++)
//            {
//                if(a[j]>a[j+1])
//                {
//                    t=a[j];a[j]=a[j+1];a[j+1]=t;
//                }
//            }
//        }
//        printf("%d %d\n",a[n-2],a[1]);
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int i,j,a[100],t,c,n,T;
//    scanf("%d",&T);
//    while(T--)
//    {
//        scanf("%d",&n);
//        c=0;
//        for(i=0;i<n;i++)
//        {
//            scanf("%d",&a[i]);
//        }
//        for(i=0;i<n-1;i++)
//        {
//            for(j=0;j<n-1-i;j++)
//            {
//                if(a[j]>a[j+1])
//                {
//                    t=a[j];a[j]=a[j+1];a[j+1]=t;
//                    c++;
//                }
//            }
//        }
//        printf("%d\n",c);
//    }
//
//}
//#include<stdio.h>
//int main()
//{
//    int i,j,a[1000],n,m,t;
//    while(~scanf("%d %d",&n,&m))
//    {
//        int sum=0;
//        for(i=0;i<n;i++)
//        {
//            scanf("%d",&a[i]);
//        }
//        for(i=0;i<n-1;i++)
//        {
//            for(j=0;j<n-i-1;j++)
//            {
//                if(a[j]<a[j+1])
//                    t=a[j];a[j]=a[j+1];a[j+1]=t;
//            }
//        }
//        for(i=0;i<m;i++)
//        {
//            printf("%d",a[i]);
//            sum+=a[i];
//        }
//        printf("%d\n",sum);
//    }
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int i, n, a[21], j, k, t;
//    scanf("%d", &n);
//    for(i = 0; i < n; i++)
//    {
//        scanf("%d", &a[i]);
//    }
//    for(k = 0; k <= n - 1; k++)
//    {
//        for(i = 0; i < n; i++)
//        {
//            if(i < n -1)
//            {
//                printf("%d ", a[i]);
//            }
//            else
//            {
//                printf("%d\n", a[i]);
//            }
//        }
//        t = a[n - 1];
//        for(j = n - 1; j >= 1; j--)
//        {
//            a[j] = a[j - 1];
//        }
//        a[0] = t;
//    }
//    return 0;
//}
#include<stdio.h>
int main()
{
    int a[100];
    int m,n;
    int t;
    int i,j;
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i = 0; i < m; i++)
    {
        t = a[n-1];
        for(j = n - 1; j > 0; j--)
        {
            a[j] = a[j-1];
        }
        a[0] = t;
    }
    for(i = 0; i < n; i++)
    {
        if(i == n - 1)
        printf("%d\n",a[i]);
        else
            printf("%d ",a[i]);
    }
    return 0;
}






























