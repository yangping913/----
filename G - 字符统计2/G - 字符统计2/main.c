#include<stdio.h>
#include<string.h>
int main()
{
    char s[200];
    int a[200];
    int i,len,max,k;
    while(gets(s))
    {
        memset(a,0,sizeof(a));
        k = 0;
        max = 0;
        len = strlen(s);
        for(i = 0; i < len; i++)
        {
            if(s[i] == ' ')
                continue;
            a[s[i]]++;
        }
        for(i = 0; i < 200; i++)
        {
            if(max < a[i])
            {
                max = a[i];
                k = i;
            }
        }
        printf("%c %d",k,max);
        printf("\n");
    }
    return 0;
}
