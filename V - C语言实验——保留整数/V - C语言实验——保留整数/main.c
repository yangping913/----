#include<stdio.h>
#include<string.h>
int main()
{
    char a[80],b[80];
    int i,j=0,n,k;
    gets(a);
    n=strlen(a);
    memset(b,0,sizeof(b));
    for(i=0; i<n; i++)
    {
        if(i==n-1&&(a[i]<'0'||a[i]>'9'))
        {
            b[j]='*';
            j++;
        }
        else if((a[i]<'0'||a[i]>'9')&&a[i+1]<='9'&&a[i+1]>='0')
        {
            b[j]='*';
            j++;
        }
        else if(a[i]<='9'&&a[i]>='0')
        {
            b[j]=a[i];
            j++;
        }
    }
    k=strlen(b);
    for(i=0; i<k; i++)
    {
        printf("%c",b[i]);
    }
    return 0;
}
