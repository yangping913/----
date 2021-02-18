//struct 结构体类型名
//{
//    数据类型名 变量名;
//    数据类型名 变量名;
//    数据类型名 变量名;
//};
//定义结构体变量的三种方法：
//1.struct student stu1,stu2;
//2.struct student
//{
//    int num;
//    char name[30];
//    float score[5];
//}stu1,stu2;
//3.struct
//{
//    int num;
//    char name[30];
//    float score[5];
//}stu1,stu2;
//结构体变量的初始化
//#include<stdio.h>
//struct student
//{
//    int num;
//    char *name;
//    char sex;
//    float score;
//}stul = {102,"Zhang",'M',78.5};
//结构体类型指针变量(*pst).num等价于pst->num;
//共用体类型的定义
//union 共用体类型名
//{
//    数据类型 变量;
//    数据类型 变量;
//    数据类型 变量;
//};
//共用体类型变量的定义类比结构体；
//#include<stdio.h>
//union undata
//{
//    int a;
//    float b;
//    char ch;
//}u1;
//int main()
//{
//    u1.a=6;
//    printf("u1=%d\n",u1.a);
//    u1.b=87.2;
//    printf("u1=%7.2f\n",u1.b);
//    u1.ch='W';
//    printf("u1.ch=%c\n",u1.ch);
//}
//共用体类型变量 int *p;p=&u1.a;等价于p=(int *)&u1;
//枚举类型
//enum weekday{sum,mon,tue,wed,thu,fri,sat};
//枚举类型变量的定义
//enum weekday a,b,c;
//enum weekday{sun,mon,tue,wed,thu,fri,sat}
//enum {sun,mon,tue,wed,thu,fri,sat}a,b,c;
