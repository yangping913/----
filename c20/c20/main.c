#include<stdio.h>
int main()
{
    int tall;
    char sex;
    printf("input sex and tall :");
    scanf("%c %d",&sex,&tall);
    if(sex=='F')
        if(tall>=150)
            printf("A\n");
        else printf("B\n");
    else
        if (tall>=170) printf("A\n");
        else printf("B\n");
}
