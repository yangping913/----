//malloc函数
//void * malloc(unsigned int size);
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int i,j;
//    int * array=NULL;
//    scanf("%d",&i);
//    array=(int *)malloc(i * sizeof(int));//（i * sizeof(int))表示分配i个整型的空间;(int *)表示把返回的地址类型强制转化成整形类型指针。
//    for(j=0;j<i;j++)
//    {
//        scanf("%d",&array[j]);
//    }
//    for(j=0;j<i;j++)
//    {
//        printf("%d\n",array[j]);
//    }
//}
//free函数
//void free(void * p)
//
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int i,j;
//    int * array=NULL;
//    scanf("%d",&i);
//    array=(int *)malloc(i * sizeof(int));
//    for(j=0;j<i;j++)
//    {
//        scanf("%d",&array[j]);
//    }
//    for(j=0;j<i;j++)
//    {
//        printf("%d\n",array[j]);
//    }
//    free(array);
//}
//calloc函数
//void * calloc(unsigned n,unsigned size);
//array=(int *)malloc(i * sizeof(int));等价于 array=(int *)calloc(i,sizeof(int));
//realloc函数
//void * realloc(void * p,unsigned int newsize);
//作用是将指针所指的动态内存空间的大小改变为newsize；
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int i;
//    int * pn=(int *)malloc(5 * sizeof(int));
//    printf("%p\n",pn);
//    for(i=0;i<5;i++)
//    {
//        scanf("%d",&pn[i]);
//    }
//    pn=(int *)realloc(pn,100 * sizeof(int));
//    printf("%p\n",pn);
//    for(i=0;i<5;i++)
//    {
//        printf("%3d",pn[i]);
//    }
//    printf("\n");
//    return 0;
//}
//单链表
//struct node
//{
//    int data;
//    struct node * next;
//};
//struct node * search(struct node * head,int key)//head为单链表的头指针。
//{
//    struct node *p;//p为游动指针
//    p=head->next;//游动指针指向第一个实际节点
//    while(p!=NULL)//p为NULL表示链表已经访问结束
//    {
//        if(p->data==key)
//            return(p);//找到，并返回该结点的地址
//        else
//            p=p->next;//未找到，指向下一个结点继续查找
//    }
//    return NULL;//循环正常结束，说明不存在该结点
//}
//开辟新结点
//struct node * q;
//q=(struct node * )malloc(sizepf(struct node));
//q->data=10;
//q->next=NULL;
//修改指针域，将新结点插入链表
//q->next=p->next;
//p->next=q;
//void insert(struct node *p,int key)
//{
//    struct node * q;
//    q=(struct node *)malloc(sizeof(struct node));
//    if(!q)
//    {
//        printf("error!");
//        exit(0);
//    }
//    q->data=key;
//    q->next=NULL;
//    q->next=p->next;
//    p->next=q;
//}
//单链表结点的删除
//q=p->next;
//p->next=q->next;
//free(q);
//int del(struct node * head,int key)
//{
//    struct node * p,* q;
//    int flag=0;
//    p=head;
//    while(p->next!=NULL)
//    {
//        if(p->next->data==key)
//        {
//            flag=1;
//            break;
//        }
//        else
//            p=p->next;
//    }
//    if(flag==1)
//    {
//        q=p->next;
//        p ->next=q->next;
//        free(q);
//        return 1;
//    }
//    else
//        return 0;
//}
//逆序建链表
//struct node * creat1(int n)
//{
//    struct node * head,* p;
//    int i;
//    head = (struct node *)malloc(sizeof(struct node));
//    head->next=NULL;//建一个空链表
//    for(i=1;i<=n;i++)
//    {
//        p=(struct node *)malloc(sizeof(struct node));
//        scanf("%d",&p->data);
//        p->next=head->next;
//        head->next=p;
//    }
//    return (head);
//}
//顺序建链表
//struct node * creat2(int n)
//{
//    struct node * head,* tail,* p;
//    int i;
//    head=(struct node *)malloc(sizeof(struct node));
//    head -> next=NULL;
//    tail=head;
//    for(i=1;i<=n;i++)
//    {
//        p=(struct node *)malloc(sizeof(struct node));
//        scanf("%d",&p->data);
//        p->next=NULL;
//        tail->next=p;
//        tail=p;
//    }
//    return (head);
//}
//单链表的逆置
//void reverse(struct node *head)
//{
//    struct node *p,*q;
//    head->next;
//    head->next=NULL;
//    q=p-next;
//    while(p!=NULL)
//    {
//        p->next=head->next;
//        head->next=p;
//        p=q;
//        if(q!=NULL)
//            q=q->next;
//    }
//}
//单链表的归并
//struct node * merge(struct node *head1,struct node *head2)
//{
//struct node *p1,*p2,*tail;
//p1=head1->next;
//p2=head2->next;
//tail=head1;
//free(head2);
//while(p1&&p2)
//{
//    if(p1->data<p2->data)
//    {
//        tail->next=p1;
//        tail=p1;
//        p2=p1->next;
//
//    }
//    else
//    {
//        tail->next=p2;
//        tail =p2;
//        p2=p2->next;
//    }
//}
//if(p1)
//{
//    tail->next=p1;
//}
//    else
//        tail->next=p2;
//    return(head1);
//}
//单链表的拆分
//struct node * split(struct node * head1)
//{
//    struct node * head2,* p,*q;
//    head2=(struct node *)malloc(sizeof(struct node));
//    head2->next=NULL;
//    p=head1->next;
//head1->next=NULL;
//q=p->next;
//while(p!=NULL)
//{
//    if(p->data>=0)
//    {
//        p->data=head1->next;
//        head1->=p;
//
//    }
//    else
//    {
//        p->next=head2->next;
//        head2->next=p;
//    }
//    p=q;
//    if(q!=NULL)
//        q=q->NULL;
//}
//    return (head2);
//}
//循环链表
//猴子报数
//#include<stdio.h>
//#include<malloc.h>
//struct mon
//{
//    int num;
//    mon * next;
//};
//mon * creat(int n)
//{
//    int i;
//    mon *p,*tail,*head;
//    p=(mon *)malloc(sizeof(mon));
//    p->num=1;
//    p->next=NULL;
//    head=p;
//    tail=p;
//    for(i=2;i<=n;i++)
//    {
//        p=(mon * )malloc(sizeof(mon));
//        p->num=i;
//        tail->next=p;
//        tail=p;
//        p->next=NULL;
//    }
//    tail->next=head;
//    return head;
//}
//int sel(mon *head,int m,int n)
//{
//    int num=0;
//    int count =0;
//    mon *p,*q;
//    q=head;
//    while(q->next!=head)
//        q=q->next;
//    while (count < n-1)
//    {
//        p=q->next;
//        num++;
//        if(num%m==0)
//        {
//            q->next=p->next;
//            printf("%3d",p->num);
//            free(p);
//            count++;
//
//        }
//        else
//            q=p;
//    }
//    return q->num;
//}
//int main()
//{
//    int n,m;
//    mon * head;
//    scanf("%d%d",&n,&m);
//    head=creat(n);
//    printf("%d",sel(head,m,n));
//    return 0;
//}





