#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
int main(){
    int n,m;
    cin>>n;
    int N=n;
    node *head=new node;
    node *tail=head;
    while(n--){
        node *p = new node;
        p->next=NULL;
        cin>>p->data;
        tail->next=p;
        tail=p;
    }
    cin>>m;
    cout<<N<<endl;
    for(node *p=head;p->next!=NULL;p=p->next){
        cout<<p->next->data;
        if(p->next->next!=NULL){
            cout<<" ";
        }
        else{
            cout<<endl;
        }
    }
    for(node *p=head;p->next!=NULL;){
        if(p->next->data==m){
            p->next=p->next->next;
            N--;
        }
        if(p->next!=NULL){
            p=p->next;
        }
    }
    cout<<N<<endl;
    for(node *p=head;p->next!=NULL;p=p->next){
        cout<<p->next->data;
        if(p->next->next!=NULL){
            cout<<" ";
        }
        else{
            cout<<endl;
        }
    }
    return 0;
}
