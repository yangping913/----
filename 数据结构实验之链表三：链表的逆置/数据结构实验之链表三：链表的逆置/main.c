#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *create()
{
    struct node *head,*p,*tail;
    head=(struct node *)malloc(sizeof(struct node));
    head->next=NULL;
    tail=head;
    while(1)
    {
        p=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&p->data);
        if(p->data==-1)  break;
        p->next=NULL;
        tail->next=p;
        tail=p;
    }
    return head;
}

void reserve(struct node *head)
{
    struct node *p=head->next,*q=p->next;
    p->next=NULL;
    while(q)
    {
        p=q;
        q=q->next;
        p->next=head->next;
        head->next=p;
    }

}
int main()
{
    struct node *head=create(),*p;
    reserve(head);
    p=head->next;
    while(p)
    {
        if(p->next==NULL)  printf("%d",p->data);
        else    printf("%d ",p->data);
        p=p->next;
    }

    return 0;
}
