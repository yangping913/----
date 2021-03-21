#include<stdio.h>


int a[10004];

void shellSort(int *a, int len)
{
    for(int gap=len/2;gap>0;gap/=2)//gap为步长每次减为原来的一半。
    {
        //共gap个组，对每一组都执行直接插入排序
        for(int i=0;i<gap;i++)
        {
            int now=i+gap;
            while(now<len)
            {
                int tmp=a[now],j;
                for(j=now-gap;j>=0;j-=gap)
                {
                    if(a[j]<=tmp)
                    {
                        a[j+gap]=tmp;
                        break;
                    }
                    a[j+gap]=a[j];
                }
                if(j<0)
                    a[j+gap]=tmp;
                now+=gap;
            }
        }
        if(gap==len/2||gap==1)
        {
            for(int i=0;i<len;i++)
            {
                if(i!=len-1)
                    printf("%d ",a[i]);
                else
                    printf("%d\n",a[i]);
            }
        }
    }
}

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        shellSort(a,n);
    }
    return 0;
}

