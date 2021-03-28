#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    int data;
    struct node *next;
};
int main()
{
    int n,m;
    struct node*head1,*head2,*p1,*p2,*q1,*q2;
    head1=(struct node*)malloc(sizeof(struct node));
    head1->next=NULL;
    q1=head1;
    head2=(struct node*)malloc(sizeof(struct node));
    head2->next=NULL;
    q2=head2;
    scanf("%d%d",&m,&n);
    while(m--)
    {
        p1=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&p1->data);
        p1->next=NULL;
        q1->next=p1;
        q1=p1;
    }
    while(n--)
    {
        p2=(struct node*)malloc(sizeof(struct node));
      scanf("%d",&p2->data);
      p2->next=NULL;
      q2->next=p2;
      q2=p2;
    }
    struct node *t1,*t2,*r;
    r=head1;
    t1=head1->next;
    t2=head2->next;
    free(head2);
    while(t1&&t2)
    {
        if(t1->data>t2->data)
        {
            r->next=t2;
            r=t2;
            t2=t2->next;
        }
        else
        {
            r->next=t1;
            r=t1;
            t1=t1->next;
        }
    }
    if(t1) r->next=t1;
    else r->next=t2;
    struct node *h;
    h=head1->next;
    while(h!=NULL)
    {
        printf("%d",h->data);
        if(h->next==NULL)printf("\n");
        else printf(" ");
        h=h->next;
    }
    return 0;
}

