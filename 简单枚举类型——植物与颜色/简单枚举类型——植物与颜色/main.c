#include<stdio.h>
#include<string.h>
enum color
{
    red=1,orange,yellow,green,blue,violet
};
int main()
{
    int n,t;
    char s[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        t=10;
        scanf("%s",s);
        if(strcmp(s,"red")==0)
            t=0;
        else if(strcmp(s,"orange")==0)
            t=1;
        else if(strcmp(s,"yellow")==0)
            t=2;
        else if(strcmp(s,"green")==0)
            t=3;
        else if(strcmp(s,"blue")==0)
            t=4;
        else if(strcmp(s,"violet")==0)
            t=5;
        if(t>=0&&t<=5)
        {
            switch((enum color)t)
            {
                case 0:printf("Rose are red.\n");break;
                case 1:printf("Poppies are orange.\n");break;
                case 2:printf("Sunflower are yellow.\n");break;
                case 3:printf("Grass are green.\n");break;
                case 4:printf("Bluebells are blue.\n");break;
                case 5:printf("Violets are violet.\n");break;
            }
        }
        else
            printf("I don't know about the color %s.\n",s);
    }
}
