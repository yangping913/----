#include<stdio.h>
#include<string.h>
void stor_str(char a[][200],int n)
{
    int i,j;
    char t[200];
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(strcmp(a[j],a[j+1]) > 0)
            {
                strcpy(t,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],t);
            }
        }
    }
}
int main()
{
    char s[3][200];
    int i;
    for(i = 0; i < 3; i++)
    {
        scanf("%s",s[i]);
    }
    stor_str(s,3);
    for(i = 0; i < 3; i++)
    {
        printf("%s ",s[i]);
    }
    return 0;
}
