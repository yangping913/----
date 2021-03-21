#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[100000],b[100000];
    int m,n;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0,j=0;i<m||j<n;){
        if(a[i]>b[j]||i==m){
            cout<<b[j++];
        }
        else{
            cout<<a[i++];
        }
        if(i!=m||j!=n){
            cout<<" ";
        }
    }
    return 0;
}
