#include<stdio.h>
#include<string.h>
int main()
{
    char s[100001];
    int i,n;
    int a,b,c,d;
    while(gets(s) != NULL)
    {
        n = strlen(s);
        a = 0;
        b = 0;
        c = 0;
        d = 0;
        for(i = 0; i < n; i++)
        {
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            {
                a++;
            }
            else if(s[i] >= 48 && s[i] <= 57)
            {
                b++;
            }
            else if(s[i] == ' ')
            {
                c++;
            }
            else
            {
                d++;
            }
        }
        printf("%d %d %d %d",a,b,c,d);
        printf("\n");
    }
    return 0;
}
