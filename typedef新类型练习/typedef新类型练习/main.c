//typedef 原数据类型名 新类型名；
//新类型名是用户自定义标识符，一般用大写表示，以便于区别
//such as:typedef int INTEGE;
//定义整型变量int a,b;<=>typedef int INTEGER;INTEGER a,b;
//定义数组类型typedef char NAME[20];NAME a1,a2;<=>char a1[20],a2[20];
//定义指针类型typedef char * STRING;STRING name,str;<=>char *name,*sign;
//define  STRING  char *; STRING name,str;<=> char * name,sign;
//定义结构体类型 typedef struct st
//{
//    char name[20];
//    int age;
//    char sex;
//}STUDENT；
//STUDENT body1,body2,*p;
//练习
#include<stdio.h>
#include<string.h>
typedef struct person
{
    char name[20];
    int count;
}per;
int main()
{
    per leader[3]={"li",0,"zhang",0,"fan",0};
    int i,j;
    char lname[20];
    for(i=0;i<10;i++)
    {
        gets(lname);
        for(j=0;j<3;j++)
        {
            if(strcmp(lname,leader[j].name)==0)
                leader[j].count++;
        }
    }
    for(i=0;i<3;i++)
    {
        printf("%5s:%d\n",leader[i].name,leader[i].count);
    }
}




















