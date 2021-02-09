#include<stdio.h>
int p[21][21][21]={0};
int f(int a,int b,int c)
{
    if(a<=0||b<=0||c<=0)
        return 1;
    else if(a>20||b>20||c>20)
        return f(20,20,20);
    if(p[a][b][c])
        return p[a][b][c];
    if(a<b&&b<c)
        return p[a][b][c]=f(a,b,c-1)+f(a,b-1,c-1)-f(a,b-1,c);
    else
        return p[a][b][c]=f(a-1,b,c)+f(a-1,b-1,c)+f(a-1,b,c-1)-f(a-1,b-1,c-1);
}
int main()
{
    int a,b,c;
    while(~scanf("%d %d %d",&a,&b,&c))
    {
        printf("%d\n",f(a,b,c));
    }
}
