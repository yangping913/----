#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char c[100];
    int i;
    scanf("%s",c);
    for(i=0;i<strlen(c);i++)
    {
        if(('a'<=c[i]&&c[i]<='z')||('A'<=c[i]&&c[i]<='Z'))
            printf("%c",c[i]);
    }
    return 0;
}
