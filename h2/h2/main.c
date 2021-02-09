#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
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
 int n=0;
 char record[20];
 int product();
 int change();
 int muli()
 {
     int summ;
     summ=product();
     while(record[n]=='-'||record[n]=='+')
        {
            switch(record[n])
            {
                case '+':n++;summ+=product();break;
                case '-':n++;summ-=product();break;
            }
        }
     return summ;
 }
int product()
{
    int sump;
    sump=change();
    while(record[n]=='*'||record[n]=='/')
    {
        switch(record[n])
        {
            case '*':n++;sump*=change();break;
            case '/':n++;sump/=change();break;
        }
    }
    return sump;
}
int change()
{
    int sumc;
    char rec[20],i=0;
    if(record[n]=='(')
    {
        n++;
        sumc=muli();
    }
    if(record[n]==')')
        n++;
    while(isdigit(record[n]))
    {
        rec[i++]=record[n++];
        rec[i]='\0';
        sumc=atof(rec);
    }
    return sumc;
}
void main()
    {
        while(1)
        {
            n=0;
            gets(record);
            deletespace(record);
            printf("%d\n",muli());
        }
    }
