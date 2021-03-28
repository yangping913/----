#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next,*fan;
};
struct node *xun(struct node *ps,int key)
{
    struct node *gg;
    gg=ps->fan;
    while(gg!=NULL)
    {
        if(gg->data==key)
        {
            return (gg);
        }
        else
        {
            gg=gg->fan;
        }
    }
    return NULL;
}
int main()
{
    int m, n, a, b, c, d;
    struct node *head, *p, *mail, *hl;
    head=(struct node *)malloc(sizeof(struct node));
    head->next=NULL;
    head->fan=NULL;
    mail=head;
    scanf("%d%d", &n, &m);
    for(a=0;a<n;a++)
    {
        p=(struct node *)malloc(sizeof(struct node));
        p->next=NULL;
        p->fan=NULL;
        scanf("%d", &p->data);
        p->next=head->next;
        head->next=p;
        mail->fan=p;
        mail=p;
    }
    for(a=0;a<m;a++)
    {
        scanf("%d", &c);
        hl=xun(head, c);
        if(hl==NULL)
        {
            exit(0);
        }
        else if(hl->next==NULL)
        {
            printf("%d\n", hl->fan->data);
        }
        else if(hl->fan==NULL)
        {
            printf("%d\n", hl->next->data);
        }
        else
        printf("%d %d\n", hl->next->data, hl->fan->data);
    }
    return 0;
}
