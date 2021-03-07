double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size)
{
    int num[2000];
    int i=0,j=0;
    int t=0,h;
    for(i=0;i<nums1Size;i++)
    {
        num[t]=nums1[i];
        t++;
    }
    for(j=0;j<nums2Size;j++)
    {
        num[t]=nums2[j];
        t++;
    }
    for(i=0;i<t-1;i++)
        {
            for(j=0;j<t-1-i;j++)
            {
                if(num[j]>num[j+1])
                {
                    h=num[j];
                    num[j]=num[j+1];
                    num[j+1]=h;
                }
            }
        }
    double z;
    int x,y;
    if(t%2==0)
    {
        x=(t/2)-1;
        y=t/2;
        z=(num[x]+num[y])/2.0;
    }
    else
    {
        x=t/2.0;
        z=num[x];
    }
    return z;
}
