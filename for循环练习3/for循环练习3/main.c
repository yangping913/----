#include<stdio.h>
int main()
{
    char c;
    int digcount=0;
    int uppcout=0;
    int lowcount=0;
    int othercount=0;
    printf("\n input :\n");
    while((c=getchar())!='\n')
    {
        if(c>='0'&&c<='9')
            digcount++;
        else if(c>='A'&&c<='Z')
            uppcout++;
        else if(c>='a'&&c<='z')
            lowcount++;
        else
            othercount++;
    }
    printf("\")
}
