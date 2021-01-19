#include<stdio.h>
int main()
{
    int r,c,n;
    scanf("%d",&n);//输入行数
    for(r=1;r<=n;r++)//外循环控制输出行数，每次输出一行
    {
        for(c=1;c<=r;c++)//内循环控制每行输出数字
        printf("%d",c);
        printf("\n");//输出一行后换行
        
    }
    for(r=1;r<=n;r++)//外循环控制输出行数
    {
        for(c=1;c<=n+1-r;c++)//内循环控制每行输出数字
        printf("%d",c);
        printf("\n");//输出1行后的换行
    }
    return 0;
}
