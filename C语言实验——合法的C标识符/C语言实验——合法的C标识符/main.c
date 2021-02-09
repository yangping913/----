#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int i,l,flag,flag1=1;
    gets(str);
    l=strlen(str);
    if((str[0]>='a'&&str[0]<='z')||(str[0]>='A'&&str[0]<='Z')||(str[0]=='_'))
        flag=1;
    else
        flag1=0;
    for(i=0; i<l; i++)
    {
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||(str[i]=='_')||(str[i]>='0'&&str[i]<='9'))
            continue;
        else
        {
            flag=0;
            break;
        }
    }
    if(flag&&flag1!=0)
        printf("YES\n");
    else
            printf("NO\n");
    return 0;
}
