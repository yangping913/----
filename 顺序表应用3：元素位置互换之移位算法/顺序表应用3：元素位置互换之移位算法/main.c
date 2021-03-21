#include <stdio.h>
struct list
{
    int data[10000];
    int length;
};
void creat( struct list &L,int n)
{
    int i;
    for(i=0;i<n;i++)
    scanf("%d",&L.data[i]);
    L.length=n;
}
void print(struct list L,int n,int m)
{
    int i;
    for(i=m;i<n;i++)
    printf("%d ",L.data[i]);
    for(i=0;i<m;i++)
    printf("%d ",L.data[i]);
    printf("\n");
}
int main()
{
    struct list L;
    int n,m,i,k,j,a,b;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&a,&b);
        creat(L,a);
        print(L,a,b);
    }
}
