#include<stdio.h>
#include<string.h>
int main()
{
    char c[25],a[100][25],b[100][25];
    int n,i,count;
    while(~scanf("%d",&n))
    {
        count = 0;
        scanf("%s",c);
        for(i = 0; i < n; i++)
        {
            scanf("%s%s",a[i],b[i]);
        }
        for(i = 0; i < n; i++)
        {
            if(strcmp(c,b[i]) == 0)
            {
                printf("%s\n",a[i]);
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
