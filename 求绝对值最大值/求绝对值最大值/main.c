#include<stdio.h>
#include<math.h>

int main()
{
    int n,m,i,max;
    scanf("%d\n",&n);
    scanf("%d",&m);
    max=m;
    for(i=1;i<n;i++)
    {
        scanf("%d",&m);
        if(abs(max)<abs(m))
        {
            max=m;
        }
    }
    printf("%d",max);
    return 0;
}

