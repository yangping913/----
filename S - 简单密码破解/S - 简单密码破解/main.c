#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    char b[101];
    int i;
    while(gets(a))
    {
        int n = strlen(a);
        for(i = 0; i < n; i++)
        {
            if(a[i] == ' ')
                break;
            else if(a[i] >= 97 && a[i] <= 99)
            {
                b[i] = '2';
            }
            else if(a[i] >= 100 && a[i] <= 102)
            {
                b[i] = '3';
            }
            else if(a[i] >= 103 && a[i] <= 105)
            {
                b[i] = '4';
            }
            else if(a[i] >= 106 && a[i] <= 108)
            {
                b[i] = '5';
            }
            else if(a[i] >= 109 && a[i] <= 111)
            {
                b[i] = '6';
            }
            else if(a[i] >= 112 && a[i] <= 115)
            {
                b[i] = '7';
            }
            else if(a[i] >= 116 && a[i] <= 118)
            {
                b[i] = '8';
            }
            else if(a[i] >= 119 && a[i] <= 122)
            {
                b[i] = '9';
            }
            else if(a[i] >= 'A' && a[i] <= 'Y')
            {
                b[i] = a[i] + 33;
            }
            else if(a[i] == 'Z')
            {
                b[i] = a[i] + 7;
            }
            else
            {
                b[i] = a[i];
            }
        }
        for(i = 0; i < n; i++)
        {
            printf("%c",b[i]);
        }
        printf("\n");
    }
    return 0;
}
