#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int i,n;
    struct node *head,*p;
    //第一步：建立只含有头结点的空链表
    head=(struct node *)malloc(sizeof(struct node));//给头结点申请空间
    head->next=NULL;//初始化头结点，指针域next为NULL
    scanf("%d",&n);
    for(i=0;i<n;i++)//重复将新建结点插入到头结点head之后
    {
        p=(struct node *)malloc(sizeof(struct node));//为新结点申请空间
        scanf("%d",&p->data);//给结点数据域data赋值
        p->next=head->next;//给结点的指针域next赋值，指向head->next
        head->next=p;//将结点连接到头结点之后
    }
    while(p)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    return 0;
}
