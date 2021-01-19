#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
void deletespace(char *ch);
void deletespace(char *ch)
{
    char *s;
    while (*ch != ' ')
    {
        if (*ch == '\0')
        {

            return;
        }
        ch++;
    }
    s = ch + 1;
    while (s == ' ')
    {
        s++;
    }
    while (*s != '\0')
    {
        if (*s != ' ')
        {
            *ch = *s;
            *s = ' ';
            ch++;
        }
        s++;
    }
    *ch = '\0';
    return;
}                               //定义函数

int main()
{
    char a[100],s,d[100],x1[100],x2[100],sign[100],count[100];
    int i,x,flag=1,c,e,j,t,y1,y2,f,h,m=0,flag1=1,flag2=1;
    int num=0,sum=0;
       gets(d);//输入字符串d（可能含有空格）
        e=0;flag=1;t=0;y1=0;y2=0;f=1;x=0;
        count[0]=-1;
        deletespace(d);//调用去空格函数
        while(d[num]!='\0')
          {
          num++;
          }
        for(i=0;i<num;i++)
        {
             a[i]=d[i];//去回车
        }
        for(i=0;i<strlen(a);i++)
        {
            if(a[i]==43||a[i]==45||a[i]==42||a[i]==47)//若包含运算符
            {
                x++;
                sign[x]=a[i];
                count[x]=i;       //x代表运算符个数 count[x]代表该运算符的位置 例如count[1]=1代表第一个运算符的位置是该字符串的第二个
            }
            count[x+1]=strlen(a);
            if((a[i]>'9'&&a[i]<'0')&&a[i]!='+'&&a[i]!='-'&&a[i]!='*'&&a[i]!='/')//排除其他字符
            {
                flag=0;
            }
        }
        for(i=1;i<=x;i++)
        {
            if((count[i+1]-count[i]==1)&&sign[i+1]!=45)
            {
                flag1=0;
            }//排除符号重叠问题（当然不包括负号）
        }
        if(x>0&&flag==1&&count[x]!=strlen(a)&&(count[1]!=0||(sign[1]==45&&count[2]!=45))&&flag1==1)
        {
                for(i=0;i<=x;i++)//运算符决定循环次数
                {
                    f=1;y1=0;
                    if(i==0)//开始分割运算符两边的字符串，起始阶段是第一种情况
                     {
                        for(j=count[i]+1;j<count[i+1];j++)
                        {
                            x1[j]=a[j];
                        }
                        for(h=count[i+1]-1;h>count[i];h--)//转成数字
                        {
                            y1+=f*(x1[h]-48);
                            f*=10;
                        }
                         sum=y1;//sum表结果，先让结果等于第一个数
                     }
                    else if(i!=0)//过程中是第二种情况
                    {
                        for(j=count[i]+1;j<count[i+1];j++)
                            {
                                x1[j]=a[j];
                            }
                            for(h=count[i+1]-1;h>count[i];h--)//转数字
                            {
                                y1+=f*(x1[h]-48);
                                f*=10;
                            }
                    }
                    
                    if(i>0)//i==1时已经给sum赋值了
                    {
                        if(sign[i]=='+')
                        {
                        sum=sum+y1;
                        }
                        else if(sign[i]=='-')
                            sum=sum-y1;
                        else if(sign[i]=='*')
                            sum=sum*y1;
                       else if(sign[i]=='/')
                            sum=sum/y1;
                    }
                }
                printf("%d\n",sum);
        }else printf("error!\n");
}

