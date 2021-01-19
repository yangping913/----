#include<stdio.h>
#include<string.h>
int main()
{
    int i,c,m[1000],k,j,p;
    char a[100000],b[100000];
    while(gets(a))
    {
        c = 1;
        p = 0;
        for(i = 0; i < strlen(a); i++)
        {
            if(a[i] == a[i+1])
            {
                c++;
                p = 1;
            }
            else if(p != 1)
            {
                printf("%c",a[i]);
                p = 0;
            }
            else
            {
                printf("%d%c",c,a[i]);
                c = 1;
                p = 0;
            }
        }
        printf("\n");
    }
}
