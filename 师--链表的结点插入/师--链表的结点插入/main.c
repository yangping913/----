#include <stdio.h>
#include <stdlib.h>
int num;
struct node
{
    int data;
    struct node * next;
};
int main()
{
    int num,i,j,n,m,x;
    struct node * head,*p,*q;
    while(scanf("%d",&n)!=EOF)
    {
        num=0;
        head=(struct node *)malloc(sizeof(struct node));
        for(i=0;i<=n-1;i++)
        {
            scanf("%d %d",&m,&x);
            p=(struct node *)malloc(sizeof(struct node));
            p->data=x;
            q=head;
            if(m>num)
            {
                p->next=NULL;
                for(j=1;j<=num;j++)
                {
                    q=q->next;
                }
                q->next=p;
                num++;
            }
            else
            {
                for(j=1;j<=m;j++)
                {
                    q=q->next;
                }
                p->next=q->next;
                q->next=p;
                num++;
            }
        }
        q=head;
        for(i=0;i<=num-1;i++)
        {
            q=q->next;
            if(i!=num-1)
            printf("%d ",q->data);
            else
                printf("%d\n",q->data);
        }
    }
    return 0;
}
