#include<stdio.h>
int main()
{
    int n,y,o;
    scanf("%d\\%d",&n,&y);
    if(n%4==0)
    {
     if(n%100!=0)
         o=1;
        else if(n%400==0)
            o=1;
        else o=0;
    }
    else o=0;
   
    if(y==1||y==3||y==5||y==7||y==8||y==10||y==12)
        printf("31");
        else if(y==4||y==6||y==9||y==11)
            printf("30");
    if(o==0&&y==2)
        printf("28");
    if(o==1&&y==2)
       printf("29");
    return 0;
}
