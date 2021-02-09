#include<stdio.h>
#include<string.h>
char s[10003];
int main()
{
    int i,n,k,m;
    while(scanf("%d",&n)!=EOF)
    {
        getchar();
        gets(s);
        k=n%26;
        for(i=0; s[i]!='\0'; i++)
        {
            if(s[i]==' ') ;
            else
            {
                m=s[i]-k;
                if(m<'a')
                    s[i]='z'+1-('a'-m);
                else if(m>'z')
                    s[i]='a'-1+(m-'z');
                else
                    s[i]=m;
            }
        }
        puts(s);
    }
    return 0;
}
