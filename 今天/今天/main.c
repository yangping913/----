#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[100],s,d[100],x1[100],x2[100];
    int i,x,flag=1,c,e,j,t,y1,y2,sum;
    while(~scanf("%s",d))
    {
        e=1;flag=1;t=0;y1=0;y2=0;x=0;
        for(c=0;c<strlen(d);c++)
        {
            if(d[c]!=' ')
            {
                a[e]=d[c];
                e++;
            }
        }
        for(i=0;i<strlen(a);i++)
        {
            printf("%c",a[i]);
        }

//        for(i=0;i<strlen(a);i++)
//        {
//            if(a[i]=='+'||a[i]=='-'||a[i]=='/'||a[i]=='*')
//            {
//                x++;
//                s=a[i];
//                j=i;
//            }
//            if((a[i]>'9'||a[i]<'0')&&(a[i]!='+'&&a[i]!='-'&&a[i]!='*'&&a[i]!='/'))
//            {
//                flag=0;
//            }
//        }
//        if(x>0&&flag==1)
//        {
//            for(i=0;i<j;i++)
//            {
//                x1[i]=a[i];
//                y1=atoi(x1[i]);
//
//            }
//            for(i=j+1;i<strlen(a);i++)
//            {
//                x2[t]=a[i];
//                y2=atoi("x2[t]");
//                t++;
//            }
//            if(s=='+')
//                sum=y1+y2;
//            if(s=='-')
//                sum=y1-y2;
//            if(s=='*')
//                sum=y1*y2;
//            if(s=='/')
//                sum=y1/y2;
//            printf("%d\n",sum);
//        }else printf("error!\n");
//
        
    }
}
