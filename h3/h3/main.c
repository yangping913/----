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
char record[100];
int product();
int change();
int muil()
{
    int sum;
    sum=product();
    while(record[n]=='-'||record[n]=='+')
    {
        switch(record[n])
        {
            case '+':n++;sum+=product();break;
            case '-':n++;sum-=product();break;
        }
    }
    return sum;
}
int product()
{
    int sum1;
    sum1=change();
    while(record[n]=='*'||record[n]=='/')
    {
        switch(record[n])
        {
            case '*':sum1*=change();break;
            case '/':sum1/=change();break;
        }
    }
    return sum1;
}
int change()
{
    int sum2;
    char rec[20],i=0;
    if(record[n]=='(')
    {
        n++;
        sum2=muli();
    }
    if(record[n]==')')
    {
        n++;
        while(isdigit(record[n]))
        {
            rec[i++]=record[n++];
            rec[i]='\0';
            sum2=atof(rec);
        }
    }
    return sum2;
}
void main()
{
    while(1)
    {
        n=0;
        gets(record);
        deletespace(record);
        printf("%d\n",muil());
    }
}
