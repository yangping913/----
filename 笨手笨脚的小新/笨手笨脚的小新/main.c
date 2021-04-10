
#include <stdio.h>
#include <stdlib.h>
#define N 111

int zheng[N][N];
int ce[N][N];
int fu[N][N];

int main()
{
    int x,y,z;
    while(~scanf("%d%d%d",&x,&y,&z))
    {
        int i;
        int j;
        // 输入视图
        for(i=1;i<=x;i++)
        {
            for(j=1;j<=y;j++)
            {
                scanf("%d",&zheng[i][j]);
            }
        }
        // 输入侧视图
        for(i=1;i<=y;i++)
        {
            for(j=1;j<=z;j++)
            {
                scanf("%d",&ce[i][j]);
            }
        }
        //输入俯视图
        for(i=1;i<=z;i++)
        {
            for(j=1;j<=x;j++)
            {
                scanf("%d",&fu[i][j]);
            }
        }

        int k;
        int cnt=0;
        for(i=1;i<=x;i++)
        {
            for(j=1;j<=y;j++)
            {
                for(k=1;k<=z;k++)
                {
                    if(zheng[i][j]&&ce[j][k]&&fu[k][i])
                    {
                        cnt++;
                    }
                }
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
