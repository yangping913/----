int trap(int* height, int heightSize){

        int l = 0;//左边位置
    int r = heightSize-1;//右边位置
    int l_max = 0, r_max = 0;//左右两边的的最高度
    int sum = 0;//接雨水的总量
    while(l<r)
    {
        if(height[l]<=height[r])
        {
            if(height[l]>=l_max)
                l_max = height[l];
            else
                sum += l_max-height[l];
            l++;
        }
        else
        {
            if(height[r]>=r_max)
                r_max = height[r];
            else
                sum += r_max-height[r];
            r--;
        }
    }
    return sum;
}
