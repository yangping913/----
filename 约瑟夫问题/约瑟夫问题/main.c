#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *create(int n)
{
    struct node *head,*p,*tail;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=1;
    p->next=NULL;
    head=p;
    tail=head;
    for(int i=2;i<=n;i++)
    {
        p=(struct node *)malloc(sizeof(struct node));
        p->data=i;
        p->next=NULL;
        tail->next=p;
        tail=p;

    }
    tail->next=head;
    return head;
};

struct node *sel(int n,int m,struct node *q)
{
    struct node *p;
    int num=2;
    p=q->next;
    while(p->next!=p)
    {
        if(num%m==0)
        {
            q->next=p->next;
            free(p);
            p=q->next;
        }
        else
        {
            p=p->next;
            q=q->next;
        }
        num++;
    }
    return p;
}

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    struct node *head=create(n);

    head=sel(n,m,head);
    printf("%d",head->data);
    return 0;
}
