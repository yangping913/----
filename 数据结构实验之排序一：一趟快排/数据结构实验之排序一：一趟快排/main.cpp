#include<iostream>
using namespace std;
void sort(int a[],int left,int right){
    int key=a[left];
    int i=left,j=right;
    if(left>=right){
        return;
    }
    while(i<j){
        while(i<j&&a[j]>=key){
            j--;
        }
        a[i]=a[j];
        while(i<j&&a[i]<=key){
            i++;
        }
        a[j]=a[i];
    }
    a[i]=key;
}
int main(){
    int i,n,a[100000],key;
    while(cin>>n){
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,0,n-1);
        for(i=0;i<n;i++){
            if(i==0){
                cout<<a[i];
            }
            else{
                cout<<" "<<a[i];
            }
        }
        cout<<endl;
    }
    
}
