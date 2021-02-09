//#include<stdio.h>
//struct student
//{
//    int num;
//    char name[30];
//    float score[5];
//};
//int main()
//{
//    struct student stu;
//    int i,j;
//    scanf("%d%s",&stu.num,stu.name);
//    for(j=0;j<5;j++)
//    {
//        scanf("%f",&stu.score[j]);
//    }
//    printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t",stu.num,stu.name,stu.score[0],stu.score[1],stu.score[2],stu.score[3],stu.score[4]);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int num;
//    float score[30];
//    char name[30];
//    scanf("%d %s",&num,name);
//    for(int i=0;i<5;i++)
//    {
//        scanf("%f",&score[i]);
//    }
//    printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t",num,name,score[0],score[1],score[2],score[3],score[4]);
//    return 0;
//}
//struct student//结构体的类型名
//{
//    int num;
//    char name[30];
//    float score[5];
//}stu1,stu2;//变量名表列。
//struct
//{
//    int month,day,year;
//    struct student xiaoming;
//}
//#include<stdio.h>
//struct student
//{
//    int num;
//    char *name;
//    char sex;
//    float score;
//}stu1,stu2;
//int main()
//{
//    stu1.num=102;
//    stu2.name="Zhang ping";
//    scanf("%c %f",&stu1.sex,&stu1.score);
//    stu2=stu1;
//}
//float[]={0,1,2,3,4,5,6};
//#include<stdio.h>
//struct student
//{
//    int num;
//    int *p;
//    char *name;
//    char sex;
//    float score;
//}stu1={102,21,"Zhang ping",78.5,'N'},stu2;
//int main()
//{
//    stu2=stu1;
//    printf("num=%d\np=%dname=%s\nsex=%c\nscore=%f",stu2.num,stu2.p,stu2.name,stu2.sex,stu2.score);
//}
//#include<stdio.h>
//struct
//{
//    int num;
//    char name[30];
//    float score[5];
//}stu[5];
//int main()
//{
//    int i,j,c=0;
//    float ave,s;
//    for(i=0;i<5;i++)
//    {
//        scanf("%d %s",&stu[i].num,&stu[i].name);
//        for(j=0;j<5;j++)
//        {
//            scanf("%f",&stu[i].score[j]);
//        }
//    }
//    for(i=0;i<5;i++)
//    {
//        s=0;
//        for(j=0;j<5;j++)
//        {
//            s+=stu[i].score[j];
//        }
//        ave=s/5;
//        printf("num:%d\n",stu[i].num);
//        printf("name:%s\taverage=%f\n",stu[i].name,ave);
//    }
//    return 0;
//
//#include<stdio.h>
//struct student
//{
//    int num;
//    char *name;
//    char sex;
//    float score;
//} stu1={102,"Zhang ping",'M',78.5},*pst;
//int main()
//{
//    pst=&stu1;
//    printf("Number=%d\nName=%s\n",stu1.num,stu1.name);//结构体类型变量->成员名
//    printf("Number=%d\nName=%s\n",(*pst).num,(*pst).name);//（*结构体类型指针变量）->成员名
//    printf("Number=%d\nName=%s\n",pst->num,pst->name);//结构体类型指针变量->成员名
//    return 0;
//}
//#include<stdio.h>
//struct student
//{
//    int num;
//    char *name,sex;
//    float score;
//}stu[5]={
//    {101,"Zhou ping",'M',45},
//    {102,"Zhang ping",'M',62.5},
//    {103,"Liou fang",'F',92.5},
//    {104,"Cheng Ling",'F',87},
//    {105,"Wang ming",'M',28},
//};
//int main()
//{
//    struct student *ps;
//    printf("No\tName\t\t\tSex\tScore\t\n");
//    for(ps=stu;ps<stu+5;ps++)
//    {
//        printf("%d\t%s\t\t%c\t%f\t\n",ps->num,ps->name,ps->sex,ps->score);
//    }
//    return 0;
//}
//#include<stdio.h>
//void ave(struct student *ps);
//
//struct student
//{
//    int num;
//    char name[30];
//    char sex;
//    float score;
//}stu[5]=
//{
//    {101,"Zhou ping",'M',45},
//    {102,"Zhang ping",'M',62.5},
//    {103,"Liou fang",'F',92.5},
//    {104,"Cheng Ling",'F',87},
//    {105,"Wang ming",'M',28},
//};
//int main()
//{
//    struct student *ps;
//    ps=stu;
//    ave(ps);
//    return 0;
//}
//union undate
//{
//    int a;
//    float b;
//    char ch;
//};
//int main()
//{
//    union undata u1,u2,u3;
//}
//union undata
//{
//    int a;
//    float b;
//    char ch;
//}u1,u2,u3;
//union{
//    int a;
//    float b;
//    char ch;
//}u1,u2,u3;
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
//    printf("u1.a=%d\n",u1.a);
//}
//int *p;
//p=&u1.a;
//p=(int *)&u1;
//enum weekday{sun,mon,tue,wed,thu,fri,sat};
//enum weekday a,b,c;
//enum weekday{sun,mon,tue,wed,thu,fri,sat}a,b,c;
//enum {sun,mon}a,b,c;




















































