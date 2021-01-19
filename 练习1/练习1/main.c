#include<stdio.h>
int main()
{
    char z;
    printf("\n input a character:");
    z=getchar();
     if(z>='0'&&z<='9')
         printf("1");
    else if(z>='A'&&z<='z')
        printf("2");
    else if(z>='a'&&z<='z')
        printf("1");
    else printf("4");
    return 0;
}
