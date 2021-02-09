#include<stdio.h>
int main()
{
    int n,i,y,a,d,m[12],sum;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&y,&a,&d);
        if((y%4==0&&y%100!=0)||y%400==0)
            m[2]=29;
        else m[2]=28;
        m[0]=0;m[1]=31;m[3]=31;m[4]=30;m[5]=31;m[6]=30;m[7]=31;m[8]=31;
        m[9]=30;m[10]=31;m[11]=30;m[12]=31;
        sum=0;
        while(a>0)
        {
            sum+=m[a-1];
            a--;
        }
        printf("%d\n",sum+d);
    }
}
