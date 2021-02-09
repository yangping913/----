#include<stdio.h>
#include<math.h>//求平方根需要数学库中的函数sqrt，应包含其头文件
int main()
{
    int n,i;
    int flag;//标记变量
    scanf("%d",&n);//输入一个数
    flag=1;//初始化
    for(i=2;i<=sqrt(n);i++)//循环语句
    
        if(n%i==0)//如果余数等于零，说明是素数
            flag=0;
        if(flag!=0&&n!=1)//1不是素数，所以要排除
            printf("%d is a prime.\n",n);//
        else printf("%d is not a prime.\n",n);
        return 0;
    
}
