#include <stdio.h>
#include <stdlib.h>
struct sdut
{
    int data;
    struct sdut *next;
};
int main()
{
    int n, i;
    scanf("%d", &n);
    struct sdut *head, *p, *q, *t;
    head = (struct sdut*) malloc (sizeof(struct sdut));
   head -> next = NULL;
    for(i = 0; i < n; i++)
    {
        p = (struct sdut*) malloc (sizeof(struct sdut));
        scanf("%d", &p -> data);
        p -> next = head -> next;
        head -> next = p;
    }
    printf("%d\n",n);
    p = head -> next;
    while(p)
    {
        if(p -> next)
        {
            printf("%d ", p -> data);
        }
        else
        {
            printf("%d\n", p -> data);
        }
        p = p -> next;
    }
    p = head -> next;
    while(p -> next != NULL)
    {
        q = p -> next;
        t = p;
        while(q != NULL)
        {
            if(p -> data == q -> data)
            {
                q = q -> next;
                t -> next = q;
                n--;
            }
            else
            {
                q = q -> next;
                t = t -> next;
            }
        }
        if(p -> next == NULL)
        {
            break;
        }
        else
        {
            p = p -> next;
        }
    }
    printf("%d\n",n);
    p = head -> next;
    while(p)
    {
        if(p -> next)
        {
            printf("%d ", p -> data);
        }
        else
        {
            printf("%d\n", p -> data);
        }
        p = p -> next;
    }
    return 0;
}

