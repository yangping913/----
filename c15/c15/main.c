#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    printf("%c\n",a);
    printf("*%4c*\n",a);
    printf("*%-4c*\n",a);
    return 0;
}
