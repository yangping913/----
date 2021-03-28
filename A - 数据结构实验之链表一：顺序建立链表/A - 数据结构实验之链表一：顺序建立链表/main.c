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
    head=(struct node *)malloc(sizeof(struct node));
    head->next=NULL;
    tail=head;
    for(int i=1;i<=n;i++)
    {
        p=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->next=NULL;
        tail->next=p;
        tail=p;
    }
    return (head);
}
void print(struct node *head,int n)
{
    struct node *p=head->next;
    for(int i=1;i<=n;i++)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    struct node *head=create(n),*p;
    print(head,n);

    return 0;
}

