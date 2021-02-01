#include<stdio.h>
#include<string.h>
int main()
{
    int m,n,i,j,f=1;
    char a[105];
    scanf("%s %d",a,&n);
    m=strlen(a);
    while(n!=0)
    {
        i=0;
        while(a[i]<=a[i+1])
            i++;
        while(i<m-1)
        {
            a[i]=a[i+1];i++;
        }
        n--;m--;
    }
    for(i=0;i<m;i++)
    {
        if(a[i]=='0'&&f==1&&i<m-1)
            continue;
        else
        {
            printf("%c",a[i]);
            f=0;
        }
    }
    return 0;
}
