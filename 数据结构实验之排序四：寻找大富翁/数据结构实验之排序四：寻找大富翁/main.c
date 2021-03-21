#include <bits/stdc++.h>

using namespace std;
int a[16];

// 递归方式构建大根堆(len是arr的长度，index是第一个非叶子节点的下标)
void adjust(int len,int index)
{
    int left=2*index+1; // index的左子节点
    int right=2*index+2;// index的右子节点
    int maxIdx = index;
    if(left<len&&a[left]<a[maxIdx])
        maxIdx=left;
    if(right<len&&a[right]<a[maxIdx])
        maxIdx=right;
    if(maxIdx!=index)
    {
        swap(a[maxIdx],a[index]);
        adjust(len,maxIdx);
    }
}

// 堆排序
void heapSort(int len)
{
    // 构建大根堆（从最后一个非叶子节点向上）
    for(int i=len/2-1;i>=0;i--)
        adjust(len,i);
    // 调整大根堆
    for(int i=len-1;i>=0;i--)
    {
        swap(a[0],a[i]);           // 将当前最大的放置到数组末尾
        adjust(i,0);              // 将未完成排序的部分继续进行堆排序
    }
}

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++)
        scanf("%d",&a[i]);
    for(int i=m/2-1;i>=0;i--)
        adjust(m,i);
    for(int i=m;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        if(x>a[0])
        {
            a[0]=x;
            for(int j=m/2-1;j>=0;j--)
                adjust(m,j);
        }
    }
    heapSort(m);
    for(int i=0;i<m;i++)
        printf("%d%c",a[i],i==m-1?'\n':' ');
    return 0;
}
