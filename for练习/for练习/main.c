//#include<stdio.h>
//int main()
//{
//    int a,b,sum;
//    int n;
//    scanf("%d",&n);
//    for(int i=0;i<n;i++)
//    {
//        scanf("%d %d",&a,&b);
//        sum=a+b;
//        printf("%d\n",sum);
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int a,b,n,i,max;
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//    {
//        scanf("%d %d",&a,&b);
//        max=a;
//        if(a<b)
//            max=b;
//        printf("%d\n",max);
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int n,i,sum=0;
//    scanf("%d",&n);
//    for(i=1;i<=n;i++)
//    {
//        sum+=i;
//    }
//    printf("%d",sum);
//}
//#include<stdio.h>
//int main()
//{
//    int i,j=1,n;
//    scanf("%d",&n);
//    for(i=1;i<=n;i++)
//    {
//        j*=i;
//    }printf("%d",j);
//}
//#include<stdio.h>
//int main()
//{
//    int n,i;
//    scanf("%d",&n);
//    for(i=1;i<=n;i++)
//    {
//        printf("%d*%d=%d\n",n,i,n*i);
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int t=0,i,n,x,sum=0;
//    scanf("%d %d",&n,&x);
//    for(i=1;i<=x;i++)
//    {
//        t+=n;
//        n*=10;
//        sum+=t;
//    }printf("%d\n",sum);
//
//}
//#include<stdio.h>
//int main()
//{
//    int ave,max,min,n,i,a,sum;
//    scanf("%d",&n);
//    scanf("%d",&a);
//    max=a;min=a;sum=a;
//    for(i=1;i<n;i++)
//    {
//        scanf("%d",&a);
//        if(a>max)
//            max=a;
//        if(a<min)
//            min=a;
//        sum+=a;
//    }ave=sum/n;
//    printf("%d %d %d",max,min,ave);
//}
//#include<stdio.h>
//int main()
//{
//    int i,gys,gbs,j,m,n;
//    scanf("%d %d",&n,&m);
//    int max,min;
//    if(n>m)
//    {
//        max=n;min=m;
//    }else {
//        max=m;min=n;
//    }
//    for(i=1;i<=min;i++)
//    {
//        if(n%i==0&&m%i==0)
//            gys=i;
//    }
//    for(i=m*n;i>=max;i--)
//    {
//        if(i%n==0&&i%m==0)
//            gbs=i;
//    }printf("%d\n%d",gys,gbs);
//}
//#include<stdio.h>
//int main()
//{
//    int i,flag,n;
//    scanf("%d",&n);
//    flag=1;
//    for(i=2;i<n;i++)
//    {
//        if(n%i==0)
//            flag=0;
//    }
//    if(flag==1&&n!=1)
//        printf("This is a prime.");
//    else printf("This is not a prime.");
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int i,n,a,max;
//    scanf("%d",&n);
//    scanf("%d",&a);
//    max=a;
//    for(i=1;i<n;i++)
//    {
//        scanf("%d",&a);
//        if(abs(max)<abs(a))
//            max=a;
//    }printf("%d",max);
//}
//
//#include<stdio.h>
//int main()
//{
//    double n,i,sum=0.0;
//    scanf("%lf",&n);
//    for(i=1;i<=n;i++)
//    {
//        sum=sum+(1/(4*i-3)-1/(4*i-1));
//    }printf("%.5lf",sum*4);
//}
//#include<stdio.h>
//int main()
//{
//    int sum1=0,sum2=0,i,n,a;
//    scanf("%d",&n);
//    for(i=1;i<=n;i++)
//    {
//        scanf("%d",&a);
//        if(i%2!=0)
//        {
//            sum1+=a;
//        }else sum2+=a;
//    }if(sum1>sum2)
//        printf("Greater than");
//    else if(sum1<sum2)
//        printf("Less than");
//    else printf("Equal");
//
//}
//#include<stdio.h>
//int main()
//{
//    int N,i;
//    scanf("%d",&N);
//    for(i=0;i<N;)
//    {
//        N-=(1+i)*(1+i);
//        if(N<0)
//            break;
//        i++;
//    }printf("%d",i);
//}
//#include<stdio.h>
//int main()
//{
//    double i,t=2.0,sum=0,k=1.0,m=1;
//    int n;
//    scanf("%d",&n);
//    for(i=1.0;i<=n;i++)
//    {
//        t=t+k-m;
//        sum+=t/k;
//        m=k;
//        k=k+m;
//    }printf("%.6lf",sum);
//}
//#include<stdio.h>
//int main()
//{
//    double sum=0,m=1,k=2,t;
//    int i,n;
//    scanf("%d",&n);
//    for(i=1;i<=n;i++)
//    {
//        sum+=k/m;
//        t=k;
//        k=k+m;
//        m=t;
//    }
//    printf("%.6lf",sum);
//}
//#include<stdio.h>
//int main()
//{
//    int n,m,a=0,b=0,c=0,d=0,e=0,i;
//    scanf("%d",&n);
//    for(i=1;i<=n;i++)
//    {
//        scanf("%d",&m);
//        if(m>=90&&m<=100)
//            a++;
//        else if(m>=80&&m<90)
//            b++;
//        else if(m>=70&&m<80)
//            c++;
//        else if(m>=60&&m<70)
//            d++;
//        else if(m>=0&&m<60)
//            e++;
//    }
//    printf("A %d\nB %d\nC %d\nD %d\nE %d\n",a,b,c,d,e);
//}
//#include<stdio.h>
//int main()
//{
//    int n,m,i,sum=0,T,max,min,j;
//    scanf("%d",&T);
//    for(int x=1;x<=T;x++)
//    {
//
//        sum=0;
//        scanf("%d %d",&n,&m);
//        if(n>m)
//        {
//            max=n;min=m;
//        }else
//        {
//            max=m;min=n;
//        }
//        for( i=min;i<=max;i++)
//        {
//            for ( j=0;j<=i;j++)
//            {
//                if(j*j==i)
//                sum+=j*j;
//            }
//        }
//        printf("%d\n",sum);
//    }
//}
//
//#include<stdio.h>
//int main()
//{
//    int m,n,i,a,b,c,flag;
//    while(~scanf("%d %d",&m,&n))
//    {
//        flag=0;
//        for(i=m;i<=n;i++)
//        {
//            a=i%10;b=(i/10)%10;c=i/100;
//            if(i==a*a*a+b*b*b+c*c*c)
//            {
//                flag++;
//                if(flag==1)
//                {
//                    printf("%d",i);
//                }
//                else printf(" %d",i);
//            }
//
//        }
//        if(flag>0)
//            printf("\n");
//        else if(flag==0)
//            printf("no\n");
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int i;
//    double n,x,y=1,k=1,t=1,m,h=1.0,j;
//    while(~scanf("%lf %lf",&x,&n))
//    {
//        y=1;h=1;k=1;
//        for(i=1;i<=n;i++)
//        {
//            k=-k;
//            h=h*x*x;
//            t=i*2;
//            m=1.0;
//            for(j=1;j<=t;j++)
//            {
//                m*=j;
//            }
//            y+=(h/m*k);
//        }printf("%.4lf\n",y);
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int flag=1,i,j,n,h,sum,a1,a2,a3,a4,a5,a6;
//    while(~scanf("%d",&n))
//    {
//        h=0;sum=0;flag=1;
//        a1=n%10;
//        a2=n/10%10;
//        a3=n/100%10;
//        a4=n/1000%10;
//        a5=n/10000%10;
//        a6=n/100000%10;
//        sum=a1+a2+a3+a4+a5+a6;
//        for(i=2;i<n;i++)
//        {
//            if(n%i==0)
//            {
//                flag=0;
//            }
//        }
//            for(j=2;j<sum;j++)
//            {
//                if(sum%j==0)
//                {
//                    flag=0;
//                }
//            }
//        if(flag==1&&n!=1)
//            printf("YES\n");
//        else printf("NO\n");
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int n,i,sum,a;
//    while(~scanf("%d",&n))
//    {
//        if(n==0)
//            continue;
//        sum=0;
//        for(i=1;i<=n;i++)
//        {
//            scanf("%d",&a);
//            sum+=a;
//        }
//        printf("%d\n",sum);
//    }
//
//}
//#include<stdio.h>
//int main()
//{
//    int i,m,n,sum,sum1,sum2;
//    while(~scanf("%d %d",&n,&m))
//    {
//        sum1=0,sum2=0;
//        for(i=1;i<=n;i++)
//        {
//            sum1+=i;
//        }
//        for(i=1;i<=m;i++)
//        {
//            sum2+=i;
//        }
//        sum=sum1-sum2;
//        printf("%d\n",sum);
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int i,j,n,t=1,f=1;
//    scanf("%d",&n);
//    for(i=2;i<n;i++)
//    {
//        f=1;
//        for(j=2;j<i;j++)
//        {
//            if(i%j==0)
//                f=0;
//        }
//        if(f==1)
//        {
//            printf("%d ",i);
//            t++;
//            if(t%10==0)
//                printf("\n");
//        }
//
//
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int j,n,i;
//    while(~scanf("%d",&n))
//    {
//        for(i=1;i<=n;i++)
//        {
//            for(j=1;j<=i;j++)
//            {
//                if(j==i)
//                    printf("%d*%d=%d",j,i,j*i);
//                else  printf("%d*%d=%d ",j,i,i*j);
//            }
//            printf("\n");
//        }
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int n,x1,x2,y1,y2,t,i,x,y;
//    while(~scanf("%d",&n))
//    {
//        t=0;
//        scanf("%d %d\n",&x1,&y1);
//        scanf("%d %d\n",&x2,&y2);
//        for(i=1;i<=n;i++)
//        {
//            scanf("%d %d",&x,&y);
//            if(x>x1&&x<x2&&y>y1&&y<y2)
//            {
//                t++;
//            }
//        }
//
//        printf("%d\n",t);
//    }
//}
























































































































































