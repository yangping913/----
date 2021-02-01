#include<stdio.h>
void h(int n,int A,int B,int C)
{
    if(n==1)
        printf("Move disk %d from %c to %c\n",n,A,C);
    else{
        h(n-1,A,C,B);
        printf("Move disk %d from %c to %c\n",n,A,C);
        h(n-1,B,A,C);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    h(n,'A','B','C');
}
