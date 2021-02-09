#include<stdio.h>
#include<string.h>
union data
{
    int d;
    char b[30];
    double c;
}u[100000];
int main()
{
    int n,i,a,m;
    char s[100000][30];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%s",&s[i]);
        if(strcmp(s[i],"INT")==0)
            scanf("%d",&u[i].d);
        else if(strcmp(s[i], "DOUBLE")==0)
            scanf("%lf",&u[i].c);
        else if(strcmp(s[i],"STRING")==0)
            scanf("%s",&u[i].b);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&a);
        if(strcmp(s[a],"INT")==0)
            printf("%d",u[a].d);
        else if(strcmp(s[a],"DOUBLE")==0)
            printf("%.2lf",u[a].c);
        else if(strcmp(s[a],"STRING")==0)
            printf("%s",u[a].b);printf("\n");
            
    }
}
