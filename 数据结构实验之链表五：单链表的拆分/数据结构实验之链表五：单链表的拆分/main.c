#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head1, *head2, *tail, *p, *tail1, *tail2;
    int n, i;
    scanf("%d", &n);
    int num, sum;
    num = sum = 0;
    head1 = (struct node *)malloc(sizeof(struct node));
    head1->next = NULL;
    tail1 = head1;
    head2 = (struct node *)malloc(sizeof(struct node));
    head2->next = NULL;
    tail2 = head2;
    for(i = 1; i <= n; i++)
    {
        p = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &p->data);
        if(p->data % 2 == 0)
        {
            p->next = NULL;
            tail1->next = p;
            tail1 = p;
            num++;
        }
        else
        {
            p->next = NULL;
            tail2->next = p;
            tail2 = p;
            sum++;
        }
    }
    printf("%d %d\n", num, sum);
    for(tail = head1->next; tail->next != NULL; tail = tail->next)
    {
        printf("%d ", tail->data);
    }
    printf("%d\n", tail->data);
    for(tail = head2->next; tail->next != NULL; tail = tail->next)
    {
        printf("%d ", tail->data);
    }
    printf("%d\n", tail->data);
    return 0;
}
