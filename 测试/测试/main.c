//#include<stdio.h>
//int main()
//{
//    int n,a[50][50],i,j;
//    while(~scanf("%d",&n)&&n!=0)
//    {
//        a[0][0]=1;
//        for(i=1;i<n;i++)
//        {
//            a[i][0]=1;
//            for(j=1;j<=i;j++)
//            {
//                a[i][j]=a[i-1][j]+a[i-1][j-1];
//            }
//        }
//        for(i=0;i<n;i++)
//        {
//            for(j=0;j<i;j++)
//            {
//                printf("%d ",a[i][j]);
//
//            }
//            printf("%d\n",a[i][i]);
//        }
//        printf("\n");
//    }
//}
//#include<stdio.h>
//#include<math.h>
//int main(void)
//{
//    int i=2,n;
//    scanf("%d",&n);
//    while ((n%i!=0)&&(pow((float)n,(float)1/2)>=i))
//    {
//      i++;
//    if (pow((float)n,(float)1/2)<i)
//
//    printf("yes");
//    else
//    printf("no");
//    }
//    return 0;
//}

//int max( int a, int b )
//{
//    if(a<b)
//        a=b;
//    return a;
//
//}
//int f( int n )
//{
//    long long int fun;
//    if(n==1)
//        fun=1;
//    else if(n==0)
//        fun=0;
//    else fun=f(n-1)+f(n-2);
//    return fun;
//
//}

//#include <stdio.h>
//#include <string.h>
//void fun(char  str[ ])
//{
//    int i,t;
//    for(i=0;i<strlen(str);i++)
//    {
//        if(i>strlen(str)-1-i)
//            break;
//        t=str[i];
//        str[i]=str[strlen(str)-1-i];
//        str[strlen(str)-1-i]=t;
//    }
//}
//int main()
//{
//    char str[20];
//    gets(str);
//    fun(str);
//    puts(str);
//    return 0;
//}
//
///* 您的答案将被嵌入在这里 */
//#include "stdio.h"
//#include "string.h"
//int fun(char a[],char b[])
//{
//    int i,x,y,t,flag=0;
//    x=strlen(a);
//    y=strlen(b);
//    if(x<=y)
//        t=x;
//    else t=y;
//    for(i=0;i<strlen(a)&&i<strlen(b);i++)
//    {
//
//        if(a[i]>b[i]||(i==t&&x>y))
//        {
//            flag=1;
//            break;
//        }
//        else if(a[i]<b[i]||(i==t&&x<y))
//        {
//            flag=-1;
//            break;
//        }
//        else if(i==t&&x==y)
//        {
//            flag=0;
//            break;
//        }
//    }
//    return flag;
//}
//int  main()
// {int t;
//  char s1[40],s2[40];
//  gets(s1);  gets(s2);
//  t=fun(s1,s2);
//  printf("%d\n",t);
//  return 0;
// }
//
//
///* 请在这里填写答案 */
//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//int main()
//{
//    int a[1000][1000];
//    int i,j,k,d,n,h=0;
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<n;j++)
//        {
//            scanf("%d",&a[i][j]);
//        }
//    }
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<n;j++)
//        {
//            for(k=0;k<n;k++)
//            {
//                if(a[i][j]>a[k][j])
//                    break;
//            }
//            for(d=0;d<n;++d)
//            {
//                if(a[i][j]<a[i][d])
//                    break;
//            }
//            if(k==n&&d==n)
//            {
//                printf("%d %d",i,j);
//                h++;
//            }
//        }
//    }
//    if(h==0)
//        printf("NONE");
//}
//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char a[100];
//    int n,i,l=0;
//    gets(a);
//    n=strlen(a);
//    for(i=0; i<n; i++)
//    {
//        if(a[0]==' '&&i==0)
//            l=l-1;
//        if(a[i]==' '&&a[i+1]!=' ')
//            l++;
//    }
//    printf("%d",l+1);
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//int main()
//{
//    int i,t=0,j;
//    char s[50],a[50];
//    gets(s);
//    for (i=0; i < strlen(s); i++)
//    {
//
//        if (s[i] != s[i+1]||(s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9'))
//        {
//            a[t] = s[i];t++;
//        }
//    }
//    puts(a);
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int i,t=1,n;
//    char a[1000];
//    gets(a);
//    n=strlen(a);
//    for(i=0;i<n;i++)
//    {
//        if(a[i]==' '&&a[i+1]!=' '&&i!=0)
//            t++;
//    }
//    printf("%d",t);
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int i,t=0,h,flag=0;
//    char a[80],b[80];
//    memset(a,0,sizeof(a));
//    memset(b,0,sizeof(b));
//    gets(a);
//    h=strlen(a);
//    for(i=h-1;i>=0;i--)
//    {
//        b[t]=a[i];
//        t++;
//    }
//   if(strcmp(a,b)==0)
//       printf("Yes");
//    else
//        printf("No");

