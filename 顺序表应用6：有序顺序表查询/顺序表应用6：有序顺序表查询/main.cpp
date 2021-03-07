#include<bits/stdc++.h>
using namespace std;
int a[100000];
int n;
int ef(int l,int r,int t)
{
    int m=(l+r)/2;
    if(t==a[m]){
        return m+1;
    }
    if(l>r){
        return -1;
    }
    if(t<a[m]){
        return ef(l,m-1,t);
    }
    else{
        return ef(m+1,r,t);
    }
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    while(m--){
        int t;
        cin>>t;
        int s=ef(0,n-1,t);
        if(s==-1){
            cout<<"No Found!"<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
    return 0;
}
