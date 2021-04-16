#include<string.h>
#include<stdio.h>
int main()
{
    char a[1000],b[1000];
    int n,i,j=1,m;
    scanf("%s%s",a,b);
    m=strlen(b);
    n=strlen(a);
    if(m!=n)
        j=0;
    for(i=0;i<n;i++)
    {
        if(a[i]!=b[n-1-i])
            j=0;
    }
    if(j==1)
        printf("wuhu!\n");
    else if(j==0)
        printf("haoziweizhi!\n");
    return 0;
}
