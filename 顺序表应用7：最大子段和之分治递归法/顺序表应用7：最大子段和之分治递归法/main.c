#include<stdio.h>
int count=0;
int a[50050];
int max(int i,int j)
{
    if(i>j)
    return i;
    else
    return j;
}
int maxsum(int l,int r);
int main(){
    int n,i,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sum=maxsum(0,n-1);
    printf("%d %d",sum,count);
}
int maxsum(int l,int r){
    int sum=0;
    count++;
    if(l==r)
    {
        if(a[l]>0)
        {
            sum=a[l];
        }
        else
        {
            sum=0;
        }
    }
    else
    {
        int lsum,rsum,mid;
        mid=(l+r)/2;
        lsum=maxsum(l,mid);
        rsum=maxsum(mid+1,r);
        int s1,s2,s,i;
        s1=s2=s=0;
        for(i=mid;i>=l;i--)
        {
            s+=a[i];
            if(s>s1)
            {
                s1=s;
            }
        }
        s=0;
        for(i=mid+1;i<=r;i++)
        {
            s+=a[i];
            if(s>s2)
            {
                s2=s;
            }
        }
        sum=s1+s2;
        sum=max(sum,max(lsum,rsum));
    }
    return sum;
}
