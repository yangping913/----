#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int n,i,l=0;
    gets(a);
    n=strlen(a);
    for(i=0; i<n-1; i++)
    {
        if(a[0]==' '&&i==0)
            l=l-1;
        if(a[i]==' '&&a[i+1]!=' ')
            l++;
    }
    printf("%d",l+1);
    return 0;
}
