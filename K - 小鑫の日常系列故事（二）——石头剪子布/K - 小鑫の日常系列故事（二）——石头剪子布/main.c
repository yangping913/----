#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    char b[100];
    gets(a);
    gets(b);
    if (strcmp(a, "Rock") == 0 && strcmp(b, "Rock") == 0)
        printf("Equal\n");
    if (strcmp(a, "Rock") == 0 && strcmp(b, "Scissors") == 0)
        printf("Win\n");
    if (strcmp(a, "Rock") == 0 && strcmp(b, "Cloth") == 0)
        printf("Lose\n");
    if (strcmp(a, "Scissors") == 0 && strcmp(b, "Scissors") == 0)
        printf("Equal\n");
    if (strcmp(a, "Scissors") == 0 && strcmp(b, "Rock") == 0)
        printf("Lose\n");
    if (strcmp(a, "Scissors") == 0 && strcmp(b, "Cloth") == 0)
        printf("Win\n");
    if (strcmp(a, "Cloth") == 0 && strcmp(b, "Cloth") == 0)
        printf("Equal\n");
    if (strcmp(a, "Cloth") == 0 && strcmp(b, "Rock") == 0)
        printf("Win\n");
    if (strcmp(a, "Cloth") == 0 && strcmp(b, "Scissors") == 0)
        printf("Lose\n");
    return 0;
}
