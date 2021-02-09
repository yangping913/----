//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//int f(int a,int b)
//{
//    int i,sum=0;
//    for(i=a;i<=b;i++)
//    {
//        sum+=i;
//    }
//    return sum;
//}
//int main()
//{
//    int sum,m,n;
//    scanf("%d %d",&m,&n);
//    sum=f(m,n);
//    printf("sum=%d",sum);
//    return 0;
//}
//#include<stdio.h>
//void pyramid( int n )
//{
//    int i,j,k;
//    for(i=1;i<=n;i++)
//    {
//        for(k=1;k<=n-i;k++)
//        {
//            printf(" ");
//        }
//        for(j=1;j<=n;j++)
//        {
//            printf("%d",i);
//        }
//        printf("\n");
//     }
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    pyramid(n);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int i,j,rows;
//    scanf("%d",&rows);
//    for(i=1;i<=rows;++i)
//    {
//        for(j=1;j<=i;++j)
//        {
//            printf("%d ",j);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int i,j;
//    char input,alphabet='A';
//    scanf("%c",&input);
//    for(i=1;i<=(input-'A'+1);i++)
//    {
//        for(j=1;j<=i;j++)
//        {
//            printf("%c ",alphabet);
//        }
//        ++alphabet;
//        printf("\n");
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int i,j,rows;
//    scanf("%d",&rows);
//    for(i=rows;i>=1;--i)
//    {
//        for(j=1;j<=i;++j)
//        {
//            if(j==i)
//                printf("*");
//            else
//                printf("* ");
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int i,space,rows,k=0;
//    scanf("%d",&rows);
//    for(i=1;i<=rows;++i,k=0)
//    {
//        for(space=1;space<=rows-i;++space)
//        {
//            printf(" ");
//        }
//        while(k!=2*i-1)
//        {
//            printf(" *");
//            ++k;
//        }
//        printf("\n");
//    }
//    return 0;
//}
//int narcissistic( int number )
//{
//    int a,b,c;
//    a=number/100;
//    b=number/10%10;
//    c=number%10;
//    if(number==a*a+b*b+c*c)
//        return 1;
//    else
//        return 0;
//}
//void PrintN( int m, int n )
//{
//    int i;
//    for(i=m;i<=n;i++)
//    {
//        if(narcissistic(i)==1)
//            printf("%d\n",i);
//    }
//}
//void pyramid( int n )
//{
//    int i,j;
//    for(i=1;i<=n;i++)
//    {
//        for
//    }
//}
//int sign( int x )
//{
//    if(x>0)
//        return 1;
//    else if(x==0)
//        return 0;
//    else
//        return -1;
//}
int even( int n )
{
    if(n%2==0)
        return 1;
    else
        return 0;
}
int OddSum( int List[], int N )
{
    int i;
    int sum=0;
    for(i=0;i<N;i++)
    {
        scanf("%d",List[i]);
    }
    for(i=0;i<N;i++)
    {
        if(even(List[i]==0))
            sum+=List[i];
    }
    return sum;
}
