#include<stdio.h>
void main()
{
    float sum= 0,score,ave;
    int n=0;
    scanf("%f",&score);
    while(score>=0)
    {
        sum+=score;
        n++;
        scanf("%f",&score);
    }
    if (n!=0)
        ave=sum/n;
    printf("%6.2f",ave);
    
}