//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//int main()
//{
//    int i,j,t=0,x,n;
//    int a[1000][1000];
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<n;j++)
//        {
//            scanf("%d",&a[i][j]);
//        }
//    }
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<n;j++)
//        {
//            if(j==i)
//                t+=a[i][j];
//        }
//    }
//    printf("%d",t);
//}
//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//int f(int m)
//{
//    int i,flag=0;
//    if(m==1)
//        flag=1;
//    else if(m==2)
//        flag=0;
//    else
//    {
//        for(i=2;i<m;i++)
//        {
//            if(m%i==0)
//                flag=1;
//        }
//    }
//    if(flag==1)
//        return 0;
//    else
//        return 1;
//}
//int main()
//{
//    int n,i;
//    if(scanf("%d",&n)==1)
//    {
//        if(n>1)
//        {
//            for(i=2;i<=n;i++)
//            {
//                if(f(i)==1)
//                    printf("%d,",i);
//            }
//        }else
//            printf("error");
//    }
//    else printf("error");
//    printf("\n");
//
//}
//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//int main()
//{
//    int a,b,c,d,sum;
//    double average;
//    scanf("%d %d %d %d",&a,&b,&c,&d);
//    sum=a+b+c+d;
//    average=sum/4.0;
//    printf("sum=%d average=%.1lf",sum,average);
//}
//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//int main()
//{
//    int a[100];
//    int i,j,n,m;
//    scanf("%d %d",&n,&m);
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&a[i]);
//    }
//    int t;
//    for(i=0;i<n-1;i++)
//    {
//        for(j=0;j<n-1-i;j++)
//        {
//            if(a[i]>a[i+1])
//            {
//                t=a[i];
//                a[i]=a[i+1];
//                a[i+1]=t;
//            }
//        }
//    }
//    for(i=0;i<n;i++)
//    {
//        if(i==n-1)
//            printf("%d",a[i]);
//        else
//            printf("%d ",a[i]);
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//int main()
//{
//    double y,x;
//    scanf("%lf",&x);
//    if(x<=15)
//        y=4*x/3;
//    else
//        y=2.5*x-17.5;
//    printf("%.2lf",y);
//}
//void findmax( int *px, int *py, int *pmax )
//{
//    if(*px>*py)
//        *pmax=*px;
//    else
//        *pmax=*py;
//    return *pmax;
//}
//int sum( int m, int n )
//{
//    int i,sum=0;
//    for(i=m;i<=n;i++)
//    {
//        sum+=i;
//    }
//    return sum;
//}
//void fun(char a[],char b[])
//{
//    int t=0;
//    int i,h;
//    h=strlen(a);
//    for(i=0;i<h;i++)
//    {
//        b[t++]=a[i];
//
//    }
//}
//#include<stdio.h>
//#include<string.h>
//void stor_str(char a[][200],int n)
//{
//    int i,j;
//    char t[200];
//    for(i = 0; i < n; i++)
//    {
//        for(j = 0; j < n - i - 1; j++)
//        {
//            if(strcmp(a[j],a[j+1]) > 0)
//            {
//                strcpy(t,a[j]);
//                strcpy(a[j],a[j+1]);
//                strcpy(a[j+1],t);
//            }
//        }
//    }
//}
//int main()
//{
//    char s[3][200];
//    int i;
//    for(i = 0; i < 3; i++)
//    {
//        scanf("%s",s[i]);
//    }
//    stor_str(s,3);
//    for(i = 0; i < 3; i++)
//    {
//        printf("%s ",s[i]);
//    }
//    return 0;
//}
//
//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//void sort(char a[200][200],int n)
//{
//    int i,j;
//    char t[200];
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<n-i-1;j++)
//        {
//            if(strcmp(a[j],a[j+1])>0)
//            {
//                strcpy(t,a[j]);
//                strcpy(a[j],a[j+1]);
//                strcpy(a[j+1],t);
//            }
//        }
//    }
//}
//int main()
//{
//    char s[200][200];
//    int i,n;
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//    {
//        scanf("%s",s[i]);
//    }
//    sort(s,n);
//    for(i=0;i<n;i++)
//    {
//        printf("%s ",s[i]);
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//void zsort(char a[200][200],int n)
//{
//    int i,j;
//    char t[200];
//    for(i=0;i<n-1;i++)
//    {
//        for(j=0;j<n-1-i;j++)
//        {
//            if(strcmp(a[j],a[j+1])>0)
//            {
//                strcpy(t,a[j]);
//                strcpy(a[j],a[j+1]);
//                strcpy(a[j+1],t);
//            }
//        }
//    }
//}
//int main()
//{
//    int j,i,n;
//    char a[200][200];
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//    {
//        scanf("%s",a[i]);
//    }
//    zsort(a,n);
//    for(i=0;i<n;i++)
//    {
//        printf("%s\n",a[i]);
//    }
//
//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//void sort(char a[100][100],int n)
//{
//    int i,j;
//    char t[100];
//    for(i=0;i<n-1;i++)
//    {
//        for(j=0;j<n-1-i;j++)
//        {
//            if(strcmp(a[j],a[j+1])>0)
//            {
//                strcpy(t,a[j]);
//                strcpy(a[j],a[j+1]);
//                strcpy(a[j+1],t);
//            }
//        }
//    }
//}
//int main()
//{
//    int i,n;
//    char a[100][100];
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//    {
//        scanf("%s",a[i]);
//    }
//    sort(a,n);
//    for(i=0;i<n;i++)
//    {
//        printf("%s\n",a[i]);
//    }
//}
//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//int main()
//{
//    int i,flag=0,t;
//    char s[100];
//    gets(s);
//    if((s[0]>='a'&&s[0]<='z')||(s[0]>='A'&&s[0]<='Z')||s[0]=='_')
//    {
//        t=0;
//    }
//    else
//    {
//        t=1;
//        printf("NO");
//    }
//    if(t==0)
//    {
//        for(i=1;i<strlen(s);i++)
//        {
//            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='1'&&s[i]<='9')||s[i]=='_')
//                                                                  continue;
//             else
//                                                                  flag=1;
//        }
//        if(flag==1)
//            printf("NO");
//        else if(flag==0)
//            printf("YES");
//    }
//    
//}
