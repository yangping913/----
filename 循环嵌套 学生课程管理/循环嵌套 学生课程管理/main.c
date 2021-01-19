#include<stdio.h>
int mian()
{
    int i,j;
    float score,sum,ave;
    for(i=0;i<6;i++)//外循环为学生的人数
    {
        sum=0;
        printf("Please input 5 scores of student No.%d\n",i+1);
        for(j=0;j<5;j++)//内循环为课程数，每个学生都有5个成绩
        {
            scanf("%f",&score);
            sum+=score;
        }
        ave=sum/5;
        printf("No.%d ave=%5.2f.\n",i+1,ave);
    }
    return 0;
}
