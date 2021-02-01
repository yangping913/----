#include<stdio.h>
#include<string.h>
struct node
{
    char name[11];
    int grade;
}stu[51],t;
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s %d",stu[i].name,&stu[i].grade);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(stu[j].grade<stu[j+1].grade)
            {
                t=stu[j];stu[j]=stu[j+1];stu[j+1]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s %d\n",stu[i].name,stu[i].grade);
    }
}
