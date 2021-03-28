#include<stdio.h>
#include<stdlib.h>
 
struct node
{
    int data;
    struct node *next;
};
 
int main()
{
    int n;
    struct node *head,*p,*tail,*q;
    head = (struct node *)malloc(sizeof(struct node));
    while(~scanf("%d",&n) && n )
    {
        head->next = NULL;
        tail = head;
        while(n--)
        {
            p = (struct node *)malloc(sizeof(struct node));
            p->next = tail->next;
            tail->next = p;
            tail = p;
        }
        tail->next = head->next;
        p = head->next;
        q = tail;
        n = 0;
        int i = 1;
        while( p )
        {
            if( i == 6 )
                i = 1;
            p->data = i;
            if( head->next->data == 5 )
            {
                printf("%d\n",n+1);
                break;
            }
            if( p->data == 5 )
            {
                q->next = p->next;
                free(p);
                p = q->next;
                n++;
            }
            else
            {
                q = p;
                p = p->next;
            }
            i++;
        }
 
    }
 
    return 0;
}
