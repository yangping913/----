#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    int i;
    int num1,num2,num3,num4,num5;
    char a[101];
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        gets(a);
        int k = strlen(a);
        num1 = num2 = num3 = num4 = num5 = 0;
        for(i = 0; i < k; i++)
        {
            if(a[i] == 'a')
            {
                num1++;
            }
            else if(a[i] == 'e')
            {
                num2++;
            }
            else if(a[i] == 'i')
            {
                num3++;
            }
            else if(a[i] == 'o')
            {
                num4++;
            }
            else if(a[i] == 'u')
            {
                num5++;
            }
        }
        printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n",num1,num2,num3,num4,num5);
        printf("\n");
    }
    return 0;
}
