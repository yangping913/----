#include<stdio.h>
int a[100005],tmp[100005];
long long ans=0;

void Merge(int a[],int l,int r)
{
    for(int i=l;i<=r;i++)
        tmp[i]=a[i];
    int mid=(l+r)/2;
    int i=l,j=mid+1;
    for(int pos=l;pos<=r;pos++)
    {
        if (i==mid+1)
        {
            a[pos]=tmp[j];
            j++;
        }
        else if(j==r+1)
        {
            a[pos]=tmp[i];
            i++;
        }
        else if(tmp[i]>tmp[j])
        {
            a[pos]=tmp[j];
            j++;
            ans+=(long long)(mid-i+1);
        }
        else
        {
            a[pos]=tmp[i];
            i++;
        }
    }
}

void merge_sort(int a[],int l,int r)
{
    if (l==r)
        return;
    int mid=(l+r)/2;
    merge_sort(a,l,mid);
    merge_sort(a,mid+1,r);
    Merge(a,l,r);
}

int main()
{
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    merge_sort(a,0,n-1);
//    for(int i=0;i<n;i++)
//        printf("%d%c",a[i],i==n-1?'\n':' ');
    printf("%lld\n",ans);
    return 0;
}
