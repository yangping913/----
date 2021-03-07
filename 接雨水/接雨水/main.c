int trap(int* height, int heightSize)
{
    int i,j,k=1,t=1;
    int high1[100000],a[100000],high[100000];
    int lenth;
    int n;
    if(height[0]>height[1])
    {
        high1[0]=height[0];
        a[0]=0;
    }
    else if
    {
        high1[0]=height[1];
        a[0]=1;
    }
    for(i=2;i<n-1;i++)
    {
        if(height[i]==height[i+1])
        {
            
        }
        if(height[i]>height[i-1]&&height[i]>height[i+1])
        {
            high1[t]=height[i];
            t++;
            a[k]=i;
            k++;
        }
    }
    if(height[n-1]>high1[t])
    {
        high1[t]=height[n-1];
        a[k]=n-1;
    }
    
}
