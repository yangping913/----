#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=m;i<n;i++){
            cout<<a[i]<<" ";
        }
        for(int i=0;i<m;i++){
            cout<<a[i];
            if(i!=m-1){
                cout<<" ";
            }
            else
            {
                cout<<endl;
            }
        }
    }
    return 0;
}
