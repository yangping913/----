#include<stdio.h>
#include<string.h>

void deletespace(char *ch)
{
    char *s;
    while (*ch != ' ')
    {
        if (*ch == '\0')
        {

            return;
        }
        ch++;
    }
    s = ch + 1;
    while (s == ' ')
    {
        s++;
    }
    while (*s != '\0')
    {
        if (*s != ' ')
        {
            *ch = *s;
            *s = ' ';
            ch++;
        }
        s++;
    }
    *ch = '\0';
    return;
}

int main()
{
    char ch[200];
    gets(ch);
    deletespace(ch);
    printf("%s\n",ch);
    return 0;
}
